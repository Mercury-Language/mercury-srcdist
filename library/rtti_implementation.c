/*
** Automatically generated from `rtti_implementation.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module rtti_implementation. */
/* :- implementation. */

/*
INIT mercury__rtti_implementation__init
ENDINIT
*/

#include "rtti_implementation.mih"


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




#line 93 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0[1];

#line 96 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0;

#line 99 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0[1];

#line 102 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0;

#line 105 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0[1];

#line 108 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0;

#line 111 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0[1];

#line 114 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0;

#line 117 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0[1];

#line 120 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0;

#line 123 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0[1];

#line 126 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0;

#line 129 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0[1];

#line 132 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0;

#line 135 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0[1];

#line 138 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0;

#line 141 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0[1];

#line 144 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0;

#line 147 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0[1];

#line 150 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0;

#line 153 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0;

#line 156 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1;

#line 159 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2;

#line 162 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3;

#line 165 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4;

#line 168 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_sectag_locn_0[5];

#line 171 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0[5];

#line 174 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0[5];

#line 177 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0[1];

#line 180 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0;

#line 183 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0;

#line 186 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1;

#line 189 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2;

#line 192 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3;

#line 195 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4;

#line 198 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5;

#line 201 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6;

#line 204 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7;

#line 207 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8;

#line 210 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9;

#line 213 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10;

#line 216 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11;

#line 219 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12;

#line 222 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13;

#line 225 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14;

#line 228 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15;

#line 231 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16;

#line 234 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17;

#line 237 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18;

#line 240 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19;

#line 243 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20;

#line 246 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21;

#line 249 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22;

#line 252 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23;

#line 255 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24;

#line 258 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25;

#line 261 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26;

#line 264 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27;

#line 267 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28;

#line 270 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29;

#line 273 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30;

#line 276 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31;

#line 279 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32;

#line 282 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33;

#line 285 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34;

#line 288 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35;

#line 291 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36;

#line 294 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37;

#line 297 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38;

#line 300 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39;

#line 303 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40;

#line 306 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41;

#line 309 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42;

#line 312 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43;

#line 315 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44;

#line 318 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45;

#line 321 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46;

#line 324 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_type_ctor_rep_0[47];

#line 327 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0[47];

#line 330 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0[47];

#line 333 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0[1];

#line 336 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0;

#line 339 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0[1];

#line 342 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0;

#line 345 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0[1];

#line 348 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0;

#line 351 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0[1];

#line 354 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0;

#line 357 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0[1];

#line 360 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0;

#line 363 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0;

#line 366 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_unify_or_compare_pred_0[1];

#line 369 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0[1];

#line 372 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0[1];

#line 375 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0_10001(
#line 378 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 380 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 383 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0_10001(
#line 386 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 388 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 390 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 393 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0_10001(
#line 396 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 398 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 401 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0_10001(
#line 404 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 406 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 408 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 411 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001(
#line 414 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 416 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 419 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001(
#line 422 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 424 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 426 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 429 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001(
#line 432 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 434 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 437 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001(
#line 440 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 442 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 444 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 447 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001(
#line 450 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 452 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 455 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001(
#line 458 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 460 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 462 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 465 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0_10001(
#line 468 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 470 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 473 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0_10001(
#line 476 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 478 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 480 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 483 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001(
#line 486 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 488 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 491 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001(
#line 494 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 496 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 498 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 501 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001(
#line 504 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 506 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 509 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001(
#line 512 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 514 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 516 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 519 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001(
#line 522 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 524 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 527 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001(
#line 530 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 532 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 534 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 537 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0_10001(
#line 540 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 542 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 545 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0_10001(
#line 548 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 550 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 552 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 555 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____sectag_locn_0_0_10001(
#line 558 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 560 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 563 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0_10001(
#line 566 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 568 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 570 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 573 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001(
#line 576 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 578 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 581 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001(
#line 584 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 586 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 588 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 591 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001(
#line 594 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 596 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 599 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001(
#line 602 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 604 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 606 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 609 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0_10001(
#line 612 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 614 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 617 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0_10001(
#line 620 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 622 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 624 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 627 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0_10001(
#line 630 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 632 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 635 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0_10001(
#line 638 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 640 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 642 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 645 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0_10001(
#line 648 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 650 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 653 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0_10001(
#line 656 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 658 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 660 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 663 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0_10001(
#line 666 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 668 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 671 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0_10001(
#line 674 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 676 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 678 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 681 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001(
#line 684 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 686 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 689 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001(
#line 692 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 694 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 696 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 699 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001(
#line 702 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 704 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2);

#line 707 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001(
#line 710 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 712 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 714 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3);

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11);

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11);

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11);

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 313 "list.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
#line 313 "list.int"
  MR_Word mercury__rtti_implementation__V_12_12,
#line 313 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2);

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5);

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7);

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5);

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7);

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5);

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7);

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_16_16,
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_18_18,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6);

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5);

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7);

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76);

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76);

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76);

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76);

#line 424 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_52_50_52_95_95_49_95_95_91_50_44_32_51_93_95_48_3_f_0(
#line 424 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 5167 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

#line 5137 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

#line 5085 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(
#line 5085 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1);

#line 4955 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void);

#line 4936 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void);

#line 4901 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(void);

#line 4879 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void);

#line 4861 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void);

#line 4839 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(void);

#line 4779 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_97_114_103_95_110_97_109_101_115_95_95_91_49_93_95_48_5_p_0(
#line 4779 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__I_7,
#line 4779 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_8,
#line 4779 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_9,
#line 4779 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Index_10);

#line 4735 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_117_95_102_117_110_99_116_111_114_95_97_114_103_95_110_97_109_101_115_95_95_91_49_93_95_48_2_p_0(
#line 4735 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__ArgNames_4);

#line 4699 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void);

#line 4607 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void);

#line 4589 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void);

#line 4380 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0(void);

#line 4064 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(
#line 4064 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4);

#line 3760 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 3734 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0(void);

#line 3708 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0(void);

#line 3613 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

#line 3612 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void);

#line 3579 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__2_2);

#line 3373 "rtti_implementation.m"
static MR_Box MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 3373 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__TypeInfo_for_T_11);

#line 3138 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_110_101_119_95_116_121_112_101_95_105_110_102_111_95_95_91_50_93_95_48_2_f_0(
#line 3138 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4);

#line 3097 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
#line 3097 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoParams_10,
#line 3097 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__I_15,
#line 3097 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_16,
#line 3097 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_0_20,
#line 3097 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_21);

#line 3074 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0(
#line 3074 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoParams_6,
#line 3074 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__PseudoTypeInfo_7,
#line 3074 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__ArgTypeInfo_10);

#line 3043 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_97_114_103_95_117_110_105_118_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_f_0(
#line 3043 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__SecTagLocn_8,
#line 3043 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10);

#line 2951 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_24,
#line 2951 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2951 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2951 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2951 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2951 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18);

#line 2949 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
#line 2949 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2949 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2949 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2949 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2949 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18);

#line 2947 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
#line 2947 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2947 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2947 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2947 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18);

#line 2933 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

#line 902 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_57_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_9_p_0(
#line 902 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2);

#line 897 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_56_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0(
#line 897 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2);

#line 892 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_55_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0(
#line 892 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2);

#line 887 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_54_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0(
#line 887 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2);

#line 872 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0(void);

#line 867 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0(void);

#line 863 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0(void);

#line 806 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0(
#line 806 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_7,
#line 806 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__TupleArity_8,
#line 806 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 806 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_10);

#line 799 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_0(
#line 799 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_5,
#line 799 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_6);

#line 781 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_53_44_32_54_93_95_48_5_p_0(
#line 781 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 781 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__TupleArity_7,
#line 781 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_8);

#line 775 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 775 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4);

#line 646 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void);

#line 515 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_110_111_116_97_103_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(
#line 515 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_11,
#line 515 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_12,
#line 515 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_13,
#line 515 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_14);

#line 411 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_91_49_44_32_51_44_32_52_93_95_48_8_p_0(
#line 411 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10,
#line 411 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_13,
#line 411 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_14,
#line 411 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_15,
#line 411 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_16);

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__4_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62);

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__3_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62);

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__2_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62);

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__1_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62);

#line 5111 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__null_string_0_f_0(void);

#line 5085 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__null_1_p_0(
#line 5085 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_4,
#line 5085 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1);

#line 4425 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_layout_1_f_0(
#line 4425 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1);

#line 4237 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__type_ctor_compare_pred_1_f_0(
#line 4237 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1);

#line 4205 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__type_ctor_unify_pred_1_f_0(
#line 4205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1);

#line 4011 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(
#line 4011 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 4011 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Index_5);

#line 4010 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(
#line 4010 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 4010 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Index_5);

#line 3579 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__same_pointer_value_untyped_2_p_0(
#line 3579 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_6,
#line 3579 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_U_7,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__2_2);

#line 3382 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__null_functor_desc_0_f_0(void);

#line 2994 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__expand_type_name_2_f_0(
#line 2994 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_4,
#line 2994 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__Wrap_5);

#line 2953 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_3(
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_24,
#line 2953 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2953 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2953 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2953 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2953 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18);

#line 2927 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__det_dynamic_cast_2_p_0(
#line 2927 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_6,
#line 2927 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_U_7,
#line 2927 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_3,
#line 2927 "rtti_implementation.m"
  MR_Box * mercury__rtti_implementation__Actual_4);

#line 1258 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0(
#line 1258 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 1258 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_7,
#line 1258 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_8,
#line 1258 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoA_9,
#line 1258 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoB_10);

#line 1235 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_type_info_args_5_p_0(
#line 1235 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 1235 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_7,
#line 1235 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_8,
#line 1235 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoA_9,
#line 1235 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoB_10);

#line 1141 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0(
#line 1141 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Res_4,
#line 1141 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo1_5,
#line 1141 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo2_6);

#line 442 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__create_pseudo_type_info_2_f_0(
#line 442 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 442 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__PseudoTypeInfo_5);


static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_4[2][2];

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtti_implementation_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_4[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 39)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\"")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__rtti_implementation_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 1574 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0[1] = {
  (MR_Integer) 0
};

#line 1579 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 = {
  (MR_String) "arg_names",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1586 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_names_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____arg_names_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____arg_names_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "arg_names",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_names_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_names_0
};

#line 1603 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0[1] = {
  (MR_Integer) 0
};

#line 1608 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 = {
  (MR_String) "arg_types",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1615 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_types_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____arg_types_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____arg_types_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "arg_types",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_arg_types_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_arg_types_0
};

#line 1632 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0[1] = {
  (MR_Integer) 0
};

#line 1637 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 = {
  (MR_String) "du_functor_desc",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1644 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_functor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "du_functor_desc",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_functor_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_du_functor_desc_0
};

#line 1661 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0[1] = {
  (MR_Integer) 0
};

#line 1666 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 = {
  (MR_String) "du_sectag_alternatives",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1673 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_sectag_alternatives_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "du_sectag_alternatives",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_du_sectag_alternatives_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_du_sectag_alternatives_0
};

#line 1690 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0[1] = {
  (MR_Integer) 0
};

#line 1695 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 = {
  (MR_String) "enum_functor_desc",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1702 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_enum_functor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "enum_functor_desc",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_enum_functor_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_enum_functor_desc_0
};

#line 1719 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0[1] = {
  (MR_Integer) 0
};

#line 1724 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 = {
  (MR_String) "exist_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1731 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_exist_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____exist_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____exist_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "exist_info",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_exist_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_exist_info_0
};

#line 1748 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0[1] = {
  (MR_Integer) 0
};

#line 1753 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 = {
  (MR_String) "foreign_enum_functor_desc",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1760 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_foreign_enum_functor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "foreign_enum_functor_desc",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_foreign_enum_functor_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_foreign_enum_functor_desc_0
};

#line 1777 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0[1] = {
  (MR_Integer) 0
};

#line 1782 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 = {
  (MR_String) "notag_functor_desc",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1789 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_notag_functor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "notag_functor_desc",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_notag_functor_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_notag_functor_desc_0
};

#line 1806 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0[1] = {
  (MR_Integer) 0
};

#line 1811 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 = {
  (MR_String) "pseudo_type_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1818 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_pseudo_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "pseudo_type_info",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_pseudo_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_pseudo_type_info_0
};

#line 1835 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0[1] = {
  (MR_Integer) 0
};

#line 1840 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 = {
  (MR_String) "ptag_entry",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1847 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_ptag_entry_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____ptag_entry_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____ptag_entry_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "ptag_entry",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_ptag_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_ptag_entry_0
};

#line 1864 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0 = {
  (MR_String) "stag_none",
  (MR_Integer) 0
};

#line 1870 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1 = {
  (MR_String) "stag_none_direct_arg",
  (MR_Integer) 1
};

#line 1876 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2 = {
  (MR_String) "stag_local",
  (MR_Integer) 2
};

#line 1882 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3 = {
  (MR_String) "stag_remote",
  (MR_Integer) 3
};

#line 1888 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4 = {
  (MR_String) "stag_variable",
  (MR_Integer) 4
};

#line 1894 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_sectag_locn_0[5] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4
};

#line 1903 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0[5] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_sectag_locn_0_4
};

#line 1912 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4
};

#line 1921 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_sectag_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtti_implementation____Unify____sectag_locn_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____sectag_locn_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "sectag_locn",
  {     mercury__rtti_implementation__rtti_implementation__enum_name_ordered_sectag_locn_0 },
  {     mercury__rtti_implementation__rtti_implementation__enum_value_ordered_sectag_locn_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_sectag_locn_0
};

#line 1938 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0[1] = {
  (MR_Integer) 0
};

#line 1943 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 = {
  (MR_String) "type_ctor_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 1950 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_ctor_info",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_ctor_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_info_0
};

#line 1967 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0 = {
  (MR_String) "tcr_enum",
  (MR_Integer) 0
};

#line 1973 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1 = {
  (MR_String) "tcr_enum_usereq",
  (MR_Integer) 1
};

#line 1979 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2 = {
  (MR_String) "tcr_du",
  (MR_Integer) 2
};

#line 1985 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3 = {
  (MR_String) "tcr_du_usereq",
  (MR_Integer) 3
};

#line 1991 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4 = {
  (MR_String) "tcr_notag",
  (MR_Integer) 4
};

#line 1997 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5 = {
  (MR_String) "tcr_notag_usereq",
  (MR_Integer) 5
};

#line 2003 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6 = {
  (MR_String) "tcr_equiv",
  (MR_Integer) 6
};

#line 2009 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7 = {
  (MR_String) "tcr_func",
  (MR_Integer) 7
};

#line 2015 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8 = {
  (MR_String) "tcr_int",
  (MR_Integer) 8
};

#line 2021 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9 = {
  (MR_String) "tcr_char",
  (MR_Integer) 9
};

#line 2027 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10 = {
  (MR_String) "tcr_float",
  (MR_Integer) 10
};

#line 2033 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11 = {
  (MR_String) "tcr_string",
  (MR_Integer) 11
};

#line 2039 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12 = {
  (MR_String) "tcr_pred",
  (MR_Integer) 12
};

#line 2045 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13 = {
  (MR_String) "tcr_subgoal",
  (MR_Integer) 13
};

#line 2051 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14 = {
  (MR_String) "tcr_void",
  (MR_Integer) 14
};

#line 2057 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15 = {
  (MR_String) "tcr_c_pointer",
  (MR_Integer) 15
};

#line 2063 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16 = {
  (MR_String) "tcr_typeinfo",
  (MR_Integer) 16
};

#line 2069 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17 = {
  (MR_String) "tcr_typeclassinfo",
  (MR_Integer) 17
};

#line 2075 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18 = {
  (MR_String) "tcr_array",
  (MR_Integer) 18
};

#line 2081 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19 = {
  (MR_String) "tcr_succip",
  (MR_Integer) 19
};

#line 2087 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20 = {
  (MR_String) "tcr_hp",
  (MR_Integer) 20
};

#line 2093 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21 = {
  (MR_String) "tcr_curfr",
  (MR_Integer) 21
};

#line 2099 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22 = {
  (MR_String) "tcr_maxfr",
  (MR_Integer) 22
};

#line 2105 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23 = {
  (MR_String) "tcr_redofr",
  (MR_Integer) 23
};

#line 2111 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24 = {
  (MR_String) "tcr_redoip",
  (MR_Integer) 24
};

#line 2117 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25 = {
  (MR_String) "tcr_trail_ptr",
  (MR_Integer) 25
};

#line 2123 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26 = {
  (MR_String) "tcr_ticket",
  (MR_Integer) 26
};

#line 2129 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27 = {
  (MR_String) "tcr_notag_ground",
  (MR_Integer) 27
};

#line 2135 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28 = {
  (MR_String) "tcr_notag_ground_usereq",
  (MR_Integer) 28
};

#line 2141 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29 = {
  (MR_String) "tcr_equiv_ground",
  (MR_Integer) 29
};

#line 2147 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30 = {
  (MR_String) "tcr_tuple",
  (MR_Integer) 30
};

#line 2153 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31 = {
  (MR_String) "tcr_reserved_addr",
  (MR_Integer) 31
};

#line 2159 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32 = {
  (MR_String) "tcr_reserved_addr_usereq",
  (MR_Integer) 32
};

#line 2165 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33 = {
  (MR_String) "tcr_type_ctor_info",
  (MR_Integer) 33
};

#line 2171 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34 = {
  (MR_String) "tcr_base_typeclass_info",
  (MR_Integer) 34
};

#line 2177 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35 = {
  (MR_String) "tcr_type_desc",
  (MR_Integer) 35
};

#line 2183 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36 = {
  (MR_String) "tcr_type_ctor_desc",
  (MR_Integer) 36
};

#line 2189 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37 = {
  (MR_String) "tcr_foreign",
  (MR_Integer) 37
};

#line 2195 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38 = {
  (MR_String) "tcr_reference",
  (MR_Integer) 38
};

#line 2201 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39 = {
  (MR_String) "tcr_stable_c_pointer",
  (MR_Integer) 39
};

#line 2207 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40 = {
  (MR_String) "tcr_stable_foreign",
  (MR_Integer) 40
};

#line 2213 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41 = {
  (MR_String) "tcr_pseudo_type_desc",
  (MR_Integer) 41
};

#line 2219 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42 = {
  (MR_String) "tcr_dummy",
  (MR_Integer) 42
};

#line 2225 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43 = {
  (MR_String) "tcr_bitmap",
  (MR_Integer) 43
};

#line 2231 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44 = {
  (MR_String) "tcr_foreign_enum",
  (MR_Integer) 44
};

#line 2237 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45 = {
  (MR_String) "tcr_foreign_enum_usereq",
  (MR_Integer) 45
};

#line 2243 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46 = {
  (MR_String) "tcr_unknown",
  (MR_Integer) 46
};

#line 2249 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_type_ctor_rep_0[47] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46
};

#line 2300 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0[47] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_18,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_34,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_43,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_15,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_9,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_21,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_2,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_3,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_42,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_0,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_1,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_6,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_29,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_10,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_37,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_44,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_45,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_7,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_20,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_8,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_22,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_4,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_27,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_28,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_5,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_12,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_41,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_23,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_24,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_38,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_31,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_32,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_39,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_40,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_11,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_13,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_19,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_26,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_25,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_30,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_36,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_33,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_35,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_17,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_16,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_46,
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_type_ctor_rep_0_14
};

#line 2351 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0[47] = {
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 21,
  (MR_Integer) 24,
  (MR_Integer) 11,
  (MR_Integer) 17,
  (MR_Integer) 19,
  (MR_Integer) 4,
  (MR_Integer) 13,
  (MR_Integer) 34,
  (MR_Integer) 25,
  (MR_Integer) 35,
  (MR_Integer) 46,
  (MR_Integer) 3,
  (MR_Integer) 44,
  (MR_Integer) 43,
  (MR_Integer) 0,
  (MR_Integer) 36,
  (MR_Integer) 18,
  (MR_Integer) 5,
  (MR_Integer) 20,
  (MR_Integer) 27,
  (MR_Integer) 28,
  (MR_Integer) 38,
  (MR_Integer) 37,
  (MR_Integer) 22,
  (MR_Integer) 23,
  (MR_Integer) 12,
  (MR_Integer) 39,
  (MR_Integer) 30,
  (MR_Integer) 31,
  (MR_Integer) 41,
  (MR_Integer) 1,
  (MR_Integer) 42,
  (MR_Integer) 40,
  (MR_Integer) 14,
  (MR_Integer) 29,
  (MR_Integer) 32,
  (MR_Integer) 33,
  (MR_Integer) 26,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 45
};

#line 2402 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_ctor_rep",
  {     mercury__rtti_implementation__rtti_implementation__enum_name_ordered_type_ctor_rep_0 },
  {     mercury__rtti_implementation__rtti_implementation__enum_value_ordered_type_ctor_rep_0 },
  (MR_Integer) 47,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_ctor_rep_0
};

#line 2419 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0[1] = {
  (MR_Integer) 0
};

#line 2424 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 = {
  (MR_String) "type_functors",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2431 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_functors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_functors_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_functors_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_functors",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_functors_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_functors_0
};

#line 2448 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0[1] = {
  (MR_Integer) 0
};

#line 2453 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 = {
  (MR_String) "type_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2460 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_info",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_info_0
};

#line 2477 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0[1] = {
  (MR_Integer) 0
};

#line 2482 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 = {
  (MR_String) "type_layout",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2489 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_layout_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____type_layout_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____type_layout_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "type_layout",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_type_layout_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_type_layout_0
};

#line 2506 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0[1] = {
  (MR_Integer) 0
};

#line 2511 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 = {
  (MR_String) "typeclass_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2518 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeclass_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____typeclass_info_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____typeclass_info_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "typeclass_info",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeclass_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_typeclass_info_0
};

#line 2535 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0[1] = {
  (MR_Integer) 0
};

#line 2540 "rtti_implementation.c"
static const MR_NotagFunctorDesc mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 = {
  (MR_String) "typeinfo_locn",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2547 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeinfo_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "typeinfo_locn",
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 },
  {     &mercury__rtti_implementation__rtti_implementation__notag_functor_desc_typeinfo_locn_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_typeinfo_locn_0
};

#line 2564 "rtti_implementation.c"
static const MR_EnumFunctorDesc mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0 = {
  (MR_String) "unify_or_compare_pred",
  (MR_Integer) 0
};

#line 2570 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_value_ordered_unify_or_compare_pred_0[1] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0
};

#line 2575 "rtti_implementation.c"
static const MR_EnumFunctorDescPtr mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0[1] = {
  &mercury__rtti_implementation__rtti_implementation__enum_functor_desc_unify_or_compare_pred_0_0
};

#line 2580 "rtti_implementation.c"
static const MR_Integer mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0[1] = {
  (MR_Integer) 0
};

#line 2585 "rtti_implementation.c"
const MR_TypeCtorInfo_Struct mercury__rtti_implementation__rtti_implementation__type_ctor_info_unify_or_compare_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001)),
  ((MR_Box) (mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001)),
  (MR_String) "rtti_implementation",
  (MR_String) "unify_or_compare_pred",
  {     mercury__rtti_implementation__rtti_implementation__enum_name_ordered_unify_or_compare_pred_0 },
  {     mercury__rtti_implementation__rtti_implementation__enum_value_ordered_unify_or_compare_pred_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtti_implementation__rtti_implementation__functor_number_map_unify_or_compare_pred_0
};

#line 2602 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0_10001(
#line 2605 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2607 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2609 "rtti_implementation.c"
{
#line 2611 "rtti_implementation.c"
  {
#line 2613 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2616 "rtti_implementation.c"
    {
#line 2618 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____arg_names_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2621 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2623 "rtti_implementation.c"
  }
#line 2625 "rtti_implementation.c"
}

#line 2628 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0_10001(
#line 2631 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2633 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2635 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2637 "rtti_implementation.c"
{
#line 2639 "rtti_implementation.c"
  {
#line 2641 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2644 "rtti_implementation.c"
    {
#line 2646 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____arg_names_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2649 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2651 "rtti_implementation.c"
  }
#line 2653 "rtti_implementation.c"
}

#line 2656 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0_10001(
#line 2659 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2661 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2663 "rtti_implementation.c"
{
#line 2665 "rtti_implementation.c"
  {
#line 2667 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2670 "rtti_implementation.c"
    {
#line 2672 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____arg_types_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2675 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2677 "rtti_implementation.c"
  }
#line 2679 "rtti_implementation.c"
}

#line 2682 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0_10001(
#line 2685 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2687 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2689 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2691 "rtti_implementation.c"
{
#line 2693 "rtti_implementation.c"
  {
#line 2695 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2698 "rtti_implementation.c"
    {
#line 2700 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____arg_types_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2703 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2705 "rtti_implementation.c"
  }
#line 2707 "rtti_implementation.c"
}

#line 2710 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0_10001(
#line 2713 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2715 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2717 "rtti_implementation.c"
{
#line 2719 "rtti_implementation.c"
  {
#line 2721 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2724 "rtti_implementation.c"
    {
#line 2726 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____du_functor_desc_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2729 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2731 "rtti_implementation.c"
  }
#line 2733 "rtti_implementation.c"
}

#line 2736 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0_10001(
#line 2739 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2741 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2743 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2745 "rtti_implementation.c"
{
#line 2747 "rtti_implementation.c"
  {
#line 2749 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2752 "rtti_implementation.c"
    {
#line 2754 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____du_functor_desc_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2757 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2759 "rtti_implementation.c"
  }
#line 2761 "rtti_implementation.c"
}

#line 2764 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0_10001(
#line 2767 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2769 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2771 "rtti_implementation.c"
{
#line 2773 "rtti_implementation.c"
  {
#line 2775 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2778 "rtti_implementation.c"
    {
#line 2780 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2783 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2785 "rtti_implementation.c"
  }
#line 2787 "rtti_implementation.c"
}

#line 2790 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0_10001(
#line 2793 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2795 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2797 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2799 "rtti_implementation.c"
{
#line 2801 "rtti_implementation.c"
  {
#line 2803 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2806 "rtti_implementation.c"
    {
#line 2808 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2811 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2813 "rtti_implementation.c"
  }
#line 2815 "rtti_implementation.c"
}

#line 2818 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0_10001(
#line 2821 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2823 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2825 "rtti_implementation.c"
{
#line 2827 "rtti_implementation.c"
  {
#line 2829 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2832 "rtti_implementation.c"
    {
#line 2834 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____enum_functor_desc_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2837 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2839 "rtti_implementation.c"
  }
#line 2841 "rtti_implementation.c"
}

#line 2844 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0_10001(
#line 2847 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2849 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2851 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2853 "rtti_implementation.c"
{
#line 2855 "rtti_implementation.c"
  {
#line 2857 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2860 "rtti_implementation.c"
    {
#line 2862 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____enum_functor_desc_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2865 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2867 "rtti_implementation.c"
  }
#line 2869 "rtti_implementation.c"
}

#line 2872 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0_10001(
#line 2875 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2877 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2879 "rtti_implementation.c"
{
#line 2881 "rtti_implementation.c"
  {
#line 2883 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2886 "rtti_implementation.c"
    {
#line 2888 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____exist_info_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2891 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2893 "rtti_implementation.c"
  }
#line 2895 "rtti_implementation.c"
}

#line 2898 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0_10001(
#line 2901 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2903 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2905 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2907 "rtti_implementation.c"
{
#line 2909 "rtti_implementation.c"
  {
#line 2911 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2914 "rtti_implementation.c"
    {
#line 2916 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____exist_info_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2919 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2921 "rtti_implementation.c"
  }
#line 2923 "rtti_implementation.c"
}

#line 2926 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0_10001(
#line 2929 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2931 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2933 "rtti_implementation.c"
{
#line 2935 "rtti_implementation.c"
  {
#line 2937 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2940 "rtti_implementation.c"
    {
#line 2942 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2945 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 2947 "rtti_implementation.c"
  }
#line 2949 "rtti_implementation.c"
}

#line 2952 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0_10001(
#line 2955 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 2957 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 2959 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 2961 "rtti_implementation.c"
{
#line 2963 "rtti_implementation.c"
  {
#line 2965 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 2968 "rtti_implementation.c"
    {
#line 2970 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 2973 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 2975 "rtti_implementation.c"
  }
#line 2977 "rtti_implementation.c"
}

#line 2980 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0_10001(
#line 2983 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 2985 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 2987 "rtti_implementation.c"
{
#line 2989 "rtti_implementation.c"
  {
#line 2991 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2994 "rtti_implementation.c"
    {
#line 2996 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____notag_functor_desc_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 2999 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3001 "rtti_implementation.c"
  }
#line 3003 "rtti_implementation.c"
}

#line 3006 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0_10001(
#line 3009 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3011 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3013 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3015 "rtti_implementation.c"
{
#line 3017 "rtti_implementation.c"
  {
#line 3019 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3022 "rtti_implementation.c"
    {
#line 3024 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____notag_functor_desc_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3027 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3029 "rtti_implementation.c"
  }
#line 3031 "rtti_implementation.c"
}

#line 3034 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0_10001(
#line 3037 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3039 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3041 "rtti_implementation.c"
{
#line 3043 "rtti_implementation.c"
  {
#line 3045 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3048 "rtti_implementation.c"
    {
#line 3050 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____pseudo_type_info_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3053 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3055 "rtti_implementation.c"
  }
#line 3057 "rtti_implementation.c"
}

#line 3060 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0_10001(
#line 3063 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3065 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3067 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3069 "rtti_implementation.c"
{
#line 3071 "rtti_implementation.c"
  {
#line 3073 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3076 "rtti_implementation.c"
    {
#line 3078 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____pseudo_type_info_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3081 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3083 "rtti_implementation.c"
  }
#line 3085 "rtti_implementation.c"
}

#line 3088 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0_10001(
#line 3091 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3093 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3095 "rtti_implementation.c"
{
#line 3097 "rtti_implementation.c"
  {
#line 3099 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3102 "rtti_implementation.c"
    {
#line 3104 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____ptag_entry_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3107 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3109 "rtti_implementation.c"
  }
#line 3111 "rtti_implementation.c"
}

#line 3114 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0_10001(
#line 3117 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3119 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3121 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3123 "rtti_implementation.c"
{
#line 3125 "rtti_implementation.c"
  {
#line 3127 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3130 "rtti_implementation.c"
    {
#line 3132 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____ptag_entry_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3135 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3137 "rtti_implementation.c"
  }
#line 3139 "rtti_implementation.c"
}

#line 3142 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____sectag_locn_0_0_10001(
#line 3145 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3147 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3149 "rtti_implementation.c"
{
#line 3151 "rtti_implementation.c"
  {
#line 3153 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3156 "rtti_implementation.c"
    {
#line 3158 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____sectag_locn_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3161 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3163 "rtti_implementation.c"
  }
#line 3165 "rtti_implementation.c"
}

#line 3168 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0_10001(
#line 3171 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3173 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3175 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3177 "rtti_implementation.c"
{
#line 3179 "rtti_implementation.c"
  {
#line 3181 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3184 "rtti_implementation.c"
    {
#line 3186 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____sectag_locn_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3189 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3191 "rtti_implementation.c"
  }
#line 3193 "rtti_implementation.c"
}

#line 3196 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0_10001(
#line 3199 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3201 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3203 "rtti_implementation.c"
{
#line 3205 "rtti_implementation.c"
  {
#line 3207 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3210 "rtti_implementation.c"
    {
#line 3212 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____type_ctor_info_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3215 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3217 "rtti_implementation.c"
  }
#line 3219 "rtti_implementation.c"
}

#line 3222 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0_10001(
#line 3225 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3227 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3229 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3231 "rtti_implementation.c"
{
#line 3233 "rtti_implementation.c"
  {
#line 3235 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3238 "rtti_implementation.c"
    {
#line 3240 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____type_ctor_info_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3243 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3245 "rtti_implementation.c"
  }
#line 3247 "rtti_implementation.c"
}

#line 3250 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_rep_0_0_10001(
#line 3253 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3255 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3257 "rtti_implementation.c"
{
#line 3259 "rtti_implementation.c"
  {
#line 3261 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3264 "rtti_implementation.c"
    {
#line 3266 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____type_ctor_rep_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3269 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3271 "rtti_implementation.c"
  }
#line 3273 "rtti_implementation.c"
}

#line 3276 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0_10001(
#line 3279 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3281 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3283 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3285 "rtti_implementation.c"
{
#line 3287 "rtti_implementation.c"
  {
#line 3289 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3292 "rtti_implementation.c"
    {
#line 3294 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____type_ctor_rep_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3297 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3299 "rtti_implementation.c"
  }
#line 3301 "rtti_implementation.c"
}

#line 3304 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0_10001(
#line 3307 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3309 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3311 "rtti_implementation.c"
{
#line 3313 "rtti_implementation.c"
  {
#line 3315 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3318 "rtti_implementation.c"
    {
#line 3320 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____type_functors_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3323 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3325 "rtti_implementation.c"
  }
#line 3327 "rtti_implementation.c"
}

#line 3330 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0_10001(
#line 3333 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3335 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3337 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3339 "rtti_implementation.c"
{
#line 3341 "rtti_implementation.c"
  {
#line 3343 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3346 "rtti_implementation.c"
    {
#line 3348 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____type_functors_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3351 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3353 "rtti_implementation.c"
  }
#line 3355 "rtti_implementation.c"
}

#line 3358 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0_10001(
#line 3361 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3363 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3365 "rtti_implementation.c"
{
#line 3367 "rtti_implementation.c"
  {
#line 3369 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3372 "rtti_implementation.c"
    {
#line 3374 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____type_info_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3377 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3379 "rtti_implementation.c"
  }
#line 3381 "rtti_implementation.c"
}

#line 3384 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0_10001(
#line 3387 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3389 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3391 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3393 "rtti_implementation.c"
{
#line 3395 "rtti_implementation.c"
  {
#line 3397 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3400 "rtti_implementation.c"
    {
#line 3402 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____type_info_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3405 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3407 "rtti_implementation.c"
  }
#line 3409 "rtti_implementation.c"
}

#line 3412 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0_10001(
#line 3415 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3417 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3419 "rtti_implementation.c"
{
#line 3421 "rtti_implementation.c"
  {
#line 3423 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3426 "rtti_implementation.c"
    {
#line 3428 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____type_layout_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3431 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3433 "rtti_implementation.c"
  }
#line 3435 "rtti_implementation.c"
}

#line 3438 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0_10001(
#line 3441 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3443 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3445 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3447 "rtti_implementation.c"
{
#line 3449 "rtti_implementation.c"
  {
#line 3451 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3454 "rtti_implementation.c"
    {
#line 3456 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____type_layout_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3459 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3461 "rtti_implementation.c"
  }
#line 3463 "rtti_implementation.c"
}

#line 3466 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0_10001(
#line 3469 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3471 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3473 "rtti_implementation.c"
{
#line 3475 "rtti_implementation.c"
  {
#line 3477 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3480 "rtti_implementation.c"
    {
#line 3482 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____typeclass_info_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3485 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3487 "rtti_implementation.c"
  }
#line 3489 "rtti_implementation.c"
}

#line 3492 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0_10001(
#line 3495 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3497 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3499 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3501 "rtti_implementation.c"
{
#line 3503 "rtti_implementation.c"
  {
#line 3505 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3508 "rtti_implementation.c"
    {
#line 3510 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____typeclass_info_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3513 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3515 "rtti_implementation.c"
  }
#line 3517 "rtti_implementation.c"
}

#line 3520 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0_10001(
#line 3523 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3525 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3527 "rtti_implementation.c"
{
#line 3529 "rtti_implementation.c"
  {
#line 3531 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3534 "rtti_implementation.c"
    {
#line 3536 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____typeinfo_locn_0_0(((MR_Word) mercury__rtti_implementation__wrapper_arg_1), ((MR_Word) mercury__rtti_implementation__wrapper_arg_2));
    }
#line 3539 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3541 "rtti_implementation.c"
  }
#line 3543 "rtti_implementation.c"
}

#line 3546 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0_10001(
#line 3549 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3551 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3553 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3555 "rtti_implementation.c"
{
#line 3557 "rtti_implementation.c"
  {
#line 3559 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3562 "rtti_implementation.c"
    {
#line 3564 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____typeinfo_locn_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1, ((MR_Word) mercury__rtti_implementation__wrapper_arg_2), ((MR_Word) mercury__rtti_implementation__wrapper_arg_3));
    }
#line 3567 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3569 "rtti_implementation.c"
  }
#line 3571 "rtti_implementation.c"
}

#line 3574 "rtti_implementation.c"
static MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0_10001(
#line 3577 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_1,
#line 3579 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2)
#line 3581 "rtti_implementation.c"
{
#line 3583 "rtti_implementation.c"
  {
#line 3585 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3588 "rtti_implementation.c"
    {
#line 3590 "rtti_implementation.c"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0();
    }
#line 3593 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 3595 "rtti_implementation.c"
  }
#line 3597 "rtti_implementation.c"
}

#line 3600 "rtti_implementation.c"
static void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0_10001(
#line 3603 "rtti_implementation.c"
  MR_Box * mercury__rtti_implementation__wrapper_arg_1,
#line 3605 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_2,
#line 3607 "rtti_implementation.c"
  MR_Box mercury__rtti_implementation__wrapper_arg_3)
#line 3609 "rtti_implementation.c"
{
#line 3611 "rtti_implementation.c"
  {
#line 3613 "rtti_implementation.c"
    MR_Word mercury__rtti_implementation__conv0_HeadVar__1_1;

#line 3616 "rtti_implementation.c"
    {
#line 3618 "rtti_implementation.c"
      mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0(&mercury__rtti_implementation__conv0_HeadVar__1_1);
    }
#line 3621 "rtti_implementation.c"
    *mercury__rtti_implementation__wrapper_arg_1 = ((MR_Box) (mercury__rtti_implementation__conv0_HeadVar__1_1));
#line 3623 "rtti_implementation.c"
  }
#line 3625 "rtti_implementation.c"
}

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11)
#line 125 "array.opt"
{
#line 536 "array.opt"
  while (MR_TRUE)
#line 536 "array.opt"
    {
#line 536 "array.opt"
      /* tailcall optimized into a loop */
#line 536 "array.opt"
      {
#line 536 "array.opt"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_11_11 < mercury__rtti_implementation__V_10_10);
#line 536 "array.opt"
        MR_Word mercury__rtti_implementation__V_6_12;

#line 536 "array.opt"
        if (mercury__rtti_implementation__succeeded)
#line 539 "array.opt"
          mercury__rtti_implementation__V_6_12 = mercury__rtti_implementation__V_9_9;
#line 536 "array.opt"
        else
#line 541 "array.opt"
          {
#line 541 "array.opt"
            MR_Word mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
            MR_Integer mercury__rtti_implementation__V_14_14;
#line 541 "array.opt"
            MR_Box mercury__rtti_implementation__V_13_15;
#line 942 "array.opt"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T1_1_23;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_8_8 , Array);
	Index =  mercury__rtti_implementation__V_11_11 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 3688 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 542 "array.opt"
            {
#line 542 "array.opt"
              mercury__rtti_implementation__V_12_13 = mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__4_3_f_0(mercury__rtti_implementation__V_19_19, mercury__rtti_implementation__V_13_15, mercury__rtti_implementation__V_9_9);
            }
#line 544 "array.opt"
            mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__V_11_11 - (MR_Integer) 1);
#line 541 "array.opt"
            /* direct tailcall eliminated */
#line 541 "array.opt"
            {
#line 541 "array.opt"
              MR_Word mercury__rtti_implementation__V_9__tmp_copy_9 = mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
              MR_Integer mercury__rtti_implementation__V_11__tmp_copy_11 = mercury__rtti_implementation__V_14_14;

#line 541 "array.opt"
              mercury__rtti_implementation__V_11_11 = mercury__rtti_implementation__V_11__tmp_copy_11;
#line 541 "array.opt"
              mercury__rtti_implementation__V_9_9 = mercury__rtti_implementation__V_9__tmp_copy_9;
#line 541 "array.opt"
            }
#line 541 "array.opt"
            continue;
#line 541 "array.opt"
          }
#line 536 "array.opt"
        return mercury__rtti_implementation__V_6_12;
#line 536 "array.opt"
      }
#line 536 "array.opt"
      break;
#line 536 "array.opt"
    }
#line 125 "array.opt"
}

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11)
#line 125 "array.opt"
{
#line 536 "array.opt"
  while (MR_TRUE)
#line 536 "array.opt"
    {
#line 536 "array.opt"
      /* tailcall optimized into a loop */
#line 536 "array.opt"
      {
#line 536 "array.opt"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_11_11 < mercury__rtti_implementation__V_10_10);
#line 536 "array.opt"
        MR_Word mercury__rtti_implementation__V_6_12;

#line 536 "array.opt"
        if (mercury__rtti_implementation__succeeded)
#line 539 "array.opt"
          mercury__rtti_implementation__V_6_12 = mercury__rtti_implementation__V_9_9;
#line 536 "array.opt"
        else
#line 541 "array.opt"
          {
#line 541 "array.opt"
            MR_Word mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
            MR_Integer mercury__rtti_implementation__V_14_14;
#line 541 "array.opt"
            MR_Box mercury__rtti_implementation__V_13_15;
#line 942 "array.opt"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T1_1_23;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_8_8 , Array);
	Index =  mercury__rtti_implementation__V_11_11 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 3792 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 542 "array.opt"
            {
#line 542 "array.opt"
              mercury__rtti_implementation__V_12_13 = mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__3_3_f_0(mercury__rtti_implementation__V_19_19, mercury__rtti_implementation__V_13_15, mercury__rtti_implementation__V_9_9);
            }
#line 544 "array.opt"
            mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__V_11_11 - (MR_Integer) 1);
#line 541 "array.opt"
            /* direct tailcall eliminated */
#line 541 "array.opt"
            {
#line 541 "array.opt"
              MR_Word mercury__rtti_implementation__V_9__tmp_copy_9 = mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
              MR_Integer mercury__rtti_implementation__V_11__tmp_copy_11 = mercury__rtti_implementation__V_14_14;

#line 541 "array.opt"
              mercury__rtti_implementation__V_11_11 = mercury__rtti_implementation__V_11__tmp_copy_11;
#line 541 "array.opt"
              mercury__rtti_implementation__V_9_9 = mercury__rtti_implementation__V_9__tmp_copy_9;
#line 541 "array.opt"
            }
#line 541 "array.opt"
            continue;
#line 541 "array.opt"
          }
#line 536 "array.opt"
        return mercury__rtti_implementation__V_6_12;
#line 536 "array.opt"
      }
#line 536 "array.opt"
      break;
#line 536 "array.opt"
    }
#line 125 "array.opt"
}

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11)
#line 125 "array.opt"
{
#line 536 "array.opt"
  while (MR_TRUE)
#line 536 "array.opt"
    {
#line 536 "array.opt"
      /* tailcall optimized into a loop */
#line 536 "array.opt"
      {
#line 536 "array.opt"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_11_11 < mercury__rtti_implementation__V_10_10);
#line 536 "array.opt"
        MR_Word mercury__rtti_implementation__V_6_12;

#line 536 "array.opt"
        if (mercury__rtti_implementation__succeeded)
#line 539 "array.opt"
          mercury__rtti_implementation__V_6_12 = mercury__rtti_implementation__V_9_9;
#line 536 "array.opt"
        else
#line 541 "array.opt"
          {
#line 541 "array.opt"
            MR_Word mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
            MR_Integer mercury__rtti_implementation__V_14_14;
#line 541 "array.opt"
            MR_Box mercury__rtti_implementation__V_13_15;
#line 942 "array.opt"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T1_1_23;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_8_8 , Array);
	Index =  mercury__rtti_implementation__V_11_11 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 3896 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 542 "array.opt"
            {
#line 542 "array.opt"
              mercury__rtti_implementation__V_12_13 = mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__2_3_f_0(mercury__rtti_implementation__V_19_19, mercury__rtti_implementation__V_13_15, mercury__rtti_implementation__V_9_9);
            }
#line 544 "array.opt"
            mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__V_11_11 - (MR_Integer) 1);
#line 541 "array.opt"
            /* direct tailcall eliminated */
#line 541 "array.opt"
            {
#line 541 "array.opt"
              MR_Word mercury__rtti_implementation__V_9__tmp_copy_9 = mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
              MR_Integer mercury__rtti_implementation__V_11__tmp_copy_11 = mercury__rtti_implementation__V_14_14;

#line 541 "array.opt"
              mercury__rtti_implementation__V_11_11 = mercury__rtti_implementation__V_11__tmp_copy_11;
#line 541 "array.opt"
              mercury__rtti_implementation__V_9_9 = mercury__rtti_implementation__V_9__tmp_copy_9;
#line 541 "array.opt"
            }
#line 541 "array.opt"
            continue;
#line 541 "array.opt"
          }
#line 536 "array.opt"
        return mercury__rtti_implementation__V_6_12;
#line 536 "array.opt"
      }
#line 536 "array.opt"
      break;
#line 536 "array.opt"
    }
#line 125 "array.opt"
}

#line 125 "array.opt"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_19_19,
#line 125 "array.opt"
  MR_ArrayPtr mercury__rtti_implementation__V_8_8,
#line 125 "array.opt"
  MR_Word mercury__rtti_implementation__V_9_9,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_10_10,
#line 125 "array.opt"
  MR_Integer mercury__rtti_implementation__V_11_11)
#line 125 "array.opt"
{
#line 536 "array.opt"
  while (MR_TRUE)
#line 536 "array.opt"
    {
#line 536 "array.opt"
      /* tailcall optimized into a loop */
#line 536 "array.opt"
      {
#line 536 "array.opt"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_11_11 < mercury__rtti_implementation__V_10_10);
#line 536 "array.opt"
        MR_Word mercury__rtti_implementation__V_6_12;

#line 536 "array.opt"
        if (mercury__rtti_implementation__succeeded)
#line 539 "array.opt"
          mercury__rtti_implementation__V_6_12 = mercury__rtti_implementation__V_9_9;
#line 536 "array.opt"
        else
#line 541 "array.opt"
          {
#line 541 "array.opt"
            MR_Word mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
            MR_Integer mercury__rtti_implementation__V_14_14;
#line 541 "array.opt"
            MR_Box mercury__rtti_implementation__V_13_15;
#line 942 "array.opt"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T1_1_23;

#line 942 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_8_8 , Array);
	Index =  mercury__rtti_implementation__V_11_11 ;
		{
#line 942 "array.opt"

    Item = Array->elements[Index];

#line 4000 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_13_15  = (MR_Box) Item;
#line 942 "array.opt"
}
#line 542 "array.opt"
            {
#line 542 "array.opt"
              mercury__rtti_implementation__V_12_13 = mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__1_3_f_0(mercury__rtti_implementation__V_19_19, mercury__rtti_implementation__V_13_15, mercury__rtti_implementation__V_9_9);
            }
#line 544 "array.opt"
            mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__V_11_11 - (MR_Integer) 1);
#line 541 "array.opt"
            /* direct tailcall eliminated */
#line 541 "array.opt"
            {
#line 541 "array.opt"
              MR_Word mercury__rtti_implementation__V_9__tmp_copy_9 = mercury__rtti_implementation__V_12_13;
#line 541 "array.opt"
              MR_Integer mercury__rtti_implementation__V_11__tmp_copy_11 = mercury__rtti_implementation__V_14_14;

#line 541 "array.opt"
              mercury__rtti_implementation__V_11_11 = mercury__rtti_implementation__V_11__tmp_copy_11;
#line 541 "array.opt"
              mercury__rtti_implementation__V_9_9 = mercury__rtti_implementation__V_9__tmp_copy_9;
#line 541 "array.opt"
            }
#line 541 "array.opt"
            continue;
#line 541 "array.opt"
          }
#line 536 "array.opt"
        return mercury__rtti_implementation__V_6_12;
#line 536 "array.opt"
      }
#line 536 "array.opt"
      break;
#line 536 "array.opt"
    }
#line 125 "array.opt"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__Res_9;
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_10_10;
#line 1483 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_11_11;

#line 1483 "rtti_implementation.m"
        {
#line 1483 "rtti_implementation.m"
          mercury__rtti_implementation__Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__Start_5);
        }
#line 1484 "rtti_implementation.m"
        mercury__rtti_implementation__V_11_11 = (mercury__rtti_implementation__Start_5 + (MR_Integer) 1);
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__V_10_10 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_53_95_95_91_52_93_95_48_3_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__V_11_11, mercury__rtti_implementation__Max_6);
        }
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 0) = ((MR_Box) (mercury__rtti_implementation__Res_9));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 1) = ((MR_Box) (mercury__rtti_implementation__V_10_10));
#line 1484 "rtti_implementation.m"
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_10_10;
#line 1483 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_11_11;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 4146 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
          {
#line 4167 "rtti_implementation.m"
            {
#line 4167 "rtti_implementation.m"
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
            }
#line 4167 "rtti_implementation.m"
          }
#line 4168 "rtti_implementation.m"
        else
#line 4169 "rtti_implementation.m"
          {
#line 4169 "rtti_implementation.m"
          }
#line 1484 "rtti_implementation.m"
        mercury__rtti_implementation__V_11_11 = (mercury__rtti_implementation__Start_5 + (MR_Integer) 1);
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__V_10_10 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__V_11_11, mercury__rtti_implementation__Max_6);
        }
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 0) = ((MR_Box) (mercury__rtti_implementation__V_14_14));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 1) = ((MR_Box) (mercury__rtti_implementation__V_10_10));
#line 1484 "rtti_implementation.m"
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__Res_9;
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_10_10;
#line 1483 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_11_11;

#line 1483 "rtti_implementation.m"
        {
#line 1483 "rtti_implementation.m"
          mercury__rtti_implementation__Res_9 = mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__Start_5);
        }
#line 1484 "rtti_implementation.m"
        mercury__rtti_implementation__V_11_11 = (mercury__rtti_implementation__Start_5 + (MR_Integer) 1);
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__V_10_10 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_51_95_95_91_52_93_95_48_3_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__V_11_11, mercury__rtti_implementation__Max_6);
        }
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 0) = ((MR_Box) (mercury__rtti_implementation__Res_9));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 1) = ((MR_Box) (mercury__rtti_implementation__V_10_10));
#line 1484 "rtti_implementation.m"
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_14_14,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__Res_9;
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_10_10;
#line 1483 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_11_11;

#line 1483 "rtti_implementation.m"
        {
#line 1483 "rtti_implementation.m"
          mercury__rtti_implementation__Res_9 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_52_50_52_95_95_49_95_95_91_50_44_32_51_93_95_48_3_f_0(mercury__rtti_implementation__V_14_14);
        }
#line 1484 "rtti_implementation.m"
        mercury__rtti_implementation__V_11_11 = (mercury__rtti_implementation__Start_5 + (MR_Integer) 1);
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__V_10_10 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_50_95_95_91_50_44_32_53_93_95_48_3_f_0(mercury__rtti_implementation__V_14_14, mercury__rtti_implementation__V_11_11, mercury__rtti_implementation__Max_6);
        }
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 0) = ((MR_Box) (mercury__rtti_implementation__Res_9));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 1) = ((MR_Box) (mercury__rtti_implementation__V_10_10));
#line 1484 "rtti_implementation.m"
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_49_95_95_91_49_44_32_52_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 4777 "rtti_implementation.m"
        {
#line 4777 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0((MR_String) "arg_names_index/2");
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 313 "list.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
#line 313 "list.int"
  MR_Word mercury__rtti_implementation__V_12_12,
#line 313 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 313 "list.int"
{
#line 616 "list.opt"
  {
#line 616 "list.opt"
    MR_bool mercury__rtti_implementation__succeeded;
#line 616 "list.opt"
    MR_Word mercury__rtti_implementation__HeadVar__3_3;

#line 616 "list.opt"
    if ((mercury__rtti_implementation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "list.opt"
      mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "list.opt"
    else
#line 617 "list.opt"
      {
#line 617 "list.opt"
        MR_Word mercury__rtti_implementation__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 0)));
#line 617 "list.opt"
        MR_Word mercury__rtti_implementation__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 1)));
#line 617 "list.opt"
        MR_Word mercury__rtti_implementation__V_8_8;
#line 617 "list.opt"
        MR_Word mercury__rtti_implementation__V_9_9;

#line 618 "list.opt"
        {
#line 618 "list.opt"
          mercury__rtti_implementation__V_8_8 = mercury__rtti_implementation__create_pseudo_type_info_2_f_0(mercury__rtti_implementation__V_12_12, mercury__rtti_implementation__V_6_6);
        }
#line 619 "list.opt"
        {
#line 619 "list.opt"
          mercury__rtti_implementation__V_9_9 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(mercury__rtti_implementation__V_12_12, mercury__rtti_implementation__V_7_7);
        }
#line 617 "list.opt"
        {
#line 617 "list.opt"
          mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__3_3, 0) = ((MR_Box) (mercury__rtti_implementation__V_8_8));
#line 617 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtti_implementation__V_9_9));
#line 617 "list.opt"
        }
#line 617 "list.opt"
      }
#line 616 "list.opt"
    return mercury__rtti_implementation__HeadVar__3_3;
#line 616 "list.opt"
  }
#line 313 "list.int"
}

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5)
#line 464 "list.int"
{
#line 792 "list.opt"
  {
#line 792 "list.opt"
    MR_bool mercury__rtti_implementation__succeeded;

#line 792 "list.opt"
    if ((mercury__rtti_implementation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "list.opt"
      {
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__5_5 = mercury__rtti_implementation__HeadVar__4_4;
#line 792 "list.opt"
      }
#line 792 "list.opt"
    else
#line 794 "list.opt"
      {
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_13_12;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_14_13;
#line 794 "list.opt"
        MR_Integer mercury__rtti_implementation__V_18_16;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 0)));

#line 795 "list.opt"
        {
#line 795 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(&mercury__rtti_implementation__V_13_12, mercury__rtti_implementation__HeadVar__4_4, &mercury__rtti_implementation__V_18_16);
        }
#line 796 "list.opt"
        {
#line 796 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__V_12_11, &mercury__rtti_implementation__V_14_13, mercury__rtti_implementation__V_18_16, mercury__rtti_implementation__HeadVar__5_5);
        }
#line 794 "list.opt"
        {
#line 794 "list.opt"
          MR_Word base;
#line 794 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "list.opt"
          *mercury__rtti_implementation__HeadVar__3_3 = base;
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtti_implementation__V_13_12));
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtti_implementation__V_14_13));
#line 794 "list.opt"
        }
#line 794 "list.opt"
      }
#line 792 "list.opt"
  }
#line 464 "list.int"
}

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7)
#line 102 "array.int"
{
#line 605 "array.opt"
  {
#line 605 "array.opt"
    MR_bool mercury__rtti_implementation__succeeded;
#line 605 "array.opt"
    MR_Word mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_8_9;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 4544 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 4564 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_9_10  = Max;
#line 839 "array.opt"
}
#line 606 "array.opt"
    {
#line 606 "array.opt"
      mercury__rtti_implementation__V_4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_54_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__rtti_implementation__V_13_13, mercury__rtti_implementation__V_6_6, mercury__rtti_implementation__V_7_7, mercury__rtti_implementation__V_8_9, mercury__rtti_implementation__V_9_10);
    }
#line 605 "array.opt"
    return mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
  }
#line 102 "array.int"
}

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5)
#line 464 "list.int"
{
#line 792 "list.opt"
  {
#line 792 "list.opt"
    MR_bool mercury__rtti_implementation__succeeded;

#line 792 "list.opt"
    if ((mercury__rtti_implementation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "list.opt"
      {
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__5_5 = mercury__rtti_implementation__HeadVar__4_4;
#line 792 "list.opt"
      }
#line 792 "list.opt"
    else
#line 794 "list.opt"
      {
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_13_12;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_14_13;
#line 794 "list.opt"
        MR_Integer mercury__rtti_implementation__V_18_16;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 0)));

#line 795 "list.opt"
        {
#line 795 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(&mercury__rtti_implementation__V_13_12, mercury__rtti_implementation__HeadVar__4_4, &mercury__rtti_implementation__V_18_16);
        }
#line 796 "list.opt"
        {
#line 796 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__V_12_11, &mercury__rtti_implementation__V_14_13, mercury__rtti_implementation__V_18_16, mercury__rtti_implementation__HeadVar__5_5);
        }
#line 794 "list.opt"
        {
#line 794 "list.opt"
          MR_Word base;
#line 794 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "list.opt"
          *mercury__rtti_implementation__HeadVar__3_3 = base;
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtti_implementation__V_13_12));
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtti_implementation__V_14_13));
#line 794 "list.opt"
        }
#line 794 "list.opt"
      }
#line 792 "list.opt"
  }
#line 464 "list.int"
}

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7)
#line 102 "array.int"
{
#line 605 "array.opt"
  {
#line 605 "array.opt"
    MR_bool mercury__rtti_implementation__succeeded;
#line 605 "array.opt"
    MR_Word mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_8_9;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 4697 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 4717 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_9_10  = Max;
#line 839 "array.opt"
}
#line 606 "array.opt"
    {
#line 606 "array.opt"
      mercury__rtti_implementation__V_4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_55_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__rtti_implementation__V_13_13, mercury__rtti_implementation__V_6_6, mercury__rtti_implementation__V_7_7, mercury__rtti_implementation__V_8_9, mercury__rtti_implementation__V_9_10);
    }
#line 605 "array.opt"
    return mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
  }
#line 102 "array.int"
}

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5)
#line 464 "list.int"
{
#line 792 "list.opt"
  {
#line 792 "list.opt"
    MR_bool mercury__rtti_implementation__succeeded;

#line 792 "list.opt"
    if ((mercury__rtti_implementation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "list.opt"
      {
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__5_5 = mercury__rtti_implementation__HeadVar__4_4;
#line 792 "list.opt"
      }
#line 792 "list.opt"
    else
#line 794 "list.opt"
      {
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_13_12;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_14_13;
#line 794 "list.opt"
        MR_Integer mercury__rtti_implementation__V_18_16;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 0)));

#line 795 "list.opt"
        {
#line 795 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(&mercury__rtti_implementation__V_13_12, mercury__rtti_implementation__HeadVar__4_4, &mercury__rtti_implementation__V_18_16);
        }
#line 796 "list.opt"
        {
#line 796 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__V_12_11, &mercury__rtti_implementation__V_14_13, mercury__rtti_implementation__V_18_16, mercury__rtti_implementation__HeadVar__5_5);
        }
#line 794 "list.opt"
        {
#line 794 "list.opt"
          MR_Word base;
#line 794 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "list.opt"
          *mercury__rtti_implementation__HeadVar__3_3 = base;
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtti_implementation__V_13_12));
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtti_implementation__V_14_13));
#line 794 "list.opt"
        }
#line 794 "list.opt"
      }
#line 792 "list.opt"
  }
#line 464 "list.int"
}

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7)
#line 102 "array.int"
{
#line 605 "array.opt"
  {
#line 605 "array.opt"
    MR_bool mercury__rtti_implementation__succeeded;
#line 605 "array.opt"
    MR_Word mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_8_9;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 4850 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 4870 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_9_10  = Max;
#line 839 "array.opt"
}
#line 606 "array.opt"
    {
#line 606 "array.opt"
      mercury__rtti_implementation__V_4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_56_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__rtti_implementation__V_13_13, mercury__rtti_implementation__V_6_6, mercury__rtti_implementation__V_7_7, mercury__rtti_implementation__V_8_9, mercury__rtti_implementation__V_9_10);
    }
#line 605 "array.opt"
    return mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
  }
#line 102 "array.int"
}

#line 1479 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_16_16,
#line 1479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__V_18_18,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Start_5,
#line 1479 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_6)
#line 1479 "rtti_implementation.m"
{
#line 1485 "rtti_implementation.m"
  {
#line 1485 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Start_5 <= mercury__rtti_implementation__Max_6);
#line 1485 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Results_8;

#line 1485 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1483 "rtti_implementation.m"
      {
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__Res_9;
#line 1483 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_10_10;
#line 1483 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_11_11;

#line 1483 "rtti_implementation.m"
        {
#line 1483 "rtti_implementation.m"
          mercury__rtti_implementation__Res_9 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_97_114_103_95_117_110_105_118_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_f_0(mercury__rtti_implementation__V_16_16, mercury__rtti_implementation__V_18_18);
        }
#line 1484 "rtti_implementation.m"
        mercury__rtti_implementation__V_11_11 = (mercury__rtti_implementation__Start_5 + (MR_Integer) 1);
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__V_10_10 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__V_16_16, mercury__rtti_implementation__V_18_18, mercury__rtti_implementation__V_11_11, mercury__rtti_implementation__Max_6);
        }
#line 1484 "rtti_implementation.m"
        {
#line 1484 "rtti_implementation.m"
          mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 0) = ((MR_Box) (mercury__rtti_implementation__Res_9));
#line 1484 "rtti_implementation.m"
          MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Results_8, 1) = ((MR_Box) (mercury__rtti_implementation__V_10_10));
#line 1484 "rtti_implementation.m"
        }
#line 1483 "rtti_implementation.m"
      }
#line 1485 "rtti_implementation.m"
    else
#line 1486 "rtti_implementation.m"
      mercury__rtti_implementation__Results_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "rtti_implementation.m"
    return mercury__rtti_implementation__Results_8;
#line 1485 "rtti_implementation.m"
  }
#line 1479 "rtti_implementation.m"
}

#line 464 "list.int"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(
#line 464 "list.int"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 464 "list.int"
  MR_Word * mercury__rtti_implementation__HeadVar__3_3,
#line 464 "list.int"
  MR_Integer mercury__rtti_implementation__HeadVar__4_4,
#line 464 "list.int"
  MR_Integer * mercury__rtti_implementation__HeadVar__5_5)
#line 464 "list.int"
{
#line 792 "list.opt"
  {
#line 792 "list.opt"
    MR_bool mercury__rtti_implementation__succeeded;

#line 792 "list.opt"
    if ((mercury__rtti_implementation__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "list.opt"
      {
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "list.opt"
        *mercury__rtti_implementation__HeadVar__5_5 = mercury__rtti_implementation__HeadVar__4_4;
#line 792 "list.opt"
      }
#line 792 "list.opt"
    else
#line 794 "list.opt"
      {
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 1)));
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_13_12;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_14_13;
#line 794 "list.opt"
        MR_Integer mercury__rtti_implementation__V_18_16;
#line 794 "list.opt"
        MR_Word mercury__rtti_implementation__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__HeadVar__2_2, (MR_Integer) 0)));

#line 795 "list.opt"
        {
#line 795 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(&mercury__rtti_implementation__V_13_12, mercury__rtti_implementation__HeadVar__4_4, &mercury__rtti_implementation__V_18_16);
        }
#line 796 "list.opt"
        {
#line 796 "list.opt"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__V_12_11, &mercury__rtti_implementation__V_14_13, mercury__rtti_implementation__V_18_16, mercury__rtti_implementation__HeadVar__5_5);
        }
#line 794 "list.opt"
        {
#line 794 "list.opt"
          MR_Word base;
#line 794 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "list.opt"
          *mercury__rtti_implementation__HeadVar__3_3 = base;
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtti_implementation__V_13_12));
#line 794 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtti_implementation__V_14_13));
#line 794 "list.opt"
        }
#line 794 "list.opt"
      }
#line 792 "list.opt"
  }
#line 464 "list.int"
}

#line 102 "array.int"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_13_13,
#line 102 "array.int"
  MR_ArrayPtr mercury__rtti_implementation__V_6_6,
#line 102 "array.int"
  MR_Word mercury__rtti_implementation__V_7_7)
#line 102 "array.int"
{
#line 605 "array.opt"
  {
#line 605 "array.opt"
    MR_bool mercury__rtti_implementation__succeeded;
#line 605 "array.opt"
    MR_Word mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_8_9;
#line 605 "array.opt"
    MR_Integer mercury__rtti_implementation__V_9_10;
#line 852 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_18;
#line 839 "array.opt"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T1_19;

#line 852 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 852 "array.opt"

    /* Array not used */
    Min = 0;

#line 5069 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_8_9  = Min;
#line 852 "array.opt"
}
#line 839 "array.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, (MR_ArrayPtr) mercury__rtti_implementation__V_6_6 , Array);
		{
#line 839 "array.opt"

    Max = Array->size - 1;

#line 5089 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_9_10  = Max;
#line 839 "array.opt"
}
#line 606 "array.opt"
    {
#line 606 "array.opt"
      mercury__rtti_implementation__V_4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_57_95_95_91_50_44_32_51_93_95_48_5_f_in__array_0(mercury__rtti_implementation__V_13_13, mercury__rtti_implementation__V_6_6, mercury__rtti_implementation__V_7_7, mercury__rtti_implementation__V_8_9, mercury__rtti_implementation__V_9_10);
    }
#line 605 "array.opt"
    return mercury__rtti_implementation__V_4_8;
#line 605 "array.opt"
  }
#line 102 "array.int"
}

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76)
#line 2657 "rtti_implementation.m"
{
#line 2657 "rtti_implementation.m"
  {
#line 2657 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2657 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_121_121;
#line 2657 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__SubTerm_43;

#line 2659 "rtti_implementation.m"
    {
#line 2659 "rtti_implementation.m"
      mercury__rtti_implementation__SubTerm_43 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(&mercury__rtti_implementation__TypeInfo_121_121);
    }
#line 2660 "rtti_implementation.m"
    {
#line 2660 "rtti_implementation.m"
      *mercury__rtti_implementation__LambdaHeadVar__2_74 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_121_121, mercury__rtti_implementation__SubTerm_43);
    }
#line 2661 "rtti_implementation.m"
    *mercury__rtti_implementation__LambdaHeadVar__4_76 = (mercury__rtti_implementation__LambdaHeadVar__3_75 + (MR_Integer) 1);
#line 2657 "rtti_implementation.m"
  }
#line 2657 "rtti_implementation.m"
}

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76)
#line 2657 "rtti_implementation.m"
{
#line 2657 "rtti_implementation.m"
  {
#line 2657 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2657 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_121_121;
#line 2657 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__SubTerm_43;

#line 2659 "rtti_implementation.m"
    {
#line 2659 "rtti_implementation.m"
      mercury__rtti_implementation__SubTerm_43 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(&mercury__rtti_implementation__TypeInfo_121_121);
    }
#line 2660 "rtti_implementation.m"
    {
#line 2660 "rtti_implementation.m"
      *mercury__rtti_implementation__LambdaHeadVar__2_74 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_121_121, mercury__rtti_implementation__SubTerm_43);
    }
#line 2661 "rtti_implementation.m"
    *mercury__rtti_implementation__LambdaHeadVar__4_76 = (mercury__rtti_implementation__LambdaHeadVar__3_75 + (MR_Integer) 1);
#line 2657 "rtti_implementation.m"
  }
#line 2657 "rtti_implementation.m"
}

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76)
#line 2657 "rtti_implementation.m"
{
#line 2657 "rtti_implementation.m"
  {
#line 2657 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2657 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_121_121;
#line 2657 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__SubTerm_43;

#line 2659 "rtti_implementation.m"
    {
#line 2659 "rtti_implementation.m"
      mercury__rtti_implementation__SubTerm_43 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(&mercury__rtti_implementation__TypeInfo_121_121);
    }
#line 2660 "rtti_implementation.m"
    {
#line 2660 "rtti_implementation.m"
      *mercury__rtti_implementation__LambdaHeadVar__2_74 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_121_121, mercury__rtti_implementation__SubTerm_43);
    }
#line 2661 "rtti_implementation.m"
    *mercury__rtti_implementation__LambdaHeadVar__4_76 = (mercury__rtti_implementation__LambdaHeadVar__3_75 + (MR_Integer) 1);
#line 2657 "rtti_implementation.m"
  }
#line 2657 "rtti_implementation.m"
}

#line 2657 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_50_54_53_55_95_95_49_95_95_91_49_44_32_50_44_32_51_93_95_48_6_p_0(
#line 2657 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__LambdaHeadVar__2_74,
#line 2657 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__LambdaHeadVar__3_75,
#line 2657 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__LambdaHeadVar__4_76)
#line 2657 "rtti_implementation.m"
{
#line 2657 "rtti_implementation.m"
  {
#line 2657 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2657 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_121_121;
#line 2657 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__SubTerm_43;

#line 2659 "rtti_implementation.m"
    {
#line 2659 "rtti_implementation.m"
      mercury__rtti_implementation__SubTerm_43 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(&mercury__rtti_implementation__TypeInfo_121_121);
    }
#line 2660 "rtti_implementation.m"
    {
#line 2660 "rtti_implementation.m"
      *mercury__rtti_implementation__LambdaHeadVar__2_74 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_121_121, mercury__rtti_implementation__SubTerm_43);
    }
#line 2661 "rtti_implementation.m"
    *mercury__rtti_implementation__LambdaHeadVar__4_76 = (mercury__rtti_implementation__LambdaHeadVar__3_75 + (MR_Integer) 1);
#line 2657 "rtti_implementation.m"
  }
#line 2657 "rtti_implementation.m"
}

#line 424 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_52_50_52_95_95_49_95_95_91_50_44_32_51_93_95_48_3_f_0(
#line 424 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10)
#line 424 "rtti_implementation.m"
{
#line 424 "rtti_implementation.m"
  {
#line 424 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 424 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__LambdaHeadVar__2_26;
#line 424 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__PseudoTypeInfo_23 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_102_117_110_99_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_52_50_52_95_95_49_95_95_91_50_44_32_51_93_95_48_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 5283 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_pti_from_arg_types");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 426 "rtti_implementation.m"
    {
#line 426 "rtti_implementation.m"
      mercury__rtti_implementation__LambdaHeadVar__2_26 = mercury__rtti_implementation__create_pseudo_type_info_2_f_0(mercury__rtti_implementation__TypeInfo_10, mercury__rtti_implementation__PseudoTypeInfo_23);
    }
#line 424 "rtti_implementation.m"
    return mercury__rtti_implementation__LambdaHeadVar__2_26;
#line 424 "rtti_implementation.m"
  }
#line 424 "rtti_implementation.m"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__rtti_implementation__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 848 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 848 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1)
#line 848 "rtti_implementation.m"
{
#line 848 "rtti_implementation.m"
  {
#line 848 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 848 "rtti_implementation.m"
    *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 848 "rtti_implementation.m"
  }
#line 848 "rtti_implementation.m"
}

#line 848 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 848 "rtti_implementation.m"
{
#line 848 "rtti_implementation.m"
  {
#line 848 "rtti_implementation.m"
    return MR_TRUE;
#line 848 "rtti_implementation.m"
  }
#line 848 "rtti_implementation.m"
}

#line 5167 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
#line 5167 "rtti_implementation.m"
{
#line 5179 "rtti_implementation.m"
  {
#line 5179 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 5179 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_4;

#line 5182 "rtti_implementation.m"
    {
#line 5182 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_get_foreign_enum_value/1");
    }
#line 5179 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_4;
#line 5179 "rtti_implementation.m"
  }
#line 5167 "rtti_implementation.m"
}

#line 5137 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
#line 5137 "rtti_implementation.m"
{
#line 5160 "rtti_implementation.m"
  {
#line 5160 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 5160 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_4;

#line 5163 "rtti_implementation.m"
    {
#line 5163 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_get_enum_value/1");
    }
#line 5160 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_4;
#line 5160 "rtti_implementation.m"
  }
#line 5137 "rtti_implementation.m"
}

#line 5085 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(
#line 5085 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1)
#line 5085 "rtti_implementation.m"
{
#line 5086 "rtti_implementation.m"
  {
#line 5086 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 5086 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T_5;

#line 5089 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0

	MR_Word S;
	MR_bool SUCCESS_INDICATOR;

	S = (MR_Word) mercury__rtti_implementation__HeadVar__1_1 ;
		{
#line 5089 "rtti_implementation.m"

    SUCCESS_INDICATOR = ((void *)S == NULL);

#line 5446 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 5089 "rtti_implementation.m"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 5086 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 5086 "rtti_implementation.m"
  }
#line 5085 "rtti_implementation.m"
}

#line 4955 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void)
#line 4955 "rtti_implementation.m"
{
#line 4957 "rtti_implementation.m"
  {
#line 4957 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4957 "rtti_implementation.m"
    return (MR_Integer) -1;
#line 4957 "rtti_implementation.m"
  }
#line 4955 "rtti_implementation.m"
}

#line 4936 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void)
#line 4936 "rtti_implementation.m"
{
#line 4938 "rtti_implementation.m"
  {
#line 4938 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4938 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4938 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4938 "rtti_implementation.m"
  }
#line 4936 "rtti_implementation.m"
}

#line 4901 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(void)
#line 4901 "rtti_implementation.m"
{
#line 4903 "rtti_implementation.m"
  {
#line 4903 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4903 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__4_8;

#line 4904 "rtti_implementation.m"
    {
#line 4904 "rtti_implementation.m"
      mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "function \140rtti_implementation.foreign_enum_functor_desc\'/3", (MR_String) "foreign_enum_functor_desc");
    }
#line 4903 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__4_8;
#line 4903 "rtti_implementation.m"
  }
#line 4901 "rtti_implementation.m"
}

#line 4879 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void)
#line 4879 "rtti_implementation.m"
{
#line 4881 "rtti_implementation.m"
  {
#line 4881 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4881 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4881 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4881 "rtti_implementation.m"
  }
#line 4879 "rtti_implementation.m"
}

#line 4861 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void)
#line 4861 "rtti_implementation.m"
{
#line 4863 "rtti_implementation.m"
  {
#line 4863 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4863 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4863 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4863 "rtti_implementation.m"
  }
#line 4861 "rtti_implementation.m"
}

#line 4839 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(void)
#line 4839 "rtti_implementation.m"
{
#line 4843 "rtti_implementation.m"
  {
#line 4843 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4843 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__EnumFunctorDesc_8;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4843 "rtti_implementation.m"
    return mercury__rtti_implementation__EnumFunctorDesc_8;
#line 4843 "rtti_implementation.m"
  }
#line 4839 "rtti_implementation.m"
}

#line 4779 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_97_114_103_95_110_97_109_101_115_95_95_91_49_93_95_48_5_p_0(
#line 4779 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__I_7,
#line 4779 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_8,
#line 4779 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_9,
#line 4779 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Index_10)
#line 4779 "rtti_implementation.m"
{
#line 4782 "rtti_implementation.m"
  {
#line 4782 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__I_7 < mercury__rtti_implementation__Arity_8);
#line 4782 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_17_17;

#line 4782 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4782 "rtti_implementation.m"
      {
#line 4777 "rtti_implementation.m"
        mercury__rtti_implementation__V_17_17 = (MR_String) "arg_names_index/2";
#line 4777 "rtti_implementation.m"
        {
#line 4777 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_17_17);
        }
#line 4777 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4782 "rtti_implementation.m"
      }
#line 4782 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4782 "rtti_implementation.m"
  }
#line 4779 "rtti_implementation.m"
}

#line 4735 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_117_95_102_117_110_99_116_111_114_95_97_114_103_95_110_97_109_101_115_95_95_91_49_93_95_48_2_p_0(
#line 4735 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__ArgNames_4)
#line 4735 "rtti_implementation.m"
{
#line 4738 "rtti_implementation.m"
  {
#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4738 "rtti_implementation.m"
    return MR_TRUE;
#line 4738 "rtti_implementation.m"
  }
#line 4735 "rtti_implementation.m"
}

#line 4699 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0(void)
#line 4699 "rtti_implementation.m"
{
#line 4701 "rtti_implementation.m"
  {
#line 4701 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4701 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4701 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4701 "rtti_implementation.m"
  }
#line 4699 "rtti_implementation.m"
}

#line 4607 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
#line 4607 "rtti_implementation.m"
{
#line 4609 "rtti_implementation.m"
  {
#line 4609 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4609 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4609 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4609 "rtti_implementation.m"
  }
#line 4607 "rtti_implementation.m"
}

#line 4589 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0(void)
#line 4589 "rtti_implementation.m"
{
#line 4591 "rtti_implementation.m"
  {
#line 4591 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4591 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__HeadVar__2_2;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 4591 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 4591 "rtti_implementation.m"
  }
#line 4589 "rtti_implementation.m"
}

#line 4483 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_101_97_114_99_104_95_102_117_110_99_116_111_114_95_110_117_109_98_101_114_95_109_97_112_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 4483 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__3_6)
#line 4483 "rtti_implementation.m"
{
#line 4522 "rtti_implementation.m"
  {
#line 4523 "rtti_implementation.m"
    {
#line 4523 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_search_functor_number_map/3");
    }
#line 4522 "rtti_implementation.m"
    return MR_TRUE;
#line 4522 "rtti_implementation.m"
  }
#line 4483 "rtti_implementation.m"
}

#line 4380 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0(void)
#line 4380 "rtti_implementation.m"
{
#line 4401 "rtti_implementation.m"
  {
#line 4401 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4401 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__2_4;

#line 4404 "rtti_implementation.m"
    {
#line 4404 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
    }
#line 4401 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_4;
#line 4401 "rtti_implementation.m"
  }
#line 4380 "rtti_implementation.m"
}

#line 4064 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(
#line 4064 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4)
#line 4064 "rtti_implementation.m"
{
#line 4067 "rtti_implementation.m"
  {
#line 4067 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4067 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_3 = mercury__rtti_implementation__TypeInfo_4;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 5804 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 4067 "rtti_implementation.m"
    return mercury__rtti_implementation__TypeInfo_3;
#line 4067 "rtti_implementation.m"
  }
#line 4064 "rtti_implementation.m"
}

#line 3760 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 3760 "rtti_implementation.m"
{
#line 3762 "rtti_implementation.m"
  {
#line 3762 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3762 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__3_6;

#line 3763 "rtti_implementation.m"
    {
#line 3763 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "sectag_alternatives");
    }
#line 3762 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__3_6;
#line 3762 "rtti_implementation.m"
  }
#line 3760 "rtti_implementation.m"
}

#line 3734 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0(void)
#line 3734 "rtti_implementation.m"
{
#line 3736 "rtti_implementation.m"
  {
#line 3736 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3736 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__2_4;

#line 3737 "rtti_implementation.m"
    {
#line 3737 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "sectag_locn");
    }
#line 3736 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_4;
#line 3736 "rtti_implementation.m"
  }
#line 3734 "rtti_implementation.m"
}

#line 3708 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0(void)
#line 3708 "rtti_implementation.m"
{
#line 3713 "rtti_implementation.m"
  {
#line 3713 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3713 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__3_6;

#line 3714 "rtti_implementation.m"
    {
#line 3714 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "ptag_index");
    }
#line 3713 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__3_6;
#line 3713 "rtti_implementation.m"
  }
#line 3708 "rtti_implementation.m"
}

#line 3613 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
#line 3613 "rtti_implementation.m"
{
#line 3618 "rtti_implementation.m"
  {
#line 3618 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 5930 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_remote_secondary_tag");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 3618 "rtti_implementation.m"
    return (MR_Integer) 0;
#line 3618 "rtti_implementation.m"
  }
#line 3613 "rtti_implementation.m"
}

#line 3612 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0(void)
#line 3612 "rtti_implementation.m"
{
#line 3615 "rtti_implementation.m"
  {
#line 3615 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 5984 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 3615 "rtti_implementation.m"
    return (MR_Integer) 0;
#line 3615 "rtti_implementation.m"
  }
#line 3612 "rtti_implementation.m"
}

#line 3579 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__2_2)
#line 3579 "rtti_implementation.m"
{
#line 3590 "rtti_implementation.m"
  {
#line 3590 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3590 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T_8;
#line 3590 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_for_U_9;

#line 3593 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1 ;
	T2 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2 ;
		{
#line 3593 "rtti_implementation.m"

    SUCCESS_INDICATOR = (T1 == T2);

#line 6050 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3593 "rtti_implementation.m"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 3590 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3590 "rtti_implementation.m"
  }
#line 3579 "rtti_implementation.m"
}

#line 3373 "rtti_implementation.m"
static MR_Box MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0(
#line 3373 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__TypeInfo_for_T_11)
#line 3373 "rtti_implementation.m"
{
#line 3375 "rtti_implementation.m"
  {
#line 3375 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3375 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__SubTerm_8;
#line 3375 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_for_T_20;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_117_112_108_101_95_115_117_98_116_101_114_109_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_3_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6093 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_subterm");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 6119 "rtti_implementation.c"
    mercury__rtti_implementation__TypeInfo_for_T_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6121 "rtti_implementation.c"
    mercury__rtti_implementation__SubTerm_8 = ((MR_Box) ((MR_Integer) -1));
#line 6123 "rtti_implementation.c"
    *mercury__rtti_implementation__TypeInfo_for_T_11 = mercury__rtti_implementation__TypeInfo_for_T_20;
#line 3375 "rtti_implementation.m"
    return mercury__rtti_implementation__SubTerm_8;
#line 3375 "rtti_implementation.m"
  }
#line 3373 "rtti_implementation.m"
}

#line 3138 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_110_101_119_95_116_121_112_101_95_105_110_102_111_95_95_91_50_93_95_48_2_f_0(
#line 3138 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4)
#line 3138 "rtti_implementation.m"
{
#line 3140 "rtti_implementation.m"
  {
#line 3140 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3140 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__NewTypeInfo_6 = mercury__rtti_implementation__TypeInfo_4;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_110_101_119_95_116_121_112_101_95_105_110_102_111_95_95_91_50_93_95_48_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6157 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "new_type_info");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 3140 "rtti_implementation.m"
    return mercury__rtti_implementation__NewTypeInfo_6;
#line 3140 "rtti_implementation.m"
  }
#line 3138 "rtti_implementation.m"
}

#line 3097 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
#line 3097 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoParams_10,
#line 3097 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__I_15,
#line 3097 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Max_16,
#line 3097 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_0_20,
#line 3097 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_21)
#line 3097 "rtti_implementation.m"
{
#line 3109 "rtti_implementation.m"
  {
#line 3109 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__I_15 < mercury__rtti_implementation__Max_16);

#line 3109 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3104 "rtti_implementation.m"
      {
#line 3190 "rtti_implementation.m"
        {
#line 3190 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0((MR_String) "get_pti_from_type_info_index");
#line 3190 "rtti_implementation.m"
          return;
        }
#line 3104 "rtti_implementation.m"
      }
#line 3109 "rtti_implementation.m"
    else
#line 3109 "rtti_implementation.m"
      *mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_21 = mercury__rtti_implementation__STATE_VARIABLE_ArgTypeInfo_0_20;
#line 3109 "rtti_implementation.m"
  }
#line 3097 "rtti_implementation.m"
}

#line 3074 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0(
#line 3074 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoParams_6,
#line 3074 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__PseudoTypeInfo_7,
#line 3074 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__ArgTypeInfo_10)
#line 3074 "rtti_implementation.m"
{
#line 3082 "rtti_implementation.m"
  {
#line 3082 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6259 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
      {
#line 4158 "rtti_implementation.m"
        {
#line 4158 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "pseudo_type_info_is_variable");
#line 4158 "rtti_implementation.m"
          return;
        }
#line 4158 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
      }
#line 4159 "rtti_implementation.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6298 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 3082 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3221 "rtti_implementation.m"
      {
#line 4067 "rtti_implementation.m"
        *mercury__rtti_implementation__ArgTypeInfo_10 = mercury__rtti_implementation__TypeInfoParams_6;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6326 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
          {
#line 4167 "rtti_implementation.m"
            {
#line 4167 "rtti_implementation.m"
              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
              return;
            }
#line 4167 "rtti_implementation.m"
          }
#line 4168 "rtti_implementation.m"
        else
#line 4169 "rtti_implementation.m"
          {
#line 4169 "rtti_implementation.m"
          }
#line 3221 "rtti_implementation.m"
      }
#line 3082 "rtti_implementation.m"
    else
#line 3083 "rtti_implementation.m"
      {
#line 3083 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__CastTypeInfo_12 = (MR_Word) mercury__rtti_implementation__PseudoTypeInfo_7;
#line 3083 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorInfo_13;
#line 3083 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__Arity_14;
#line 3083 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__ArgTypeInfo0_16;
#line 1283 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorRep_91;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__CastTypeInfo_12 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 6385 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_13  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_13 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 6406 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_91  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 1286 "rtti_implementation.m"
#line 1286 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_91) {
#line 1286 "rtti_implementation.m"
          default:
#line 1286 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_FALSE;
#line 1286 "rtti_implementation.m"
            break;
#line 1286 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 1286 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
            break;
#line 1286 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 1285 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
            break;
#line 1286 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 1287 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
            break;
#line 1286 "rtti_implementation.m"
        }
#line 3088 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 3086 "rtti_implementation.m"
          {
#line 3132 "rtti_implementation.m"
            mercury__rtti_implementation__Arity_14 = (MR_Integer) 1;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_95_91_49_44_32_52_44_32_53_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6459 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_get_higher_order_arity");
#line 4167 "rtti_implementation.m"
                  return;
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 3086 "rtti_implementation.m"
          }
#line 3088 "rtti_implementation.m"
        else
#line 3089 "rtti_implementation.m"
          {
#line 3089 "rtti_implementation.m"
            mercury__rtti_implementation__Arity_14 = mercury__rtti_implementation__type_ctor_arity_1_f_0(mercury__rtti_implementation__TypeCtorInfo_13);
          }
#line 3092 "rtti_implementation.m"
        {
#line 3092 "rtti_implementation.m"
          mercury__rtti_implementation__ArgTypeInfo0_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_110_101_119_95_116_121_112_101_95_105_110_102_111_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__CastTypeInfo_12);
        }
#line 3093 "rtti_implementation.m"
        {
#line 3093 "rtti_implementation.m"
          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_97_114_103_95_116_121_112_101_95_105_110_102_111_95_50_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__TypeInfoParams_6, (MR_Integer) 0, mercury__rtti_implementation__Arity_14, mercury__rtti_implementation__ArgTypeInfo0_16, mercury__rtti_implementation__ArgTypeInfo_10);
        }
#line 3083 "rtti_implementation.m"
      }
#line 3082 "rtti_implementation.m"
  }
#line 3074 "rtti_implementation.m"
}

#line 3043 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_97_114_103_95_117_110_105_118_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_f_0(
#line 3043 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__SecTagLocn_8,
#line 3043 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10)
#line 3043 "rtti_implementation.m"
{
#line 3045 "rtti_implementation.m"
  {
#line 3045 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3045 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Univ_12;

#line 5069 "rtti_implementation.m"
    {
#line 5069 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "rtti_implementation.unsafe_index");
    }
#line 3045 "rtti_implementation.m"
    return mercury__rtti_implementation__Univ_12;
#line 3045 "rtti_implementation.m"
  }
#line 3043 "rtti_implementation.m"
}

#line 2951 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_24,
#line 2951 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2951 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2951 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2951 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2951 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2951 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2951 "rtti_implementation.m"
{
#line 2961 "rtti_implementation.m"
  {
#line 2961 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2961 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__BaseTypeCtorRep_19;

#line 2972 "rtti_implementation.m"
#line 2972 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2972 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 3:
#line 2977 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 2;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 2971 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 0;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 45:
#line 2974 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 44;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 28:
#line 2983 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 27;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 5:
#line 2980 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 4;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
      case (MR_Integer) 32:
#line 2986 "rtti_implementation.m"
        mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 31;
#line 2972 "rtti_implementation.m"
        break;
#line 2972 "rtti_implementation.m"
    }
#line 2988 "rtti_implementation.m"
    {
#line 2988 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_24, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__BaseTypeCtorRep_19, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
    }
#line 2961 "rtti_implementation.m"
  }
#line 2951 "rtti_implementation.m"
}

#line 2949 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(
#line 2949 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2949 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2949 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2949 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2949 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2949 "rtti_implementation.m"
{
#line 2961 "rtti_implementation.m"
  {
#line 2961 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2963 "rtti_implementation.m"
    {
#line 2963 "rtti_implementation.m"
      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__expand_type_name_2_f_0(mercury__rtti_implementation__TypeCtorInfo_12, (MR_Integer) 1);
    }
#line 2964 "rtti_implementation.m"
    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2965 "rtti_implementation.m"
    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2966 "rtti_implementation.m"
    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2961 "rtti_implementation.m"
  }
#line 2949 "rtti_implementation.m"
}

#line 2947 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(
#line 2947 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2947 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2947 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2947 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2947 "rtti_implementation.m"
{
#line 2961 "rtti_implementation.m"
  {
#line 2961 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2960 "rtti_implementation.m"
    {
#line 2960 "rtti_implementation.m"
      mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.handle_usereq_type\'/9", (MR_String) "attempt to deconstruct noncanonical term");
#line 2960 "rtti_implementation.m"
      return;
    }
#line 2961 "rtti_implementation.m"
  }
#line 2947 "rtti_implementation.m"
}

#line 2933 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
#line 2933 "rtti_implementation.m"
{
#line 2935 "rtti_implementation.m"
  {
#line 2935 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2935 "rtti_implementation.m"
  }
#line 2933 "rtti_implementation.m"
}

#line 2818 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_50_7_p_2(
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2818 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2818 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2818 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  while (MR_TRUE)
#line 2837 "rtti_implementation.m"
    {
#line 2837 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 2837 "rtti_implementation.m"
      {
#line 2837 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
#line 2837 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_11) {
#line 2837 "rtti_implementation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 18:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 34:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 43:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 15:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 9:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 21:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 10:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 37:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 44:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 45:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 20:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 8:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 22:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 41:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 23:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 24:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 38:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 39:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 40:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 11:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 13:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 19:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 26:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 25:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 36:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 33:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 35:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 17:
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 16:
#line 2918 "rtti_implementation.m"
            *mercury__rtti_implementation__MaybeArgument_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2837 "rtti_implementation.m"
            break;
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 2838 "rtti_implementation.m"
            {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_50_7_p_2

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 6841 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  {
#line 4167 "rtti_implementation.m"
                    mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
#line 4167 "rtti_implementation.m"
                    return;
                  }
#line 4167 "rtti_implementation.m"
                }
#line 4168 "rtti_implementation.m"
              else
#line 4169 "rtti_implementation.m"
                {
#line 4169 "rtti_implementation.m"
                }
#line 3714 "rtti_implementation.m"
              {
#line 3714 "rtti_implementation.m"
                mercury__private_builtin__sorry_1_p_0((MR_String) "ptag_index");
#line 3714 "rtti_implementation.m"
                return;
              }
#line 2838 "rtti_implementation.m"
            }
#line 2837 "rtti_implementation.m"
            break;
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 2824 "rtti_implementation.m"
            {
#line 2834 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 2834 "rtti_implementation.m"
              {
#line 2834 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorRep_11 = (MR_Integer) 2;
#line 2834 "rtti_implementation.m"
              }
#line 2834 "rtti_implementation.m"
              continue;
#line 2824 "rtti_implementation.m"
            }
#line 2837 "rtti_implementation.m"
            break;
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 2923 "rtti_implementation.m"
            {
#line 2924 "rtti_implementation.m"
              {
#line 2924 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
#line 2924 "rtti_implementation.m"
                return;
              }
#line 2923 "rtti_implementation.m"
            }
#line 2837 "rtti_implementation.m"
            break;
#line 2837 "rtti_implementation.m"
          case (MR_Integer) 14:
#line 2920 "rtti_implementation.m"
            {
#line 2921 "rtti_implementation.m"
              {
#line 2921 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
#line 2921 "rtti_implementation.m"
                return;
              }
#line 2920 "rtti_implementation.m"
            }
#line 2837 "rtti_implementation.m"
            break;
#line 2837 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
      }
#line 2837 "rtti_implementation.m"
      break;
#line 2837 "rtti_implementation.m"
    }
#line 2818 "rtti_implementation.m"
}

#line 2817 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_49_7_p_1(
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2817 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2817 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2817 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  {
#line 2837 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
#line 2837 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_11) {
#line 2837 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 18:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 34:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 43:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 15:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 9:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 21:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 42:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 6:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 29:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 10:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 37:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 44:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 45:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 7:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 20:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 8:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 22:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 4:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 27:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 28:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 5:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 12:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 41:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 23:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 24:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 38:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 31:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 32:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 39:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 40:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 11:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 13:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 19:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 26:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 25:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 30:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 36:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 33:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 35:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 17:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 16:
#line 2918 "rtti_implementation.m"
        *mercury__rtti_implementation__MaybeArgument_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 2:
#line 2838 "rtti_implementation.m"
        {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_49_7_p_1

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 7069 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
          if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
            {
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
#line 4167 "rtti_implementation.m"
                return;
              }
#line 4167 "rtti_implementation.m"
            }
#line 4168 "rtti_implementation.m"
          else
#line 4169 "rtti_implementation.m"
            {
#line 4169 "rtti_implementation.m"
            }
#line 3714 "rtti_implementation.m"
          {
#line 3714 "rtti_implementation.m"
            mercury__private_builtin__sorry_1_p_0((MR_String) "ptag_index");
#line 3714 "rtti_implementation.m"
            return;
          }
#line 2838 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 3:
#line 2831 "rtti_implementation.m"
        *mercury__rtti_implementation__MaybeArgument_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 46:
#line 2923 "rtti_implementation.m"
        {
#line 2924 "rtti_implementation.m"
          {
#line 2924 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
#line 2924 "rtti_implementation.m"
            return;
          }
#line 2923 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 14:
#line 2920 "rtti_implementation.m"
        {
#line 2921 "rtti_implementation.m"
          {
#line 2921 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
#line 2921 "rtti_implementation.m"
            return;
          }
#line 2920 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
    }
#line 2837 "rtti_implementation.m"
  }
#line 2817 "rtti_implementation.m"
}

#line 2816 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_48_7_p_0(
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2816 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2816 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2816 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  {
#line 2837 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
#line 2837 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_11) {
#line 2837 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 18:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 34:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 43:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 15:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 9:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 21:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 42:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 6:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 29:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 10:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 37:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 44:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 45:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 7:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 20:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 8:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 22:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 4:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 27:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 28:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 5:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 12:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 41:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 23:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 24:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 38:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 31:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 32:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 39:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 40:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 11:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 13:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 19:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 26:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 25:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 30:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 36:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 33:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 35:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 17:
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 16:
#line 2918 "rtti_implementation.m"
        *mercury__rtti_implementation__MaybeArgument_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 2:
#line 2838 "rtti_implementation.m"
        {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_48_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 7281 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
          if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
            {
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_primary_tag");
#line 4167 "rtti_implementation.m"
                return;
              }
#line 4167 "rtti_implementation.m"
            }
#line 4168 "rtti_implementation.m"
          else
#line 4169 "rtti_implementation.m"
            {
#line 4169 "rtti_implementation.m"
            }
#line 3714 "rtti_implementation.m"
          {
#line 3714 "rtti_implementation.m"
            mercury__private_builtin__sorry_1_p_0((MR_String) "ptag_index");
#line 3714 "rtti_implementation.m"
            return;
          }
#line 2838 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 3:
#line 2824 "rtti_implementation.m"
        {
#line 2827 "rtti_implementation.m"
          {
#line 2827 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "attempt to deconstruct noncanonical term");
#line 2827 "rtti_implementation.m"
            return;
          }
#line 2824 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 46:
#line 2923 "rtti_implementation.m"
        {
#line 2924 "rtti_implementation.m"
          {
#line 2924 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "unknown type_ctor rep");
#line 2924 "rtti_implementation.m"
            return;
          }
#line 2923 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
      case (MR_Integer) 14:
#line 2920 "rtti_implementation.m"
        {
#line 2921 "rtti_implementation.m"
          {
#line 2921 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.univ_named_arg_2\'/7", (MR_String) "cannot deconstruct void types");
#line 2921 "rtti_implementation.m"
            return;
          }
#line 2920 "rtti_implementation.m"
        }
#line 2837 "rtti_implementation.m"
        break;
#line 2837 "rtti_implementation.m"
    }
#line 2837 "rtti_implementation.m"
  }
#line 2816 "rtti_implementation.m"
}

#line 2477 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2477 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2477 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2477 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2477 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2477 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2477 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  while (MR_TRUE)
#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 2492 "rtti_implementation.m"
      {
#line 2492 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
#line 2492 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2492 "rtti_implementation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 18:
#line 2690 "rtti_implementation.m"
            {
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_127_127;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_128_128;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_129_129;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__Args_47;
#line 2690 "rtti_implementation.m"
              MR_ArrayPtr mercury__rtti_implementation__Array_50;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_55_55;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_65_65;
#line 2693 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__V_131_131;
#line 2693 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_46_46;
#line 2697 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ElemType_48;
#line 2694 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_56_56;
#line 2701 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv0_Array_50;

#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__rtti_implementation__V_55_55 = mercury__type_desc__type_of_1_f_0(mercury__rtti_implementation__TypeInfo_for_T_112);
              }
#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__type_desc__type_ctor_and_args_3_p_0(mercury__rtti_implementation__V_55_55, &mercury__rtti_implementation__V_46_46, &mercury__rtti_implementation__Args_47);
              }
#line 2694 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__Args_47)) == (MR_mktag((MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2694 "rtti_implementation.m"
                {
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__ElemType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 0)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2694 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2695 "rtti_implementation.m"
                {
#line 2695 "rtti_implementation.m"
                  MR_Box mercury__rtti_implementation__Elem_49;

#line 2695 "rtti_implementation.m"
                  {
#line 2695 "rtti_implementation.m"
                    mercury__type_desc__has_type_2_p_0(&mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__ElemType_48);
                  }
#line 2695 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              else
#line 2698 "rtti_implementation.m"
                {
#line 2698 "rtti_implementation.m"
                  {
#line 2698 "rtti_implementation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
#line 2698 "rtti_implementation.m"
                    return;
                  }
#line 2698 "rtti_implementation.m"
                }
#line 7491 "rtti_implementation.c"
              mercury__rtti_implementation__TypeCtorInfo_128_128 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 7493 "rtti_implementation.c"
              {
#line 7495 "rtti_implementation.c"
                mercury__rtti_implementation__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7497 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 0) = ((MR_Box) (mercury__rtti_implementation__TypeCtorInfo_128_128));
#line 7499 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 1) = ((MR_Box) (mercury__rtti_implementation__TypeInfo_127_127));
#line 7501 "rtti_implementation.c"
              }
#line 2701 "rtti_implementation.m"
              {
#line 2701 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeInfo_129_129, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv0_Array_50);
              }
#line 2701 "rtti_implementation.m"
              mercury__rtti_implementation__Array_50 = ((MR_ArrayPtr) mercury__rtti_implementation__conv0_Array_50);
#line 2703 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<array>>";
#line 2704 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2705 "rtti_implementation.m"
              {
#line 2705 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__array__size_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, (MR_ArrayPtr) mercury__rtti_implementation__Array_50);
              }
#line 2708 "rtti_implementation.m"
              mercury__rtti_implementation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2706 "rtti_implementation.m"
              {
#line 2706 "rtti_implementation.m"
                *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_52_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__Array_50, mercury__rtti_implementation__V_65_65);
              }
#line 2690 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 34:
#line 2779 "rtti_implementation.m"
            {
#line 2766 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<basetypeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 43:
#line 2637 "rtti_implementation.m"
            {
#line 2637 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_120_120 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 2637 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__Bitmap_36;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_79_79;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_104;
#line 2638 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv1_Bitmap_36;

#line 2638 "rtti_implementation.m"
              {
#line 2638 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_120_120, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv1_Bitmap_36);
              }
#line 2638 "rtti_implementation.m"
              mercury__rtti_implementation__Bitmap_36 = ((MR_Box) mercury__rtti_implementation__conv1_Bitmap_36);
#line 2639 "rtti_implementation.m"
              {
#line 2639 "rtti_implementation.m"
                mercury__rtti_implementation__String_104 = mercury__bitmap__to_string_1_f_0(mercury__rtti_implementation__Bitmap_36);
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                mercury__rtti_implementation__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__String_104, (MR_String) "\"");
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", mercury__rtti_implementation__V_79_79);
              }
#line 2641 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2642 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2643 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2637 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 15:
#line 2676 "rtti_implementation.m"
            {
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_125_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_45;
#line 2677 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv2_CPtr_45;

#line 2677 "rtti_implementation.m"
              {
#line 2677 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_125_125, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv2_CPtr_45);
              }
#line 2677 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_45 = ((MR_Word) mercury__rtti_implementation__conv2_CPtr_45);
#line 2678 "rtti_implementation.m"
              {
#line 2678 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_45);
              }
#line 2679 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2680 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2681 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2676 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 9:
#line 2616 "rtti_implementation.m"
            {
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2616 "rtti_implementation.m"
              MR_Char mercury__rtti_implementation__Char_33;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_87_87;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_89_89;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_90_90;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_92_92;
#line 2617 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv3_Char_33;

#line 2617 "rtti_implementation.m"
              {
#line 2617 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_117_117, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv3_Char_33);
              }
#line 2617 "rtti_implementation.m"
              mercury__rtti_implementation__Char_33 = ((MR_Char) (MR_Word) mercury__rtti_implementation__conv3_Char_33);
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[0]);
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 0) = ((MR_Box) (MR_Word) (mercury__rtti_implementation__Char_33));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 1) = ((MR_Box) (mercury__rtti_implementation__V_90_90));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 1) = ((MR_Box) (mercury__rtti_implementation__V_89_89));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__from_char_list_1_f_0(mercury__rtti_implementation__V_87_87);
              }
#line 2619 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2620 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2621 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2616 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 21:
#line 2734 "rtti_implementation.m"
            {
#line 2718 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<curfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 2528 "rtti_implementation.m"
            {
#line 2528 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__SecTagLocn_26;
#line 2531 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__PTag_24;
#line 2532 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__PTagEntry_25;

#line 2531 "rtti_implementation.m"
              {
#line 2531 "rtti_implementation.m"
                mercury__rtti_implementation__PTag_24 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2532 "rtti_implementation.m"
              {
#line 2532 "rtti_implementation.m"
                mercury__rtti_implementation__PTagEntry_25 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0();
              }
#line 2533 "rtti_implementation.m"
              {
#line 2533 "rtti_implementation.m"
                mercury__rtti_implementation__SecTagLocn_26 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0();
              }
#line 2551 "rtti_implementation.m"
#line 2551 "rtti_implementation.m"
              switch (mercury__rtti_implementation__SecTagLocn_26) {
#line 2551 "rtti_implementation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 2:
#line 2552 "rtti_implementation.m"
                  {
#line 2553 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_local_sectag";
#line 2555 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2556 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2557 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2552 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 0:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_96_96;
#line 2537 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_27;

#line 2537 "rtti_implementation.m"
                    {
#line 2537 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_96_96 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_96_96);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 1:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_136_136;
#line 2540 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_134;

#line 2540 "rtti_implementation.m"
                    {
#line 2540 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_134 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_136_136 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_136_136);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 3:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_144_144;
#line 2543 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__SecTag_28;
#line 2544 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_142;

#line 2543 "rtti_implementation.m"
                    {
#line 2543 "rtti_implementation.m"
                      mercury__rtti_implementation__SecTag_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                    }
#line 2544 "rtti_implementation.m"
                    {
#line 2544 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_142 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_144_144 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_144_144);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 4:
#line 2559 "rtti_implementation.m"
                  {
#line 2560 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_variable_sectag";
#line 2561 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2562 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2563 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2559 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
              }
#line 2528 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 2525 "rtti_implementation.m"
            {
#line 2525 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 2515 "rtti_implementation.m"
            {
#line 2517 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_103;

#line 2517 "rtti_implementation.m"
              {
#line 2517 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_103 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2519 "rtti_implementation.m"
              {
#line 2519 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2520 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2521 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2522 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 2493 "rtti_implementation.m"
            {
#line 2496 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_101_101;
#line 2495 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_20;

#line 2496 "rtti_implementation.m"
              {
#line 2496 "rtti_implementation.m"
                mercury__rtti_implementation__V_101_101 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2495 "rtti_implementation.m"
              {
#line 2495 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_20 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2497 "rtti_implementation.m"
              {
#line 2497 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2498 "rtti_implementation.m"
              {
#line 2498 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2499 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2500 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2493 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 2490 "rtti_implementation.m"
            {
#line 2490 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 2602 "rtti_implementation.m"
            {
#line 2604 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_equiv";
#line 2605 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2606 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2607 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2602 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 2588 "rtti_implementation.m"
            {
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeInfo_29;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2589 "rtti_implementation.m"
              {
#line 2589 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeInfo_29 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_11);
              }
#line 2590 "rtti_implementation.m"
              {
#line 2590 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorInfo_30 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(mercury__rtti_implementation__NewTypeInfo_29);
              }
#line 2591 "rtti_implementation.m"
              {
#line 2591 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorRep_31 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(mercury__rtti_implementation__NewTypeCtorInfo_30);
              }
#line 2592 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 2592 "rtti_implementation.m"
              {
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_11 = mercury__rtti_implementation__NewTypeInfo_29;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12 = mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorRep__tmp_copy_13 = mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorRep_13 = mercury__rtti_implementation__TypeCtorRep__tmp_copy_13;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorInfo_12 = mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeInfo_11 = mercury__rtti_implementation__TypeInfo__tmp_copy_11;
#line 2592 "rtti_implementation.m"
              }
#line 2592 "rtti_implementation.m"
              continue;
#line 2588 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 10:
#line 2623 "rtti_implementation.m"
            {
#line 2623 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 2623 "rtti_implementation.m"
              MR_Float mercury__rtti_implementation__Float_34;
#line 2624 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv4_Float_34;

#line 2624 "rtti_implementation.m"
              {
#line 2624 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_118_118, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv4_Float_34);
              }
#line 2624 "rtti_implementation.m"
              mercury__rtti_implementation__Float_34 = MR_unbox_float(mercury__rtti_implementation__conv4_Float_34);
#line 2625 "rtti_implementation.m"
              {
#line 2625 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__float_to_string_1_f_0(mercury__rtti_implementation__Float_34);
              }
#line 2626 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2627 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2628 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2623 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 37:
#line 2790 "rtti_implementation.m"
            {
#line 2786 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<foreignxx>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 44:
#line 2502 "rtti_implementation.m"
            {
#line 2503 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeFunctors_21;
#line 2505 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_100_100;
#line 2504 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ForeignEnumFunctorDesc_22;

#line 2503 "rtti_implementation.m"
              {
#line 2503 "rtti_implementation.m"
                mercury__rtti_implementation__TypeFunctors_21 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0();
              }
#line 2505 "rtti_implementation.m"
              {
#line 2505 "rtti_implementation.m"
                mercury__rtti_implementation__V_100_100 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2504 "rtti_implementation.m"
              {
#line 2504 "rtti_implementation.m"
                mercury__rtti_implementation__ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2506 "rtti_implementation.m"
              {
#line 2506 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2507 "rtti_implementation.m"
              {
#line 2507 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2508 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2509 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2502 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 45:
#line 2512 "rtti_implementation.m"
            {
#line 2512 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 2596 "rtti_implementation.m"
            {
#line 2597 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<function>>";
#line 2598 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2599 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2600 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2596 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 20:
#line 2734 "rtti_implementation.m"
            {
#line 2715 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<hp>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 8:
#line 2609 "rtti_implementation.m"
            {
#line 2609 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_116_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2609 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__Int_32;
#line 2610 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv5_Int_32;

#line 2610 "rtti_implementation.m"
              {
#line 2610 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_116_116, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv5_Int_32);
              }
#line 2610 "rtti_implementation.m"
              mercury__rtti_implementation__Int_32 = ((MR_Integer) mercury__rtti_implementation__conv5_Int_32);
#line 2611 "rtti_implementation.m"
              {
#line 2611 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__int_to_string_1_f_0(mercury__rtti_implementation__Int_32);
              }
#line 2612 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2613 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2614 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2609 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 22:
#line 2734 "rtti_implementation.m"
            {
#line 2721 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<maxfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 2570 "rtti_implementation.m"
            {
#line 2572 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag";
#line 2573 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2574 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2575 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2570 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 2581 "rtti_implementation.m"
            {
#line 2583 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag_ground";
#line 2584 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2585 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2586 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2581 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 2578 "rtti_implementation.m"
            {
#line 2578 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 2567 "rtti_implementation.m"
            {
#line 2567 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 2646 "rtti_implementation.m"
            {
#line 2647 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<predicate>>";
#line 2648 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2649 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2650 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2646 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 41:
#line 2779 "rtti_implementation.m"
            {
#line 2774 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_pseudo_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 23:
#line 2734 "rtti_implementation.m"
            {
#line 2724 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redofr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 24:
#line 2734 "rtti_implementation.m"
            {
#line 2727 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redoip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 38:
#line 2796 "rtti_implementation.m"
            {
#line 2797 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<reference>>";
#line 2798 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2799 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2800 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2796 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 2740 "rtti_implementation.m"
            {
#line 2741 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_reserved_addr";
#line 2742 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2743 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2744 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2740 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 2747 "rtti_implementation.m"
            {
#line 2747 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 39:
#line 2683 "rtti_implementation.m"
            {
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2683 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_67_67;
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_109;
#line 2684 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv6_CPtr_109;

#line 2684 "rtti_implementation.m"
              {
#line 2684 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_126_126, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv6_CPtr_109);
              }
#line 2684 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_109 = ((MR_Word) mercury__rtti_implementation__conv6_CPtr_109);
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                mercury__rtti_implementation__V_67_67 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_109);
              }
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", mercury__rtti_implementation__V_67_67);
              }
#line 2686 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2687 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2688 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2683 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 40:
#line 2790 "rtti_implementation.m"
            {
#line 2789 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<stable_foreign>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 11:
#line 2630 "rtti_implementation.m"
            {
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2630 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_35;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_81_81;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_83_83;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_84_84;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_86_86;
#line 2631 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv7_String_35;

#line 2631 "rtti_implementation.m"
              {
#line 2631 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_119_119, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv7_String_35);
              }
#line 2631 "rtti_implementation.m"
              mercury__rtti_implementation__String_35 = ((MR_String) mercury__rtti_implementation__conv7_String_35);
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[1]);
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 0) = ((MR_Box) (mercury__rtti_implementation__String_35));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 1) = ((MR_Box) (mercury__rtti_implementation__V_84_84));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 0) = ((MR_Box) ((MR_String) "\""));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 1) = ((MR_Box) (mercury__rtti_implementation__V_83_83));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__append_list_1_f_0(mercury__rtti_implementation__V_81_81);
              }
#line 2633 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2634 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2635 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2630 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 13:
#line 2665 "rtti_implementation.m"
            {
#line 2666 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<subgoal>>";
#line 2667 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2668 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2669 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2665 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 19:
#line 2734 "rtti_implementation.m"
            {
#line 2712 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<succip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 26:
#line 2734 "rtti_implementation.m"
            {
#line 2733 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<ticket>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 25:
#line 2734 "rtti_implementation.m"
            {
#line 2730 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<trail_ptr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 2652 "rtti_implementation.m"
            {
#line 2652 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeArgs_38;
#line 2653 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation___TypeCtorInfo_37;
#line 2657 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_44_44;

#line 2653 "rtti_implementation.m"
              {
#line 2653 "rtti_implementation.m"
                mercury__rtti_implementation__type_ctor_and_args_3_p_0(mercury__rtti_implementation__TypeInfo_11, &mercury__rtti_implementation___TypeCtorInfo_37, &mercury__rtti_implementation__TypeArgs_38);
              }
#line 2654 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "{}";
#line 2655 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2656 "rtti_implementation.m"
              {
#line 2656 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
              }
#line 2657 "rtti_implementation.m"
              {
#line 2657 "rtti_implementation.m"
                mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__TypeArgs_38, mercury__rtti_implementation__Arguments_18, (MR_Integer) 0, &mercury__rtti_implementation__V_44_44);
              }
#line 2652 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 36:
#line 2779 "rtti_implementation.m"
            {
#line 2778 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_ctor_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 33:
#line 2779 "rtti_implementation.m"
            {
#line 2762 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typectorinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 35:
#line 2779 "rtti_implementation.m"
            {
#line 2770 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 17:
#line 2779 "rtti_implementation.m"
            {
#line 2758 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<typeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 16:
#line 2779 "rtti_implementation.m"
            {
#line 2754 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typeinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 2802 "rtti_implementation.m"
            {
#line 2803 "rtti_implementation.m"
              {
#line 2803 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
#line 2803 "rtti_implementation.m"
                return;
              }
#line 2802 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 14:
#line 2673 "rtti_implementation.m"
            {
#line 2674 "rtti_implementation.m"
              {
#line 2674 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
#line 2674 "rtti_implementation.m"
                return;
              }
#line 2673 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
        }
#line 2492 "rtti_implementation.m"
      }
#line 2492 "rtti_implementation.m"
      break;
#line 2492 "rtti_implementation.m"
    }
#line 2477 "rtti_implementation.m"
}

#line 2475 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2475 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2475 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2475 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2475 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2475 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2475 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  while (MR_TRUE)
#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 2492 "rtti_implementation.m"
      {
#line 2492 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
#line 2492 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2492 "rtti_implementation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 18:
#line 2690 "rtti_implementation.m"
            {
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_127_127;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_128_128;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_129_129;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__Args_47;
#line 2690 "rtti_implementation.m"
              MR_ArrayPtr mercury__rtti_implementation__Array_50;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_55_55;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_65_65;
#line 2693 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__V_131_131;
#line 2693 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_46_46;
#line 2697 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ElemType_48;
#line 2694 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_56_56;
#line 2701 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv0_Array_50;

#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__rtti_implementation__V_55_55 = mercury__type_desc__type_of_1_f_0(mercury__rtti_implementation__TypeInfo_for_T_112);
              }
#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__type_desc__type_ctor_and_args_3_p_0(mercury__rtti_implementation__V_55_55, &mercury__rtti_implementation__V_46_46, &mercury__rtti_implementation__Args_47);
              }
#line 2694 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__Args_47)) == (MR_mktag((MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2694 "rtti_implementation.m"
                {
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__ElemType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 0)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2694 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2695 "rtti_implementation.m"
                {
#line 2695 "rtti_implementation.m"
                  MR_Box mercury__rtti_implementation__Elem_49;

#line 2695 "rtti_implementation.m"
                  {
#line 2695 "rtti_implementation.m"
                    mercury__type_desc__has_type_2_p_0(&mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__ElemType_48);
                  }
#line 2695 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              else
#line 2698 "rtti_implementation.m"
                {
#line 2698 "rtti_implementation.m"
                  {
#line 2698 "rtti_implementation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
#line 2698 "rtti_implementation.m"
                    return;
                  }
#line 2698 "rtti_implementation.m"
                }
#line 8849 "rtti_implementation.c"
              mercury__rtti_implementation__TypeCtorInfo_128_128 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8851 "rtti_implementation.c"
              {
#line 8853 "rtti_implementation.c"
                mercury__rtti_implementation__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8855 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 0) = ((MR_Box) (mercury__rtti_implementation__TypeCtorInfo_128_128));
#line 8857 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 1) = ((MR_Box) (mercury__rtti_implementation__TypeInfo_127_127));
#line 8859 "rtti_implementation.c"
              }
#line 2701 "rtti_implementation.m"
              {
#line 2701 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeInfo_129_129, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv0_Array_50);
              }
#line 2701 "rtti_implementation.m"
              mercury__rtti_implementation__Array_50 = ((MR_ArrayPtr) mercury__rtti_implementation__conv0_Array_50);
#line 2703 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<array>>";
#line 2704 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2705 "rtti_implementation.m"
              {
#line 2705 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__array__size_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, (MR_ArrayPtr) mercury__rtti_implementation__Array_50);
              }
#line 2708 "rtti_implementation.m"
              mercury__rtti_implementation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2706 "rtti_implementation.m"
              {
#line 2706 "rtti_implementation.m"
                *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_54_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__Array_50, mercury__rtti_implementation__V_65_65);
              }
#line 2690 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 34:
#line 2779 "rtti_implementation.m"
            {
#line 2766 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<basetypeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 43:
#line 2637 "rtti_implementation.m"
            {
#line 2637 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_120_120 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 2637 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__Bitmap_36;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_79_79;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_104;
#line 2638 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv1_Bitmap_36;

#line 2638 "rtti_implementation.m"
              {
#line 2638 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_120_120, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv1_Bitmap_36);
              }
#line 2638 "rtti_implementation.m"
              mercury__rtti_implementation__Bitmap_36 = ((MR_Box) mercury__rtti_implementation__conv1_Bitmap_36);
#line 2639 "rtti_implementation.m"
              {
#line 2639 "rtti_implementation.m"
                mercury__rtti_implementation__String_104 = mercury__bitmap__to_string_1_f_0(mercury__rtti_implementation__Bitmap_36);
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                mercury__rtti_implementation__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__String_104, (MR_String) "\"");
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", mercury__rtti_implementation__V_79_79);
              }
#line 2641 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2642 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2643 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2637 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 15:
#line 2676 "rtti_implementation.m"
            {
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_125_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_45;
#line 2677 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv2_CPtr_45;

#line 2677 "rtti_implementation.m"
              {
#line 2677 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_125_125, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv2_CPtr_45);
              }
#line 2677 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_45 = ((MR_Word) mercury__rtti_implementation__conv2_CPtr_45);
#line 2678 "rtti_implementation.m"
              {
#line 2678 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_45);
              }
#line 2679 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2680 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2681 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2676 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 9:
#line 2616 "rtti_implementation.m"
            {
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2616 "rtti_implementation.m"
              MR_Char mercury__rtti_implementation__Char_33;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_87_87;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_89_89;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_90_90;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_92_92;
#line 2617 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv3_Char_33;

#line 2617 "rtti_implementation.m"
              {
#line 2617 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_117_117, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv3_Char_33);
              }
#line 2617 "rtti_implementation.m"
              mercury__rtti_implementation__Char_33 = ((MR_Char) (MR_Word) mercury__rtti_implementation__conv3_Char_33);
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[0]);
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 0) = ((MR_Box) (MR_Word) (mercury__rtti_implementation__Char_33));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 1) = ((MR_Box) (mercury__rtti_implementation__V_90_90));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 1) = ((MR_Box) (mercury__rtti_implementation__V_89_89));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__from_char_list_1_f_0(mercury__rtti_implementation__V_87_87);
              }
#line 2619 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2620 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2621 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2616 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 21:
#line 2734 "rtti_implementation.m"
            {
#line 2718 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<curfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 2528 "rtti_implementation.m"
            {
#line 2528 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__SecTagLocn_26;
#line 2531 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__PTag_24;
#line 2532 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__PTagEntry_25;

#line 2531 "rtti_implementation.m"
              {
#line 2531 "rtti_implementation.m"
                mercury__rtti_implementation__PTag_24 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2532 "rtti_implementation.m"
              {
#line 2532 "rtti_implementation.m"
                mercury__rtti_implementation__PTagEntry_25 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0();
              }
#line 2533 "rtti_implementation.m"
              {
#line 2533 "rtti_implementation.m"
                mercury__rtti_implementation__SecTagLocn_26 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0();
              }
#line 2551 "rtti_implementation.m"
#line 2551 "rtti_implementation.m"
              switch (mercury__rtti_implementation__SecTagLocn_26) {
#line 2551 "rtti_implementation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 2:
#line 2552 "rtti_implementation.m"
                  {
#line 2553 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_local_sectag";
#line 2555 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2556 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2557 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2552 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 0:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_96_96;
#line 2537 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_27;

#line 2537 "rtti_implementation.m"
                    {
#line 2537 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_96_96 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_96_96);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 1:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_136_136;
#line 2540 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_134;

#line 2540 "rtti_implementation.m"
                    {
#line 2540 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_134 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_136_136 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_136_136);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 3:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_144_144;
#line 2543 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__SecTag_28;
#line 2544 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_142;

#line 2543 "rtti_implementation.m"
                    {
#line 2543 "rtti_implementation.m"
                      mercury__rtti_implementation__SecTag_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                    }
#line 2544 "rtti_implementation.m"
                    {
#line 2544 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_142 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_144_144 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_144_144);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 4:
#line 2559 "rtti_implementation.m"
                  {
#line 2560 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_variable_sectag";
#line 2561 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2562 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2563 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2559 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
              }
#line 2528 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 2525 "rtti_implementation.m"
            {
#line 2525 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 2515 "rtti_implementation.m"
            {
#line 2517 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_103;

#line 2517 "rtti_implementation.m"
              {
#line 2517 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_103 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2519 "rtti_implementation.m"
              {
#line 2519 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2520 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2521 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2522 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 2493 "rtti_implementation.m"
            {
#line 2496 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_101_101;
#line 2495 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_20;

#line 2496 "rtti_implementation.m"
              {
#line 2496 "rtti_implementation.m"
                mercury__rtti_implementation__V_101_101 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2495 "rtti_implementation.m"
              {
#line 2495 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_20 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2497 "rtti_implementation.m"
              {
#line 2497 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2498 "rtti_implementation.m"
              {
#line 2498 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2499 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2500 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2493 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 2490 "rtti_implementation.m"
            {
#line 2490 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 2602 "rtti_implementation.m"
            {
#line 2604 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_equiv";
#line 2605 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2606 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2607 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2602 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 2588 "rtti_implementation.m"
            {
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeInfo_29;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2589 "rtti_implementation.m"
              {
#line 2589 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeInfo_29 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_11);
              }
#line 2590 "rtti_implementation.m"
              {
#line 2590 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorInfo_30 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(mercury__rtti_implementation__NewTypeInfo_29);
              }
#line 2591 "rtti_implementation.m"
              {
#line 2591 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorRep_31 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(mercury__rtti_implementation__NewTypeCtorInfo_30);
              }
#line 2592 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 2592 "rtti_implementation.m"
              {
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_11 = mercury__rtti_implementation__NewTypeInfo_29;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12 = mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorRep__tmp_copy_13 = mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorRep_13 = mercury__rtti_implementation__TypeCtorRep__tmp_copy_13;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorInfo_12 = mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeInfo_11 = mercury__rtti_implementation__TypeInfo__tmp_copy_11;
#line 2592 "rtti_implementation.m"
              }
#line 2592 "rtti_implementation.m"
              continue;
#line 2588 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 10:
#line 2623 "rtti_implementation.m"
            {
#line 2623 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 2623 "rtti_implementation.m"
              MR_Float mercury__rtti_implementation__Float_34;
#line 2624 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv4_Float_34;

#line 2624 "rtti_implementation.m"
              {
#line 2624 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_118_118, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv4_Float_34);
              }
#line 2624 "rtti_implementation.m"
              mercury__rtti_implementation__Float_34 = MR_unbox_float(mercury__rtti_implementation__conv4_Float_34);
#line 2625 "rtti_implementation.m"
              {
#line 2625 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__float_to_string_1_f_0(mercury__rtti_implementation__Float_34);
              }
#line 2626 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2627 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2628 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2623 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 37:
#line 2790 "rtti_implementation.m"
            {
#line 2786 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<foreignxx>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 44:
#line 2502 "rtti_implementation.m"
            {
#line 2503 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeFunctors_21;
#line 2505 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_100_100;
#line 2504 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ForeignEnumFunctorDesc_22;

#line 2503 "rtti_implementation.m"
              {
#line 2503 "rtti_implementation.m"
                mercury__rtti_implementation__TypeFunctors_21 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0();
              }
#line 2505 "rtti_implementation.m"
              {
#line 2505 "rtti_implementation.m"
                mercury__rtti_implementation__V_100_100 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2504 "rtti_implementation.m"
              {
#line 2504 "rtti_implementation.m"
                mercury__rtti_implementation__ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2506 "rtti_implementation.m"
              {
#line 2506 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2507 "rtti_implementation.m"
              {
#line 2507 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2508 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2509 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2502 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 45:
#line 2512 "rtti_implementation.m"
            {
#line 2512 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 2596 "rtti_implementation.m"
            {
#line 2597 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<function>>";
#line 2598 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2599 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2600 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2596 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 20:
#line 2734 "rtti_implementation.m"
            {
#line 2715 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<hp>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 8:
#line 2609 "rtti_implementation.m"
            {
#line 2609 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_116_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2609 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__Int_32;
#line 2610 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv5_Int_32;

#line 2610 "rtti_implementation.m"
              {
#line 2610 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_116_116, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv5_Int_32);
              }
#line 2610 "rtti_implementation.m"
              mercury__rtti_implementation__Int_32 = ((MR_Integer) mercury__rtti_implementation__conv5_Int_32);
#line 2611 "rtti_implementation.m"
              {
#line 2611 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__int_to_string_1_f_0(mercury__rtti_implementation__Int_32);
              }
#line 2612 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2613 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2614 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2609 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 22:
#line 2734 "rtti_implementation.m"
            {
#line 2721 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<maxfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 2570 "rtti_implementation.m"
            {
#line 2572 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag";
#line 2573 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2574 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2575 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2570 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 2581 "rtti_implementation.m"
            {
#line 2583 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag_ground";
#line 2584 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2585 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2586 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2581 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 2578 "rtti_implementation.m"
            {
#line 2578 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 2567 "rtti_implementation.m"
            {
#line 2567 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 2646 "rtti_implementation.m"
            {
#line 2647 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<predicate>>";
#line 2648 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2649 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2650 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2646 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 41:
#line 2779 "rtti_implementation.m"
            {
#line 2774 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_pseudo_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 23:
#line 2734 "rtti_implementation.m"
            {
#line 2724 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redofr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 24:
#line 2734 "rtti_implementation.m"
            {
#line 2727 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redoip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 38:
#line 2796 "rtti_implementation.m"
            {
#line 2797 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<reference>>";
#line 2798 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2799 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2800 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2796 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 2740 "rtti_implementation.m"
            {
#line 2741 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_reserved_addr";
#line 2742 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2743 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2744 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2740 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 2747 "rtti_implementation.m"
            {
#line 2747 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 39:
#line 2683 "rtti_implementation.m"
            {
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2683 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_67_67;
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_109;
#line 2684 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv6_CPtr_109;

#line 2684 "rtti_implementation.m"
              {
#line 2684 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_126_126, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv6_CPtr_109);
              }
#line 2684 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_109 = ((MR_Word) mercury__rtti_implementation__conv6_CPtr_109);
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                mercury__rtti_implementation__V_67_67 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_109);
              }
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", mercury__rtti_implementation__V_67_67);
              }
#line 2686 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2687 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2688 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2683 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 40:
#line 2790 "rtti_implementation.m"
            {
#line 2789 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<stable_foreign>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 11:
#line 2630 "rtti_implementation.m"
            {
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2630 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_35;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_81_81;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_83_83;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_84_84;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_86_86;
#line 2631 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv7_String_35;

#line 2631 "rtti_implementation.m"
              {
#line 2631 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_119_119, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv7_String_35);
              }
#line 2631 "rtti_implementation.m"
              mercury__rtti_implementation__String_35 = ((MR_String) mercury__rtti_implementation__conv7_String_35);
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[1]);
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 0) = ((MR_Box) (mercury__rtti_implementation__String_35));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 1) = ((MR_Box) (mercury__rtti_implementation__V_84_84));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 0) = ((MR_Box) ((MR_String) "\""));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 1) = ((MR_Box) (mercury__rtti_implementation__V_83_83));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__append_list_1_f_0(mercury__rtti_implementation__V_81_81);
              }
#line 2633 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2634 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2635 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2630 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 13:
#line 2665 "rtti_implementation.m"
            {
#line 2666 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<subgoal>>";
#line 2667 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2668 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2669 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2665 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 19:
#line 2734 "rtti_implementation.m"
            {
#line 2712 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<succip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 26:
#line 2734 "rtti_implementation.m"
            {
#line 2733 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<ticket>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 25:
#line 2734 "rtti_implementation.m"
            {
#line 2730 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<trail_ptr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 2652 "rtti_implementation.m"
            {
#line 2652 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeArgs_38;
#line 2653 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation___TypeCtorInfo_37;
#line 2657 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_44_44;

#line 2653 "rtti_implementation.m"
              {
#line 2653 "rtti_implementation.m"
                mercury__rtti_implementation__type_ctor_and_args_3_p_0(mercury__rtti_implementation__TypeInfo_11, &mercury__rtti_implementation___TypeCtorInfo_37, &mercury__rtti_implementation__TypeArgs_38);
              }
#line 2654 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "{}";
#line 2655 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2656 "rtti_implementation.m"
              {
#line 2656 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
              }
#line 2657 "rtti_implementation.m"
              {
#line 2657 "rtti_implementation.m"
                mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__TypeArgs_38, mercury__rtti_implementation__Arguments_18, (MR_Integer) 0, &mercury__rtti_implementation__V_44_44);
              }
#line 2652 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 36:
#line 2779 "rtti_implementation.m"
            {
#line 2778 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_ctor_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 33:
#line 2779 "rtti_implementation.m"
            {
#line 2762 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typectorinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 35:
#line 2779 "rtti_implementation.m"
            {
#line 2770 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 17:
#line 2779 "rtti_implementation.m"
            {
#line 2758 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<typeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 16:
#line 2779 "rtti_implementation.m"
            {
#line 2754 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typeinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 2802 "rtti_implementation.m"
            {
#line 2803 "rtti_implementation.m"
              {
#line 2803 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
#line 2803 "rtti_implementation.m"
                return;
              }
#line 2802 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 14:
#line 2673 "rtti_implementation.m"
            {
#line 2674 "rtti_implementation.m"
              {
#line 2674 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
#line 2674 "rtti_implementation.m"
                return;
              }
#line 2673 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
        }
#line 2492 "rtti_implementation.m"
      }
#line 2492 "rtti_implementation.m"
      break;
#line 2492 "rtti_implementation.m"
    }
#line 2475 "rtti_implementation.m"
}

#line 2473 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_48_9_p_0(
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2473 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2473 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2473 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2473 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2473 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2473 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  while (MR_TRUE)
#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 2492 "rtti_implementation.m"
      {
#line 2492 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
#line 2492 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2492 "rtti_implementation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 18:
#line 2690 "rtti_implementation.m"
            {
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_127_127;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_128_128;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_129_129;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__Args_47;
#line 2690 "rtti_implementation.m"
              MR_ArrayPtr mercury__rtti_implementation__Array_50;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_55_55;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_65_65;
#line 2693 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__V_131_131;
#line 2693 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_46_46;
#line 2697 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ElemType_48;
#line 2694 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_56_56;
#line 2701 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv0_Array_50;

#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__rtti_implementation__V_55_55 = mercury__type_desc__type_of_1_f_0(mercury__rtti_implementation__TypeInfo_for_T_112);
              }
#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__type_desc__type_ctor_and_args_3_p_0(mercury__rtti_implementation__V_55_55, &mercury__rtti_implementation__V_46_46, &mercury__rtti_implementation__Args_47);
              }
#line 2694 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__Args_47)) == (MR_mktag((MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2694 "rtti_implementation.m"
                {
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__ElemType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 0)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2694 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2695 "rtti_implementation.m"
                {
#line 2695 "rtti_implementation.m"
                  MR_Box mercury__rtti_implementation__Elem_49;

#line 2695 "rtti_implementation.m"
                  {
#line 2695 "rtti_implementation.m"
                    mercury__type_desc__has_type_2_p_0(&mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__ElemType_48);
                  }
#line 2695 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              else
#line 2698 "rtti_implementation.m"
                {
#line 2698 "rtti_implementation.m"
                  {
#line 2698 "rtti_implementation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
#line 2698 "rtti_implementation.m"
                    return;
                  }
#line 2698 "rtti_implementation.m"
                }
#line 10207 "rtti_implementation.c"
              mercury__rtti_implementation__TypeCtorInfo_128_128 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 10209 "rtti_implementation.c"
              {
#line 10211 "rtti_implementation.c"
                mercury__rtti_implementation__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10213 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 0) = ((MR_Box) (mercury__rtti_implementation__TypeCtorInfo_128_128));
#line 10215 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 1) = ((MR_Box) (mercury__rtti_implementation__TypeInfo_127_127));
#line 10217 "rtti_implementation.c"
              }
#line 2701 "rtti_implementation.m"
              {
#line 2701 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeInfo_129_129, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv0_Array_50);
              }
#line 2701 "rtti_implementation.m"
              mercury__rtti_implementation__Array_50 = ((MR_ArrayPtr) mercury__rtti_implementation__conv0_Array_50);
#line 2703 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<array>>";
#line 2704 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2705 "rtti_implementation.m"
              {
#line 2705 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__array__size_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, (MR_ArrayPtr) mercury__rtti_implementation__Array_50);
              }
#line 2708 "rtti_implementation.m"
              mercury__rtti_implementation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2706 "rtti_implementation.m"
              {
#line 2706 "rtti_implementation.m"
                *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_56_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__Array_50, mercury__rtti_implementation__V_65_65);
              }
#line 2690 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 34:
#line 2779 "rtti_implementation.m"
            {
#line 2766 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<basetypeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 43:
#line 2637 "rtti_implementation.m"
            {
#line 2637 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_120_120 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 2637 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__Bitmap_36;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_79_79;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_104;
#line 2638 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv1_Bitmap_36;

#line 2638 "rtti_implementation.m"
              {
#line 2638 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_120_120, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv1_Bitmap_36);
              }
#line 2638 "rtti_implementation.m"
              mercury__rtti_implementation__Bitmap_36 = ((MR_Box) mercury__rtti_implementation__conv1_Bitmap_36);
#line 2639 "rtti_implementation.m"
              {
#line 2639 "rtti_implementation.m"
                mercury__rtti_implementation__String_104 = mercury__bitmap__to_string_1_f_0(mercury__rtti_implementation__Bitmap_36);
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                mercury__rtti_implementation__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__String_104, (MR_String) "\"");
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", mercury__rtti_implementation__V_79_79);
              }
#line 2641 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2642 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2643 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2637 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 15:
#line 2676 "rtti_implementation.m"
            {
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_125_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_45;
#line 2677 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv2_CPtr_45;

#line 2677 "rtti_implementation.m"
              {
#line 2677 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_125_125, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv2_CPtr_45);
              }
#line 2677 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_45 = ((MR_Word) mercury__rtti_implementation__conv2_CPtr_45);
#line 2678 "rtti_implementation.m"
              {
#line 2678 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_45);
              }
#line 2679 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2680 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2681 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2676 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 9:
#line 2616 "rtti_implementation.m"
            {
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2616 "rtti_implementation.m"
              MR_Char mercury__rtti_implementation__Char_33;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_87_87;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_89_89;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_90_90;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_92_92;
#line 2617 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv3_Char_33;

#line 2617 "rtti_implementation.m"
              {
#line 2617 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_117_117, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv3_Char_33);
              }
#line 2617 "rtti_implementation.m"
              mercury__rtti_implementation__Char_33 = ((MR_Char) (MR_Word) mercury__rtti_implementation__conv3_Char_33);
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[0]);
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 0) = ((MR_Box) (MR_Word) (mercury__rtti_implementation__Char_33));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 1) = ((MR_Box) (mercury__rtti_implementation__V_90_90));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 1) = ((MR_Box) (mercury__rtti_implementation__V_89_89));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__from_char_list_1_f_0(mercury__rtti_implementation__V_87_87);
              }
#line 2619 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2620 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2621 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2616 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 21:
#line 2734 "rtti_implementation.m"
            {
#line 2718 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<curfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 2528 "rtti_implementation.m"
            {
#line 2528 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__SecTagLocn_26;
#line 2531 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__PTag_24;
#line 2532 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__PTagEntry_25;

#line 2531 "rtti_implementation.m"
              {
#line 2531 "rtti_implementation.m"
                mercury__rtti_implementation__PTag_24 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2532 "rtti_implementation.m"
              {
#line 2532 "rtti_implementation.m"
                mercury__rtti_implementation__PTagEntry_25 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0();
              }
#line 2533 "rtti_implementation.m"
              {
#line 2533 "rtti_implementation.m"
                mercury__rtti_implementation__SecTagLocn_26 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0();
              }
#line 2551 "rtti_implementation.m"
#line 2551 "rtti_implementation.m"
              switch (mercury__rtti_implementation__SecTagLocn_26) {
#line 2551 "rtti_implementation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 2:
#line 2552 "rtti_implementation.m"
                  {
#line 2553 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_local_sectag";
#line 2555 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2556 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2557 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2552 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 0:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_96_96;
#line 2537 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_27;

#line 2537 "rtti_implementation.m"
                    {
#line 2537 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_96_96 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_96_96);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 1:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_136_136;
#line 2540 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_134;

#line 2540 "rtti_implementation.m"
                    {
#line 2540 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_134 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_136_136 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_136_136);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 3:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_144_144;
#line 2543 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__SecTag_28;
#line 2544 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_142;

#line 2543 "rtti_implementation.m"
                    {
#line 2543 "rtti_implementation.m"
                      mercury__rtti_implementation__SecTag_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                    }
#line 2544 "rtti_implementation.m"
                    {
#line 2544 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_142 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_144_144 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_144_144);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 4:
#line 2559 "rtti_implementation.m"
                  {
#line 2560 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_variable_sectag";
#line 2561 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2562 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2563 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2559 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
              }
#line 2528 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 2525 "rtti_implementation.m"
            {
#line 2525 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2525 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 2515 "rtti_implementation.m"
            {
#line 2517 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_103;

#line 2517 "rtti_implementation.m"
              {
#line 2517 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_103 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2519 "rtti_implementation.m"
              {
#line 2519 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2520 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2521 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2522 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 2493 "rtti_implementation.m"
            {
#line 2496 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_101_101;
#line 2495 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_20;

#line 2496 "rtti_implementation.m"
              {
#line 2496 "rtti_implementation.m"
                mercury__rtti_implementation__V_101_101 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2495 "rtti_implementation.m"
              {
#line 2495 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_20 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2497 "rtti_implementation.m"
              {
#line 2497 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2498 "rtti_implementation.m"
              {
#line 2498 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2499 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2500 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2493 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 2490 "rtti_implementation.m"
            {
#line 2490 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2490 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 2602 "rtti_implementation.m"
            {
#line 2604 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_equiv";
#line 2605 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2606 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2607 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2602 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 2588 "rtti_implementation.m"
            {
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeInfo_29;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2589 "rtti_implementation.m"
              {
#line 2589 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeInfo_29 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_11);
              }
#line 2590 "rtti_implementation.m"
              {
#line 2590 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorInfo_30 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(mercury__rtti_implementation__NewTypeInfo_29);
              }
#line 2591 "rtti_implementation.m"
              {
#line 2591 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorRep_31 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(mercury__rtti_implementation__NewTypeCtorInfo_30);
              }
#line 2592 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 2592 "rtti_implementation.m"
              {
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_11 = mercury__rtti_implementation__NewTypeInfo_29;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12 = mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorRep__tmp_copy_13 = mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorRep_13 = mercury__rtti_implementation__TypeCtorRep__tmp_copy_13;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorInfo_12 = mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeInfo_11 = mercury__rtti_implementation__TypeInfo__tmp_copy_11;
#line 2592 "rtti_implementation.m"
              }
#line 2592 "rtti_implementation.m"
              continue;
#line 2588 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 10:
#line 2623 "rtti_implementation.m"
            {
#line 2623 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 2623 "rtti_implementation.m"
              MR_Float mercury__rtti_implementation__Float_34;
#line 2624 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv4_Float_34;

#line 2624 "rtti_implementation.m"
              {
#line 2624 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_118_118, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv4_Float_34);
              }
#line 2624 "rtti_implementation.m"
              mercury__rtti_implementation__Float_34 = MR_unbox_float(mercury__rtti_implementation__conv4_Float_34);
#line 2625 "rtti_implementation.m"
              {
#line 2625 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__float_to_string_1_f_0(mercury__rtti_implementation__Float_34);
              }
#line 2626 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2627 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2628 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2623 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 37:
#line 2790 "rtti_implementation.m"
            {
#line 2786 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<foreignxx>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 44:
#line 2502 "rtti_implementation.m"
            {
#line 2503 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeFunctors_21;
#line 2505 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_100_100;
#line 2504 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ForeignEnumFunctorDesc_22;

#line 2503 "rtti_implementation.m"
              {
#line 2503 "rtti_implementation.m"
                mercury__rtti_implementation__TypeFunctors_21 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0();
              }
#line 2505 "rtti_implementation.m"
              {
#line 2505 "rtti_implementation.m"
                mercury__rtti_implementation__V_100_100 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2504 "rtti_implementation.m"
              {
#line 2504 "rtti_implementation.m"
                mercury__rtti_implementation__ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2506 "rtti_implementation.m"
              {
#line 2506 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2507 "rtti_implementation.m"
              {
#line 2507 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2508 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2509 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2502 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 45:
#line 2512 "rtti_implementation.m"
            {
#line 2512 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2512 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 2596 "rtti_implementation.m"
            {
#line 2597 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<function>>";
#line 2598 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2599 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2600 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2596 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 20:
#line 2734 "rtti_implementation.m"
            {
#line 2715 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<hp>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 8:
#line 2609 "rtti_implementation.m"
            {
#line 2609 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_116_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2609 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__Int_32;
#line 2610 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv5_Int_32;

#line 2610 "rtti_implementation.m"
              {
#line 2610 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_116_116, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv5_Int_32);
              }
#line 2610 "rtti_implementation.m"
              mercury__rtti_implementation__Int_32 = ((MR_Integer) mercury__rtti_implementation__conv5_Int_32);
#line 2611 "rtti_implementation.m"
              {
#line 2611 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__int_to_string_1_f_0(mercury__rtti_implementation__Int_32);
              }
#line 2612 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2613 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2614 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2609 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 22:
#line 2734 "rtti_implementation.m"
            {
#line 2721 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<maxfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 2570 "rtti_implementation.m"
            {
#line 2572 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag";
#line 2573 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2574 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2575 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2570 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 2581 "rtti_implementation.m"
            {
#line 2583 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag_ground";
#line 2584 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2585 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2586 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2581 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 2578 "rtti_implementation.m"
            {
#line 2578 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2578 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 2567 "rtti_implementation.m"
            {
#line 2567 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2567 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 2646 "rtti_implementation.m"
            {
#line 2647 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<predicate>>";
#line 2648 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2649 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2650 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2646 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 41:
#line 2779 "rtti_implementation.m"
            {
#line 2774 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_pseudo_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 23:
#line 2734 "rtti_implementation.m"
            {
#line 2724 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redofr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 24:
#line 2734 "rtti_implementation.m"
            {
#line 2727 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redoip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 38:
#line 2796 "rtti_implementation.m"
            {
#line 2797 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<reference>>";
#line 2798 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2799 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2800 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2796 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 2740 "rtti_implementation.m"
            {
#line 2741 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_reserved_addr";
#line 2742 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2743 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2744 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2740 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 2747 "rtti_implementation.m"
            {
#line 2747 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_117_115_101_114_101_113_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_9_p_0(mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
#line 2747 "rtti_implementation.m"
              return;
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 39:
#line 2683 "rtti_implementation.m"
            {
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2683 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_67_67;
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_109;
#line 2684 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv6_CPtr_109;

#line 2684 "rtti_implementation.m"
              {
#line 2684 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_126_126, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv6_CPtr_109);
              }
#line 2684 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_109 = ((MR_Word) mercury__rtti_implementation__conv6_CPtr_109);
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                mercury__rtti_implementation__V_67_67 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_109);
              }
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", mercury__rtti_implementation__V_67_67);
              }
#line 2686 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2687 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2688 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2683 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 40:
#line 2790 "rtti_implementation.m"
            {
#line 2789 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<stable_foreign>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 11:
#line 2630 "rtti_implementation.m"
            {
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2630 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_35;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_81_81;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_83_83;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_84_84;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_86_86;
#line 2631 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv7_String_35;

#line 2631 "rtti_implementation.m"
              {
#line 2631 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_119_119, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv7_String_35);
              }
#line 2631 "rtti_implementation.m"
              mercury__rtti_implementation__String_35 = ((MR_String) mercury__rtti_implementation__conv7_String_35);
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[1]);
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 0) = ((MR_Box) (mercury__rtti_implementation__String_35));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 1) = ((MR_Box) (mercury__rtti_implementation__V_84_84));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 0) = ((MR_Box) ((MR_String) "\""));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 1) = ((MR_Box) (mercury__rtti_implementation__V_83_83));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__append_list_1_f_0(mercury__rtti_implementation__V_81_81);
              }
#line 2633 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2634 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2635 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2630 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 13:
#line 2665 "rtti_implementation.m"
            {
#line 2666 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<subgoal>>";
#line 2667 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2668 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2669 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2665 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 19:
#line 2734 "rtti_implementation.m"
            {
#line 2712 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<succip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 26:
#line 2734 "rtti_implementation.m"
            {
#line 2733 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<ticket>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 25:
#line 2734 "rtti_implementation.m"
            {
#line 2730 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<trail_ptr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 2652 "rtti_implementation.m"
            {
#line 2652 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeArgs_38;
#line 2653 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation___TypeCtorInfo_37;
#line 2657 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_44_44;

#line 2653 "rtti_implementation.m"
              {
#line 2653 "rtti_implementation.m"
                mercury__rtti_implementation__type_ctor_and_args_3_p_0(mercury__rtti_implementation__TypeInfo_11, &mercury__rtti_implementation___TypeCtorInfo_37, &mercury__rtti_implementation__TypeArgs_38);
              }
#line 2654 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "{}";
#line 2655 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2656 "rtti_implementation.m"
              {
#line 2656 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
              }
#line 2657 "rtti_implementation.m"
              {
#line 2657 "rtti_implementation.m"
                mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_57_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__TypeArgs_38, mercury__rtti_implementation__Arguments_18, (MR_Integer) 0, &mercury__rtti_implementation__V_44_44);
              }
#line 2652 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 36:
#line 2779 "rtti_implementation.m"
            {
#line 2778 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_ctor_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 33:
#line 2779 "rtti_implementation.m"
            {
#line 2762 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typectorinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 35:
#line 2779 "rtti_implementation.m"
            {
#line 2770 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 17:
#line 2779 "rtti_implementation.m"
            {
#line 2758 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<typeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 16:
#line 2779 "rtti_implementation.m"
            {
#line 2754 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typeinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 2802 "rtti_implementation.m"
            {
#line 2803 "rtti_implementation.m"
              {
#line 2803 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
#line 2803 "rtti_implementation.m"
                return;
              }
#line 2802 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 14:
#line 2673 "rtti_implementation.m"
            {
#line 2674 "rtti_implementation.m"
              {
#line 2674 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
#line 2674 "rtti_implementation.m"
                return;
              }
#line 2673 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
        }
#line 2492 "rtti_implementation.m"
      }
#line 2492 "rtti_implementation.m"
      break;
#line 2492 "rtti_implementation.m"
    }
#line 2473 "rtti_implementation.m"
}

#line 902 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_57_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_9_p_0(
#line 902 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2)
#line 902 "rtti_implementation.m"
{
#line 905 "rtti_implementation.m"
  {
#line 905 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 904 "rtti_implementation.m"
    *mercury__rtti_implementation__HeadVar__2_2 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_57_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_9_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11483 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "result_call_9");
#line 4167 "rtti_implementation.m"
          return;
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 905 "rtti_implementation.m"
  }
#line 902 "rtti_implementation.m"
}

#line 897 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_56_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0(
#line 897 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2)
#line 897 "rtti_implementation.m"
{
#line 899 "rtti_implementation.m"
  {
#line 899 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 899 "rtti_implementation.m"
    *mercury__rtti_implementation__HeadVar__2_2 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_56_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11541 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
#line 4167 "rtti_implementation.m"
          return;
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 899 "rtti_implementation.m"
  }
#line 897 "rtti_implementation.m"
}

#line 892 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_55_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0(
#line 892 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2)
#line 892 "rtti_implementation.m"
{
#line 894 "rtti_implementation.m"
  {
#line 894 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 894 "rtti_implementation.m"
    *mercury__rtti_implementation__HeadVar__2_2 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_55_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11599 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
#line 4167 "rtti_implementation.m"
          return;
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 894 "rtti_implementation.m"
  }
#line 892 "rtti_implementation.m"
}

#line 887 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_54_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0(
#line 887 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_2)
#line 887 "rtti_implementation.m"
{
#line 889 "rtti_implementation.m"
  {
#line 889 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 889 "rtti_implementation.m"
    *mercury__rtti_implementation__HeadVar__2_2 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_54_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11657 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
#line 4167 "rtti_implementation.m"
          return;
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 889 "rtti_implementation.m"
  }
#line 887 "rtti_implementation.m"
}

#line 872 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0(void)
#line 872 "rtti_implementation.m"
{
#line 874 "rtti_implementation.m"
  {
#line 874 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11711 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
      {
#line 4158 "rtti_implementation.m"
        {
#line 4158 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_8");
        }
#line 4158 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
      }
#line 4159 "rtti_implementation.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11748 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 874 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 874 "rtti_implementation.m"
  }
#line 872 "rtti_implementation.m"
}

#line 867 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0(void)
#line 867 "rtti_implementation.m"
{
#line 869 "rtti_implementation.m"
  {
#line 869 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11787 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
      {
#line 4158 "rtti_implementation.m"
        {
#line 4158 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_7");
        }
#line 4158 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
      }
#line 4159 "rtti_implementation.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11824 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 869 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 869 "rtti_implementation.m"
  }
#line 867 "rtti_implementation.m"
}

#line 863 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0(void)
#line 863 "rtti_implementation.m"
{
#line 864 "rtti_implementation.m"
  {
#line 864 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11863 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
      {
#line 4158 "rtti_implementation.m"
        {
#line 4158 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_6");
        }
#line 4158 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
      }
#line 4159 "rtti_implementation.m"
    else
#line 74 "builtin.opt"
      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11900 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
      }
#line 864 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 864 "rtti_implementation.m"
  }
#line 863 "rtti_implementation.m"
}

#line 806 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0(
#line 806 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_7,
#line 806 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__TupleArity_8,
#line 806 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 806 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_10)
#line 806 "rtti_implementation.m"
{
#line 812 "rtti_implementation.m"
  while (MR_TRUE)
#line 812 "rtti_implementation.m"
    {
#line 812 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 812 "rtti_implementation.m"
      {
#line 812 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Loc_7 > mercury__rtti_implementation__TupleArity_8);

#line 812 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 811 "rtti_implementation.m"
          *mercury__rtti_implementation__Result_10 = (MR_Integer) 0;
#line 812 "rtti_implementation.m"
        else
#line 813 "rtti_implementation.m"
          {
#line 813 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_25_25;
#line 813 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T_40;
#line 813 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T_57;
#line 813 "rtti_implementation.m"
            MR_Box mercury__rtti_implementation__SubTermB_15;
#line 813 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__SubResult_17;
#line 813 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__ArgTypeInfo_13;
#line 11962 "rtti_implementation.c"
            MR_Box mercury__rtti_implementation__SubTermA_14;
#line 11964 "rtti_implementation.c"
            MR_Word mercury__rtti_implementation__TypeInfo_26_26;
#line 818 "rtti_implementation.m"
            MR_Box mercury__rtti_implementation__CastSubTermB_16;

#line 813 "rtti_implementation.m"
            {
#line 813 "rtti_implementation.m"
              mercury__rtti_implementation__ArgTypeInfo_13 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__Loc_7);
            }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11985 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_subterm");
#line 4167 "rtti_implementation.m"
                  return;
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 12013 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_for_T_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12015 "rtti_implementation.c"
            mercury__rtti_implementation__SubTermA_14 = ((MR_Box) ((MR_Integer) -1));
#line 12017 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_25_25 = mercury__rtti_implementation__TypeInfo_for_T_40;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_54_44_32_55_93_95_48_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 12030 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_subterm");
#line 4167 "rtti_implementation.m"
                  return;
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 12058 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_for_T_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12060 "rtti_implementation.c"
            mercury__rtti_implementation__SubTermB_15 = ((MR_Box) ((MR_Integer) -1));
#line 12062 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_26_26 = mercury__rtti_implementation__TypeInfo_for_T_57;
#line 818 "rtti_implementation.m"
            mercury__rtti_implementation__CastSubTermB_16 = mercury__rtti_implementation__SubTermB_15;
#line 819 "rtti_implementation.m"
            {
#line 819 "rtti_implementation.m"
              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__rtti_implementation__TypeInfo_25_25, &mercury__rtti_implementation__SubResult_17);
            }
#line 824 "rtti_implementation.m"
#line 824 "rtti_implementation.m"
            switch (mercury__rtti_implementation__SubResult_17) {
#line 824 "rtti_implementation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 824 "rtti_implementation.m"
              case (MR_Integer) 1:
#line 824 "rtti_implementation.m"
              case (MR_Integer) 2:
#line 828 "rtti_implementation.m"
                *mercury__rtti_implementation__Result_10 = mercury__rtti_implementation__SubResult_17;
#line 824 "rtti_implementation.m"
                break;
#line 824 "rtti_implementation.m"
              case (MR_Integer) 0:
#line 821 "rtti_implementation.m"
                {
#line 821 "rtti_implementation.m"
                  MR_Integer mercury__rtti_implementation__V_22_22 = (mercury__rtti_implementation__Loc_7 + (MR_Integer) 1);

#line 822 "rtti_implementation.m"
                  /* direct tailcall eliminated */
#line 822 "rtti_implementation.m"
                  {
#line 822 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__Loc__tmp_copy_7 = mercury__rtti_implementation__V_22_22;

#line 822 "rtti_implementation.m"
                    mercury__rtti_implementation__Loc_7 = mercury__rtti_implementation__Loc__tmp_copy_7;
#line 822 "rtti_implementation.m"
                  }
#line 822 "rtti_implementation.m"
                  continue;
#line 821 "rtti_implementation.m"
                }
#line 824 "rtti_implementation.m"
                break;
#line 824 "rtti_implementation.m"
            }
#line 813 "rtti_implementation.m"
          }
#line 812 "rtti_implementation.m"
      }
#line 812 "rtti_implementation.m"
      break;
#line 812 "rtti_implementation.m"
    }
#line 806 "rtti_implementation.m"
}

#line 799 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_0(
#line 799 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_5,
#line 799 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_6)
#line 799 "rtti_implementation.m"
{
#line 802 "rtti_implementation.m"
  {
#line 802 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 667 "rtti_implementation.m"
    {
#line 667 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
#line 667 "rtti_implementation.m"
      return;
    }
#line 802 "rtti_implementation.m"
  }
#line 799 "rtti_implementation.m"
}

#line 781 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_53_44_32_54_93_95_48_5_p_0(
#line 781 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 781 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__TupleArity_7,
#line 781 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_8)
#line 781 "rtti_implementation.m"
{
#line 787 "rtti_implementation.m"
  while (MR_TRUE)
#line 787 "rtti_implementation.m"
    {
#line 787 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 787 "rtti_implementation.m"
      {
#line 787 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Loc_6 > mercury__rtti_implementation__TupleArity_7);

#line 787 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 786 "rtti_implementation.m"
          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 787 "rtti_implementation.m"
        else
#line 788 "rtti_implementation.m"
          {
#line 788 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_22_22;
#line 788 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T_37;
#line 788 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__TypeInfo_for_T_54;
#line 788 "rtti_implementation.m"
            MR_Box mercury__rtti_implementation__SubTermB_13;
#line 788 "rtti_implementation.m"
            MR_Integer mercury__rtti_implementation__V_19_19;
#line 788 "rtti_implementation.m"
            MR_Integer mercury__rtti_implementation__V_20_20;
#line 788 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__ArgTypeInfo_11;
#line 12191 "rtti_implementation.c"
            MR_Box mercury__rtti_implementation__SubTermA_12;
#line 12193 "rtti_implementation.c"
            MR_Word mercury__rtti_implementation__TypeInfo_23_23;
#line 793 "rtti_implementation.m"
            MR_Box mercury__rtti_implementation__CastSubTermB_14;

#line 788 "rtti_implementation.m"
            {
#line 788 "rtti_implementation.m"
              mercury__rtti_implementation__ArgTypeInfo_11 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(mercury__rtti_implementation__TypeInfo_8, mercury__rtti_implementation__Loc_6);
            }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_53_44_32_54_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 12214 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_subterm");
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 12240 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_for_T_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12242 "rtti_implementation.c"
            mercury__rtti_implementation__SubTermA_12 = ((MR_Box) ((MR_Integer) -1));
#line 12244 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_22_22 = mercury__rtti_implementation__TypeInfo_for_T_37;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_112_111_115_95_95_91_49_44_32_53_44_32_54_93_95_48_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 12257 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "get_subterm");
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 12283 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_for_T_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12285 "rtti_implementation.c"
            mercury__rtti_implementation__SubTermB_13 = ((MR_Box) ((MR_Integer) -1));
#line 12287 "rtti_implementation.c"
            mercury__rtti_implementation__TypeInfo_23_23 = mercury__rtti_implementation__TypeInfo_for_T_54;
#line 793 "rtti_implementation.m"
            mercury__rtti_implementation__CastSubTermB_14 = mercury__rtti_implementation__SubTermB_13;
#line 794 "rtti_implementation.m"
            {
#line 794 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0(mercury__rtti_implementation__TypeInfo_22_22);
            }
#line 788 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 788 "rtti_implementation.m"
              {
#line 796 "rtti_implementation.m"
                mercury__rtti_implementation__V_20_20 = (MR_Integer) 1;
#line 796 "rtti_implementation.m"
                mercury__rtti_implementation__V_19_19 = (mercury__rtti_implementation__Loc_6 + mercury__rtti_implementation__V_20_20);
#line 796 "rtti_implementation.m"
                /* direct tailcall eliminated */
#line 796 "rtti_implementation.m"
                {
#line 796 "rtti_implementation.m"
                  MR_Integer mercury__rtti_implementation__Loc__tmp_copy_6 = mercury__rtti_implementation__V_19_19;

#line 796 "rtti_implementation.m"
                  mercury__rtti_implementation__Loc_6 = mercury__rtti_implementation__Loc__tmp_copy_6;
#line 796 "rtti_implementation.m"
                }
#line 796 "rtti_implementation.m"
                continue;
#line 788 "rtti_implementation.m"
              }
#line 788 "rtti_implementation.m"
          }
#line 787 "rtti_implementation.m"
        return mercury__rtti_implementation__succeeded;
#line 787 "rtti_implementation.m"
      }
#line 787 "rtti_implementation.m"
      break;
#line 787 "rtti_implementation.m"
    }
#line 781 "rtti_implementation.m"
}

#line 775 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(
#line 775 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4)
#line 775 "rtti_implementation.m"
{
#line 777 "rtti_implementation.m"
  {
#line 667 "rtti_implementation.m"
    {
#line 667 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
    }
#line 777 "rtti_implementation.m"
    return MR_TRUE;
#line 777 "rtti_implementation.m"
  }
#line 775 "rtti_implementation.m"
}

#line 646 "rtti_implementation.m"
static MR_Integer MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
#line 646 "rtti_implementation.m"
{
#line 666 "rtti_implementation.m"
  {
#line 666 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 666 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__HeadVar__2_4;

#line 667 "rtti_implementation.m"
    {
#line 667 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
    }
#line 666 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_4;
#line 666 "rtti_implementation.m"
  }
#line 646 "rtti_implementation.m"
}

#line 515 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_110_111_116_97_103_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(
#line 515 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_11,
#line 515 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_12,
#line 515 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_13,
#line 515 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_14)
#line 515 "rtti_implementation.m"
{
#line 520 "rtti_implementation.m"
  {
#line 520 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4404 "rtti_implementation.m"
    {
#line 4404 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
#line 4404 "rtti_implementation.m"
      return;
    }
#line 520 "rtti_implementation.m"
  }
#line 515 "rtti_implementation.m"
}

#line 411 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_91_49_44_32_51_44_32_52_93_95_48_8_p_0(
#line 411 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_10,
#line 411 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_13,
#line 411 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_14,
#line 411 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_15,
#line 411 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_16)
#line 411 "rtti_implementation.m"
{
#line 416 "rtti_implementation.m"
  {
#line 416 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4404 "rtti_implementation.m"
    {
#line 4404 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
#line 4404 "rtti_implementation.m"
      return;
    }
#line 416 "rtti_implementation.m"
  }
#line 411 "rtti_implementation.m"
}

#line 109 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_103_101_116_95_102_117_110_99_116_111_114_95_108_101_120_95_95_91_50_93_95_48_3_p_0(
#line 109 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo0_4,
#line 109 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_6)
#line 109 "rtti_implementation.m"
{
#line 613 "rtti_implementation.m"
  {
#line 613 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_7;
#line 3565 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_8;

#line 614 "rtti_implementation.m"
    {
#line 614 "rtti_implementation.m"
      mercury__rtti_implementation__TypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo0_4);
    }
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_103_101_116_95_102_117_110_99_116_111_114_95_108_101_120_95_95_91_50_93_95_48_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_7 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 12474 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_8  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4523 "rtti_implementation.m"
    {
#line 4523 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_search_functor_number_map/3");
    }
#line 613 "rtti_implementation.m"
    return MR_TRUE;
#line 613 "rtti_implementation.m"
  }
#line 109 "rtti_implementation.m"
}

#line 91 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_50_4_p_2(
#line 91 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 91 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 91 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 91 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_9;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_10;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_11;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__MaybeArgument_12;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_14_14;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_50_4_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_13 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 12532 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_9  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_50_4_p_2

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_9 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 12553 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_10  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_50_4_p_2

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_10 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 12574 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_11  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2810 "rtti_implementation.m"
    {
#line 2810 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_50_7_p_2(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_7, &mercury__rtti_implementation__MaybeArgument_12);
    }
#line 2812 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__MaybeArgument_12)) == (MR_mktag((MR_Integer) 1)));
#line 2812 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2812 "rtti_implementation.m"
      *mercury__rtti_implementation__Argument_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__MaybeArgument_12, (MR_Integer) 0)));
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 91 "rtti_implementation.m"
}

#line 90 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_49_4_p_1(
#line 90 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 90 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 90 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 90 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_9;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_10;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_11;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__MaybeArgument_12;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_14_14;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_49_4_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_13 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 12638 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_9  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_49_4_p_1

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_9 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 12659 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_10  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_49_4_p_1

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_10 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 12680 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_11  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2810 "rtti_implementation.m"
    {
#line 2810 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_49_7_p_1(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_7, &mercury__rtti_implementation__MaybeArgument_12);
    }
#line 2812 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__MaybeArgument_12)) == (MR_mktag((MR_Integer) 1)));
#line 2812 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2812 "rtti_implementation.m"
      *mercury__rtti_implementation__Argument_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__MaybeArgument_12, (MR_Integer) 0)));
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 90 "rtti_implementation.m"
}

#line 89 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_48_4_p_0(
#line 89 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 89 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 89 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 89 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_9;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_10;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_11;
#line 2806 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__MaybeArgument_12;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_14_14;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_48_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_13 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 12744 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_9  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_48_4_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_9 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 12765 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_10  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_48_4_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_10 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 12786 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_11  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2810 "rtti_implementation.m"
    {
#line 2810 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_48_7_p_0(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_7, &mercury__rtti_implementation__MaybeArgument_12);
    }
#line 2812 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__MaybeArgument_12)) == (MR_mktag((MR_Integer) 1)));
#line 2812 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2812 "rtti_implementation.m"
      *mercury__rtti_implementation__Argument_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__MaybeArgument_12, (MR_Integer) 0)));
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 89 "rtti_implementation.m"
}

#line 81 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2(
#line 81 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 81 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 81 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 81 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 81 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 81 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 81 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_13;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_14;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_15;
#line 2444 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Ordinal_16;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_20_20;
#line 2451 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_33_33;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_19 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 12858 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_13  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_13 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 12879 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_14  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_14 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 12900 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_15  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2448 "rtti_implementation.m"
    {
#line 2448 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__TypeInfo_13, mercury__rtti_implementation__TypeCtorInfo_14, mercury__rtti_implementation__TypeCtorRep_15, mercury__rtti_implementation__Functor_9, &mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2451 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Ordinal_16 >= (MR_Integer) 0);
#line 2451 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2451 "rtti_implementation.m"
      {
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__V_33_33 = (MR_String) "type_ctor_search_functor_number_map/3";
#line 4523 "rtti_implementation.m"
        {
#line 4523 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_33_33);
#line 4523 "rtti_implementation.m"
          return;
        }
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 2451 "rtti_implementation.m"
      }
#line 2457 "rtti_implementation.m"
    *mercury__rtti_implementation__FunctorNumber_10 = (MR_Integer) 0;
#line 2444 "rtti_implementation.m"
  }
#line 81 "rtti_implementation.m"
}

#line 80 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(
#line 80 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 80 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 80 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 80 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 80 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 80 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 80 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_13;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_14;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_15;
#line 2444 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Ordinal_16;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_20_20;
#line 2451 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_33_33;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_19 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 12985 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_13  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_13 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 13006 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_14  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_14 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 13027 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_15  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2448 "rtti_implementation.m"
    {
#line 2448 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__TypeInfo_13, mercury__rtti_implementation__TypeCtorInfo_14, mercury__rtti_implementation__TypeCtorRep_15, mercury__rtti_implementation__Functor_9, &mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2451 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Ordinal_16 >= (MR_Integer) 0);
#line 2451 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2451 "rtti_implementation.m"
      {
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__V_33_33 = (MR_String) "type_ctor_search_functor_number_map/3";
#line 4523 "rtti_implementation.m"
        {
#line 4523 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_33_33);
#line 4523 "rtti_implementation.m"
          return;
        }
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 2451 "rtti_implementation.m"
      }
#line 2457 "rtti_implementation.m"
    *mercury__rtti_implementation__FunctorNumber_10 = (MR_Integer) 0;
#line 2444 "rtti_implementation.m"
  }
#line 80 "rtti_implementation.m"
}

#line 79 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(
#line 79 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 79 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 79 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 79 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 79 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 79 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 79 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_13;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_14;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_15;
#line 2444 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Ordinal_16;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_20_20;
#line 2451 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_33_33;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_19 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 13112 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_13  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_13 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 13133 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_14  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_14 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 13154 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_15  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2448 "rtti_implementation.m"
    {
#line 2448 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_48_9_p_0(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__TypeInfo_13, mercury__rtti_implementation__TypeCtorInfo_14, mercury__rtti_implementation__TypeCtorRep_15, mercury__rtti_implementation__Functor_9, &mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2451 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Ordinal_16 >= (MR_Integer) 0);
#line 2451 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2451 "rtti_implementation.m"
      {
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__V_33_33 = (MR_String) "type_ctor_search_functor_number_map/3";
#line 4523 "rtti_implementation.m"
        {
#line 4523 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_33_33);
#line 4523 "rtti_implementation.m"
          return;
        }
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 2451 "rtti_implementation.m"
      }
#line 2457 "rtti_implementation.m"
    *mercury__rtti_implementation__FunctorNumber_10 = (MR_Integer) 0;
#line 2444 "rtti_implementation.m"
  }
#line 79 "rtti_implementation.m"
}

#line 76 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_116_117_112_108_101_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(void)
#line 76 "rtti_implementation.m"
{
#line 2438 "rtti_implementation.m"
  {
#line 2438 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2438 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__4_8;

#line 2439 "rtti_implementation.m"
    {
#line 2439 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "construct_tuple_2/3");
    }
#line 2438 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__4_8;
#line 2438 "rtti_implementation.m"
  }
#line 76 "rtti_implementation.m"
}

#line 74 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(
#line 74 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__4_8)
#line 74 "rtti_implementation.m"
{
#line 2388 "rtti_implementation.m"
  {
#line 2389 "rtti_implementation.m"
    {
#line 2389 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "construct/3");
    }
#line 2388 "rtti_implementation.m"
    return MR_TRUE;
#line 2388 "rtti_implementation.m"
  }
#line 74 "rtti_implementation.m"
}

#line 72 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_101_120_105_115_116_95_112_115_101_117_100_111_95_116_121_112_101_95_105_110_102_111_95_95_91_49_93_95_48_2_p_0(
#line 72 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__2_4)
#line 72 "rtti_implementation.m"
{
#line 1594 "rtti_implementation.m"
  {
#line 1595 "rtti_implementation.m"
    {
#line 1595 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "is_exist_pseudo_type_info/2");
    }
#line 1594 "rtti_implementation.m"
    return MR_TRUE;
#line 1594 "rtti_implementation.m"
  }
#line 72 "rtti_implementation.m"
}

#line 71 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_110_105_118_95_112_115_101_117_100_111_95_116_121_112_101_95_105_110_102_111_95_95_91_49_93_95_48_2_p_0(
#line 71 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__2_4)
#line 71 "rtti_implementation.m"
{
#line 1573 "rtti_implementation.m"
  {
#line 1574 "rtti_implementation.m"
    {
#line 1574 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "is_univ_pseudo_type_info/2");
    }
#line 1573 "rtti_implementation.m"
    return MR_TRUE;
#line 1573 "rtti_implementation.m"
  }
#line 71 "rtti_implementation.m"
}

#line 68 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_115_101_117_100_111_95_116_121_112_101_95_99_116_111_114_95_97_110_100_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(
#line 68 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_5,
#line 68 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__3_6)
#line 68 "rtti_implementation.m"
{
#line 1552 "rtti_implementation.m"
  {
#line 1553 "rtti_implementation.m"
    {
#line 1553 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "pseudo_type_ctor_and_args/3");
    }
#line 1552 "rtti_implementation.m"
    return MR_TRUE;
#line 1552 "rtti_implementation.m"
  }
#line 68 "rtti_implementation.m"
}

#line 55 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0(
#line 55 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_46,
#line 55 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Res_4)
#line 55 "rtti_implementation.m"
{
#line 672 "rtti_implementation.m"
  {
#line 672 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 672 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_7;
#line 672 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_8;
#line 672 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_9;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_47_47;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_46 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 13337 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_7  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_7 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 13358 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_8  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_8 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 13379 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_9  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 677 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__TypeCtorRep_9 == (MR_Integer) 30);
#line 680 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 679 "rtti_implementation.m"
      {
#line 679 "rtti_implementation.m"
        mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_109_112_97_114_101_95_116_117_112_108_101_95_95_91_49_44_32_52_44_32_53_93_95_48_4_p_0(mercury__rtti_implementation__TypeInfo_7, mercury__rtti_implementation__Res_4);
      }
#line 680 "rtti_implementation.m"
    else
#line 684 "rtti_implementation.m"
      {
#line 681 "rtti_implementation.m"
#line 681 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_9) {
#line 681 "rtti_implementation.m"
          default:
#line 681 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_FALSE;
#line 681 "rtti_implementation.m"
            break;
#line 681 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 681 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 681 "rtti_implementation.m"
            break;
#line 681 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 681 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 681 "rtti_implementation.m"
            break;
#line 681 "rtti_implementation.m"
        }
#line 684 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 683 "rtti_implementation.m"
          {
#line 683 "rtti_implementation.m"
            {
#line 683 "rtti_implementation.m"
              mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.generic_compare\'/3", (MR_String) "unimplemented: higher order comparisons");
#line 683 "rtti_implementation.m"
              return;
            }
#line 683 "rtti_implementation.m"
          }
#line 684 "rtti_implementation.m"
        else
#line 685 "rtti_implementation.m"
          {
#line 685 "rtti_implementation.m"
            MR_Integer mercury__rtti_implementation__Arity_10;

#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_8 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 13456 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity_10  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 687 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 0);
#line 689 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 879 "rtti_implementation.m"
              {
#line 879 "rtti_implementation.m"
                *mercury__rtti_implementation__Res_4 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13482 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                  {
#line 4167 "rtti_implementation.m"
                    {
#line 4167 "rtti_implementation.m"
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "result_call_4");
#line 4167 "rtti_implementation.m"
                      return;
                    }
#line 4167 "rtti_implementation.m"
                  }
#line 4168 "rtti_implementation.m"
                else
#line 4169 "rtti_implementation.m"
                  {
#line 4169 "rtti_implementation.m"
                  }
#line 879 "rtti_implementation.m"
              }
#line 689 "rtti_implementation.m"
            else
#line 692 "rtti_implementation.m"
              {
#line 689 "rtti_implementation.m"
                mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 1);
#line 692 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 690 "rtti_implementation.m"
                  {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13533 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                      {
#line 4167 "rtti_implementation.m"
                        {
#line 4167 "rtti_implementation.m"
                          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                          return;
                        }
#line 4167 "rtti_implementation.m"
                      }
#line 4168 "rtti_implementation.m"
                    else
#line 4169 "rtti_implementation.m"
                      {
#line 4169 "rtti_implementation.m"
                      }
#line 884 "rtti_implementation.m"
                    *mercury__rtti_implementation__Res_4 = (MR_Integer) 0;
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13574 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                      {
#line 4167 "rtti_implementation.m"
                        {
#line 4167 "rtti_implementation.m"
                          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "comparison_result");
#line 4167 "rtti_implementation.m"
                          return;
                        }
#line 4167 "rtti_implementation.m"
                      }
#line 4168 "rtti_implementation.m"
                    else
#line 4169 "rtti_implementation.m"
                      {
#line 4169 "rtti_implementation.m"
                      }
#line 690 "rtti_implementation.m"
                  }
#line 692 "rtti_implementation.m"
                else
#line 697 "rtti_implementation.m"
                  {
#line 692 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 2);
#line 697 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 693 "rtti_implementation.m"
                      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13625 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                          {
#line 4167 "rtti_implementation.m"
                            {
#line 4167 "rtti_implementation.m"
                              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                              return;
                            }
#line 4167 "rtti_implementation.m"
                          }
#line 4168 "rtti_implementation.m"
                        else
#line 4169 "rtti_implementation.m"
                          {
#line 4169 "rtti_implementation.m"
                          }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13664 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                          {
#line 4167 "rtti_implementation.m"
                            {
#line 4167 "rtti_implementation.m"
                              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                              return;
                            }
#line 4167 "rtti_implementation.m"
                          }
#line 4168 "rtti_implementation.m"
                        else
#line 4169 "rtti_implementation.m"
                          {
#line 4169 "rtti_implementation.m"
                          }
#line 693 "rtti_implementation.m"
                        {
#line 693 "rtti_implementation.m"
                          mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_54_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0(mercury__rtti_implementation__Res_4);
                        }
#line 693 "rtti_implementation.m"
                      }
#line 697 "rtti_implementation.m"
                    else
#line 703 "rtti_implementation.m"
                      {
#line 697 "rtti_implementation.m"
                        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 3);
#line 703 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 698 "rtti_implementation.m"
                          {
#line 700 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__V_22_22;
#line 701 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__V_23_23;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 13725 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                              {
#line 4167 "rtti_implementation.m"
                                {
#line 4167 "rtti_implementation.m"
                                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                                  return;
                                }
#line 4167 "rtti_implementation.m"
                              }
#line 4168 "rtti_implementation.m"
                            else
#line 4169 "rtti_implementation.m"
                              {
#line 4169 "rtti_implementation.m"
                              }
#line 700 "rtti_implementation.m"
                            {
#line 700 "rtti_implementation.m"
                              mercury__rtti_implementation__V_22_22 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                            }
#line 701 "rtti_implementation.m"
                            {
#line 701 "rtti_implementation.m"
                              mercury__rtti_implementation__V_23_23 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                            }
#line 698 "rtti_implementation.m"
                            {
#line 698 "rtti_implementation.m"
                              mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_55_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0(mercury__rtti_implementation__Res_4);
                            }
#line 698 "rtti_implementation.m"
                          }
#line 703 "rtti_implementation.m"
                        else
#line 710 "rtti_implementation.m"
                          {
#line 703 "rtti_implementation.m"
                            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 4);
#line 710 "rtti_implementation.m"
                            if (mercury__rtti_implementation__succeeded)
#line 704 "rtti_implementation.m"
                              {
#line 705 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_27_27;
#line 706 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_28_28;
#line 707 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_29_29;
#line 708 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_30_30;

#line 705 "rtti_implementation.m"
                                {
#line 705 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_27_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                }
#line 706 "rtti_implementation.m"
                                {
#line 706 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_28_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                }
#line 707 "rtti_implementation.m"
                                {
#line 707 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_29_29 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                }
#line 708 "rtti_implementation.m"
                                {
#line 708 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_30_30 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                }
#line 704 "rtti_implementation.m"
                                {
#line 704 "rtti_implementation.m"
                                  mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_56_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0(mercury__rtti_implementation__Res_4);
                                }
#line 704 "rtti_implementation.m"
                              }
#line 710 "rtti_implementation.m"
                            else
#line 718 "rtti_implementation.m"
                              {
#line 710 "rtti_implementation.m"
                                mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_10 == (MR_Integer) 5);
#line 718 "rtti_implementation.m"
                                if (mercury__rtti_implementation__succeeded)
#line 711 "rtti_implementation.m"
                                  {
#line 712 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_35_35;
#line 713 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_36_36;
#line 714 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_37_37;
#line 715 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_38_38;
#line 716 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_39_39;

#line 712 "rtti_implementation.m"
                                    {
#line 712 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_35_35 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                    }
#line 713 "rtti_implementation.m"
                                    {
#line 713 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_36_36 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                    }
#line 714 "rtti_implementation.m"
                                    {
#line 714 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_37_37 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                    }
#line 715 "rtti_implementation.m"
                                    {
#line 715 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_38_38 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                    }
#line 716 "rtti_implementation.m"
                                    {
#line 716 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_39_39 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_7);
                                    }
#line 711 "rtti_implementation.m"
                                    {
#line 711 "rtti_implementation.m"
                                      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_117_108_116_95_99_97_108_108_95_57_95_95_91_49_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_57_93_95_48_9_p_0(mercury__rtti_implementation__Res_4);
                                    }
#line 711 "rtti_implementation.m"
                                  }
#line 718 "rtti_implementation.m"
                                else
#line 719 "rtti_implementation.m"
                                  {
#line 719 "rtti_implementation.m"
                                    {
#line 719 "rtti_implementation.m"
                                      mercury__require__error_1_p_0((MR_String) "compare/3: type arity > 5 not supported");
#line 719 "rtti_implementation.m"
                                      return;
                                    }
#line 719 "rtti_implementation.m"
                                  }
#line 718 "rtti_implementation.m"
                              }
#line 710 "rtti_implementation.m"
                          }
#line 703 "rtti_implementation.m"
                      }
#line 697 "rtti_implementation.m"
                  }
#line 692 "rtti_implementation.m"
              }
#line 685 "rtti_implementation.m"
          }
#line 684 "rtti_implementation.m"
      }
#line 672 "rtti_implementation.m"
  }
#line 55 "rtti_implementation.m"
}

#line 53 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0(
#line 53 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_44)
#line 53 "rtti_implementation.m"
{
#line 723 "rtti_implementation.m"
  {
#line 723 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 723 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_5;
#line 723 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_6;
#line 723 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_7;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_45_45;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_44 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 13934 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_5  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_5 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 13955 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_6  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_6 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 13976 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_7  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 728 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__TypeCtorRep_7 == (MR_Integer) 30);
#line 731 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 730 "rtti_implementation.m"
      {
#line 730 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_102_121_95_116_117_112_108_101_95_95_91_49_44_32_51_44_32_52_93_95_48_3_p_0(mercury__rtti_implementation__TypeInfo_5);
      }
#line 731 "rtti_implementation.m"
    else
#line 735 "rtti_implementation.m"
      {
#line 732 "rtti_implementation.m"
#line 732 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_7) {
#line 732 "rtti_implementation.m"
          default:
#line 732 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_FALSE;
#line 732 "rtti_implementation.m"
            break;
#line 732 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 732 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 732 "rtti_implementation.m"
            break;
#line 732 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 732 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 732 "rtti_implementation.m"
            break;
#line 732 "rtti_implementation.m"
        }
#line 735 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 734 "rtti_implementation.m"
          {
#line 734 "rtti_implementation.m"
            {
#line 734 "rtti_implementation.m"
              mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.generic_unify\'/2", (MR_String) "unimplemented: higher order unification");
            }
#line 734 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 734 "rtti_implementation.m"
          }
#line 735 "rtti_implementation.m"
        else
#line 736 "rtti_implementation.m"
          {
#line 736 "rtti_implementation.m"
            MR_Integer mercury__rtti_implementation__Arity_8;

#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_6 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 14053 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity_8  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 738 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 0);
#line 740 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 852 "rtti_implementation.m"
              {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14077 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
                  {
#line 4158 "rtti_implementation.m"
                    {
#line 4158 "rtti_implementation.m"
                      mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_3");
                    }
#line 4158 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
                  }
#line 4159 "rtti_implementation.m"
                else
#line 74 "builtin.opt"
                  {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14114 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
                  }
#line 852 "rtti_implementation.m"
              }
#line 740 "rtti_implementation.m"
            else
#line 744 "rtti_implementation.m"
              {
#line 740 "rtti_implementation.m"
                mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 1);
#line 744 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 741 "rtti_implementation.m"
                  {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14148 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                      {
#line 4167 "rtti_implementation.m"
                        {
#line 4167 "rtti_implementation.m"
                          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                        }
#line 4167 "rtti_implementation.m"
                      }
#line 4168 "rtti_implementation.m"
                    else
#line 4169 "rtti_implementation.m"
                      {
#line 4169 "rtti_implementation.m"
                      }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14185 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
                      {
#line 4158 "rtti_implementation.m"
                        {
#line 4158 "rtti_implementation.m"
                          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_4");
                        }
#line 4158 "rtti_implementation.m"
                        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
                      }
#line 4159 "rtti_implementation.m"
                    else
#line 74 "builtin.opt"
                      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14222 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
                      }
#line 741 "rtti_implementation.m"
                  }
#line 744 "rtti_implementation.m"
                else
#line 749 "rtti_implementation.m"
                  {
#line 744 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 2);
#line 749 "rtti_implementation.m"
                    if (mercury__rtti_implementation__succeeded)
#line 745 "rtti_implementation.m"
                      {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14256 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                          {
#line 4167 "rtti_implementation.m"
                            {
#line 4167 "rtti_implementation.m"
                              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                            }
#line 4167 "rtti_implementation.m"
                          }
#line 4168 "rtti_implementation.m"
                        else
#line 4169 "rtti_implementation.m"
                          {
#line 4169 "rtti_implementation.m"
                          }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14293 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
                          {
#line 4167 "rtti_implementation.m"
                            {
#line 4167 "rtti_implementation.m"
                              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
                            }
#line 4167 "rtti_implementation.m"
                          }
#line 4168 "rtti_implementation.m"
                        else
#line 4169 "rtti_implementation.m"
                          {
#line 4169 "rtti_implementation.m"
                          }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14330 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4159 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 4158 "rtti_implementation.m"
                          {
#line 4158 "rtti_implementation.m"
                            {
#line 4158 "rtti_implementation.m"
                              mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "semidet_call_5");
                            }
#line 4158 "rtti_implementation.m"
                            mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4158 "rtti_implementation.m"
                          }
#line 4159 "rtti_implementation.m"
                        else
#line 74 "builtin.opt"
                          {
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 14367 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 74 "builtin.opt"
                          }
#line 745 "rtti_implementation.m"
                      }
#line 749 "rtti_implementation.m"
                    else
#line 755 "rtti_implementation.m"
                      {
#line 749 "rtti_implementation.m"
                        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 3);
#line 755 "rtti_implementation.m"
                        if (mercury__rtti_implementation__succeeded)
#line 750 "rtti_implementation.m"
                          {
#line 751 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__V_19_19;
#line 752 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__V_20_20;
#line 753 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__V_21_21;

#line 751 "rtti_implementation.m"
                            {
#line 751 "rtti_implementation.m"
                              mercury__rtti_implementation__V_19_19 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                            }
#line 752 "rtti_implementation.m"
                            {
#line 752 "rtti_implementation.m"
                              mercury__rtti_implementation__V_20_20 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                            }
#line 753 "rtti_implementation.m"
                            {
#line 753 "rtti_implementation.m"
                              mercury__rtti_implementation__V_21_21 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                            }
#line 750 "rtti_implementation.m"
                            {
#line 750 "rtti_implementation.m"
                              mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_93_95_48_6_p_0();
                            }
#line 750 "rtti_implementation.m"
                          }
#line 755 "rtti_implementation.m"
                        else
#line 762 "rtti_implementation.m"
                          {
#line 755 "rtti_implementation.m"
                            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 4);
#line 762 "rtti_implementation.m"
                            if (mercury__rtti_implementation__succeeded)
#line 756 "rtti_implementation.m"
                              {
#line 757 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_25_25;
#line 758 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_26_26;
#line 759 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_27_27;
#line 760 "rtti_implementation.m"
                                MR_Word mercury__rtti_implementation__V_28_28;

#line 757 "rtti_implementation.m"
                                {
#line 757 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_25_25 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                }
#line 758 "rtti_implementation.m"
                                {
#line 758 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_26_26 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                }
#line 759 "rtti_implementation.m"
                                {
#line 759 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_27_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                }
#line 760 "rtti_implementation.m"
                                {
#line 760 "rtti_implementation.m"
                                  mercury__rtti_implementation__V_28_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                }
#line 756 "rtti_implementation.m"
                                {
#line 756 "rtti_implementation.m"
                                  mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_93_95_48_7_p_0();
                                }
#line 756 "rtti_implementation.m"
                              }
#line 762 "rtti_implementation.m"
                            else
#line 770 "rtti_implementation.m"
                              {
#line 762 "rtti_implementation.m"
                                mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity_8 == (MR_Integer) 5);
#line 770 "rtti_implementation.m"
                                if (mercury__rtti_implementation__succeeded)
#line 763 "rtti_implementation.m"
                                  {
#line 764 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_33_33;
#line 765 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_34_34;
#line 766 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_35_35;
#line 767 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_36_36;
#line 768 "rtti_implementation.m"
                                    MR_Word mercury__rtti_implementation__V_37_37;

#line 764 "rtti_implementation.m"
                                    {
#line 764 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_33_33 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                    }
#line 765 "rtti_implementation.m"
                                    {
#line 765 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_34_34 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                    }
#line 766 "rtti_implementation.m"
                                    {
#line 766 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_35_35 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                    }
#line 767 "rtti_implementation.m"
                                    {
#line 767 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_36_36 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                    }
#line 768 "rtti_implementation.m"
                                    {
#line 768 "rtti_implementation.m"
                                      mercury__rtti_implementation__V_37_37 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_105_110_102_111_95_105_110_100_101_120_95_97_115_95_116_105_95_95_91_50_93_95_48_2_f_0(mercury__rtti_implementation__TypeInfo_5);
                                    }
#line 763 "rtti_implementation.m"
                                    {
#line 763 "rtti_implementation.m"
                                      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_109_105_100_101_116_95_99_97_108_108_95_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_8_p_0();
                                    }
#line 763 "rtti_implementation.m"
                                  }
#line 770 "rtti_implementation.m"
                                else
#line 771 "rtti_implementation.m"
                                  {
#line 771 "rtti_implementation.m"
                                    {
#line 771 "rtti_implementation.m"
                                      mercury__require__error_1_p_0((MR_String) "unify/2: type arity > 5 not supported");
                                    }
#line 771 "rtti_implementation.m"
                                    mercury__rtti_implementation__succeeded = MR_TRUE;
#line 771 "rtti_implementation.m"
                                  }
#line 770 "rtti_implementation.m"
                              }
#line 762 "rtti_implementation.m"
                          }
#line 755 "rtti_implementation.m"
                      }
#line 749 "rtti_implementation.m"
                  }
#line 744 "rtti_implementation.m"
              }
#line 736 "rtti_implementation.m"
          }
#line 735 "rtti_implementation.m"
      }
#line 723 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 723 "rtti_implementation.m"
  }
#line 53 "rtti_implementation.m"
}

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__4_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62)
#line 2706 "rtti_implementation.m"
{
#line 2706 "rtti_implementation.m"
  {
#line 2706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_64_64;

#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__V_64_64 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__LambdaHeadVar__1_61);
    }
#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__LambdaHeadVar__3_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 0) = ((MR_Box) (mercury__rtti_implementation__V_64_64));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 1) = ((MR_Box) (mercury__rtti_implementation__LambdaHeadVar__2_62));
#line 2707 "rtti_implementation.m"
    }
#line 2706 "rtti_implementation.m"
    return mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
  }
#line 2706 "rtti_implementation.m"
}

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__3_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62)
#line 2706 "rtti_implementation.m"
{
#line 2706 "rtti_implementation.m"
  {
#line 2706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_64_64;

#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__V_64_64 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__LambdaHeadVar__1_61);
    }
#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__LambdaHeadVar__3_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 0) = ((MR_Box) (mercury__rtti_implementation__V_64_64));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 1) = ((MR_Box) (mercury__rtti_implementation__LambdaHeadVar__2_62));
#line 2707 "rtti_implementation.m"
    }
#line 2706 "rtti_implementation.m"
    return mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
  }
#line 2706 "rtti_implementation.m"
}

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__2_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62)
#line 2706 "rtti_implementation.m"
{
#line 2706 "rtti_implementation.m"
  {
#line 2706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_64_64;

#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__V_64_64 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__LambdaHeadVar__1_61);
    }
#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__LambdaHeadVar__3_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 0) = ((MR_Box) (mercury__rtti_implementation__V_64_64));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 1) = ((MR_Box) (mercury__rtti_implementation__LambdaHeadVar__2_62));
#line 2707 "rtti_implementation.m"
    }
#line 2706 "rtti_implementation.m"
    return mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
  }
#line 2706 "rtti_implementation.m"
}

#line 2706 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__IntroducedFrom__func__deconstruct_2__2706__1_3_f_0(
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_127_127,
#line 2706 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__LambdaHeadVar__1_61,
#line 2706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__LambdaHeadVar__2_62)
#line 2706 "rtti_implementation.m"
{
#line 2706 "rtti_implementation.m"
  {
#line 2706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_64_64;

#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__V_64_64 = mercury__univ__univ_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__LambdaHeadVar__1_61);
    }
#line 2707 "rtti_implementation.m"
    {
#line 2707 "rtti_implementation.m"
      mercury__rtti_implementation__LambdaHeadVar__3_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 0) = ((MR_Box) (mercury__rtti_implementation__V_64_64));
#line 2707 "rtti_implementation.m"
      MR_hl_field(MR_mktag(1), mercury__rtti_implementation__LambdaHeadVar__3_63, 1) = ((MR_Box) (mercury__rtti_implementation__LambdaHeadVar__2_62));
#line 2707 "rtti_implementation.m"
    }
#line 2706 "rtti_implementation.m"
    return mercury__rtti_implementation__LambdaHeadVar__3_63;
#line 2706 "rtti_implementation.m"
  }
#line 2706 "rtti_implementation.m"
}

#line 848 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____unify_or_compare_pred_0_0(
#line 848 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1)
#line 848 "rtti_implementation.m"
{
#line 848 "rtti_implementation.m"
  {
#line 848 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 848 "rtti_implementation.m"
    {
#line 848 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__rtti_implementation__HeadVar__1_1);
    }
#line 848 "rtti_implementation.m"
  }
#line 848 "rtti_implementation.m"
}

#line 848 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____unify_or_compare_pred_0_0(void)
#line 848 "rtti_implementation.m"
{
#line 848 "rtti_implementation.m"
  {
#line 848 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 848 "rtti_implementation.m"
    {
#line 848 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_114_116_116_105_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_117_110_105_102_121_95_111_114_95_99_111_109_112_97_114_101_95_112_114_101_100_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 848 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 848 "rtti_implementation.m"
  }
#line 848 "rtti_implementation.m"
}

#line 3706 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____typeinfo_locn_0_0(
#line 3706 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3706 "rtti_implementation.m"
{
#line 3706 "rtti_implementation.m"
  {
#line 3706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3706 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3706 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3706 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3706 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 14788 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3706 "rtti_implementation.m"
    else
#line 3706 "rtti_implementation.m"
      {
#line 3706 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3706 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3706 "rtti_implementation.m"
        {
#line 3706 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3706 "rtti_implementation.m"
      }
#line 3706 "rtti_implementation.m"
  }
#line 3706 "rtti_implementation.m"
}

#line 3706 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeinfo_locn_0_0(
#line 3706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3706 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3706 "rtti_implementation.m"
{
#line 3706 "rtti_implementation.m"
  {
#line 3706 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3706 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3706 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3706 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3706 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3706 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3706 "rtti_implementation.m"
    else
#line 3706 "rtti_implementation.m"
      {
#line 3706 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3706 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 14844 "rtti_implementation.c"
        {
#line 14846 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3706 "rtti_implementation.m"
      }
#line 3706 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3706 "rtti_implementation.m"
  }
#line 3706 "rtti_implementation.m"
}

#line 210 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____typeclass_info_0_0(
#line 210 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 210 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 210 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 210 "rtti_implementation.m"
{
#line 210 "rtti_implementation.m"
  {
#line 210 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 210 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 210 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 210 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 210 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 14882 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "rtti_implementation.m"
    else
#line 210 "rtti_implementation.m"
      {
#line 210 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 210 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 210 "rtti_implementation.m"
        {
#line 210 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 210 "rtti_implementation.m"
      }
#line 210 "rtti_implementation.m"
  }
#line 210 "rtti_implementation.m"
}

#line 210 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____typeclass_info_0_0(
#line 210 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 210 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 210 "rtti_implementation.m"
{
#line 210 "rtti_implementation.m"
  {
#line 210 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 210 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 210 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 210 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 210 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 210 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 210 "rtti_implementation.m"
    else
#line 210 "rtti_implementation.m"
      {
#line 210 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 210 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 14938 "rtti_implementation.c"
        {
#line 14940 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 210 "rtti_implementation.m"
      }
#line 210 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 210 "rtti_implementation.m"
  }
#line 210 "rtti_implementation.m"
}

#line 197 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____type_layout_0_0(
#line 197 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 197 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 197 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 197 "rtti_implementation.m"
{
#line 197 "rtti_implementation.m"
  {
#line 197 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 197 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 197 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 197 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 197 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 14976 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "rtti_implementation.m"
    else
#line 197 "rtti_implementation.m"
      {
#line 197 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 197 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 197 "rtti_implementation.m"
        {
#line 197 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 197 "rtti_implementation.m"
      }
#line 197 "rtti_implementation.m"
  }
#line 197 "rtti_implementation.m"
}

#line 197 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_layout_0_0(
#line 197 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 197 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 197 "rtti_implementation.m"
{
#line 197 "rtti_implementation.m"
  {
#line 197 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 197 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 197 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 197 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 197 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 197 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 197 "rtti_implementation.m"
    else
#line 197 "rtti_implementation.m"
      {
#line 197 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 197 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15032 "rtti_implementation.c"
        {
#line 15034 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 197 "rtti_implementation.m"
      }
#line 197 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 197 "rtti_implementation.m"
  }
#line 197 "rtti_implementation.m"
}

#line 193 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____type_info_0_0(
#line 193 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 193 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 193 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 193 "rtti_implementation.m"
{
#line 193 "rtti_implementation.m"
  {
#line 193 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 193 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 193 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 193 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 193 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15070 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 193 "rtti_implementation.m"
    else
#line 193 "rtti_implementation.m"
      {
#line 193 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 193 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 193 "rtti_implementation.m"
        {
#line 193 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 193 "rtti_implementation.m"
      }
#line 193 "rtti_implementation.m"
  }
#line 193 "rtti_implementation.m"
}

#line 193 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_info_0_0(
#line 193 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 193 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 193 "rtti_implementation.m"
{
#line 193 "rtti_implementation.m"
  {
#line 193 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 193 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 193 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 193 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 193 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 193 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 193 "rtti_implementation.m"
    else
#line 193 "rtti_implementation.m"
      {
#line 193 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 193 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15126 "rtti_implementation.c"
        {
#line 15128 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 193 "rtti_implementation.m"
      }
#line 193 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 193 "rtti_implementation.m"
  }
#line 193 "rtti_implementation.m"
}

#line 4533 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____type_functors_0_0(
#line 4533 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 4533 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 4533 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 4533 "rtti_implementation.m"
{
#line 4533 "rtti_implementation.m"
  {
#line 4533 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4533 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 4533 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 4533 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 4533 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15164 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 4533 "rtti_implementation.m"
    else
#line 4533 "rtti_implementation.m"
      {
#line 4533 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 4533 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 4533 "rtti_implementation.m"
        {
#line 4533 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 4533 "rtti_implementation.m"
      }
#line 4533 "rtti_implementation.m"
  }
#line 4533 "rtti_implementation.m"
}

#line 4533 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_functors_0_0(
#line 4533 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 4533 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 4533 "rtti_implementation.m"
{
#line 4533 "rtti_implementation.m"
  {
#line 4533 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4533 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 4533 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 4533 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 4533 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4533 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4533 "rtti_implementation.m"
    else
#line 4533 "rtti_implementation.m"
      {
#line 4533 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 4533 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15220 "rtti_implementation.c"
        {
#line 15222 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 4533 "rtti_implementation.m"
      }
#line 4533 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4533 "rtti_implementation.m"
  }
#line 4533 "rtti_implementation.m"
}

#line 134 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_rep_0_0(
#line 134 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 134 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 134 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 134 "rtti_implementation.m"
{
#line 134 "rtti_implementation.m"
  {
#line 134 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 134 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Cast_HeadVar1_4 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 134 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Cast_HeadVar2_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Cast_HeadVar1_4 < mercury__rtti_implementation__Cast_HeadVar2_5);
#line 68 "private_builtin.opt"
    if (mercury__rtti_implementation__succeeded)
#line 71 "private_builtin.opt"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "private_builtin.opt"
    else
#line 73 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Cast_HeadVar1_4 == mercury__rtti_implementation__Cast_HeadVar2_5);
#line 73 "private_builtin.opt"
        if (mercury__rtti_implementation__succeeded)
#line 76 "private_builtin.opt"
          *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "private_builtin.opt"
      }
#line 134 "rtti_implementation.m"
  }
#line 134 "rtti_implementation.m"
}

#line 134 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_rep_0_0(
#line 134 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_1,
#line 134 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 134 "rtti_implementation.m"
{
#line 15290 "rtti_implementation.c"
  {
#line 15292 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__HeadVar__2_1 == mercury__rtti_implementation__HeadVar__2_2);

#line 15295 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 15297 "rtti_implementation.c"
  }
#line 134 "rtti_implementation.m"
}

#line 188 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____type_ctor_info_0_0(
#line 188 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 188 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 188 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 188 "rtti_implementation.m"
{
#line 188 "rtti_implementation.m"
  {
#line 188 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 188 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 188 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 188 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 188 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15326 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "rtti_implementation.m"
    else
#line 188 "rtti_implementation.m"
      {
#line 188 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 188 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 188 "rtti_implementation.m"
        {
#line 188 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 188 "rtti_implementation.m"
      }
#line 188 "rtti_implementation.m"
  }
#line 188 "rtti_implementation.m"
}

#line 188 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____type_ctor_info_0_0(
#line 188 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 188 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 188 "rtti_implementation.m"
{
#line 188 "rtti_implementation.m"
  {
#line 188 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 188 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 188 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 188 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 188 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 188 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 188 "rtti_implementation.m"
    else
#line 188 "rtti_implementation.m"
      {
#line 188 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 188 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15382 "rtti_implementation.c"
        {
#line 15384 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 188 "rtti_implementation.m"
      }
#line 188 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 188 "rtti_implementation.m"
  }
#line 188 "rtti_implementation.m"
}

#line 3673 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____sectag_locn_0_0(
#line 3673 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3673 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3673 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3673 "rtti_implementation.m"
{
#line 3673 "rtti_implementation.m"
  {
#line 3673 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3673 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Cast_HeadVar1_4 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3673 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Cast_HeadVar2_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Cast_HeadVar1_4 < mercury__rtti_implementation__Cast_HeadVar2_5);
#line 68 "private_builtin.opt"
    if (mercury__rtti_implementation__succeeded)
#line 71 "private_builtin.opt"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "private_builtin.opt"
    else
#line 73 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Cast_HeadVar1_4 == mercury__rtti_implementation__Cast_HeadVar2_5);
#line 73 "private_builtin.opt"
        if (mercury__rtti_implementation__succeeded)
#line 76 "private_builtin.opt"
          *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "private_builtin.opt"
      }
#line 3673 "rtti_implementation.m"
  }
#line 3673 "rtti_implementation.m"
}

#line 3673 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____sectag_locn_0_0(
#line 3673 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_1,
#line 3673 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3673 "rtti_implementation.m"
{
#line 15452 "rtti_implementation.c"
  {
#line 15454 "rtti_implementation.c"
    MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__HeadVar__2_1 == mercury__rtti_implementation__HeadVar__2_2);

#line 15457 "rtti_implementation.c"
    return mercury__rtti_implementation__succeeded;
#line 15459 "rtti_implementation.c"
  }
#line 3673 "rtti_implementation.m"
}

#line 3690 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____ptag_entry_0_0(
#line 3690 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3690 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3690 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3690 "rtti_implementation.m"
{
#line 3690 "rtti_implementation.m"
  {
#line 3690 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3690 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3690 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3690 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3690 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15488 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3690 "rtti_implementation.m"
    else
#line 3690 "rtti_implementation.m"
      {
#line 3690 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3690 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3690 "rtti_implementation.m"
        {
#line 3690 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3690 "rtti_implementation.m"
      }
#line 3690 "rtti_implementation.m"
  }
#line 3690 "rtti_implementation.m"
}

#line 3690 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____ptag_entry_0_0(
#line 3690 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3690 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3690 "rtti_implementation.m"
{
#line 3690 "rtti_implementation.m"
  {
#line 3690 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3690 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3690 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3690 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3690 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3690 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3690 "rtti_implementation.m"
    else
#line 3690 "rtti_implementation.m"
      {
#line 3690 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3690 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15544 "rtti_implementation.c"
        {
#line 15546 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3690 "rtti_implementation.m"
      }
#line 3690 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3690 "rtti_implementation.m"
  }
#line 3690 "rtti_implementation.m"
}

#line 205 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____pseudo_type_info_0_0(
#line 205 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 205 "rtti_implementation.m"
{
#line 205 "rtti_implementation.m"
  {
#line 205 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 205 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 205 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 205 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 205 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15582 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "rtti_implementation.m"
    else
#line 205 "rtti_implementation.m"
      {
#line 205 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_4_4 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 205 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_5_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 69 "private_builtin.opt"
        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_4_4 < mercury__rtti_implementation__V_5_5);
#line 68 "private_builtin.opt"
        if (mercury__rtti_implementation__succeeded)
#line 71 "private_builtin.opt"
          *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "private_builtin.opt"
        else
#line 73 "private_builtin.opt"
          {
#line 74 "private_builtin.opt"
            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_4_4 == mercury__rtti_implementation__V_5_5);
#line 73 "private_builtin.opt"
            if (mercury__rtti_implementation__succeeded)
#line 76 "private_builtin.opt"
              *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "private_builtin.opt"
            else
#line 78 "private_builtin.opt"
              *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "private_builtin.opt"
          }
#line 205 "rtti_implementation.m"
      }
#line 205 "rtti_implementation.m"
  }
#line 205 "rtti_implementation.m"
}

#line 205 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____pseudo_type_info_0_0(
#line 205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 205 "rtti_implementation.m"
{
#line 205 "rtti_implementation.m"
  {
#line 205 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 205 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 205 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 205 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 205 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 205 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 205 "rtti_implementation.m"
    else
#line 205 "rtti_implementation.m"
      {
#line 205 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_3_3 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 205 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_4_4 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 15655 "rtti_implementation.c"
        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_3_3 == mercury__rtti_implementation__V_4_4);
#line 205 "rtti_implementation.m"
      }
#line 205 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 205 "rtti_implementation.m"
  }
#line 205 "rtti_implementation.m"
}

#line 4557 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____notag_functor_desc_0_0(
#line 4557 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 4557 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 4557 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 4557 "rtti_implementation.m"
{
#line 4557 "rtti_implementation.m"
  {
#line 4557 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4557 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 4557 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 4557 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 4557 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15690 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 4557 "rtti_implementation.m"
    else
#line 4557 "rtti_implementation.m"
      {
#line 4557 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 4557 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 4557 "rtti_implementation.m"
        {
#line 4557 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 4557 "rtti_implementation.m"
      }
#line 4557 "rtti_implementation.m"
  }
#line 4557 "rtti_implementation.m"
}

#line 4557 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____notag_functor_desc_0_0(
#line 4557 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 4557 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 4557 "rtti_implementation.m"
{
#line 4557 "rtti_implementation.m"
  {
#line 4557 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4557 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 4557 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 4557 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 4557 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4557 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4557 "rtti_implementation.m"
    else
#line 4557 "rtti_implementation.m"
      {
#line 4557 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 4557 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15746 "rtti_implementation.c"
        {
#line 15748 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 4557 "rtti_implementation.m"
      }
#line 4557 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4557 "rtti_implementation.m"
  }
#line 4557 "rtti_implementation.m"
}

#line 4551 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____foreign_enum_functor_desc_0_0(
#line 4551 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 4551 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 4551 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 4551 "rtti_implementation.m"
{
#line 4551 "rtti_implementation.m"
  {
#line 4551 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4551 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 4551 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 4551 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 4551 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15784 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 4551 "rtti_implementation.m"
    else
#line 4551 "rtti_implementation.m"
      {
#line 4551 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 4551 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 4551 "rtti_implementation.m"
        {
#line 4551 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 4551 "rtti_implementation.m"
      }
#line 4551 "rtti_implementation.m"
  }
#line 4551 "rtti_implementation.m"
}

#line 4551 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____foreign_enum_functor_desc_0_0(
#line 4551 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 4551 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 4551 "rtti_implementation.m"
{
#line 4551 "rtti_implementation.m"
  {
#line 4551 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4551 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 4551 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 4551 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 4551 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4551 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4551 "rtti_implementation.m"
    else
#line 4551 "rtti_implementation.m"
      {
#line 4551 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 4551 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15840 "rtti_implementation.c"
        {
#line 15842 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 4551 "rtti_implementation.m"
      }
#line 4551 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4551 "rtti_implementation.m"
  }
#line 4551 "rtti_implementation.m"
}

#line 3702 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____exist_info_0_0(
#line 3702 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3702 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3702 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3702 "rtti_implementation.m"
{
#line 3702 "rtti_implementation.m"
  {
#line 3702 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3702 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3702 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3702 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3702 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15878 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3702 "rtti_implementation.m"
    else
#line 3702 "rtti_implementation.m"
      {
#line 3702 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3702 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3702 "rtti_implementation.m"
        {
#line 3702 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3702 "rtti_implementation.m"
      }
#line 3702 "rtti_implementation.m"
  }
#line 3702 "rtti_implementation.m"
}

#line 3702 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____exist_info_0_0(
#line 3702 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3702 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3702 "rtti_implementation.m"
{
#line 3702 "rtti_implementation.m"
  {
#line 3702 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3702 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3702 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3702 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3702 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3702 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3702 "rtti_implementation.m"
    else
#line 3702 "rtti_implementation.m"
      {
#line 3702 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3702 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 15934 "rtti_implementation.c"
        {
#line 15936 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3702 "rtti_implementation.m"
      }
#line 3702 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3702 "rtti_implementation.m"
  }
#line 3702 "rtti_implementation.m"
}

#line 4545 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____enum_functor_desc_0_0(
#line 4545 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 4545 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 4545 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 4545 "rtti_implementation.m"
{
#line 4545 "rtti_implementation.m"
  {
#line 4545 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4545 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 4545 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 4545 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 4545 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 15972 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 4545 "rtti_implementation.m"
    else
#line 4545 "rtti_implementation.m"
      {
#line 4545 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 4545 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 4545 "rtti_implementation.m"
        {
#line 4545 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 4545 "rtti_implementation.m"
      }
#line 4545 "rtti_implementation.m"
  }
#line 4545 "rtti_implementation.m"
}

#line 4545 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____enum_functor_desc_0_0(
#line 4545 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 4545 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 4545 "rtti_implementation.m"
{
#line 4545 "rtti_implementation.m"
  {
#line 4545 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4545 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 4545 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 4545 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 4545 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4545 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4545 "rtti_implementation.m"
    else
#line 4545 "rtti_implementation.m"
      {
#line 4545 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 4545 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 16028 "rtti_implementation.c"
        {
#line 16030 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 4545 "rtti_implementation.m"
      }
#line 4545 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4545 "rtti_implementation.m"
  }
#line 4545 "rtti_implementation.m"
}

#line 3685 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____du_sectag_alternatives_0_0(
#line 3685 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3685 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3685 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3685 "rtti_implementation.m"
{
#line 3685 "rtti_implementation.m"
  {
#line 3685 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3685 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3685 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3685 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3685 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 16066 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3685 "rtti_implementation.m"
    else
#line 3685 "rtti_implementation.m"
      {
#line 3685 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3685 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3685 "rtti_implementation.m"
        {
#line 3685 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3685 "rtti_implementation.m"
      }
#line 3685 "rtti_implementation.m"
  }
#line 3685 "rtti_implementation.m"
}

#line 3685 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_sectag_alternatives_0_0(
#line 3685 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3685 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3685 "rtti_implementation.m"
{
#line 3685 "rtti_implementation.m"
  {
#line 3685 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3685 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3685 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3685 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3685 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3685 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3685 "rtti_implementation.m"
    else
#line 3685 "rtti_implementation.m"
      {
#line 3685 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3685 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 16122 "rtti_implementation.c"
        {
#line 16124 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3685 "rtti_implementation.m"
      }
#line 3685 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3685 "rtti_implementation.m"
  }
#line 3685 "rtti_implementation.m"
}

#line 4539 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____du_functor_desc_0_0(
#line 4539 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 4539 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 4539 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 4539 "rtti_implementation.m"
{
#line 4539 "rtti_implementation.m"
  {
#line 4539 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4539 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 4539 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 4539 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 4539 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 16160 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 4539 "rtti_implementation.m"
    else
#line 4539 "rtti_implementation.m"
      {
#line 4539 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 4539 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 4539 "rtti_implementation.m"
        {
#line 4539 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 4539 "rtti_implementation.m"
      }
#line 4539 "rtti_implementation.m"
  }
#line 4539 "rtti_implementation.m"
}

#line 4539 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____du_functor_desc_0_0(
#line 4539 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 4539 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 4539 "rtti_implementation.m"
{
#line 4539 "rtti_implementation.m"
  {
#line 4539 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4539 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 4539 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 4539 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 4539 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4539 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4539 "rtti_implementation.m"
    else
#line 4539 "rtti_implementation.m"
      {
#line 4539 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 4539 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 16216 "rtti_implementation.c"
        {
#line 16218 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 4539 "rtti_implementation.m"
      }
#line 4539 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4539 "rtti_implementation.m"
  }
#line 4539 "rtti_implementation.m"
}

#line 3694 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____arg_types_0_0(
#line 3694 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3694 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3694 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3694 "rtti_implementation.m"
{
#line 3694 "rtti_implementation.m"
  {
#line 3694 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3694 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3694 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3694 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3694 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 16254 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3694 "rtti_implementation.m"
    else
#line 3694 "rtti_implementation.m"
      {
#line 3694 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3694 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3694 "rtti_implementation.m"
        {
#line 3694 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3694 "rtti_implementation.m"
      }
#line 3694 "rtti_implementation.m"
  }
#line 3694 "rtti_implementation.m"
}

#line 3694 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_types_0_0(
#line 3694 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3694 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3694 "rtti_implementation.m"
{
#line 3694 "rtti_implementation.m"
  {
#line 3694 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3694 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3694 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3694 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3694 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3694 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3694 "rtti_implementation.m"
    else
#line 3694 "rtti_implementation.m"
      {
#line 3694 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3694 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 16310 "rtti_implementation.c"
        {
#line 16312 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3694 "rtti_implementation.m"
      }
#line 3694 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3694 "rtti_implementation.m"
  }
#line 3694 "rtti_implementation.m"
}

#line 3698 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation____Compare____arg_names_0_0(
#line 3698 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__1_1,
#line 3698 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2,
#line 3698 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_3)
#line 3698 "rtti_implementation.m"
{
#line 3698 "rtti_implementation.m"
  {
#line 3698 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3698 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;
#line 3698 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_7 = (MR_Integer) mercury__rtti_implementation__HeadVar__3_3;

#line 3698 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_6 == mercury__rtti_implementation__CastY_7);
#line 3698 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 16348 "rtti_implementation.c"
      *mercury__rtti_implementation__HeadVar__1_1 = (MR_Integer) 0;
#line 3698 "rtti_implementation.m"
    else
#line 3698 "rtti_implementation.m"
      {
#line 3698 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;
#line 3698 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_5_5 = (MR_Word) mercury__rtti_implementation__HeadVar__3_3;

#line 3698 "rtti_implementation.m"
        {
#line 3698 "rtti_implementation.m"
          mercury__builtin____Compare____c_pointer_0_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__V_4_4, mercury__rtti_implementation__V_5_5);
        }
#line 3698 "rtti_implementation.m"
      }
#line 3698 "rtti_implementation.m"
  }
#line 3698 "rtti_implementation.m"
}

#line 3698 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation____Unify____arg_names_0_0(
#line 3698 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_1,
#line 3698 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__2_2)
#line 3698 "rtti_implementation.m"
{
#line 3698 "rtti_implementation.m"
  {
#line 3698 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3698 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastX_5 = (MR_Integer) mercury__rtti_implementation__HeadVar__1_1;
#line 3698 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__CastY_6 = (MR_Integer) mercury__rtti_implementation__HeadVar__2_2;

#line 3698 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__CastX_5 == mercury__rtti_implementation__CastY_6);
#line 3698 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 3698 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = MR_TRUE;
#line 3698 "rtti_implementation.m"
    else
#line 3698 "rtti_implementation.m"
      {
#line 3698 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_3_3 = (MR_Word) mercury__rtti_implementation__HeadVar__1_1;
#line 3698 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__V_4_4 = (MR_Word) mercury__rtti_implementation__HeadVar__2_2;

#line 16404 "rtti_implementation.c"
        {
#line 16406 "rtti_implementation.c"
          mercury__rtti_implementation__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__rtti_implementation__V_3_3, mercury__rtti_implementation__V_4_4);
        }
#line 3698 "rtti_implementation.m"
      }
#line 3698 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3698 "rtti_implementation.m"
  }
#line 3698 "rtti_implementation.m"
}

#line 5111 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__null_string_0_f_0(void)
#line 5111 "rtti_implementation.m"
{
#line 5112 "rtti_implementation.m"
  {
#line 5112 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 5112 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__Str_1;

#line 5115 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__null_string_0_f_0

	MR_String Str;

		{
#line 5115 "rtti_implementation.m"

    Str = NULL;

#line 16441 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Str_1  = Str;
#line 5115 "rtti_implementation.m"
}
#line 5112 "rtti_implementation.m"
    return mercury__rtti_implementation__Str_1;
#line 5112 "rtti_implementation.m"
  }
#line 5111 "rtti_implementation.m"
}

#line 5085 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__null_1_p_0(
#line 5085 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_4,
#line 5085 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1)
#line 5085 "rtti_implementation.m"
{
#line 5086 "rtti_implementation.m"
  {
#line 5086 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 5086 "rtti_implementation.m"
    {
#line 5086 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_108_108_95_95_91_49_93_95_48_1_p_0(mercury__rtti_implementation__HeadVar__1_1);
    }
#line 5086 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 5086 "rtti_implementation.m"
  }
#line 5085 "rtti_implementation.m"
}

#line 4483 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_ctor_search_functor_number_map_3_p_0(
#line 4483 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_4,
#line 4483 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__HeadVar__2_5,
#line 4483 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__3_6)
#line 4483 "rtti_implementation.m"
{
#line 4522 "rtti_implementation.m"
  {
#line 4522 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4522 "rtti_implementation.m"
    {
#line 4522 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_99_116_111_114_95_115_101_97_114_99_104_95_102_117_110_99_116_111_114_95_110_117_109_98_101_114_95_109_97_112_95_95_91_49_44_32_50_93_95_48_3_p_0(mercury__rtti_implementation__HeadVar__3_6);
    }
#line 4522 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 4522 "rtti_implementation.m"
  }
#line 4483 "rtti_implementation.m"
}

#line 4425 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__get_type_layout_1_f_0(
#line 4425 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4425 "rtti_implementation.m"
{
#line 4444 "rtti_implementation.m"
  {
#line 4444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeLayout_2;

#line 4447 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_layout_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeLayout;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4447 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeLayout = (MR_Word) &(MR_type_ctor_layout(tci));

#line 16537 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeLayout_2  = TypeLayout;
#line 4447 "rtti_implementation.m"
}
#line 4444 "rtti_implementation.m"
    return mercury__rtti_implementation__TypeLayout_2;
#line 4444 "rtti_implementation.m"
  }
#line 4425 "rtti_implementation.m"
}

#line 4338 "rtti_implementation.m"
MR_String MR_CALL 
mercury__rtti_implementation__type_ctor_name_1_f_0(
#line 4338 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4338 "rtti_implementation.m"
{
#line 4367 "rtti_implementation.m"
  {
#line 4367 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4367 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__Name_2;

#line 4370 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_1_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4370 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);

#line 16579 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Name_2  = Name;
#line 4370 "rtti_implementation.m"
}
#line 4367 "rtti_implementation.m"
    return mercury__rtti_implementation__Name_2;
#line 4367 "rtti_implementation.m"
  }
#line 4338 "rtti_implementation.m"
}

#line 4304 "rtti_implementation.m"
MR_String MR_CALL 
mercury__rtti_implementation__type_ctor_module_name_1_f_0(
#line 4304 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4304 "rtti_implementation.m"
{
#line 4325 "rtti_implementation.m"
  {
#line 4325 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4325 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__Name_2;

#line 4328 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_module_name_1_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4328 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);

#line 16621 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Name_2  = Name;
#line 4328 "rtti_implementation.m"
}
#line 4325 "rtti_implementation.m"
    return mercury__rtti_implementation__Name_2;
#line 4325 "rtti_implementation.m"
  }
#line 4304 "rtti_implementation.m"
}

#line 4272 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_rep_1_f_0(
#line 4272 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4272 "rtti_implementation.m"
{
#line 4292 "rtti_implementation.m"
  {
#line 4292 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4292 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_2;

#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_ctor_rep_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 16663 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_2  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 4292 "rtti_implementation.m"
    return mercury__rtti_implementation__TypeCtorRep_2;
#line 4292 "rtti_implementation.m"
  }
#line 4272 "rtti_implementation.m"
}

#line 4237 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__type_ctor_compare_pred_1_f_0(
#line 4237 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4237 "rtti_implementation.m"
{
#line 4250 "rtti_implementation.m"
  {
#line 4250 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4253 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_compare_pred_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word ComparePred;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4253 "rtti_implementation.m"

    MR_TypeCtorInfo tci;

    tci = (MR_TypeCtorInfo) TypeCtorInfo;
    ComparePred = (MR_Integer) tci->MR_type_ctor_compare_pred;

#line 16705 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
#line 4253 "rtti_implementation.m"
}
#line 4250 "rtti_implementation.m"
  }
#line 4237 "rtti_implementation.m"
}

#line 4205 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__type_ctor_unify_pred_1_f_0(
#line 4205 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4205 "rtti_implementation.m"
{
#line 4217 "rtti_implementation.m"
  {
#line 4217 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4220 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_unify_pred_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word UnifyPred;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4220 "rtti_implementation.m"

    MR_TypeCtorInfo tci;

    tci = (MR_TypeCtorInfo) TypeCtorInfo;
    UnifyPred = (MR_Integer) tci->MR_type_ctor_unify_pred;

#line 16744 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
#line 4220 "rtti_implementation.m"
}
#line 4217 "rtti_implementation.m"
  }
#line 4205 "rtti_implementation.m"
}

#line 4175 "rtti_implementation.m"
MR_Integer MR_CALL 
mercury__rtti_implementation__type_ctor_arity_1_f_0(
#line 4175 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_1)
#line 4175 "rtti_implementation.m"
{
#line 4193 "rtti_implementation.m"
  {
#line 4193 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4193 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Arity_2;

#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_arity_1_f_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_1 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 16783 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity_2  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 4193 "rtti_implementation.m"
    return mercury__rtti_implementation__Arity_2;
#line 4193 "rtti_implementation.m"
  }
#line 4175 "rtti_implementation.m"
}

#line 4011 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0(
#line 4011 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 4011 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Index_5)
#line 4011 "rtti_implementation.m"
{
#line 4016 "rtti_implementation.m"
  {
#line 4016 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4016 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__3_3;
#line 4017 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__V_6_6 = (mercury__rtti_implementation__Index_5 + (MR_Integer) 1);

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__var_arity_type_info_index_as_pti_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 16826 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index_as_pti");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 4074 "rtti_implementation.m"
    mercury__rtti_implementation__HeadVar__3_3 = (MR_Word) mercury__rtti_implementation__TypeInfo_4;
#line 4016 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__3_3;
#line 4016 "rtti_implementation.m"
  }
#line 4011 "rtti_implementation.m"
}

#line 4010 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(
#line 4010 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 4010 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Index_5)
#line 4010 "rtti_implementation.m"
{
#line 4013 "rtti_implementation.m"
  {
#line 4013 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 4013 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__3_3 = mercury__rtti_implementation__TypeInfo_4;
#line 4014 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__V_6_6 = (mercury__rtti_implementation__Index_5 + (MR_Integer) 1);

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 16890 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
      {
#line 4167 "rtti_implementation.m"
        {
#line 4167 "rtti_implementation.m"
          mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
        }
#line 4167 "rtti_implementation.m"
      }
#line 4168 "rtti_implementation.m"
    else
#line 4169 "rtti_implementation.m"
      {
#line 4169 "rtti_implementation.m"
      }
#line 4013 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__3_3;
#line 4013 "rtti_implementation.m"
  }
#line 4010 "rtti_implementation.m"
}

#line 3579 "rtti_implementation.m"
static MR_bool MR_CALL 
mercury__rtti_implementation__same_pointer_value_untyped_2_p_0(
#line 3579 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_6,
#line 3579 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_U_7,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__1_1,
#line 3579 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__HeadVar__2_2)
#line 3579 "rtti_implementation.m"
{
#line 3590 "rtti_implementation.m"
  {
#line 3590 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 3590 "rtti_implementation.m"
    {
#line 3590 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_111_105_110_116_101_114_95_118_97_108_117_101_95_117_110_116_121_112_101_100_95_95_91_49_44_32_50_93_95_48_2_p_0(mercury__rtti_implementation__HeadVar__1_1, mercury__rtti_implementation__HeadVar__2_2);
    }
#line 3590 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 3590 "rtti_implementation.m"
  }
#line 3579 "rtti_implementation.m"
}

#line 3382 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__null_functor_desc_0_f_0(void)
#line 3382 "rtti_implementation.m"
{
#line 3395 "rtti_implementation.m"
  {
#line 3395 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3395 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__NullFunctorDesc_1;

#line 3398 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__null_functor_desc_0_f_0

	MR_Word NullFunctorDesc;

		{
#line 3398 "rtti_implementation.m"

    NullFunctorDesc = (MR_Word) NULL;

#line 16976 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__NullFunctorDesc_1  = NullFunctorDesc;
#line 3398 "rtti_implementation.m"
}
#line 3395 "rtti_implementation.m"
    return mercury__rtti_implementation__NullFunctorDesc_1;
#line 3395 "rtti_implementation.m"
  }
#line 3382 "rtti_implementation.m"
}

#line 2994 "rtti_implementation.m"
static MR_String MR_CALL 
mercury__rtti_implementation__expand_type_name_2_f_0(
#line 2994 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_4,
#line 2994 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__Wrap_5)
#line 2994 "rtti_implementation.m"
{
#line 2996 "rtti_implementation.m"
  {
#line 2996 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__Name_6;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__LeftWrapper_7;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__RightWrapper_8;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_14_14;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_17_17;
#line 2996 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__V_20_20;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_24_24;
#line 2996 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_30_30;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_31_31;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_38_38;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_40_40;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_41_41;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_48_48;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_50_50;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_51_51;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_58_58;
#line 2996 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_59_59;
#line 2996 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_7_78;
#line 2996 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_8_79;
#line 2996 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_7_83;
#line 2996 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__V_8_84;

#line 3001 "rtti_implementation.m"
#line 3001 "rtti_implementation.m"
    switch (mercury__rtti_implementation__Wrap_5) {
#line 3001 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3001 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 3002 "rtti_implementation.m"
        {
#line 3003 "rtti_implementation.m"
          mercury__rtti_implementation__LeftWrapper_7 = (MR_String) "";
#line 3004 "rtti_implementation.m"
          mercury__rtti_implementation__RightWrapper_8 = (MR_String) "";
#line 3002 "rtti_implementation.m"
        }
#line 3001 "rtti_implementation.m"
        break;
#line 3001 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 2998 "rtti_implementation.m"
        {
#line 2999 "rtti_implementation.m"
          mercury__rtti_implementation__LeftWrapper_7 = (MR_String) "<<";
#line 3000 "rtti_implementation.m"
          mercury__rtti_implementation__RightWrapper_8 = (MR_String) ">>";
#line 2998 "rtti_implementation.m"
        }
#line 3001 "rtti_implementation.m"
        break;
#line 3001 "rtti_implementation.m"
    }
#line 4328 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__expand_type_name_2_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_4 ;
		{
#line 4328 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);

#line 17091 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_14_14  = Name;
#line 4328 "rtti_implementation.m"
}
#line 4370 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__expand_type_name_2_f_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_4 ;
		{
#line 4370 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);

#line 17112 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_17_17  = Name;
#line 4370 "rtti_implementation.m"
}
#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__expand_type_name_2_f_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_4 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 17133 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_20_20  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 17140 "rtti_implementation.c"
    mercury__rtti_implementation__V_30_30 = (MR_Word) &mercury__rtti_implementation_scalar_common_5[0];
#line 83 "string.format.opt"
    mercury__rtti_implementation__V_7_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "string.format.opt"
    mercury__rtti_implementation__V_8_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "string.format.opt"
    {
#line 85 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__rtti_implementation__V_30_30, mercury__rtti_implementation__V_7_78, mercury__rtti_implementation__V_8_79, mercury__rtti_implementation__RightWrapper_8, &mercury__rtti_implementation__V_24_24);
    }
#line 63 "string.format.opt"
    mercury__rtti_implementation__V_7_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "string.format.opt"
    mercury__rtti_implementation__V_8_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 65 "string.format.opt"
    {
#line 65 "string.format.opt"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__rtti_implementation__V_30_30, mercury__rtti_implementation__V_7_83, mercury__rtti_implementation__V_8_84, mercury__rtti_implementation__V_20_20, &mercury__rtti_implementation__V_31_31);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2(mercury__rtti_implementation__V_31_31, mercury__rtti_implementation__V_24_24, &mercury__rtti_implementation__V_38_38);
    }
#line 157 "string.opt"
    {
#line 157 "string.opt"
      mercury__string__append_3_p_2((MR_String) "/", mercury__rtti_implementation__V_38_38, &mercury__rtti_implementation__V_40_40);
    }
#line 3009 "rtti_implementation.m"
    {
#line 3009 "rtti_implementation.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__rtti_implementation__V_30_30, mercury__rtti_implementation__V_17_17, &mercury__rtti_implementation__V_41_41);
    }
#line 3006 "rtti_implementation.m"
    {
#line 3006 "rtti_implementation.m"
      mercury__rtti_implementation__V_48_48 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__V_41_41, mercury__rtti_implementation__V_40_40);
    }
#line 3006 "rtti_implementation.m"
    {
#line 3006 "rtti_implementation.m"
      mercury__rtti_implementation__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ".", mercury__rtti_implementation__V_48_48);
    }
#line 3008 "rtti_implementation.m"
    {
#line 3008 "rtti_implementation.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__rtti_implementation__V_30_30, mercury__rtti_implementation__V_14_14, &mercury__rtti_implementation__V_51_51);
    }
#line 3006 "rtti_implementation.m"
    {
#line 3006 "rtti_implementation.m"
      mercury__rtti_implementation__V_58_58 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__V_51_51, mercury__rtti_implementation__V_50_50);
    }
#line 3007 "rtti_implementation.m"
    {
#line 3007 "rtti_implementation.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mercury__rtti_implementation__V_30_30, mercury__rtti_implementation__LeftWrapper_7, &mercury__rtti_implementation__V_59_59);
    }
#line 3006 "rtti_implementation.m"
    {
#line 3006 "rtti_implementation.m"
      mercury__rtti_implementation__Name_6 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__V_59_59, mercury__rtti_implementation__V_58_58);
    }
#line 2996 "rtti_implementation.m"
    return mercury__rtti_implementation__Name_6;
#line 2996 "rtti_implementation.m"
  }
#line 2994 "rtti_implementation.m"
}

#line 2953 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__handle_usereq_type_9_p_3(
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_24,
#line 2953 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2953 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2953 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2953 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2953 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2953 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2953 "rtti_implementation.m"
{
#line 2961 "rtti_implementation.m"
  {
#line 2961 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2961 "rtti_implementation.m"
#line 2961 "rtti_implementation.m"
    switch (mercury__rtti_implementation__NonCanon_14) {
#line 2961 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2961 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 2962 "rtti_implementation.m"
        {
#line 2963 "rtti_implementation.m"
          {
#line 2963 "rtti_implementation.m"
            *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__expand_type_name_2_f_0(mercury__rtti_implementation__TypeCtorInfo_12, (MR_Integer) 1);
          }
#line 2964 "rtti_implementation.m"
          *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2965 "rtti_implementation.m"
          *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2966 "rtti_implementation.m"
          *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2962 "rtti_implementation.m"
        }
#line 2961 "rtti_implementation.m"
        break;
#line 2961 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 2959 "rtti_implementation.m"
        {
#line 2960 "rtti_implementation.m"
          {
#line 2960 "rtti_implementation.m"
            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.handle_usereq_type\'/9", (MR_String) "attempt to deconstruct noncanonical term");
#line 2960 "rtti_implementation.m"
            return;
          }
#line 2959 "rtti_implementation.m"
        }
#line 2961 "rtti_implementation.m"
        break;
#line 2961 "rtti_implementation.m"
      case (MR_Integer) 2:
#line 2968 "rtti_implementation.m"
        {
#line 2968 "rtti_implementation.m"
          MR_Word mercury__rtti_implementation__BaseTypeCtorRep_19;

#line 2972 "rtti_implementation.m"
#line 2972 "rtti_implementation.m"
          switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2972 "rtti_implementation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 3:
#line 2977 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 2;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 1:
#line 2971 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 0;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 45:
#line 2974 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 44;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 28:
#line 2983 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 27;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 5:
#line 2980 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 4;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
            case (MR_Integer) 32:
#line 2986 "rtti_implementation.m"
              mercury__rtti_implementation__BaseTypeCtorRep_19 = (MR_Integer) 31;
#line 2972 "rtti_implementation.m"
              break;
#line 2972 "rtti_implementation.m"
          }
#line 2988 "rtti_implementation.m"
          {
#line 2988 "rtti_implementation.m"
            mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_24, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__BaseTypeCtorRep_19, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
          }
#line 2968 "rtti_implementation.m"
        }
#line 2961 "rtti_implementation.m"
        break;
#line 2961 "rtti_implementation.m"
    }
#line 2961 "rtti_implementation.m"
  }
#line 2953 "rtti_implementation.m"
}

#line 2927 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__det_dynamic_cast_2_p_0(
#line 2927 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_6,
#line 2927 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_U_7,
#line 2927 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_3,
#line 2927 "rtti_implementation.m"
  MR_Box * mercury__rtti_implementation__Actual_4)
#line 2927 "rtti_implementation.m"
{
#line 2929 "rtti_implementation.m"
  {
#line 2929 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2929 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__Univ_5;

#line 2930 "rtti_implementation.m"
    {
#line 2930 "rtti_implementation.m"
      mercury__univ__type_to_univ_2_p_1(mercury__rtti_implementation__TypeInfo_for_T_6, mercury__rtti_implementation__Term_3, &mercury__rtti_implementation__Univ_5);
    }
#line 2931 "rtti_implementation.m"
    {
#line 2931 "rtti_implementation.m"
      mercury__univ__det_univ_to_type_2_p_0(mercury__rtti_implementation__TypeInfo_for_U_7, mercury__rtti_implementation__Univ_5, mercury__rtti_implementation__Actual_4);
    }
#line 2929 "rtti_implementation.m"
  }
#line 2927 "rtti_implementation.m"
}

#line 2818 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_2(
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_36,
#line 2818 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_8,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2818 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_12,
#line 2818 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2818 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2818 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  {
#line 2837 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
    {
#line 2837 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_50_7_p_2(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_13, mercury__rtti_implementation__MaybeArgument_14);
    }
#line 2837 "rtti_implementation.m"
  }
#line 2818 "rtti_implementation.m"
}

#line 2817 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_1(
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_36,
#line 2817 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_8,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2817 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_12,
#line 2817 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2817 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2817 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  {
#line 2837 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
    {
#line 2837 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_49_7_p_1(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_13, mercury__rtti_implementation__MaybeArgument_14);
    }
#line 2837 "rtti_implementation.m"
  }
#line 2817 "rtti_implementation.m"
}

#line 2816 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__univ_named_arg_2_7_p_0(
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_36,
#line 2816 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_8,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_9,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_10,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_11,
#line 2816 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_12,
#line 2816 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_13,
#line 2816 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__MaybeArgument_14)
#line 2816 "rtti_implementation.m"
{
#line 2837 "rtti_implementation.m"
  {
#line 2837 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2837 "rtti_implementation.m"
    {
#line 2837 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_50_95_95_91_49_44_32_50_44_32_54_93_95_48_7_p_0(mercury__rtti_implementation__TypeInfo_9, mercury__rtti_implementation__TypeCtorInfo_10, mercury__rtti_implementation__TypeCtorRep_11, mercury__rtti_implementation__Name_13, mercury__rtti_implementation__MaybeArgument_14);
    }
#line 2837 "rtti_implementation.m"
  }
#line 2816 "rtti_implementation.m"
}

#line 2479 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_3(
#line 2479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2479 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2479 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2479 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2479 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2479 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2479 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2479 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  while (MR_TRUE)
#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 2492 "rtti_implementation.m"
      {
#line 2492 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
#line 2492 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_13) {
#line 2492 "rtti_implementation.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 18:
#line 2690 "rtti_implementation.m"
            {
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_127_127;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_128_128;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeInfo_129_129;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__Args_47;
#line 2690 "rtti_implementation.m"
              MR_ArrayPtr mercury__rtti_implementation__Array_50;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_55_55;
#line 2690 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_65_65;
#line 2693 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__V_131_131;
#line 2693 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_46_46;
#line 2697 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ElemType_48;
#line 2694 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_56_56;
#line 2701 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv0_Array_50;

#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__rtti_implementation__V_55_55 = mercury__type_desc__type_of_1_f_0(mercury__rtti_implementation__TypeInfo_for_T_112);
              }
#line 2693 "rtti_implementation.m"
              {
#line 2693 "rtti_implementation.m"
                mercury__type_desc__type_ctor_and_args_3_p_0(mercury__rtti_implementation__V_55_55, &mercury__rtti_implementation__V_46_46, &mercury__rtti_implementation__Args_47);
              }
#line 2694 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = ((MR_tag((MR_Word) mercury__rtti_implementation__Args_47)) == (MR_mktag((MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2694 "rtti_implementation.m"
                {
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__ElemType_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 0)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtti_implementation__Args_47, (MR_Integer) 1)));
#line 2694 "rtti_implementation.m"
                  mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2694 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              if (mercury__rtti_implementation__succeeded)
#line 2695 "rtti_implementation.m"
                {
#line 2695 "rtti_implementation.m"
                  MR_Box mercury__rtti_implementation__Elem_49;

#line 2695 "rtti_implementation.m"
                  {
#line 2695 "rtti_implementation.m"
                    mercury__type_desc__has_type_2_p_0(&mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__ElemType_48);
                  }
#line 2695 "rtti_implementation.m"
                }
#line 2697 "rtti_implementation.m"
              else
#line 2698 "rtti_implementation.m"
                {
#line 2698 "rtti_implementation.m"
                  {
#line 2698 "rtti_implementation.m"
                    mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "array without a type_ctor arg");
#line 2698 "rtti_implementation.m"
                    return;
                  }
#line 2698 "rtti_implementation.m"
                }
#line 17611 "rtti_implementation.c"
              mercury__rtti_implementation__TypeCtorInfo_128_128 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 17613 "rtti_implementation.c"
              {
#line 17615 "rtti_implementation.c"
                mercury__rtti_implementation__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17617 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 0) = ((MR_Box) (mercury__rtti_implementation__TypeCtorInfo_128_128));
#line 17619 "rtti_implementation.c"
                MR_hl_field(MR_mktag(0), mercury__rtti_implementation__TypeInfo_129_129, 1) = ((MR_Box) (mercury__rtti_implementation__TypeInfo_127_127));
#line 17621 "rtti_implementation.c"
              }
#line 2701 "rtti_implementation.m"
              {
#line 2701 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeInfo_129_129, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv0_Array_50);
              }
#line 2701 "rtti_implementation.m"
              mercury__rtti_implementation__Array_50 = ((MR_ArrayPtr) mercury__rtti_implementation__conv0_Array_50);
#line 2703 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<array>>";
#line 2704 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2705 "rtti_implementation.m"
              {
#line 2705 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__array__size_1_f_0(mercury__rtti_implementation__TypeInfo_127_127, (MR_ArrayPtr) mercury__rtti_implementation__Array_50);
              }
#line 2708 "rtti_implementation.m"
              mercury__rtti_implementation__V_65_65 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2706 "rtti_implementation.m"
              {
#line 2706 "rtti_implementation.m"
                *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_50_44_32_51_93_95_48_3_f_in__array_0(mercury__rtti_implementation__TypeInfo_127_127, mercury__rtti_implementation__Array_50, mercury__rtti_implementation__V_65_65);
              }
#line 2690 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 34:
#line 2779 "rtti_implementation.m"
            {
#line 2766 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<basetypeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 43:
#line 2637 "rtti_implementation.m"
            {
#line 2637 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_120_120 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 2637 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__Bitmap_36;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_79_79;
#line 2637 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_104;
#line 2638 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv1_Bitmap_36;

#line 2638 "rtti_implementation.m"
              {
#line 2638 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_120_120, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv1_Bitmap_36);
              }
#line 2638 "rtti_implementation.m"
              mercury__rtti_implementation__Bitmap_36 = ((MR_Box) mercury__rtti_implementation__conv1_Bitmap_36);
#line 2639 "rtti_implementation.m"
              {
#line 2639 "rtti_implementation.m"
                mercury__rtti_implementation__String_104 = mercury__bitmap__to_string_1_f_0(mercury__rtti_implementation__Bitmap_36);
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                mercury__rtti_implementation__V_79_79 = mercury__string__f_43_43_2_f_0(mercury__rtti_implementation__String_104, (MR_String) "\"");
              }
#line 2640 "rtti_implementation.m"
              {
#line 2640 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "\"", mercury__rtti_implementation__V_79_79);
              }
#line 2641 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2642 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2643 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2637 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 15:
#line 2676 "rtti_implementation.m"
            {
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_125_125 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2676 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_45;
#line 2677 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv2_CPtr_45;

#line 2677 "rtti_implementation.m"
              {
#line 2677 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_125_125, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv2_CPtr_45);
              }
#line 2677 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_45 = ((MR_Word) mercury__rtti_implementation__conv2_CPtr_45);
#line 2678 "rtti_implementation.m"
              {
#line 2678 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_45);
              }
#line 2679 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2680 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2681 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2676 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 9:
#line 2616 "rtti_implementation.m"
            {
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_117_117 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2616 "rtti_implementation.m"
              MR_Char mercury__rtti_implementation__Char_33;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_87_87;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_89_89;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_90_90;
#line 2616 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_92_92;
#line 2617 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv3_Char_33;

#line 2617 "rtti_implementation.m"
              {
#line 2617 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_117_117, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv3_Char_33);
              }
#line 2617 "rtti_implementation.m"
              mercury__rtti_implementation__Char_33 = ((MR_Char) (MR_Word) mercury__rtti_implementation__conv3_Char_33);
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_92_92 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2618 "rtti_implementation.m"
              mercury__rtti_implementation__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[0]);
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 0) = ((MR_Box) (MR_Word) (mercury__rtti_implementation__Char_33));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_89_89, 1) = ((MR_Box) (mercury__rtti_implementation__V_90_90));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                mercury__rtti_implementation__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Char) 39));
#line 2618 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_87_87, 1) = ((MR_Box) (mercury__rtti_implementation__V_89_89));
#line 2618 "rtti_implementation.m"
              }
#line 2618 "rtti_implementation.m"
              {
#line 2618 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__from_char_list_1_f_0(mercury__rtti_implementation__V_87_87);
              }
#line 2619 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2620 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2621 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2616 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 21:
#line 2734 "rtti_implementation.m"
            {
#line 2718 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<curfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 2528 "rtti_implementation.m"
            {
#line 2528 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__SecTagLocn_26;
#line 2531 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__PTag_24;
#line 2532 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__PTagEntry_25;

#line 2531 "rtti_implementation.m"
              {
#line 2531 "rtti_implementation.m"
                mercury__rtti_implementation__PTag_24 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_112_114_105_109_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2532 "rtti_implementation.m"
              {
#line 2532 "rtti_implementation.m"
                mercury__rtti_implementation__PTagEntry_25 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_116_97_103_95_105_110_100_101_120_95_95_91_49_44_32_50_93_95_48_2_f_0();
              }
#line 2533 "rtti_implementation.m"
              {
#line 2533 "rtti_implementation.m"
                mercury__rtti_implementation__SecTagLocn_26 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_99_116_97_103_95_108_111_99_110_95_95_91_49_93_95_48_1_f_0();
              }
#line 2551 "rtti_implementation.m"
#line 2551 "rtti_implementation.m"
              switch (mercury__rtti_implementation__SecTagLocn_26) {
#line 2551 "rtti_implementation.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 2:
#line 2552 "rtti_implementation.m"
                  {
#line 2553 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_local_sectag";
#line 2555 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2556 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2557 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2552 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 0:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_96_96;
#line 2537 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_27;

#line 2537 "rtti_implementation.m"
                    {
#line 2537 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_27 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_96_96 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_96_96);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 1:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_136_136;
#line 2540 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_134;

#line 2540 "rtti_implementation.m"
                    {
#line 2540 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_134 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_136_136 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_136_136);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 3:
#line 2545 "rtti_implementation.m"
                  {
#line 2545 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__V_144_144;
#line 2543 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__SecTag_28;
#line 2544 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__FunctorDesc_142;

#line 2543 "rtti_implementation.m"
                    {
#line 2543 "rtti_implementation.m"
                      mercury__rtti_implementation__SecTag_28 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_114_101_109_111_116_101_95_115_101_99_111_110_100_97_114_121_95_116_97_103_95_95_91_49_44_32_50_93_95_48_1_f_0();
                    }
#line 2544 "rtti_implementation.m"
                    {
#line 2544 "rtti_implementation.m"
                      mercury__rtti_implementation__FunctorDesc_142 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_115_101_99_116_97_103_95_97_108_116_101_114_110_97_116_105_118_101_115_95_95_91_49_44_32_50_93_95_48_2_f_0();
                    }
#line 2546 "rtti_implementation.m"
                    {
#line 2546 "rtti_implementation.m"
                      *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2547 "rtti_implementation.m"
                    {
#line 2547 "rtti_implementation.m"
                      *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2548 "rtti_implementation.m"
                    {
#line 2548 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_117_95_102_117_110_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
                    }
#line 2549 "rtti_implementation.m"
                    mercury__rtti_implementation__V_144_144 = (*mercury__rtti_implementation__Arity_17 - (MR_Integer) 1);
#line 2549 "rtti_implementation.m"
                    {
#line 2549 "rtti_implementation.m"
                      *mercury__rtti_implementation__Arguments_18 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_51_95_95_91_49_44_32_50_44_32_52_44_32_56_93_95_48_3_f_0(mercury__rtti_implementation__SecTagLocn_26, mercury__rtti_implementation__TypeInfo_11, (MR_Integer) 0, mercury__rtti_implementation__V_144_144);
                    }
#line 2545 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
                case (MR_Integer) 4:
#line 2559 "rtti_implementation.m"
                  {
#line 2560 "rtti_implementation.m"
                    *mercury__rtti_implementation__Functor_15 = (MR_String) "some_du_variable_sectag";
#line 2561 "rtti_implementation.m"
                    *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2562 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2563 "rtti_implementation.m"
                    *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2559 "rtti_implementation.m"
                  }
#line 2551 "rtti_implementation.m"
                  break;
#line 2551 "rtti_implementation.m"
              }
#line 2528 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 2525 "rtti_implementation.m"
            {
#line 2525 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 2515 "rtti_implementation.m"
            {
#line 2517 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_103;

#line 2517 "rtti_implementation.m"
              {
#line 2517 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_103 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2519 "rtti_implementation.m"
              {
#line 2519 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2520 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2521 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2522 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 2493 "rtti_implementation.m"
            {
#line 2496 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_101_101;
#line 2495 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__EnumFunctorDesc_20;

#line 2496 "rtti_implementation.m"
              {
#line 2496 "rtti_implementation.m"
                mercury__rtti_implementation__V_101_101 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2495 "rtti_implementation.m"
              {
#line 2495 "rtti_implementation.m"
                mercury__rtti_implementation__EnumFunctorDesc_20 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_102_114_111_109_95_108_97_121_111_117_116_95_101_110_117_109_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2497 "rtti_implementation.m"
              {
#line 2497 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2498 "rtti_implementation.m"
              {
#line 2498 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2499 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2500 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2493 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 2490 "rtti_implementation.m"
            {
#line 2490 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 2602 "rtti_implementation.m"
            {
#line 2604 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_equiv";
#line 2605 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2606 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2607 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2602 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 2588 "rtti_implementation.m"
            {
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeInfo_29;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2588 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2589 "rtti_implementation.m"
              {
#line 2589 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeInfo_29 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_11);
              }
#line 2590 "rtti_implementation.m"
              {
#line 2590 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorInfo_30 = mercury__rtti_implementation__get_type_ctor_info_1_f_0(mercury__rtti_implementation__NewTypeInfo_29);
              }
#line 2591 "rtti_implementation.m"
              {
#line 2591 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeCtorRep_31 = mercury__rtti_implementation__get_type_ctor_rep_1_f_0(mercury__rtti_implementation__NewTypeCtorInfo_30);
              }
#line 2592 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 2592 "rtti_implementation.m"
              {
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_11 = mercury__rtti_implementation__NewTypeInfo_29;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12 = mercury__rtti_implementation__NewTypeCtorInfo_30;
#line 2592 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorRep__tmp_copy_13 = mercury__rtti_implementation__NewTypeCtorRep_31;

#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorRep_13 = mercury__rtti_implementation__TypeCtorRep__tmp_copy_13;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeCtorInfo_12 = mercury__rtti_implementation__TypeCtorInfo__tmp_copy_12;
#line 2592 "rtti_implementation.m"
                mercury__rtti_implementation__TypeInfo_11 = mercury__rtti_implementation__TypeInfo__tmp_copy_11;
#line 2592 "rtti_implementation.m"
              }
#line 2592 "rtti_implementation.m"
              continue;
#line 2588 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 10:
#line 2623 "rtti_implementation.m"
            {
#line 2623 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_118_118 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 2623 "rtti_implementation.m"
              MR_Float mercury__rtti_implementation__Float_34;
#line 2624 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv4_Float_34;

#line 2624 "rtti_implementation.m"
              {
#line 2624 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_118_118, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv4_Float_34);
              }
#line 2624 "rtti_implementation.m"
              mercury__rtti_implementation__Float_34 = MR_unbox_float(mercury__rtti_implementation__conv4_Float_34);
#line 2625 "rtti_implementation.m"
              {
#line 2625 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__float_to_string_1_f_0(mercury__rtti_implementation__Float_34);
              }
#line 2626 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2627 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2628 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2623 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 37:
#line 2790 "rtti_implementation.m"
            {
#line 2786 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<foreignxx>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 44:
#line 2502 "rtti_implementation.m"
            {
#line 2503 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeFunctors_21;
#line 2505 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_100_100;
#line 2504 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__ForeignEnumFunctorDesc_22;

#line 2503 "rtti_implementation.m"
              {
#line 2503 "rtti_implementation.m"
                mercury__rtti_implementation__TypeFunctors_21 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_116_121_112_101_95_99_116_111_114_95_102_117_110_99_116_111_114_115_95_95_91_49_93_95_48_1_f_0();
              }
#line 2505 "rtti_implementation.m"
              {
#line 2505 "rtti_implementation.m"
                mercury__rtti_implementation__V_100_100 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_117_110_115_97_102_101_95_103_101_116_95_102_111_114_101_105_103_110_95_101_110_117_109_95_118_97_108_117_101_95_95_91_49_44_32_50_93_95_48_1_f_0();
              }
#line 2504 "rtti_implementation.m"
              {
#line 2504 "rtti_implementation.m"
                mercury__rtti_implementation__ForeignEnumFunctorDesc_22 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
              }
#line 2506 "rtti_implementation.m"
              {
#line 2506 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_1_f_0();
              }
#line 2507 "rtti_implementation.m"
              {
#line 2507 "rtti_implementation.m"
                *mercury__rtti_implementation__Ordinal_16 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_111_114_100_105_110_97_108_95_95_91_49_93_95_48_1_f_0();
              }
#line 2508 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2509 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2502 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 45:
#line 2512 "rtti_implementation.m"
            {
#line 2512 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 7:
#line 2596 "rtti_implementation.m"
            {
#line 2597 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<function>>";
#line 2598 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2599 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2600 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2596 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 20:
#line 2734 "rtti_implementation.m"
            {
#line 2715 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<hp>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 8:
#line 2609 "rtti_implementation.m"
            {
#line 2609 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_116_116 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2609 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__Int_32;
#line 2610 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv5_Int_32;

#line 2610 "rtti_implementation.m"
              {
#line 2610 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_116_116, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv5_Int_32);
              }
#line 2610 "rtti_implementation.m"
              mercury__rtti_implementation__Int_32 = ((MR_Integer) mercury__rtti_implementation__conv5_Int_32);
#line 2611 "rtti_implementation.m"
              {
#line 2611 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__int_to_string_1_f_0(mercury__rtti_implementation__Int_32);
              }
#line 2612 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2613 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2614 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2609 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 22:
#line 2734 "rtti_implementation.m"
            {
#line 2721 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<maxfr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 2570 "rtti_implementation.m"
            {
#line 2572 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag";
#line 2573 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2574 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2575 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2570 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 2581 "rtti_implementation.m"
            {
#line 2583 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_notag_ground";
#line 2584 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2585 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2586 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2581 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 2578 "rtti_implementation.m"
            {
#line 2578 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 2567 "rtti_implementation.m"
            {
#line 2567 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 12:
#line 2646 "rtti_implementation.m"
            {
#line 2647 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<predicate>>";
#line 2648 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2649 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2650 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2646 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 41:
#line 2779 "rtti_implementation.m"
            {
#line 2774 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_pseudo_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 23:
#line 2734 "rtti_implementation.m"
            {
#line 2724 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redofr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 24:
#line 2734 "rtti_implementation.m"
            {
#line 2727 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<redoip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 38:
#line 2796 "rtti_implementation.m"
            {
#line 2797 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<reference>>";
#line 2798 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2799 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2800 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2796 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 2740 "rtti_implementation.m"
            {
#line 2741 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_reserved_addr";
#line 2742 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2743 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2744 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2740 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 2747 "rtti_implementation.m"
            {
#line 2747 "rtti_implementation.m"
              mercury__rtti_implementation__handle_usereq_type_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__NonCanon_14, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 39:
#line 2683 "rtti_implementation.m"
            {
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_126_126 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
#line 2683 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__V_67_67;
#line 2683 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__CPtr_109;
#line 2684 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv6_CPtr_109;

#line 2684 "rtti_implementation.m"
              {
#line 2684 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_126_126, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv6_CPtr_109);
              }
#line 2684 "rtti_implementation.m"
              mercury__rtti_implementation__CPtr_109 = ((MR_Word) mercury__rtti_implementation__conv6_CPtr_109);
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                mercury__rtti_implementation__V_67_67 = mercury__string__c_pointer_to_string_1_f_0(mercury__rtti_implementation__CPtr_109);
              }
#line 2685 "rtti_implementation.m"
              {
#line 2685 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__f_43_43_2_f_0((MR_String) "stable_", mercury__rtti_implementation__V_67_67);
              }
#line 2686 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2687 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2688 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2683 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 40:
#line 2790 "rtti_implementation.m"
            {
#line 2789 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<stable_foreign>>";
#line 2791 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2792 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2793 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2790 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 11:
#line 2630 "rtti_implementation.m"
            {
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2630 "rtti_implementation.m"
              MR_String mercury__rtti_implementation__String_35;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_81_81;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_83_83;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_84_84;
#line 2630 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__V_86_86;
#line 2631 "rtti_implementation.m"
              MR_Box mercury__rtti_implementation__conv7_String_35;

#line 2631 "rtti_implementation.m"
              {
#line 2631 "rtti_implementation.m"
                mercury__rtti_implementation__det_dynamic_cast_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__TypeCtorInfo_119_119, mercury__rtti_implementation__Term_10, &mercury__rtti_implementation__conv7_String_35);
              }
#line 2631 "rtti_implementation.m"
              mercury__rtti_implementation__String_35 = ((MR_String) mercury__rtti_implementation__conv7_String_35);
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_86_86 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2632 "rtti_implementation.m"
              mercury__rtti_implementation__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__rtti_implementation_scalar_common_4[1]);
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 0) = ((MR_Box) (mercury__rtti_implementation__String_35));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_83_83, 1) = ((MR_Box) (mercury__rtti_implementation__V_84_84));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                mercury__rtti_implementation__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 0) = ((MR_Box) ((MR_String) "\""));
#line 2632 "rtti_implementation.m"
                MR_hl_field(MR_mktag(1), mercury__rtti_implementation__V_81_81, 1) = ((MR_Box) (mercury__rtti_implementation__V_83_83));
#line 2632 "rtti_implementation.m"
              }
#line 2632 "rtti_implementation.m"
              {
#line 2632 "rtti_implementation.m"
                *mercury__rtti_implementation__Functor_15 = mercury__string__append_list_1_f_0(mercury__rtti_implementation__V_81_81);
              }
#line 2633 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2634 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2635 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2630 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 13:
#line 2665 "rtti_implementation.m"
            {
#line 2666 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<subgoal>>";
#line 2667 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2668 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2669 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2665 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 19:
#line 2734 "rtti_implementation.m"
            {
#line 2712 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<succip>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 26:
#line 2734 "rtti_implementation.m"
            {
#line 2733 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<ticket>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 25:
#line 2734 "rtti_implementation.m"
            {
#line 2730 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<trail_ptr>>";
#line 2735 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2736 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2737 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2734 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 2652 "rtti_implementation.m"
            {
#line 2652 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__TypeArgs_38;
#line 2653 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation___TypeCtorInfo_37;
#line 2657 "rtti_implementation.m"
              MR_Integer mercury__rtti_implementation__V_44_44;

#line 2653 "rtti_implementation.m"
              {
#line 2653 "rtti_implementation.m"
                mercury__rtti_implementation__type_ctor_and_args_3_p_0(mercury__rtti_implementation__TypeInfo_11, &mercury__rtti_implementation___TypeCtorInfo_37, &mercury__rtti_implementation__TypeArgs_38);
              }
#line 2654 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "{}";
#line 2655 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) 0;
#line 2656 "rtti_implementation.m"
              {
#line 2656 "rtti_implementation.m"
                *mercury__rtti_implementation__Arity_17 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_118_97_114_95_97_114_105_116_121_95_116_121_112_101_105_110_102_111_95_97_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
              }
#line 2657 "rtti_implementation.m"
              {
#line 2657 "rtti_implementation.m"
                mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_in__list_0(mercury__rtti_implementation__TypeArgs_38, mercury__rtti_implementation__Arguments_18, (MR_Integer) 0, &mercury__rtti_implementation__V_44_44);
              }
#line 2652 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 36:
#line 2779 "rtti_implementation.m"
            {
#line 2778 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_ctor_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 33:
#line 2779 "rtti_implementation.m"
            {
#line 2762 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typectorinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 35:
#line 2779 "rtti_implementation.m"
            {
#line 2770 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_type_desc";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 17:
#line 2779 "rtti_implementation.m"
            {
#line 2758 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "<<typeclassinfo>>";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 16:
#line 2779 "rtti_implementation.m"
            {
#line 2754 "rtti_implementation.m"
              *mercury__rtti_implementation__Functor_15 = (MR_String) "some_typeinfo";
#line 2780 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_16 = (MR_Integer) -1;
#line 2781 "rtti_implementation.m"
              *mercury__rtti_implementation__Arity_17 = (MR_Integer) 0;
#line 2782 "rtti_implementation.m"
              *mercury__rtti_implementation__Arguments_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2779 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 2802 "rtti_implementation.m"
            {
#line 2803 "rtti_implementation.m"
              {
#line 2803 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "unknown type_ctor rep");
#line 2803 "rtti_implementation.m"
                return;
              }
#line 2802 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
          case (MR_Integer) 14:
#line 2673 "rtti_implementation.m"
            {
#line 2674 "rtti_implementation.m"
              {
#line 2674 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.deconstruct_2\'/9", (MR_String) "cannot deconstruct void types");
#line 2674 "rtti_implementation.m"
                return;
              }
#line 2673 "rtti_implementation.m"
            }
#line 2492 "rtti_implementation.m"
            break;
#line 2492 "rtti_implementation.m"
        }
#line 2492 "rtti_implementation.m"
      }
#line 2492 "rtti_implementation.m"
      break;
#line 2492 "rtti_implementation.m"
    }
#line 2479 "rtti_implementation.m"
}

#line 2477 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_2(
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2477 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2477 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2477 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2477 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2477 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2477 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2477 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  {
#line 2492 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
    }
#line 2492 "rtti_implementation.m"
  }
#line 2477 "rtti_implementation.m"
}

#line 2475 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_1(
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2475 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2475 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2475 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2475 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2475 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2475 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2475 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  {
#line 2492 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_49_9_p_1(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
    }
#line 2492 "rtti_implementation.m"
  }
#line 2475 "rtti_implementation.m"
}

#line 2473 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_2_9_p_0(
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_112,
#line 2473 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_10,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_11,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_12,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorRep_13,
#line 2473 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_14,
#line 2473 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_15,
#line 2473 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_16,
#line 2473 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_17,
#line 2473 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_18)
#line 2473 "rtti_implementation.m"
{
#line 2492 "rtti_implementation.m"
  {
#line 2492 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2492 "rtti_implementation.m"
    {
#line 2492 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_48_9_p_0(mercury__rtti_implementation__TypeInfo_for_T_112, mercury__rtti_implementation__Term_10, mercury__rtti_implementation__TypeInfo_11, mercury__rtti_implementation__TypeCtorInfo_12, mercury__rtti_implementation__TypeCtorRep_13, mercury__rtti_implementation__Functor_15, mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_17, mercury__rtti_implementation__Arguments_18);
    }
#line 2492 "rtti_implementation.m"
  }
#line 2473 "rtti_implementation.m"
}

#line 1396 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__collapse_equivalences_1_f_0(
#line 1396 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_3)
#line 1396 "rtti_implementation.m"
{
#line 1402 "rtti_implementation.m"
  {
#line 1402 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 1402 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__NewTypeInfo_4;
#line 1402 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_5;
#line 1402 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_6;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__collapse_equivalences_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_3 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 19002 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_5  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__collapse_equivalences_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 19023 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_6  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 1408 "rtti_implementation.m"
#line 1408 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_6) {
#line 1408 "rtti_implementation.m"
      default:
#line 1408 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_FALSE;
#line 1408 "rtti_implementation.m"
        break;
#line 1408 "rtti_implementation.m"
      case (MR_Integer) 6:
#line 1408 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1408 "rtti_implementation.m"
        break;
#line 1408 "rtti_implementation.m"
      case (MR_Integer) 29:
#line 1407 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1408 "rtti_implementation.m"
        break;
#line 1408 "rtti_implementation.m"
    }
#line 1414 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1411 "rtti_implementation.m"
      {
#line 4444 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeLayout_7;

#line 4447 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__collapse_equivalences_1_f_0

	MR_Word TypeCtorInfo;
	MR_Word TypeLayout;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4447 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeLayout = (MR_Word) &(MR_type_ctor_layout(tci));

#line 19074 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeLayout_7  = TypeLayout;
#line 4447 "rtti_implementation.m"
}
#line 1456 "rtti_implementation.m"
        {
#line 1456 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0((MR_String) "get_layout_equiv");
        }
#line 1411 "rtti_implementation.m"
      }
#line 1414 "rtti_implementation.m"
    else
#line 1415 "rtti_implementation.m"
      mercury__rtti_implementation__NewTypeInfo_4 = mercury__rtti_implementation__TypeInfo_3;
#line 1402 "rtti_implementation.m"
    return mercury__rtti_implementation__NewTypeInfo_4;
#line 1402 "rtti_implementation.m"
  }
#line 1396 "rtti_implementation.m"
}

#line 1258 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_var_arity_type_info_args_5_p_0(
#line 1258 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 1258 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_7,
#line 1258 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_8,
#line 1258 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoA_9,
#line 1258 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoB_10)
#line 1258 "rtti_implementation.m"
{
#line 1264 "rtti_implementation.m"
  while (MR_TRUE)
#line 1264 "rtti_implementation.m"
    {
#line 1264 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 1264 "rtti_implementation.m"
      {
#line 1264 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Loc_6 > mercury__rtti_implementation__Arity_7);

#line 1264 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 1263 "rtti_implementation.m"
          *mercury__rtti_implementation__Result_8 = (MR_Integer) 0;
#line 1264 "rtti_implementation.m"
        else
#line 1265 "rtti_implementation.m"
          {
#line 1265 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__SubTypeInfoA_11;
#line 1265 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__SubTypeInfoB_12;
#line 1265 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__SubResult_13;

#line 1265 "rtti_implementation.m"
            {
#line 1265 "rtti_implementation.m"
              mercury__rtti_implementation__SubTypeInfoA_11 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(mercury__rtti_implementation__TypeInfoA_9, mercury__rtti_implementation__Loc_6);
            }
#line 1266 "rtti_implementation.m"
            {
#line 1266 "rtti_implementation.m"
              mercury__rtti_implementation__SubTypeInfoB_12 = mercury__rtti_implementation__var_arity_type_info_index_as_ti_2_f_0(mercury__rtti_implementation__TypeInfoB_10, mercury__rtti_implementation__Loc_6);
            }
#line 1268 "rtti_implementation.m"
            {
#line 1268 "rtti_implementation.m"
              mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0(&mercury__rtti_implementation__SubResult_13, mercury__rtti_implementation__SubTypeInfoA_11, mercury__rtti_implementation__SubTypeInfoB_12);
            }
#line 1273 "rtti_implementation.m"
#line 1273 "rtti_implementation.m"
            switch (mercury__rtti_implementation__SubResult_13) {
#line 1273 "rtti_implementation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1273 "rtti_implementation.m"
              case (MR_Integer) 1:
#line 1273 "rtti_implementation.m"
              case (MR_Integer) 2:
#line 1277 "rtti_implementation.m"
                *mercury__rtti_implementation__Result_8 = mercury__rtti_implementation__SubResult_13;
#line 1273 "rtti_implementation.m"
                break;
#line 1273 "rtti_implementation.m"
              case (MR_Integer) 0:
#line 1270 "rtti_implementation.m"
                {
#line 1270 "rtti_implementation.m"
                  MR_Integer mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__Loc_6 + (MR_Integer) 1);

#line 1271 "rtti_implementation.m"
                  /* direct tailcall eliminated */
#line 1271 "rtti_implementation.m"
                  {
#line 1271 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__Loc__tmp_copy_6 = mercury__rtti_implementation__V_14_14;

#line 1271 "rtti_implementation.m"
                    mercury__rtti_implementation__Loc_6 = mercury__rtti_implementation__Loc__tmp_copy_6;
#line 1271 "rtti_implementation.m"
                  }
#line 1271 "rtti_implementation.m"
                  continue;
#line 1270 "rtti_implementation.m"
                }
#line 1273 "rtti_implementation.m"
                break;
#line 1273 "rtti_implementation.m"
            }
#line 1265 "rtti_implementation.m"
          }
#line 1264 "rtti_implementation.m"
      }
#line 1264 "rtti_implementation.m"
      break;
#line 1264 "rtti_implementation.m"
    }
#line 1258 "rtti_implementation.m"
}

#line 1235 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_type_info_args_5_p_0(
#line 1235 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Loc_6,
#line 1235 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Arity_7,
#line 1235 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Result_8,
#line 1235 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoA_9,
#line 1235 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfoB_10)
#line 1235 "rtti_implementation.m"
{
#line 1241 "rtti_implementation.m"
  while (MR_TRUE)
#line 1241 "rtti_implementation.m"
    {
#line 1241 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 1241 "rtti_implementation.m"
      {
#line 1241 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Loc_6 > mercury__rtti_implementation__Arity_7);

#line 1241 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 1240 "rtti_implementation.m"
          *mercury__rtti_implementation__Result_8 = (MR_Integer) 0;
#line 1241 "rtti_implementation.m"
        else
#line 1242 "rtti_implementation.m"
          {
#line 1242 "rtti_implementation.m"
            MR_Word mercury__rtti_implementation__SubResult_13;

#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 19253 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                  return;
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 74 "builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_info_args_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 74 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 19292 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 74 "builtin.opt"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 4168 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 4167 "rtti_implementation.m"
              {
#line 4167 "rtti_implementation.m"
                {
#line 4167 "rtti_implementation.m"
                  mercury__require__sorry_2_p_0((MR_String) "rtti_implementation", (MR_String) "type_info_index");
#line 4167 "rtti_implementation.m"
                  return;
                }
#line 4167 "rtti_implementation.m"
              }
#line 4168 "rtti_implementation.m"
            else
#line 4169 "rtti_implementation.m"
              {
#line 4169 "rtti_implementation.m"
              }
#line 1245 "rtti_implementation.m"
            {
#line 1245 "rtti_implementation.m"
              mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0(&mercury__rtti_implementation__SubResult_13, mercury__rtti_implementation__TypeInfoA_9, mercury__rtti_implementation__TypeInfoB_10);
            }
#line 1250 "rtti_implementation.m"
#line 1250 "rtti_implementation.m"
            switch (mercury__rtti_implementation__SubResult_13) {
#line 1250 "rtti_implementation.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1250 "rtti_implementation.m"
              case (MR_Integer) 1:
#line 1250 "rtti_implementation.m"
              case (MR_Integer) 2:
#line 1254 "rtti_implementation.m"
                *mercury__rtti_implementation__Result_8 = mercury__rtti_implementation__SubResult_13;
#line 1250 "rtti_implementation.m"
                break;
#line 1250 "rtti_implementation.m"
              case (MR_Integer) 0:
#line 1247 "rtti_implementation.m"
                {
#line 1247 "rtti_implementation.m"
                  MR_Integer mercury__rtti_implementation__V_14_14 = (mercury__rtti_implementation__Loc_6 + (MR_Integer) 1);

#line 1248 "rtti_implementation.m"
                  /* direct tailcall eliminated */
#line 1248 "rtti_implementation.m"
                  {
#line 1248 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__Loc__tmp_copy_6 = mercury__rtti_implementation__V_14_14;

#line 1248 "rtti_implementation.m"
                    mercury__rtti_implementation__Loc_6 = mercury__rtti_implementation__Loc__tmp_copy_6;
#line 1248 "rtti_implementation.m"
                  }
#line 1248 "rtti_implementation.m"
                  continue;
#line 1247 "rtti_implementation.m"
                }
#line 1250 "rtti_implementation.m"
                break;
#line 1250 "rtti_implementation.m"
            }
#line 1242 "rtti_implementation.m"
          }
#line 1241 "rtti_implementation.m"
      }
#line 1241 "rtti_implementation.m"
      break;
#line 1241 "rtti_implementation.m"
    }
#line 1235 "rtti_implementation.m"
}

#line 1141 "rtti_implementation.m"
static void MR_CALL 
mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0(
#line 1141 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Res_4,
#line 1141 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo1_5,
#line 1141 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo2_6)
#line 1141 "rtti_implementation.m"
{
#line 1144 "rtti_implementation.m"
  {
#line 1144 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 1144 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo1_7;
#line 1144 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo2_8;
#line 1144 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__ModNameRes_9;
#line 1144 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_14_14;
#line 1144 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_15_15;
#line 1144 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__V_7_41;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo1_5 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 19417 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo1_7  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo2_6 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 19438 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo2_8  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4328 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo1_7 ;
		{
#line 4328 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);

#line 19459 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_14_14  = Name;
#line 4328 "rtti_implementation.m"
}
#line 4328 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo2_8 ;
		{
#line 4328 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);

#line 19480 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_15_15  = Name;
#line 4328 "rtti_implementation.m"
}
#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__rtti_implementation__V_14_14 ;
	S2 =  mercury__rtti_implementation__V_15_15 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 19502 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_7_41  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_7_41 < (MR_Integer) 0);
#line 85 "private_builtin.opt"
    if (mercury__rtti_implementation__succeeded)
#line 89 "private_builtin.opt"
      mercury__rtti_implementation__ModNameRes_9 = (MR_Integer) 1;
#line 85 "private_builtin.opt"
    else
#line 91 "private_builtin.opt"
      {
#line 92 "private_builtin.opt"
        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_7_41 == (MR_Integer) 0);
#line 91 "private_builtin.opt"
        if (mercury__rtti_implementation__succeeded)
#line 94 "private_builtin.opt"
          mercury__rtti_implementation__ModNameRes_9 = (MR_Integer) 0;
#line 91 "private_builtin.opt"
        else
#line 96 "private_builtin.opt"
          mercury__rtti_implementation__ModNameRes_9 = (MR_Integer) 2;
#line 91 "private_builtin.opt"
      }
#line 1192 "rtti_implementation.m"
#line 1192 "rtti_implementation.m"
    switch (mercury__rtti_implementation__ModNameRes_9) {
#line 1192 "rtti_implementation.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1192 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 1192 "rtti_implementation.m"
      case (MR_Integer) 2:
#line 1196 "rtti_implementation.m"
        *mercury__rtti_implementation__Res_4 = mercury__rtti_implementation__ModNameRes_9;
#line 1192 "rtti_implementation.m"
        break;
#line 1192 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 1152 "rtti_implementation.m"
        {
#line 1152 "rtti_implementation.m"
          MR_Word mercury__rtti_implementation__NameRes_10;
#line 1152 "rtti_implementation.m"
          MR_String mercury__rtti_implementation__V_16_16;
#line 1152 "rtti_implementation.m"
          MR_String mercury__rtti_implementation__V_17_17;
#line 1152 "rtti_implementation.m"
          MR_Integer mercury__rtti_implementation__V_7_52;

#line 4370 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo1_7 ;
		{
#line 4370 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);

#line 19571 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_16_16  = Name;
#line 4370 "rtti_implementation.m"
}
#line 4370 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo2_8 ;
		{
#line 4370 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);

#line 19592 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_17_17  = Name;
#line 4370 "rtti_implementation.m"
}
#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__rtti_implementation__V_16_16 ;
	S2 =  mercury__rtti_implementation__V_17_17 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 19614 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__V_7_52  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
          mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_7_52 < (MR_Integer) 0);
#line 85 "private_builtin.opt"
          if (mercury__rtti_implementation__succeeded)
#line 89 "private_builtin.opt"
            mercury__rtti_implementation__NameRes_10 = (MR_Integer) 1;
#line 85 "private_builtin.opt"
          else
#line 91 "private_builtin.opt"
            {
#line 92 "private_builtin.opt"
              mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__V_7_52 == (MR_Integer) 0);
#line 91 "private_builtin.opt"
              if (mercury__rtti_implementation__succeeded)
#line 94 "private_builtin.opt"
                mercury__rtti_implementation__NameRes_10 = (MR_Integer) 0;
#line 91 "private_builtin.opt"
              else
#line 96 "private_builtin.opt"
                mercury__rtti_implementation__NameRes_10 = (MR_Integer) 2;
#line 91 "private_builtin.opt"
            }
#line 1186 "rtti_implementation.m"
#line 1186 "rtti_implementation.m"
          switch (mercury__rtti_implementation__NameRes_10) {
#line 1186 "rtti_implementation.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1186 "rtti_implementation.m"
            case (MR_Integer) 1:
#line 1186 "rtti_implementation.m"
            case (MR_Integer) 2:
#line 1190 "rtti_implementation.m"
              *mercury__rtti_implementation__Res_4 = mercury__rtti_implementation__NameRes_10;
#line 1186 "rtti_implementation.m"
              break;
#line 1186 "rtti_implementation.m"
            case (MR_Integer) 0:
#line 1171 "rtti_implementation.m"
              {
#line 1283 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeCtorRep_55;

#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo1_7 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 19677 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_55  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 1286 "rtti_implementation.m"
#line 1286 "rtti_implementation.m"
                switch (mercury__rtti_implementation__TypeCtorRep_55) {
#line 1286 "rtti_implementation.m"
                  default:
#line 1286 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = MR_FALSE;
#line 1286 "rtti_implementation.m"
                    break;
#line 1286 "rtti_implementation.m"
                  case (MR_Integer) 7:
#line 1286 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
                    break;
#line 1286 "rtti_implementation.m"
                  case (MR_Integer) 12:
#line 1285 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
                    break;
#line 1286 "rtti_implementation.m"
                  case (MR_Integer) 30:
#line 1287 "rtti_implementation.m"
                    mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
                    break;
#line 1286 "rtti_implementation.m"
                }
#line 1171 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 1158 "rtti_implementation.m"
                  {
#line 667 "rtti_implementation.m"
                    {
#line 667 "rtti_implementation.m"
                      mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
#line 667 "rtti_implementation.m"
                      return;
                    }
#line 1158 "rtti_implementation.m"
                  }
#line 1171 "rtti_implementation.m"
                else
#line 1172 "rtti_implementation.m"
                  {
#line 1172 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__Arity1_20;
#line 1172 "rtti_implementation.m"
                    MR_Integer mercury__rtti_implementation__Arity2_21;
#line 1172 "rtti_implementation.m"
                    MR_Word mercury__rtti_implementation__ArityRes_22;

#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo1_7 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 19751 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity1_20  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo2_8 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 19772 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity2_21  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 69 "private_builtin.opt"
                    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity1_20 < mercury__rtti_implementation__Arity2_21);
#line 68 "private_builtin.opt"
                    if (mercury__rtti_implementation__succeeded)
#line 71 "private_builtin.opt"
                      mercury__rtti_implementation__ArityRes_22 = (MR_Integer) 1;
#line 68 "private_builtin.opt"
                    else
#line 73 "private_builtin.opt"
                      {
#line 74 "private_builtin.opt"
                        mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Arity1_20 == mercury__rtti_implementation__Arity2_21);
#line 73 "private_builtin.opt"
                        if (mercury__rtti_implementation__succeeded)
#line 76 "private_builtin.opt"
                          mercury__rtti_implementation__ArityRes_22 = (MR_Integer) 0;
#line 73 "private_builtin.opt"
                        else
#line 78 "private_builtin.opt"
                          mercury__rtti_implementation__ArityRes_22 = (MR_Integer) 2;
#line 73 "private_builtin.opt"
                      }
#line 1179 "rtti_implementation.m"
#line 1179 "rtti_implementation.m"
                    switch (mercury__rtti_implementation__ArityRes_22) {
#line 1179 "rtti_implementation.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1179 "rtti_implementation.m"
                      case (MR_Integer) 1:
#line 1179 "rtti_implementation.m"
                      case (MR_Integer) 2:
#line 1183 "rtti_implementation.m"
                        *mercury__rtti_implementation__Res_4 = mercury__rtti_implementation__ArityRes_22;
#line 1179 "rtti_implementation.m"
                        break;
#line 1179 "rtti_implementation.m"
                      case (MR_Integer) 0:
#line 1176 "rtti_implementation.m"
                        {
#line 1177 "rtti_implementation.m"
                          {
#line 1177 "rtti_implementation.m"
                            mercury__rtti_implementation__compare_type_info_args_5_p_0((MR_Integer) 1, mercury__rtti_implementation__Arity1_20, mercury__rtti_implementation__Res_4, mercury__rtti_implementation__TypeInfo1_5, mercury__rtti_implementation__TypeInfo2_6);
                          }
#line 1176 "rtti_implementation.m"
                        }
#line 1179 "rtti_implementation.m"
                        break;
#line 1179 "rtti_implementation.m"
                    }
#line 1172 "rtti_implementation.m"
                  }
#line 1171 "rtti_implementation.m"
              }
#line 1186 "rtti_implementation.m"
              break;
#line 1186 "rtti_implementation.m"
          }
#line 1152 "rtti_implementation.m"
        }
#line 1192 "rtti_implementation.m"
        break;
#line 1192 "rtti_implementation.m"
    }
#line 1144 "rtti_implementation.m"
  }
#line 1141 "rtti_implementation.m"
}

#line 442 "rtti_implementation.m"
static MR_Word MR_CALL 
mercury__rtti_implementation__create_pseudo_type_info_2_f_0(
#line 442 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 442 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__PseudoTypeInfo_5)
#line 442 "rtti_implementation.m"
{
#line 447 "rtti_implementation.m"
  {
#line 447 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 447 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__ArgPseudoTypeInfo_6;

#line 1595 "rtti_implementation.m"
    {
#line 1595 "rtti_implementation.m"
      mercury__private_builtin__sorry_1_p_0((MR_String) "is_exist_pseudo_type_info/2");
    }
#line 447 "rtti_implementation.m"
    return mercury__rtti_implementation__ArgPseudoTypeInfo_6;
#line 447 "rtti_implementation.m"
  }
#line 442 "rtti_implementation.m"
}

#line 326 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__get_functor_impl_6_p_0(
#line 326 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_7,
#line 326 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__FunctorNumber_8,
#line 326 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_9,
#line 326 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_10,
#line 326 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_11,
#line 326 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_12)
#line 326 "rtti_implementation.m"
{
#line 330 "rtti_implementation.m"
  while (MR_TRUE)
#line 330 "rtti_implementation.m"
    {
#line 330 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 330 "rtti_implementation.m"
      {
#line 330 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;
#line 330 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__NumFunctors_13;
#line 330 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorInfo_14;
#line 330 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorRep_15;
#line 330 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__V_17_17;

#line 331 "rtti_implementation.m"
        {
#line 331 "rtti_implementation.m"
          mercury__rtti_implementation__succeeded = mercury__rtti_implementation__type_info_num_functors_2_p_0(mercury__rtti_implementation__TypeInfo_7, &mercury__rtti_implementation__NumFunctors_13);
        }
#line 330 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 330 "rtti_implementation.m"
          {
#line 332 "rtti_implementation.m"
            mercury__rtti_implementation__V_17_17 = (MR_Integer) 0;
#line 332 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__FunctorNumber_8 >= mercury__rtti_implementation__V_17_17);
#line 330 "rtti_implementation.m"
            if (mercury__rtti_implementation__succeeded)
#line 330 "rtti_implementation.m"
              {
#line 333 "rtti_implementation.m"
                mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__FunctorNumber_8 < mercury__rtti_implementation__NumFunctors_13);
#line 330 "rtti_implementation.m"
                if (mercury__rtti_implementation__succeeded)
#line 330 "rtti_implementation.m"
                  {
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_functor_impl_6_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_7 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 19949 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_14  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_functor_impl_6_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_14 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 19970 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_15  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 344 "rtti_implementation.m"
#line 344 "rtti_implementation.m"
                    switch (mercury__rtti_implementation__TypeCtorRep_15) {
#line 344 "rtti_implementation.m"
                      default:
#line 344 "rtti_implementation.m"
                        mercury__rtti_implementation__succeeded = MR_FALSE;
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 2:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 3:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 31:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 32:
#line 342 "rtti_implementation.m"
                        {
#line 342 "rtti_implementation.m"
                          {
#line 342 "rtti_implementation.m"
                            mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_100_117_95_95_91_49_44_32_51_44_32_52_93_95_48_8_p_0(mercury__rtti_implementation__TypeInfo_7, mercury__rtti_implementation__FunctorName_9, mercury__rtti_implementation__Arity_10, mercury__rtti_implementation__PseudoTypeInfoList_11, mercury__rtti_implementation__Names_12);
                          }
#line 342 "rtti_implementation.m"
                          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 342 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 42:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 0:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 1:
#line 505 "rtti_implementation.m"
                        {
#line 4423 "rtti_implementation.m"
                          {
#line 4423 "rtti_implementation.m"
                            mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
                          }
#line 505 "rtti_implementation.m"
                          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 505 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 6:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 29:
#line 362 "rtti_implementation.m"
                        {
#line 362 "rtti_implementation.m"
                          MR_Word mercury__rtti_implementation__NewTypeInfo_16;

#line 363 "rtti_implementation.m"
                          {
#line 363 "rtti_implementation.m"
                            mercury__rtti_implementation__NewTypeInfo_16 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_7);
                          }
#line 364 "rtti_implementation.m"
                          /* direct tailcall eliminated */
#line 364 "rtti_implementation.m"
                          {
#line 364 "rtti_implementation.m"
                            MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_7 = mercury__rtti_implementation__NewTypeInfo_16;

#line 364 "rtti_implementation.m"
                            mercury__rtti_implementation__TypeInfo_7 = mercury__rtti_implementation__TypeInfo__tmp_copy_7;
#line 364 "rtti_implementation.m"
                          }
#line 364 "rtti_implementation.m"
                          continue;
#line 362 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 4:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 27:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 28:
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 5:
#line 357 "rtti_implementation.m"
                        {
#line 357 "rtti_implementation.m"
                          {
#line 357 "rtti_implementation.m"
                            mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_117_110_99_116_111_114_95_110_111_116_97_103_95_95_91_49_44_32_50_44_32_51_93_95_48_7_p_0(mercury__rtti_implementation__FunctorName_9, mercury__rtti_implementation__Arity_10, mercury__rtti_implementation__PseudoTypeInfoList_11, mercury__rtti_implementation__Names_12);
                          }
#line 357 "rtti_implementation.m"
                          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 357 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 30:
#line 367 "rtti_implementation.m"
                        {
#line 368 "rtti_implementation.m"
                          *mercury__rtti_implementation__FunctorName_9 = (MR_String) "{}";
#line 667 "rtti_implementation.m"
                          {
#line 667 "rtti_implementation.m"
                            mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
                          }
#line 367 "rtti_implementation.m"
                          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 367 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                      case (MR_Integer) 46:
#line 407 "rtti_implementation.m"
                        {
#line 408 "rtti_implementation.m"
                          {
#line 408 "rtti_implementation.m"
                            mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.get_functor_impl\'/6", (MR_String) "unknown type_ctor_rep");
                          }
#line 407 "rtti_implementation.m"
                          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 407 "rtti_implementation.m"
                        }
#line 344 "rtti_implementation.m"
                        break;
#line 344 "rtti_implementation.m"
                    }
#line 330 "rtti_implementation.m"
                  }
#line 330 "rtti_implementation.m"
              }
#line 330 "rtti_implementation.m"
          }
#line 330 "rtti_implementation.m"
        return mercury__rtti_implementation__succeeded;
#line 330 "rtti_implementation.m"
      }
#line 330 "rtti_implementation.m"
      break;
#line 330 "rtti_implementation.m"
    }
#line 326 "rtti_implementation.m"
}

#line 109 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_lex_3_p_0(
#line 109 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo0_4,
#line 109 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__Ordinal_5,
#line 109 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_6)
#line 109 "rtti_implementation.m"
{
#line 613 "rtti_implementation.m"
  {
#line 613 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 613 "rtti_implementation.m"
    {
#line 613 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_103_101_116_95_102_117_110_99_116_111_114_95_108_101_120_95_95_91_50_93_95_48_3_p_0(mercury__rtti_implementation__TypeInfo0_4, mercury__rtti_implementation__FunctorNumber_6);
    }
#line 613 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 613 "rtti_implementation.m"
  }
#line 109 "rtti_implementation.m"
}

#line 106 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0(
#line 106 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_4,
#line 106 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__FunctorNum_5,
#line 106 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Ordinal_6)
#line 106 "rtti_implementation.m"
{
#line 536 "rtti_implementation.m"
  {
#line 536 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 536 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_7;
#line 536 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_8;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_4 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 20191 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_7  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_get_functor_ordinal_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_7 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 20212 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_8  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 547 "rtti_implementation.m"
#line 547 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_8) {
#line 547 "rtti_implementation.m"
      default:
#line 547 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_FALSE;
#line 547 "rtti_implementation.m"
        break;
#line 547 "rtti_implementation.m"
      case (MR_Integer) 2:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 3:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 31:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 32:
#line 568 "rtti_implementation.m"
        {
#line 4404 "rtti_implementation.m"
          {
#line 4404 "rtti_implementation.m"
            mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_ctor_functors");
          }
#line 568 "rtti_implementation.m"
          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 568 "rtti_implementation.m"
        }
#line 547 "rtti_implementation.m"
        break;
#line 547 "rtti_implementation.m"
      case (MR_Integer) 42:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 4:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 27:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 28:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 5:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 30:
#line 560 "rtti_implementation.m"
        {
#line 561 "rtti_implementation.m"
          mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__FunctorNum_5 == (MR_Integer) 0);
#line 560 "rtti_implementation.m"
          if (mercury__rtti_implementation__succeeded)
#line 560 "rtti_implementation.m"
            {
#line 562 "rtti_implementation.m"
              *mercury__rtti_implementation__Ordinal_6 = (MR_Integer) 0;
#line 562 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = MR_TRUE;
#line 560 "rtti_implementation.m"
            }
#line 560 "rtti_implementation.m"
        }
#line 547 "rtti_implementation.m"
        break;
#line 547 "rtti_implementation.m"
      case (MR_Integer) 0:
#line 547 "rtti_implementation.m"
      case (MR_Integer) 1:
#line 542 "rtti_implementation.m"
        {
#line 4423 "rtti_implementation.m"
          {
#line 4423 "rtti_implementation.m"
            mercury__private_builtin__sorry_1_p_0((MR_String) "get_type_functors");
          }
#line 542 "rtti_implementation.m"
          mercury__rtti_implementation__succeeded = MR_TRUE;
#line 542 "rtti_implementation.m"
        }
#line 547 "rtti_implementation.m"
        break;
#line 547 "rtti_implementation.m"
    }
#line 536 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 536 "rtti_implementation.m"
  }
#line 106 "rtti_implementation.m"
}

#line 103 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_with_names_6_p_0(
#line 103 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_7,
#line 103 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__FunctorNumber_8,
#line 103 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_9,
#line 103 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_10,
#line 103 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_11,
#line 103 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Names_12)
#line 103 "rtti_implementation.m"
{
#line 323 "rtti_implementation.m"
  {
#line 323 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 323 "rtti_implementation.m"
    {
#line 323 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__get_functor_impl_6_p_0(mercury__rtti_implementation__TypeInfo_7, mercury__rtti_implementation__FunctorNumber_8, mercury__rtti_implementation__FunctorName_9, mercury__rtti_implementation__Arity_10, mercury__rtti_implementation__PseudoTypeInfoList_11, mercury__rtti_implementation__Names_12);
    }
#line 323 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 323 "rtti_implementation.m"
  }
#line 103 "rtti_implementation.m"
}

#line 100 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_info_get_functor_5_p_0(
#line 100 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_6,
#line 100 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__FunctorNumber_7,
#line 100 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__FunctorName_8,
#line 100 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_9,
#line 100 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__PseudoTypeInfoList_10)
#line 100 "rtti_implementation.m"
{
#line 318 "rtti_implementation.m"
  {
#line 318 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 318 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation___Names_11;

#line 318 "rtti_implementation.m"
    {
#line 318 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__get_functor_impl_6_p_0(mercury__rtti_implementation__TypeInfo_6, mercury__rtti_implementation__FunctorNumber_7, mercury__rtti_implementation__FunctorName_8, mercury__rtti_implementation__Arity_9, mercury__rtti_implementation__PseudoTypeInfoList_10, &mercury__rtti_implementation___Names_11);
    }
#line 318 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 318 "rtti_implementation.m"
  }
#line 100 "rtti_implementation.m"
}

#line 98 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__type_info_num_functors_2_p_0(
#line 98 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_3,
#line 98 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__NumFunctors_4)
#line 98 "rtti_implementation.m"
{
#line 251 "rtti_implementation.m"
  while (MR_TRUE)
#line 251 "rtti_implementation.m"
    {
#line 251 "rtti_implementation.m"
      /* tailcall optimized into a loop */
#line 251 "rtti_implementation.m"
      {
#line 251 "rtti_implementation.m"
        MR_bool mercury__rtti_implementation__succeeded;
#line 251 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorInfo_5;
#line 251 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorRep_6;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_num_functors_2_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_3 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 20411 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_5  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_info_num_functors_2_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 20432 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_6  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 263 "rtti_implementation.m"
#line 263 "rtti_implementation.m"
        switch (mercury__rtti_implementation__TypeCtorRep_6) {
#line 263 "rtti_implementation.m"
          default:
#line 263 "rtti_implementation.m"
            mercury__rtti_implementation__succeeded = MR_FALSE;
#line 263 "rtti_implementation.m"
            break;
#line 263 "rtti_implementation.m"
          case (MR_Integer) 2:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 3:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 0:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 1:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 31:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 32:
#line 4478 "rtti_implementation.m"
            {
#line 4481 "rtti_implementation.m"
              {
#line 4481 "rtti_implementation.m"
                mercury__private_builtin__sorry_1_p_0((MR_String) "type_ctor_num_functors");
              }
#line 4478 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = MR_TRUE;
#line 4478 "rtti_implementation.m"
            }
#line 263 "rtti_implementation.m"
            break;
#line 263 "rtti_implementation.m"
          case (MR_Integer) 42:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 4:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 27:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 28:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 5:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 30:
#line 271 "rtti_implementation.m"
            {
#line 271 "rtti_implementation.m"
              *mercury__rtti_implementation__NumFunctors_4 = (MR_Integer) 1;
#line 271 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = MR_TRUE;
#line 271 "rtti_implementation.m"
            }
#line 263 "rtti_implementation.m"
            break;
#line 263 "rtti_implementation.m"
          case (MR_Integer) 6:
#line 263 "rtti_implementation.m"
          case (MR_Integer) 29:
#line 275 "rtti_implementation.m"
            {
#line 275 "rtti_implementation.m"
              MR_Word mercury__rtti_implementation__NewTypeInfo_7;

#line 276 "rtti_implementation.m"
              {
#line 276 "rtti_implementation.m"
                mercury__rtti_implementation__NewTypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo_3);
              }
#line 277 "rtti_implementation.m"
              /* direct tailcall eliminated */
#line 277 "rtti_implementation.m"
              {
#line 277 "rtti_implementation.m"
                MR_Word mercury__rtti_implementation__TypeInfo__tmp_copy_3 = mercury__rtti_implementation__NewTypeInfo_7;

#line 277 "rtti_implementation.m"
                mercury__rtti_implementation__TypeInfo_3 = mercury__rtti_implementation__TypeInfo__tmp_copy_3;
#line 277 "rtti_implementation.m"
              }
#line 277 "rtti_implementation.m"
              continue;
#line 275 "rtti_implementation.m"
            }
#line 263 "rtti_implementation.m"
            break;
#line 263 "rtti_implementation.m"
          case (MR_Integer) 46:
#line 312 "rtti_implementation.m"
            {
#line 313 "rtti_implementation.m"
              {
#line 313 "rtti_implementation.m"
                mercury__require__unexpected_3_p_0((MR_String) "rtti_implementation", (MR_String) "predicate \140rtti_implementation.type_info_num_functors\'/2", (MR_String) "unknown type_ctor_rep");
              }
#line 312 "rtti_implementation.m"
              mercury__rtti_implementation__succeeded = MR_TRUE;
#line 312 "rtti_implementation.m"
            }
#line 263 "rtti_implementation.m"
            break;
#line 263 "rtti_implementation.m"
        }
#line 251 "rtti_implementation.m"
        return mercury__rtti_implementation__succeeded;
#line 251 "rtti_implementation.m"
      }
#line 251 "rtti_implementation.m"
      break;
#line 251 "rtti_implementation.m"
    }
#line 98 "rtti_implementation.m"
}

#line 91 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_2(
#line 91 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 91 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_5,
#line 91 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_6,
#line 91 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 91 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 91 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2806 "rtti_implementation.m"
    {
#line 2806 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_50_4_p_2(mercury__rtti_implementation__TypeInfo_for_T_13, mercury__rtti_implementation__Name_7, mercury__rtti_implementation__Argument_8);
    }
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 91 "rtti_implementation.m"
}

#line 90 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_1(
#line 90 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 90 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_5,
#line 90 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_6,
#line 90 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 90 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 90 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2806 "rtti_implementation.m"
    {
#line 2806 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_49_4_p_1(mercury__rtti_implementation__TypeInfo_for_T_13, mercury__rtti_implementation__Name_7, mercury__rtti_implementation__Argument_8);
    }
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 90 "rtti_implementation.m"
}

#line 89 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__univ_named_arg_4_p_0(
#line 89 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_13,
#line 89 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_5,
#line 89 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_6,
#line 89 "rtti_implementation.m"
  MR_String mercury__rtti_implementation__Name_7,
#line 89 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Argument_8)
#line 89 "rtti_implementation.m"
{
#line 2806 "rtti_implementation.m"
  {
#line 2806 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2806 "rtti_implementation.m"
    {
#line 2806 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_105_118_95_110_97_109_101_100_95_97_114_103_95_95_91_50_44_32_51_93_95_48_4_p_0(mercury__rtti_implementation__TypeInfo_for_T_13, mercury__rtti_implementation__Name_7, mercury__rtti_implementation__Argument_8);
    }
#line 2806 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2806 "rtti_implementation.m"
  }
#line 89 "rtti_implementation.m"
}

#line 85 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__functor_number_cc_3_p_0(
#line 85 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_15,
#line 85 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_4,
#line 85 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_5,
#line 85 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_6)
#line 85 "rtti_implementation.m"
{
#line 2460 "rtti_implementation.m"
  {
#line 2460 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2460 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_7;
#line 2460 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_8;
#line 2460 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_9;
#line 2460 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Ordinal_10;
#line 2460 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_29_29;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_16_16;
#line 2465 "rtti_implementation.m"
    MR_String mercury__rtti_implementation___Functor_11;
#line 2465 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation___Arguments_12;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_15 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 20697 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_7  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_7 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 20718 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_8  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__functor_number_cc_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_8 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 20739 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_9  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2465 "rtti_implementation.m"
    {
#line 2465 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_50_95_95_91_54_93_95_50_9_p_2(mercury__rtti_implementation__TypeInfo_for_T_15, mercury__rtti_implementation__Term_4, mercury__rtti_implementation__TypeInfo_7, mercury__rtti_implementation__TypeCtorInfo_8, mercury__rtti_implementation__TypeCtorRep_9, &mercury__rtti_implementation___Functor_11, &mercury__rtti_implementation__Ordinal_10, mercury__rtti_implementation__Arity_6, &mercury__rtti_implementation___Arguments_12);
    }
#line 2468 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Ordinal_10 >= (MR_Integer) 0);
#line 2460 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2460 "rtti_implementation.m"
      {
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__V_29_29 = (MR_String) "type_ctor_search_functor_number_map/3";
#line 4523 "rtti_implementation.m"
        {
#line 4523 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_29_29);
        }
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 2460 "rtti_implementation.m"
      }
#line 2460 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2460 "rtti_implementation.m"
  }
#line 85 "rtti_implementation.m"
}

#line 83 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_3(
#line 83 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 83 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 83 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_8,
#line 83 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 83 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 83 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 83 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 83 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_13;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_14;
#line 2444 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_15;
#line 2444 "rtti_implementation.m"
    MR_Integer mercury__rtti_implementation__Ordinal_16;
#line 634 "rtti_implementation.m"
    MR_Box mercury__rtti_implementation__V_20_20;
#line 2451 "rtti_implementation.m"
    MR_String mercury__rtti_implementation__V_33_33;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_19 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 20824 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeInfo_13  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_13 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 20845 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_14  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__deconstruct_6_p_3

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_14 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 20866 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_15  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 2448 "rtti_implementation.m"
    {
#line 2448 "rtti_implementation.m"
      mercury__rtti_implementation__deconstruct_2_9_p_3(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__TypeInfo_13, mercury__rtti_implementation__TypeCtorInfo_14, mercury__rtti_implementation__TypeCtorRep_15, mercury__rtti_implementation__NonCanon_8, mercury__rtti_implementation__Functor_9, &mercury__rtti_implementation__Ordinal_16, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2451 "rtti_implementation.m"
    mercury__rtti_implementation__succeeded = (mercury__rtti_implementation__Ordinal_16 >= (MR_Integer) 0);
#line 2451 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 2451 "rtti_implementation.m"
      {
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__V_33_33 = (MR_String) "type_ctor_search_functor_number_map/3";
#line 4523 "rtti_implementation.m"
        {
#line 4523 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0(mercury__rtti_implementation__V_33_33);
#line 4523 "rtti_implementation.m"
          return;
        }
#line 4523 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 2451 "rtti_implementation.m"
      }
#line 2457 "rtti_implementation.m"
    *mercury__rtti_implementation__FunctorNumber_10 = (MR_Integer) 0;
#line 2444 "rtti_implementation.m"
  }
#line 83 "rtti_implementation.m"
}

#line 81 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_2(
#line 81 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 81 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 81 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_8,
#line 81 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 81 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 81 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 81 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 81 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2444 "rtti_implementation.m"
    {
#line 2444 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_6_p_2(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__Functor_9, mercury__rtti_implementation__FunctorNumber_10, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2444 "rtti_implementation.m"
  }
#line 81 "rtti_implementation.m"
}

#line 80 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_1(
#line 80 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 80 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 80 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_8,
#line 80 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 80 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 80 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 80 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 80 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2444 "rtti_implementation.m"
    {
#line 2444 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_p_1(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__Functor_9, mercury__rtti_implementation__FunctorNumber_10, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2444 "rtti_implementation.m"
  }
#line 80 "rtti_implementation.m"
}

#line 79 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__deconstruct_6_p_0(
#line 79 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_19,
#line 79 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Term_7,
#line 79 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__NonCanon_8,
#line 79 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Functor_9,
#line 79 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__FunctorNumber_10,
#line 79 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_11,
#line 79 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Arguments_12)
#line 79 "rtti_implementation.m"
{
#line 2444 "rtti_implementation.m"
  {
#line 2444 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2444 "rtti_implementation.m"
    {
#line 2444 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_p_0(mercury__rtti_implementation__TypeInfo_for_T_19, mercury__rtti_implementation__Term_7, mercury__rtti_implementation__Functor_9, mercury__rtti_implementation__FunctorNumber_10, mercury__rtti_implementation__Arity_11, mercury__rtti_implementation__Arguments_12);
    }
#line 2444 "rtti_implementation.m"
  }
#line 79 "rtti_implementation.m"
}

#line 76 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__construct_tuple_2_3_f_0(
#line 76 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation___Args_5,
#line 76 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation___ArgTypes_6,
#line 76 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation___Arity_7)
#line 76 "rtti_implementation.m"
{
#line 2438 "rtti_implementation.m"
  {
#line 2438 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 2438 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__4_8;

#line 2438 "rtti_implementation.m"
    {
#line 2438 "rtti_implementation.m"
      mercury__rtti_implementation__HeadVar__4_8 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_116_117_112_108_101_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0();
    }
#line 2438 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__4_8;
#line 2438 "rtti_implementation.m"
  }
#line 76 "rtti_implementation.m"
}

#line 74 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__construct_3_f_0(
#line 74 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_5,
#line 74 "rtti_implementation.m"
  MR_Integer mercury__rtti_implementation__HeadVar__2_6,
#line 74 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__3_7,
#line 74 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__4_8)
#line 74 "rtti_implementation.m"
{
#line 2388 "rtti_implementation.m"
  {
#line 2388 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 2388 "rtti_implementation.m"
    {
#line 2388 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_111_110_115_116_114_117_99_116_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_0(mercury__rtti_implementation__HeadVar__4_8);
    }
#line 2388 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 2388 "rtti_implementation.m"
  }
#line 74 "rtti_implementation.m"
}

#line 72 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__is_exist_pseudo_type_info_2_p_0(
#line 72 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_3,
#line 72 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__2_4)
#line 72 "rtti_implementation.m"
{
#line 1594 "rtti_implementation.m"
  {
#line 1594 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 1594 "rtti_implementation.m"
    {
#line 1594 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_101_120_105_115_116_95_112_115_101_117_100_111_95_116_121_112_101_95_105_110_102_111_95_95_91_49_93_95_48_2_p_0(mercury__rtti_implementation__HeadVar__2_4);
    }
#line 1594 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 1594 "rtti_implementation.m"
  }
#line 72 "rtti_implementation.m"
}

#line 71 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__is_univ_pseudo_type_info_2_p_0(
#line 71 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_3,
#line 71 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__HeadVar__2_4)
#line 71 "rtti_implementation.m"
{
#line 1573 "rtti_implementation.m"
  {
#line 1573 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 1573 "rtti_implementation.m"
    {
#line 1573 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_117_110_105_118_95_112_115_101_117_100_111_95_116_121_112_101_95_105_110_102_111_95_95_91_49_93_95_48_2_p_0(mercury__rtti_implementation__HeadVar__2_4);
    }
#line 1573 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 1573 "rtti_implementation.m"
  }
#line 71 "rtti_implementation.m"
}

#line 68 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__pseudo_type_ctor_and_args_3_p_0(
#line 68 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__HeadVar__1_4,
#line 68 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__2_5,
#line 68 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__HeadVar__3_6)
#line 68 "rtti_implementation.m"
{
#line 1552 "rtti_implementation.m"
  {
#line 1552 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 1552 "rtti_implementation.m"
    {
#line 1552 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_115_101_117_100_111_95_116_121_112_101_95_99_116_111_114_95_97_110_100_95_97_114_103_115_95_95_91_49_93_95_48_3_p_0(mercury__rtti_implementation__HeadVar__2_5, mercury__rtti_implementation__HeadVar__3_6);
    }
#line 1552 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 1552 "rtti_implementation.m"
  }
#line 68 "rtti_implementation.m"
}

#line 65 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0(
#line 65 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeCtorInfo_5,
#line 65 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__ModuleName_6,
#line 65 "rtti_implementation.m"
  MR_String * mercury__rtti_implementation__Name_7,
#line 65 "rtti_implementation.m"
  MR_Integer * mercury__rtti_implementation__Arity_8)
#line 65 "rtti_implementation.m"
{
#line 1461 "rtti_implementation.m"
  {
#line 1461 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 4328 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4328 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_module_name(tci);

#line 21178 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__rtti_implementation__ModuleName_6  = Name;
#line 4328 "rtti_implementation.m"
}
#line 4370 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_String Name;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4370 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Name = (MR_String) MR_type_ctor_name(tci);

#line 21199 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__rtti_implementation__Name_7  = Name;
#line 4370 "rtti_implementation.m"
}
#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_name_and_arity_4_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 21220 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__rtti_implementation__Arity_8  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 1461 "rtti_implementation.m"
  }
#line 65 "rtti_implementation.m"
}

#line 62 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__type_ctor_and_args_3_p_0(
#line 62 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo0_4,
#line 62 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__TypeCtorInfo_5,
#line 62 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__TypeArgs_6)
#line 62 "rtti_implementation.m"
{
#line 1466 "rtti_implementation.m"
  {
#line 1466 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 1466 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeInfo_7;
#line 1283 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorRep_24;

#line 1467 "rtti_implementation.m"
    {
#line 1467 "rtti_implementation.m"
      mercury__rtti_implementation__TypeInfo_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo0_4);
    }
#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_7 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 21271 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__rtti_implementation__TypeCtorInfo_5  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 4295 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeCtorInfo;
	MR_Word TypeCtorRep;

	TypeCtorInfo =  *mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4295 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    TypeCtorRep = MR_type_ctor_rep(tci);

#line 21292 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorRep_24  = TypeCtorRep;
#line 4295 "rtti_implementation.m"
}
#line 1286 "rtti_implementation.m"
#line 1286 "rtti_implementation.m"
    switch (mercury__rtti_implementation__TypeCtorRep_24) {
#line 1286 "rtti_implementation.m"
      default:
#line 1286 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_FALSE;
#line 1286 "rtti_implementation.m"
        break;
#line 1286 "rtti_implementation.m"
      case (MR_Integer) 7:
#line 1286 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
        break;
#line 1286 "rtti_implementation.m"
      case (MR_Integer) 12:
#line 1285 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
        break;
#line 1286 "rtti_implementation.m"
      case (MR_Integer) 30:
#line 1287 "rtti_implementation.m"
        mercury__rtti_implementation__succeeded = MR_TRUE;
#line 1286 "rtti_implementation.m"
        break;
#line 1286 "rtti_implementation.m"
    }
#line 1474 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1472 "rtti_implementation.m"
      {
#line 667 "rtti_implementation.m"
        {
#line 667 "rtti_implementation.m"
          mercury__private_builtin__sorry_1_p_0((MR_String) "get_var_arity_typeinfo_arity");
#line 667 "rtti_implementation.m"
          return;
        }
#line 1472 "rtti_implementation.m"
      }
#line 1474 "rtti_implementation.m"
    else
#line 1475 "rtti_implementation.m"
      {
#line 1475 "rtti_implementation.m"
        MR_Integer mercury__rtti_implementation__Arity_13;

#line 4196 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__type_ctor_and_args_3_p_0

	MR_Word TypeCtorInfo;
	MR_Integer Arity;

	TypeCtorInfo =  *mercury__rtti_implementation__TypeCtorInfo_5 ;
		{
#line 4196 "rtti_implementation.m"

    MR_TypeCtorInfo tci = (MR_TypeCtorInfo) TypeCtorInfo;
    Arity = tci->MR_type_ctor_arity;

#line 21362 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__Arity_13  = Arity;
#line 4196 "rtti_implementation.m"
}
#line 1476 "rtti_implementation.m"
        {
#line 1476 "rtti_implementation.m"
          *mercury__rtti_implementation__TypeArgs_6 = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_105_116_101_114_97_116_101_95_95_104_111_49_52_95_95_91_52_93_95_48_3_f_0(mercury__rtti_implementation__TypeInfo_7, (MR_Integer) 1, mercury__rtti_implementation__Arity_13);
        }
#line 1475 "rtti_implementation.m"
      }
#line 1466 "rtti_implementation.m"
  }
#line 62 "rtti_implementation.m"
}

#line 60 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__get_type_ctor_info_1_f_0(
#line 60 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_1)
#line 60 "rtti_implementation.m"
{
#line 3565 "rtti_implementation.m"
  {
#line 3565 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3565 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_2;

#line 3568 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_ctor_info_1_f_0

	MR_Word TypeInfo;
	MR_Word TypeCtorInfo;

	TypeInfo =  mercury__rtti_implementation__TypeInfo_1 ;
		{
#line 3568 "rtti_implementation.m"

    TypeCtorInfo = (MR_Word) MR_TYPEINFO_GET_TYPE_CTOR_INFO(
        (MR_TypeInfo) TypeInfo);

#line 21409 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__TypeCtorInfo_2  = TypeCtorInfo;
#line 3568 "rtti_implementation.m"
}
#line 3565 "rtti_implementation.m"
    return mercury__rtti_implementation__TypeCtorInfo_2;
#line 3565 "rtti_implementation.m"
  }
#line 60 "rtti_implementation.m"
}

#line 57 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__compare_type_infos_3_p_0(
#line 57 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Res_4,
#line 57 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo1_5,
#line 57 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo2_6)
#line 57 "rtti_implementation.m"
{
#line 1131 "rtti_implementation.m"
  {
#line 1131 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 3590 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_9_21;
#line 3590 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__TypeCtorInfo_9_22;

#line 3593 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (mercury__rtti_implementation__TypeInfo1_5)) ;
	T2 = (MR_Word) ((MR_Box) (mercury__rtti_implementation__TypeInfo2_6)) ;
		{
#line 3593 "rtti_implementation.m"

    SUCCESS_INDICATOR = (T1 == T2);

#line 21458 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3593 "rtti_implementation.m"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 1131 "rtti_implementation.m"
    if (mercury__rtti_implementation__succeeded)
#line 1130 "rtti_implementation.m"
      *mercury__rtti_implementation__Res_4 = (MR_Integer) 0;
#line 1131 "rtti_implementation.m"
    else
#line 1132 "rtti_implementation.m"
      {
#line 1132 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__NewTypeInfo1_7;
#line 1132 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__NewTypeInfo2_8;
#line 3590 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorInfo_10_23;
#line 3590 "rtti_implementation.m"
        MR_Word mercury__rtti_implementation__TypeCtorInfo_10_24;

#line 1132 "rtti_implementation.m"
        {
#line 1132 "rtti_implementation.m"
          mercury__rtti_implementation__NewTypeInfo1_7 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo1_5);
        }
#line 1133 "rtti_implementation.m"
        {
#line 1133 "rtti_implementation.m"
          mercury__rtti_implementation__NewTypeInfo2_8 = mercury__rtti_implementation__collapse_equivalences_1_f_0(mercury__rtti_implementation__TypeInfo2_6);
        }
#line 3593 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__compare_type_infos_3_p_0

	MR_Word T1;
	MR_Word T2;
	MR_bool SUCCESS_INDICATOR;

	T1 = (MR_Word) ((MR_Box) (mercury__rtti_implementation__NewTypeInfo1_7)) ;
	T2 = (MR_Word) ((MR_Box) (mercury__rtti_implementation__NewTypeInfo2_8)) ;
		{
#line 3593 "rtti_implementation.m"

    SUCCESS_INDICATOR = (T1 == T2);

#line 21509 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3593 "rtti_implementation.m"
	}
mercury__rtti_implementation__succeeded  = SUCCESS_INDICATOR;
}
#line 1136 "rtti_implementation.m"
        if (mercury__rtti_implementation__succeeded)
#line 1135 "rtti_implementation.m"
          *mercury__rtti_implementation__Res_4 = (MR_Integer) 0;
#line 1136 "rtti_implementation.m"
        else
#line 1137 "rtti_implementation.m"
          {
#line 1137 "rtti_implementation.m"
            mercury__rtti_implementation__compare_collapsed_type_infos_3_p_0(mercury__rtti_implementation__Res_4, mercury__rtti_implementation__NewTypeInfo1_7, mercury__rtti_implementation__NewTypeInfo2_8);
          }
#line 1132 "rtti_implementation.m"
      }
#line 1131 "rtti_implementation.m"
  }
#line 57 "rtti_implementation.m"
}

#line 55 "rtti_implementation.m"
void MR_CALL 
mercury__rtti_implementation__generic_compare_3_p_0(
#line 55 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_46,
#line 55 "rtti_implementation.m"
  MR_Word * mercury__rtti_implementation__Res_4,
#line 55 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__X_5,
#line 55 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Y_6)
#line 55 "rtti_implementation.m"
{
#line 672 "rtti_implementation.m"
  {
#line 672 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 672 "rtti_implementation.m"
    {
#line 672 "rtti_implementation.m"
      mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_99_111_109_112_97_114_101_95_95_91_51_44_32_52_93_95_48_3_p_0(mercury__rtti_implementation__TypeInfo_for_T_46, mercury__rtti_implementation__Res_4);
    }
#line 672 "rtti_implementation.m"
  }
#line 55 "rtti_implementation.m"
}

#line 53 "rtti_implementation.m"
MR_bool MR_CALL 
mercury__rtti_implementation__generic_unify_2_p_0(
#line 53 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_44,
#line 53 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__X_3,
#line 53 "rtti_implementation.m"
  MR_Box mercury__rtti_implementation__Y_4)
#line 53 "rtti_implementation.m"
{
#line 723 "rtti_implementation.m"
  {
#line 723 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;

#line 723 "rtti_implementation.m"
    {
#line 723 "rtti_implementation.m"
      mercury__rtti_implementation__succeeded = mercury__rtti_implementation__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_2_p_0(mercury__rtti_implementation__TypeInfo_for_T_44);
    }
#line 723 "rtti_implementation.m"
    return mercury__rtti_implementation__succeeded;
#line 723 "rtti_implementation.m"
  }
#line 53 "rtti_implementation.m"
}

#line 51 "rtti_implementation.m"
MR_Word MR_CALL 
mercury__rtti_implementation__get_type_info_1_f_0(
#line 51 "rtti_implementation.m"
  MR_Word mercury__rtti_implementation__TypeInfo_for_T_6)
#line 51 "rtti_implementation.m"
{
#line 634 "rtti_implementation.m"
  {
#line 634 "rtti_implementation.m"
    MR_bool mercury__rtti_implementation__succeeded;
#line 634 "rtti_implementation.m"
    MR_Word mercury__rtti_implementation__HeadVar__2_2;

#line 637 "rtti_implementation.m"
{
#define MR_PROC_LABEL mercury__rtti_implementation__get_type_info_1_f_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__rtti_implementation__TypeInfo_for_T_6 ;
		{
#line 637 "rtti_implementation.m"

    TypeInfo = TypeInfo_for_T;

#line 21619 "rtti_implementation.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtti_implementation__HeadVar__2_2  = TypeInfo;
#line 637 "rtti_implementation.m"
}
#line 634 "rtti_implementation.m"
    return mercury__rtti_implementation__HeadVar__2_2;
#line 634 "rtti_implementation.m"
  }
#line 51 "rtti_implementation.m"
}

void mercury__rtti_implementation__init(void)
{
}

void mercury__rtti_implementation__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_names_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_arg_types_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_du_sectag_alternatives_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_enum_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_exist_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_foreign_enum_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_notag_functor_desc_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_pseudo_type_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_ptag_entry_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_sectag_locn_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_ctor_rep_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_functors_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_type_layout_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeclass_info_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_typeinfo_locn_0);
	MR_register_type_ctor_info(&mercury__rtti_implementation__rtti_implementation__type_ctor_info_unify_or_compare_pred_0);
}

void mercury__rtti_implementation__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module rtti_implementation. */
