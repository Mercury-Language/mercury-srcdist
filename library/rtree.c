/*
** Automatically generated from `rtree.m'
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


/* :- module rtree. */
/* :- implementation. */

/*
INIT mercury__rtree__init
ENDINIT
*/

#include "rtree.mih"


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
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 94 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4];

#line 97 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0;

#line 100 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1];

#line 103 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1];

#line 106 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1];

#line 109 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1];

#line 112 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6];

#line 115 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0;

#line 118 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1];

#line 121 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1];

#line 124 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1];

#line 127 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1];

#line 130 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2;

#line 133 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2;

#line 136 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1];

#line 139 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0;

#line 142 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2];

#line 145 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1;

#line 148 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1];

#line 151 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1];

#line 154 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2];

#line 157 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2];

#line 160 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2];

#line 163 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2];

#line 166 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0;

#line 169 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1];

#line 172 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1];

#line 175 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1];

#line 178 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1];

#line 181 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0;

#line 184 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1;

#line 187 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2;

#line 190 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3;

#line 193 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4];

#line 196 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4];

#line 199 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4];

#line 202 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0;

#line 205 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1;

#line 208 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2;

#line 211 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3];

#line 214 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3];

#line 217 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3];

#line 220 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0;

#line 223 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1;

#line 226 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2];

#line 229 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2];

#line 232 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2];

#line 235 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2;

#line 238 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2];

#line 241 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0;

#line 244 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1];

#line 247 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1];

#line 250 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1];

#line 253 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1];

#line 256 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0;

#line 259 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2];

#line 262 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1;

#line 265 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1];

#line 268 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2;

#line 271 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1];

#line 274 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1];

#line 277 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1];

#line 280 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2[3];

#line 283 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3];

#line 286 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3];

#line 289 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1];

#line 292 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0;

#line 295 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4];

#line 298 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1;

#line 301 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6];

#line 304 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2;

#line 307 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8];

#line 310 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3;

#line 313 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1];

#line 316 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1];

#line 319 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1];

#line 322 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1];

#line 325 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2_2[4];

#line 328 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4];

#line 331 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4];

#line 334 "rtree.c"
static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1];

#line 337 "rtree.c"
static const MR_TypeClassMethod mercury__rtree__rtree__type_class_id_method_ids_region_1[5];

#line 340 "rtree.c"
static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1;

#line 343 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
#line 346 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 348 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 351 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
#line 354 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 356 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 358 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 361 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
#line 364 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 366 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 369 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
#line 372 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 374 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 376 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 379 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
#line 382 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 384 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 386 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 388 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 391 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
#line 394 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 396 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 398 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 400 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 402 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 405 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
#line 408 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 410 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 413 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
#line 416 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 418 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 420 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 423 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
#line 426 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 428 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 431 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
#line 434 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 436 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 438 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 441 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
#line 444 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 446 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 449 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
#line 452 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 454 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 456 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 459 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
#line 462 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 464 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 467 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
#line 470 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 472 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 474 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 477 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
#line 480 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 482 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 484 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 486 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 489 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
#line 492 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 494 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 496 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 498 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 500 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 503 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
#line 506 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 508 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 510 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 512 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 515 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
#line 518 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 520 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 522 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 524 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 526 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 529 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
#line 532 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 534 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 536 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 538 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 541 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
#line 544 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 546 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 548 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 550 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 552 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 555 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
#line 558 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 560 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 562 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 564 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 567 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
#line 570 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 572 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 574 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 576 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 578 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 581 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
#line 584 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 586 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 588 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 591 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
#line 594 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 596 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 598 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 601 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
#line 604 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 606 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 609 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 612 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 614 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 616 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 619 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 622 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 624 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 626 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 629 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
#line 632 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 634 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 636 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 639 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
#line 642 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 644 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 646 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 649 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
#line 652 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 654 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 657 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 660 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 662 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 664 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 667 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 670 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 672 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 674 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 677 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
#line 680 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 682 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 684 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 687 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
#line 690 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 692 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 694 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 697 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
#line 700 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 702 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 705 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 708 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 710 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 712 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 715 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 718 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 720 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 722 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 934 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
#line 934 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 934 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 934 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 934 "rtree.m"
  MR_Box mercury__rtree__QueryKey_8,
#line 934 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
#line 934 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11);

#line 893 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
#line 893 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 893 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 893 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 893 "rtree.m"
  MR_Box mercury__rtree__QueryKey_8,
#line 893 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
#line 893 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11);

#line 501 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
#line 501 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_29,
#line 501 "rtree.m"
  MR_Word mercury__rtree__Four_6,
#line 501 "rtree.m"
  MR_Box * mercury__rtree__K4_7,
#line 501 "rtree.m"
  MR_Word * mercury__rtree__T4_8,
#line 501 "rtree.m"
  MR_Box * mercury__rtree__K5_9,
#line 501 "rtree.m"
  MR_Word * mercury__rtree__T5_10);

#line 458 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
#line 458 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_52,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K0_10,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T0_11,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K1_12,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K2_14,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T2_15,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K_16,
#line 458 "rtree.m"
  MR_Box mercury__rtree__V_17,
#line 458 "rtree.m"
  MR_Word * mercury__rtree__T_18);

#line 422 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
#line 422 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_48,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K0_8,
#line 422 "rtree.m"
  MR_Word mercury__rtree__T0_9,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K1_10,
#line 422 "rtree.m"
  MR_Word mercury__rtree__T1_11,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K_12,
#line 422 "rtree.m"
  MR_Box mercury__rtree__V_13,
#line 422 "rtree.m"
  MR_Word * mercury__rtree__T_14);

#line 298 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 298 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_45,
#line 298 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 298 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 298 "rtree.m"
  MR_Box mercury__rtree__V_3,
#line 298 "rtree.m"
  MR_Word * mercury__rtree__T_4);

#line 1313 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__VM_12,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__EM_13,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__E1_14,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__E2_15,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T1_17,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__P_19,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__C_20,
#line 1313 "rtree.m"
  MR_Box * mercury__rtree__V_21,
#line 1313 "rtree.m"
  MR_Box * mercury__rtree__E_22);

#line 1287 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__VM_13,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__EM_14,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E0_15,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E1_16,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E2_17,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T0_18,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T1_19,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__P_21,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__C_22,
#line 1287 "rtree.m"
  MR_Box * mercury__rtree__V_23,
#line 1287 "rtree.m"
  MR_Box * mercury__rtree__E_24);

#line 1271 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_better_solution_two_9_p_0(
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__VM_10,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__EM_11,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__E1_12,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__P_15,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__C_16,
#line 1271 "rtree.m"
  MR_Box * mercury__rtree__V_17,
#line 1271 "rtree.m"
  MR_Box * mercury__rtree__E_18);

#line 1252 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__VM_11,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__EM_12,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__E0_13,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__E1_14,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__T0_15,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__P_17,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__C_18,
#line 1252 "rtree.m"
  MR_Box * mercury__rtree__V_19,
#line 1252 "rtree.m"
  MR_Box * mercury__rtree__E_20);

#line 1230 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_21,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_22,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_23,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__VM_9,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__EM_10,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__E0_11,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__P_13,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__C_14,
#line 1230 "rtree.m"
  MR_Box * mercury__rtree__V_15,
#line 1230 "rtree.m"
  MR_Box * mercury__rtree__E_16);

#line 1214 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_two_8_p_0(
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_19,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_20,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_21,
#line 1214 "rtree.m"
  MR_Box mercury__rtree__E1_9,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__T0_10,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__T1_11,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__P_12,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__C_13,
#line 1214 "rtree.m"
  MR_Box mercury__rtree__L_14,
#line 1214 "rtree.m"
  MR_Box * mercury__rtree__V_15,
#line 1214 "rtree.m"
  MR_Box * mercury__rtree__E_16);

#line 1200 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_three_10_p_0(
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_25,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__E1_11,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__E2_12,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T2_15,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__P_16,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__C_17,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__L_18,
#line 1200 "rtree.m"
  MR_Box * mercury__rtree__V_19,
#line 1200 "rtree.m"
  MR_Box * mercury__rtree__E_20);

#line 1186 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_29,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E1_13,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E2_14,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E3_15,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T1_17,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T3_19,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__P_20,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__C_21,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__L_22,
#line 1186 "rtree.m"
  MR_Box * mercury__rtree__V_23,
#line 1186 "rtree.m"
  MR_Box * mercury__rtree__E_24);

#line 1155 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_28,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_29,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_30,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E0_14,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E1_15,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E2_16,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E3_17,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T0_18,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T1_19,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T3_21,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__P_22,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__C_23,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__L_24,
#line 1155 "rtree.m"
  MR_Box * mercury__rtree__V_25,
#line 1155 "rtree.m"
  MR_Box * mercury__rtree__E_26);

#line 1134 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_24,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_25,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E0_12,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E1_13,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E2_14,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T0_15,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T2_17,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__P_18,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__C_19,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__L_20,
#line 1134 "rtree.m"
  MR_Box * mercury__rtree__V_21,
#line 1134 "rtree.m"
  MR_Box * mercury__rtree__E_22);

#line 1124 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_20,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_21,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__E0_10,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__E1_11,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__P_14,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__C_15,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__L_16,
#line 1124 "rtree.m"
  MR_Box * mercury__rtree__V_17,
#line 1124 "rtree.m"
  MR_Box * mercury__rtree__E_18);

#line 827 "rtree.m"
static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
#line 827 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_56,
#line 827 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K0_12,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K1_14,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T1_15,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K2_16,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T2_17,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K_18,
#line 827 "rtree.m"
  MR_Word mercury__rtree__S_19,
#line 827 "rtree.m"
  MR_Integer mercury__rtree__D0_20,
#line 827 "rtree.m"
  MR_Integer mercury__rtree__D_21,
#line 827 "rtree.m"
  MR_Word * mercury__rtree__T_22);

#line 792 "rtree.m"
static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
#line 792 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_52,
#line 792 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_51,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K0_10,
#line 792 "rtree.m"
  MR_Word mercury__rtree__T0_11,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K1_12,
#line 792 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K_14,
#line 792 "rtree.m"
  MR_Word mercury__rtree__S_15,
#line 792 "rtree.m"
  MR_Integer mercury__rtree__D0_16,
#line 792 "rtree.m"
  MR_Integer mercury__rtree__D_17,
#line 792 "rtree.m"
  MR_Word * mercury__rtree__T_18);

#line 749 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
#line 749 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_68,
#line 749 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_67,
#line 749 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 749 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 749 "rtree.m"
  MR_Word mercury__rtree__S_3,
#line 749 "rtree.m"
  MR_Integer mercury__rtree__D0_4,
#line 749 "rtree.m"
  MR_Integer mercury__rtree__D_5);

#line 734 "rtree.m"
static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
#line 734 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_31,
#line 734 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_30,
#line 734 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 734 "rtree.m"
  MR_Integer mercury__rtree__Depth_2,
#line 734 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 734 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__4_4);

#line 707 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
#line 707 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_43,
#line 707 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_42,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K0_15,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K1_17,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T1_18,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K2_19,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K3_21,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T3_22,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K_23,
#line 707 "rtree.m"
  MR_Box mercury__rtree__V_24,
#line 707 "rtree.m"
  MR_Integer mercury__rtree__D_25,
#line 707 "rtree.m"
  MR_Box * mercury__rtree__DK_26,
#line 707 "rtree.m"
  MR_Word * mercury__rtree__DT_27,
#line 707 "rtree.m"
  MR_Word * mercury__rtree__DI_28);

#line 687 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
#line 687 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_37,
#line 687 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_36,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K0_13,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T0_14,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K1_15,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K2_17,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K_19,
#line 687 "rtree.m"
  MR_Box mercury__rtree__V_20,
#line 687 "rtree.m"
  MR_Integer mercury__rtree__Depth_21,
#line 687 "rtree.m"
  MR_Box * mercury__rtree__DK_22,
#line 687 "rtree.m"
  MR_Word * mercury__rtree__DT_23,
#line 687 "rtree.m"
  MR_Word * mercury__rtree__DI_24);

#line 667 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
#line 667 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_32,
#line 667 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_31,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K0_11,
#line 667 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K1_13,
#line 667 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K_15,
#line 667 "rtree.m"
  MR_Box mercury__rtree__V_16,
#line 667 "rtree.m"
  MR_Integer mercury__rtree__Depth_17,
#line 667 "rtree.m"
  MR_Box * mercury__rtree__DK_18,
#line 667 "rtree.m"
  MR_Word * mercury__rtree__DT_19,
#line 667 "rtree.m"
  MR_Word * mercury__rtree__Info_20);

#line 614 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
#line 614 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_67,
#line 614 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_66,
#line 614 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 614 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 614 "rtree.m"
  MR_Box mercury__rtree__V_3,
#line 614 "rtree.m"
  MR_Integer mercury__rtree__Depth_4,
#line 614 "rtree.m"
  MR_Box * mercury__rtree__HeadVar__5_5,
#line 614 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__6_6,
#line 614 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__7_7);

#line 377 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
#line 377 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_27,
#line 377 "rtree.m"
  MR_Box mercury__rtree__Key_6,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KA_7,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KB_8,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KC_9);

#line 353 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
#line 353 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_15,
#line 353 "rtree.m"
  MR_Box mercury__rtree__Key_5,
#line 353 "rtree.m"
  MR_Box mercury__rtree__KA_6,
#line 353 "rtree.m"
  MR_Box mercury__rtree__KB_7);


static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__rtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rtree_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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



#line 1489 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1497 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0 = {
  (MR_String) "box",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_box_0_0,
  NULL,
  NULL,
  NULL
};

#line 1512 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

#line 1517 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box_0_0
  }
};

#line 1526 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

#line 1531 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1] = {
  (MR_Integer) 0
};

#line 1536 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box",
  {     mercury__rtree__rtree__du_name_ordered_box_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_box_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box_0
};

#line 1553 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1563 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0 = {
  (MR_String) "box3d",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_box3d_0_0,
  NULL,
  NULL,
  NULL
};

#line 1578 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

#line 1583 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box3d_0_0
  }
};

#line 1592 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

#line 1597 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1] = {
  (MR_Integer) 0
};

#line 1602 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box3d_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box3d_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box3d_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box3d",
  {     mercury__rtree__rtree__du_name_ordered_box3d_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_box3d_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box3d_0
};

#line 1619 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_orphan_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1628 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2
  }
};

#line 1636 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

#line 1641 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0 = {
  (MR_String) "deleting",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_delete_info_2_0,
  NULL,
  NULL,
  NULL
};

#line 1656 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

#line 1662 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1 = {
  (MR_String) "finished",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_delete_info_2_1,
  NULL,
  NULL,
  NULL
};

#line 1677 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0
};

#line 1682 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

#line 1687 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_delete_info_2_1
  }
};

#line 1701 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0,
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

#line 1707 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1713 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_delete_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____delete_info_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____delete_info_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "delete_info",
  {     mercury__rtree__rtree__du_name_ordered_delete_info_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_delete_info_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_delete_info_2
};

#line 1730 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1736 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0 = {
  (MR_String) "interval",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_interval_0_0,
  NULL,
  NULL,
  NULL
};

#line 1751 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

#line 1756 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_interval_0_0
  }
};

#line 1765 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

#line 1770 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1] = {
  (MR_Integer) 0
};

#line 1775 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_interval_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____interval_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____interval_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "interval",
  {     mercury__rtree__rtree__du_name_ordered_interval_0 },
  {     mercury__rtree__rtree__du_ptag_ordered_interval_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_interval_0
};

#line 1792 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0 = {
  (MR_String) "min4_first",
  (MR_Integer) 0
};

#line 1798 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1 = {
  (MR_String) "min4_second",
  (MR_Integer) 1
};

#line 1804 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2 = {
  (MR_String) "min4_third",
  (MR_Integer) 2
};

#line 1810 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3 = {
  (MR_String) "min4_fourth",
  (MR_Integer) 3
};

#line 1816 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3
};

#line 1824 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2
};

#line 1832 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1840 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_four_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_four_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_four_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_four_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_four_result_0
};

#line 1857 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0 = {
  (MR_String) "min3_first",
  (MR_Integer) 0
};

#line 1863 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1 = {
  (MR_String) "min3_second",
  (MR_Integer) 1
};

#line 1869 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2 = {
  (MR_String) "min3_third",
  (MR_Integer) 2
};

#line 1875 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

#line 1882 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

#line 1889 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1896 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_three_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_three_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_three_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_three_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_three_result_0
};

#line 1913 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0 = {
  (MR_String) "min2_first",
  (MR_Integer) 0
};

#line 1919 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1 = {
  (MR_String) "min2_second",
  (MR_Integer) 1
};

#line 1925 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

#line 1931 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

#line 1937 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1943 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_two_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_two_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_two_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_two_result",
  {     mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0 },
  {     mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_two_result_0
};

#line 1960 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_rtree_2_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1969 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 1975 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0 = {
  (MR_String) "orphan",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_orphan_2_0,
  NULL,
  NULL,
  NULL
};

#line 1990 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

#line 1995 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_orphan_2_0
  }
};

#line 2004 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

#line 2009 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1] = {
  (MR_Integer) 0
};

#line 2014 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphan_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____orphan_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphan_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphan",
  {     mercury__rtree__rtree__du_name_ordered_orphan_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_orphan_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_orphan_2
};

#line 2031 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphans_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__rtree____Unify____orphans_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphans_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphans",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2048 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0 = {
  (MR_String) "empty",
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

#line 2063 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2069 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1 = {
  (MR_String) "one",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_rtree_2_1,
  NULL,
  NULL,
  NULL
};

#line 2084 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2089 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2 = {
  (MR_String) "rtree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rtree__rtree__field_types_rtree_2_2,
  NULL,
  NULL,
  NULL
};

#line 2104 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0
};

#line 2109 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1
};

#line 2114 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

#line 2119 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2
  }
};

#line 2138 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

#line 2145 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2152 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree",
  {     mercury__rtree__rtree__du_name_ordered_rtree_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_rtree_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2
};

#line 2169 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2174 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0 = {
  (MR_String) "leaf",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__rtree__rtree__field_types_rtree_2_2_0,
  NULL,
  NULL,
  NULL
};

#line 2189 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2197 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1 = {
  (MR_String) "two",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rtree__rtree__field_types_rtree_2_2_1,
  NULL,
  NULL,
  NULL
};

#line 2212 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2222 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2 = {
  (MR_String) "three",
  (MR_Integer) 6,
  (MR_Integer) 63,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rtree__rtree__field_types_rtree_2_2_2,
  NULL,
  NULL,
  NULL
};

#line 2237 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2249 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3 = {
  (MR_String) "four",
  (MR_Integer) 8,
  (MR_Integer) 255,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__rtree__rtree__field_types_rtree_2_2_3,
  NULL,
  NULL,
  NULL
};

#line 2264 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0
};

#line 2269 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

#line 2274 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2
};

#line 2279 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3
};

#line 2284 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2_2[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3
  }
};

#line 2308 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

#line 2316 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2324 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree_2",
  {     mercury__rtree__rtree__du_name_ordered_rtree_2_2 },
  {     mercury__rtree__rtree__du_ptag_ordered_rtree_2_2 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2_2
};

#line 2341 "rtree.c"
const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__interval__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

#line 2355 "rtree.c"
const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

#line 2369 "rtree.c"
const MR_BaseTypeclassInfo base_typeclass_info_rtree__region__arity1__rtree__box3d__arity0__[10] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001)),
  ((MR_Box) (mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001))
};

#line 2383 "rtree.c"
static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1] = {
  (MR_String) "K"
};

#line 2388 "rtree.c"
static const MR_TypeClassMethod mercury__rtree__rtree__type_class_id_method_ids_region_1[5] = {
  {
    (MR_String) "intersects",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "contains",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "size",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bounding_region",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "bounding_region_size",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 2417 "rtree.c"
static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1 = {
  (MR_String) "rtree",
  (MR_String) "region",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  mercury__rtree__rtree__type_class_id_var_names_region_1,
  mercury__rtree__rtree__type_class_id_method_ids_region_1
};

#line 2428 "rtree.c"
const MR_TypeClassDeclStruct mercury__rtree__rtree__type_class_decl_region_1 = {
  &mercury__rtree__rtree__type_class_id_region_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2436 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
#line 2439 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2441 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2443 "rtree.c"
{
#line 2445 "rtree.c"
  {
#line 2447 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2450 "rtree.c"
    {
#line 2452 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____box_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2455 "rtree.c"
    return mercury__rtree__succeeded;
#line 2457 "rtree.c"
  }
#line 2459 "rtree.c"
}

#line 2462 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
#line 2465 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2467 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2469 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2471 "rtree.c"
{
#line 2473 "rtree.c"
  {
#line 2475 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2478 "rtree.c"
    {
#line 2480 "rtree.c"
      mercury__rtree____Compare____box_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2483 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2485 "rtree.c"
  }
#line 2487 "rtree.c"
}

#line 2490 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
#line 2493 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2495 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2497 "rtree.c"
{
#line 2499 "rtree.c"
  {
#line 2501 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2504 "rtree.c"
    {
#line 2506 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____box3d_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2509 "rtree.c"
    return mercury__rtree__succeeded;
#line 2511 "rtree.c"
  }
#line 2513 "rtree.c"
}

#line 2516 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
#line 2519 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2521 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2523 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2525 "rtree.c"
{
#line 2527 "rtree.c"
  {
#line 2529 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2532 "rtree.c"
    {
#line 2534 "rtree.c"
      mercury__rtree____Compare____box3d_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2537 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2539 "rtree.c"
  }
#line 2541 "rtree.c"
}

#line 2544 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
#line 2547 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2549 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2551 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 2553 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 2555 "rtree.c"
{
#line 2557 "rtree.c"
  {
#line 2559 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2562 "rtree.c"
    {
#line 2564 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 2567 "rtree.c"
    return mercury__rtree__succeeded;
#line 2569 "rtree.c"
  }
#line 2571 "rtree.c"
}

#line 2574 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
#line 2577 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2579 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2581 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 2583 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 2585 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 2587 "rtree.c"
{
#line 2589 "rtree.c"
  {
#line 2591 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2594 "rtree.c"
    {
#line 2596 "rtree.c"
      mercury__rtree____Compare____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 2599 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2601 "rtree.c"
  }
#line 2603 "rtree.c"
}

#line 2606 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
#line 2609 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2611 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2613 "rtree.c"
{
#line 2615 "rtree.c"
  {
#line 2617 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2620 "rtree.c"
    {
#line 2622 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____interval_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2625 "rtree.c"
    return mercury__rtree__succeeded;
#line 2627 "rtree.c"
  }
#line 2629 "rtree.c"
}

#line 2632 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
#line 2635 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2637 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2639 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2641 "rtree.c"
{
#line 2643 "rtree.c"
  {
#line 2645 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2648 "rtree.c"
    {
#line 2650 "rtree.c"
      mercury__rtree____Compare____interval_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2653 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2655 "rtree.c"
  }
#line 2657 "rtree.c"
}

#line 2660 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
#line 2663 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2665 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2667 "rtree.c"
{
#line 2669 "rtree.c"
  {
#line 2671 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2674 "rtree.c"
    {
#line 2676 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_four_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2679 "rtree.c"
    return mercury__rtree__succeeded;
#line 2681 "rtree.c"
  }
#line 2683 "rtree.c"
}

#line 2686 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
#line 2689 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2691 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2693 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2695 "rtree.c"
{
#line 2697 "rtree.c"
  {
#line 2699 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2702 "rtree.c"
    {
#line 2704 "rtree.c"
      mercury__rtree____Compare____min_of_four_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2707 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2709 "rtree.c"
  }
#line 2711 "rtree.c"
}

#line 2714 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
#line 2717 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2719 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2721 "rtree.c"
{
#line 2723 "rtree.c"
  {
#line 2725 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2728 "rtree.c"
    {
#line 2730 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_three_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2733 "rtree.c"
    return mercury__rtree__succeeded;
#line 2735 "rtree.c"
  }
#line 2737 "rtree.c"
}

#line 2740 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
#line 2743 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2745 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2747 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2749 "rtree.c"
{
#line 2751 "rtree.c"
  {
#line 2753 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2756 "rtree.c"
    {
#line 2758 "rtree.c"
      mercury__rtree____Compare____min_of_three_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2761 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2763 "rtree.c"
  }
#line 2765 "rtree.c"
}

#line 2768 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
#line 2771 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2773 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2775 "rtree.c"
{
#line 2777 "rtree.c"
  {
#line 2779 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2782 "rtree.c"
    {
#line 2784 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_two_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2787 "rtree.c"
    return mercury__rtree__succeeded;
#line 2789 "rtree.c"
  }
#line 2791 "rtree.c"
}

#line 2794 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
#line 2797 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2799 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2801 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2803 "rtree.c"
{
#line 2805 "rtree.c"
  {
#line 2807 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2810 "rtree.c"
    {
#line 2812 "rtree.c"
      mercury__rtree____Compare____min_of_two_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2815 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2817 "rtree.c"
  }
#line 2819 "rtree.c"
}

#line 2822 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
#line 2825 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2827 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2829 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 2831 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 2833 "rtree.c"
{
#line 2835 "rtree.c"
  {
#line 2837 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2840 "rtree.c"
    {
#line 2842 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 2845 "rtree.c"
    return mercury__rtree__succeeded;
#line 2847 "rtree.c"
  }
#line 2849 "rtree.c"
}

#line 2852 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
#line 2855 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2857 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2859 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 2861 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 2863 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 2865 "rtree.c"
{
#line 2867 "rtree.c"
  {
#line 2869 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2872 "rtree.c"
    {
#line 2874 "rtree.c"
      mercury__rtree____Compare____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 2877 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2879 "rtree.c"
  }
#line 2881 "rtree.c"
}

#line 2884 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
#line 2887 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2889 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2891 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 2893 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 2895 "rtree.c"
{
#line 2897 "rtree.c"
  {
#line 2899 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2902 "rtree.c"
    {
#line 2904 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 2907 "rtree.c"
    return mercury__rtree__succeeded;
#line 2909 "rtree.c"
  }
#line 2911 "rtree.c"
}

#line 2914 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
#line 2917 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2919 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2921 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 2923 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 2925 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 2927 "rtree.c"
{
#line 2929 "rtree.c"
  {
#line 2931 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2934 "rtree.c"
    {
#line 2936 "rtree.c"
      mercury__rtree____Compare____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 2939 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2941 "rtree.c"
  }
#line 2943 "rtree.c"
}

#line 2946 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
#line 2949 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2951 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2953 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 2955 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 2957 "rtree.c"
{
#line 2959 "rtree.c"
  {
#line 2961 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2964 "rtree.c"
    {
#line 2966 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 2969 "rtree.c"
    return mercury__rtree__succeeded;
#line 2971 "rtree.c"
  }
#line 2973 "rtree.c"
}

#line 2976 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
#line 2979 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2981 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2983 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 2985 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 2987 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 2989 "rtree.c"
{
#line 2991 "rtree.c"
  {
#line 2993 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2996 "rtree.c"
    {
#line 2998 "rtree.c"
      mercury__rtree____Compare____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3001 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3003 "rtree.c"
  }
#line 3005 "rtree.c"
}

#line 3008 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
#line 3011 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3013 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3015 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 3017 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 3019 "rtree.c"
{
#line 3021 "rtree.c"
  {
#line 3023 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3026 "rtree.c"
    {
#line 3028 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 3031 "rtree.c"
    return mercury__rtree__succeeded;
#line 3033 "rtree.c"
  }
#line 3035 "rtree.c"
}

#line 3038 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
#line 3041 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3043 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3045 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 3047 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 3049 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 3051 "rtree.c"
{
#line 3053 "rtree.c"
  {
#line 3055 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3058 "rtree.c"
    {
#line 3060 "rtree.c"
      mercury__rtree____Compare____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3063 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3065 "rtree.c"
  }
#line 3067 "rtree.c"
}

#line 3070 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
#line 3073 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3075 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3077 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3079 "rtree.c"
{
#line 3081 "rtree.c"
  {
#line 3083 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3085 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3088 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3090 "rtree.c"
    {
#line 3092 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3095 "rtree.c"
    return mercury__rtree__succeeded;
#line 3097 "rtree.c"
  }
#line 3099 "rtree.c"
}

#line 3102 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
#line 3105 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3107 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3109 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3111 "rtree.c"
{
#line 3113 "rtree.c"
  {
#line 3115 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3117 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3120 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3122 "rtree.c"
    {
#line 3124 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3127 "rtree.c"
    return mercury__rtree__succeeded;
#line 3129 "rtree.c"
  }
#line 3131 "rtree.c"
}

#line 3134 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
#line 3137 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3139 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3141 "rtree.c"
{
#line 3143 "rtree.c"
  {
#line 3145 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3147 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3149 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3152 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3154 "rtree.c"
    {
#line 3156 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3159 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3161 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3163 "rtree.c"
  }
#line 3165 "rtree.c"
}

#line 3168 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3171 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3173 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3175 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3177 "rtree.c"
{
#line 3179 "rtree.c"
  {
#line 3181 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3183 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3185 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3188 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3190 "rtree.c"
    {
#line 3192 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3195 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3197 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3199 "rtree.c"
  }
#line 3201 "rtree.c"
}

#line 3204 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3207 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3209 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3211 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3213 "rtree.c"
{
#line 3215 "rtree.c"
  {
#line 3217 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3219 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3221 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3224 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3226 "rtree.c"
    {
#line 3228 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3231 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3233 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3235 "rtree.c"
  }
#line 3237 "rtree.c"
}

#line 3240 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
#line 3243 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3245 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3247 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3249 "rtree.c"
{
#line 3251 "rtree.c"
  {
#line 3253 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3255 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3258 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3260 "rtree.c"
    {
#line 3262 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3265 "rtree.c"
    return mercury__rtree__succeeded;
#line 3267 "rtree.c"
  }
#line 3269 "rtree.c"
}

#line 3272 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
#line 3275 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3277 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3279 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3281 "rtree.c"
{
#line 3283 "rtree.c"
  {
#line 3285 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3287 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3290 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3292 "rtree.c"
    {
#line 3294 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3297 "rtree.c"
    return mercury__rtree__succeeded;
#line 3299 "rtree.c"
  }
#line 3301 "rtree.c"
}

#line 3304 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
#line 3307 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3309 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3311 "rtree.c"
{
#line 3313 "rtree.c"
  {
#line 3315 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3317 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3319 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3322 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3324 "rtree.c"
    {
#line 3326 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3329 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3331 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3333 "rtree.c"
  }
#line 3335 "rtree.c"
}

#line 3338 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3341 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3343 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3345 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3347 "rtree.c"
{
#line 3349 "rtree.c"
  {
#line 3351 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3353 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3355 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3358 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3360 "rtree.c"
    {
#line 3362 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3365 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3367 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3369 "rtree.c"
  }
#line 3371 "rtree.c"
}

#line 3374 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3377 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3379 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3381 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3383 "rtree.c"
{
#line 3385 "rtree.c"
  {
#line 3387 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3389 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3391 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3394 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3396 "rtree.c"
    {
#line 3398 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3401 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3403 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3405 "rtree.c"
  }
#line 3407 "rtree.c"
}

#line 3410 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
#line 3413 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3415 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3417 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3419 "rtree.c"
{
#line 3421 "rtree.c"
  {
#line 3423 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3425 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3428 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3430 "rtree.c"
    {
#line 3432 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3435 "rtree.c"
    return mercury__rtree__succeeded;
#line 3437 "rtree.c"
  }
#line 3439 "rtree.c"
}

#line 3442 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
#line 3445 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3447 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3449 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3451 "rtree.c"
{
#line 3453 "rtree.c"
  {
#line 3455 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3457 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3460 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3462 "rtree.c"
    {
#line 3464 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3467 "rtree.c"
    return mercury__rtree__succeeded;
#line 3469 "rtree.c"
  }
#line 3471 "rtree.c"
}

#line 3474 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
#line 3477 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3479 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3481 "rtree.c"
{
#line 3483 "rtree.c"
  {
#line 3485 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3487 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3489 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3492 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3494 "rtree.c"
    {
#line 3496 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3499 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3501 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3503 "rtree.c"
  }
#line 3505 "rtree.c"
}

#line 3508 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3511 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3513 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3515 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3517 "rtree.c"
{
#line 3519 "rtree.c"
  {
#line 3521 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3523 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3525 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3528 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3530 "rtree.c"
    {
#line 3532 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3535 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3537 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3539 "rtree.c"
  }
#line 3541 "rtree.c"
}

#line 3544 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3547 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3549 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3551 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3553 "rtree.c"
{
#line 3555 "rtree.c"
  {
#line 3557 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3559 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3561 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3564 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3566 "rtree.c"
    {
#line 3568 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3571 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3573 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3575 "rtree.c"
  }
#line 3577 "rtree.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__rtree__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 934 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
#line 934 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 934 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 934 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 934 "rtree.m"
  MR_Box mercury__rtree__QueryKey_8,
#line 934 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
#line 934 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11)
#line 934 "rtree.m"
{
#line 940 "rtree.m"
  while (MR_TRUE)
#line 940 "rtree.m"
    {
#line 940 "rtree.m"
      /* tailcall optimized into a loop */
#line 940 "rtree.m"
      {
#line 940 "rtree.m"
        MR_bool mercury__rtree__succeeded;
#line 44 "rtree.m"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
        {
#line 44 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
        }
#line 940 "rtree.m"
        if (mercury__rtree__succeeded)
#line 920 "rtree.m"
#line 920 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
#line 920 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 920 "rtree.m"
            case (MR_Integer) 0:
#line 920 "rtree.m"
              {
#line 920 "rtree.m"
                MR_Box mercury__rtree__Value_15 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));

#line 920 "rtree.m"
                {
#line 920 "rtree.m"
                  MR_Word base;
#line 920 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "rtree.m"
                  *mercury__rtree__STATE_VARIABLE_Values_11 = base;
#line 920 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_15;
#line 920 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_Values_0_10));
#line 920 "rtree.m"
                }
#line 920 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 1:
#line 921 "rtree.m"
              {
#line 921 "rtree.m"
                MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 0));
#line 921 "rtree.m"
                MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 1)));
#line 921 "rtree.m"
                MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 2));
#line 921 "rtree.m"
                MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 3)));
#line 921 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 922 "rtree.m"
                {
#line 922 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_16_26);
                }
#line 923 "rtree.m"
                /* direct tailcall eliminated */
#line 923 "rtree.m"
                {
#line 923 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K1_20;
#line 923 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T1_21;
#line 923 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 923 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 923 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 923 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 923 "rtree.m"
                }
#line 923 "rtree.m"
                continue;
#line 921 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 2:
#line 924 "rtree.m"
              {
#line 924 "rtree.m"
                MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 0));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 1)));
#line 924 "rtree.m"
                MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 2));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 3)));
#line 924 "rtree.m"
                MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 4));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 5)));
#line 924 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_28_38;
#line 924 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 925 "rtree.m"
                {
#line 925 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_28_38);
                }
#line 926 "rtree.m"
                {
#line 926 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_28_38, &mercury__rtree__STATE_VARIABLE_Values_29_39);
                }
#line 927 "rtree.m"
                /* direct tailcall eliminated */
#line 927 "rtree.m"
                {
#line 927 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K2_32;
#line 927 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T2_33;
#line 927 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 927 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 927 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 927 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 927 "rtree.m"
                }
#line 927 "rtree.m"
                continue;
#line 924 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 3:
#line 928 "rtree.m"
              {
#line 928 "rtree.m"
                MR_Box mercury__rtree__K0_41 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 0));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 1)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K1_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 2));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 3)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K2_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 4));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T2_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 5)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K3_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 6));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T3_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 7)));
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_43_53;
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_44_54;
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 929 "rtree.m"
                {
#line 929 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_41, mercury__rtree__T0_42, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_43_53);
                }
#line 930 "rtree.m"
                {
#line 930 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_43, mercury__rtree__T1_44, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_43_53, &mercury__rtree__STATE_VARIABLE_Values_44_54);
                }
#line 931 "rtree.m"
                {
#line 931 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_45, mercury__rtree__T2_46, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_44_54, &mercury__rtree__STATE_VARIABLE_Values_45_55);
                }
#line 932 "rtree.m"
                /* direct tailcall eliminated */
#line 932 "rtree.m"
                {
#line 932 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K3_47;
#line 932 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T3_48;
#line 932 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 932 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 932 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 932 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 932 "rtree.m"
                }
#line 932 "rtree.m"
                continue;
#line 928 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
          }
#line 940 "rtree.m"
        else
#line 940 "rtree.m"
          *mercury__rtree__STATE_VARIABLE_Values_11 = mercury__rtree__STATE_VARIABLE_Values_0_10;
#line 940 "rtree.m"
      }
#line 940 "rtree.m"
      break;
#line 940 "rtree.m"
    }
#line 934 "rtree.m"
}

#line 893 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(
#line 893 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 893 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 893 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 893 "rtree.m"
  MR_Box mercury__rtree__QueryKey_8,
#line 893 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_10,
#line 893 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_11)
#line 893 "rtree.m"
{
#line 899 "rtree.m"
  while (MR_TRUE)
#line 899 "rtree.m"
    {
#line 899 "rtree.m"
      /* tailcall optimized into a loop */
#line 899 "rtree.m"
      {
#line 899 "rtree.m"
        MR_bool mercury__rtree__succeeded;
#line 40 "rtree.m"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

#line 40 "rtree.m"
        {
#line 40 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
        }
#line 899 "rtree.m"
        if (mercury__rtree__succeeded)
#line 879 "rtree.m"
#line 879 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
#line 879 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 879 "rtree.m"
            case (MR_Integer) 0:
#line 879 "rtree.m"
              {
#line 879 "rtree.m"
                MR_Box mercury__rtree__Value_15 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));

#line 879 "rtree.m"
                {
#line 879 "rtree.m"
                  MR_Word base;
#line 879 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "rtree.m"
                  *mercury__rtree__STATE_VARIABLE_Values_11 = base;
#line 879 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_15;
#line 879 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_Values_0_10));
#line 879 "rtree.m"
                }
#line 879 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 1:
#line 880 "rtree.m"
              {
#line 880 "rtree.m"
                MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 0));
#line 880 "rtree.m"
                MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 1)));
#line 880 "rtree.m"
                MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 2));
#line 880 "rtree.m"
                MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_7, (MR_Integer) 3)));
#line 880 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 881 "rtree.m"
                {
#line 881 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_16_26);
                }
#line 882 "rtree.m"
                /* direct tailcall eliminated */
#line 882 "rtree.m"
                {
#line 882 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K1_20;
#line 882 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T1_21;
#line 882 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 882 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 882 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 882 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 882 "rtree.m"
                }
#line 882 "rtree.m"
                continue;
#line 880 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 2:
#line 883 "rtree.m"
              {
#line 883 "rtree.m"
                MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 0));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 1)));
#line 883 "rtree.m"
                MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 2));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 3)));
#line 883 "rtree.m"
                MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 4));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_7, (MR_Integer) 5)));
#line 883 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_28_38;
#line 883 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 884 "rtree.m"
                {
#line 884 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_28_38);
                }
#line 885 "rtree.m"
                {
#line 885 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_28_38, &mercury__rtree__STATE_VARIABLE_Values_29_39);
                }
#line 886 "rtree.m"
                /* direct tailcall eliminated */
#line 886 "rtree.m"
                {
#line 886 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K2_32;
#line 886 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T2_33;
#line 886 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 886 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 886 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 886 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 886 "rtree.m"
                }
#line 886 "rtree.m"
                continue;
#line 883 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 3:
#line 887 "rtree.m"
              {
#line 887 "rtree.m"
                MR_Box mercury__rtree__K0_41 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 0));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 1)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K1_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 2));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 3)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K2_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 4));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T2_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 5)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K3_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 6));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T3_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_7, (MR_Integer) 7)));
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_43_53;
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_44_54;
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 888 "rtree.m"
                {
#line 888 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_41, mercury__rtree__T0_42, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_0_10, &mercury__rtree__STATE_VARIABLE_Values_43_53);
                }
#line 889 "rtree.m"
                {
#line 889 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_43, mercury__rtree__T1_44, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_43_53, &mercury__rtree__STATE_VARIABLE_Values_44_54);
                }
#line 890 "rtree.m"
                {
#line 890 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_45, mercury__rtree__T2_46, mercury__rtree__QueryKey_8, mercury__rtree__STATE_VARIABLE_Values_44_54, &mercury__rtree__STATE_VARIABLE_Values_45_55);
                }
#line 891 "rtree.m"
                /* direct tailcall eliminated */
#line 891 "rtree.m"
                {
#line 891 "rtree.m"
                  MR_Box mercury__rtree__K__tmp_copy_6 = mercury__rtree__K3_47;
#line 891 "rtree.m"
                  MR_Word mercury__rtree__T__tmp_copy_7 = mercury__rtree__T3_48;
#line 891 "rtree.m"
                  MR_Word mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10 = mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 891 "rtree.m"
                  mercury__rtree__STATE_VARIABLE_Values_0_10 = mercury__rtree__STATE_VARIABLE_Values_0__tmp_copy_10;
#line 891 "rtree.m"
                  mercury__rtree__T_7 = mercury__rtree__T__tmp_copy_7;
#line 891 "rtree.m"
                  mercury__rtree__K_6 = mercury__rtree__K__tmp_copy_6;
#line 891 "rtree.m"
                }
#line 891 "rtree.m"
                continue;
#line 887 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
          }
#line 899 "rtree.m"
        else
#line 899 "rtree.m"
          *mercury__rtree__STATE_VARIABLE_Values_11 = mercury__rtree__STATE_VARIABLE_Values_0_10;
#line 899 "rtree.m"
      }
#line 899 "rtree.m"
      break;
#line 899 "rtree.m"
    }
#line 893 "rtree.m"
}

#line 501 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(
#line 501 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_29,
#line 501 "rtree.m"
  MR_Word mercury__rtree__Four_6,
#line 501 "rtree.m"
  MR_Box * mercury__rtree__K4_7,
#line 501 "rtree.m"
  MR_Word * mercury__rtree__T4_8,
#line 501 "rtree.m"
  MR_Box * mercury__rtree__K5_9,
#line 501 "rtree.m"
  MR_Word * mercury__rtree__T5_10)
#line 501 "rtree.m"
{
#line 504 "rtree.m"
  {
#line 504 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 504 "rtree.m"
    MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 0));
#line 504 "rtree.m"
    MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 1)));
#line 504 "rtree.m"
    MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 2));
#line 504 "rtree.m"
    MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 3)));
#line 504 "rtree.m"
    MR_Box mercury__rtree__K2_15 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 4));
#line 504 "rtree.m"
    MR_Word mercury__rtree__T2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 5)));
#line 504 "rtree.m"
    MR_Box mercury__rtree__K3_17 = (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 6));
#line 504 "rtree.m"
    MR_Word mercury__rtree__T3_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__Four_6, (MR_Integer) 7)));
#line 504 "rtree.m"
    MR_Float mercury__rtree__A01_19;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A23_20;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A0123_21;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A02_22;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A13_23;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A0213_24;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A03_25;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A12_26;
#line 504 "rtree.m"
    MR_Float mercury__rtree__A0312_27;
#line 504 "rtree.m"
    MR_Word mercury__rtree__Min_28;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv1_A01_19;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv3_A23_20;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv5_A02_22;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv7_A13_23;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv9_A03_25;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv11_A12_26;

#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv1_A01_19 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K1_13);
    }
#line 72 "rtree.m"
    mercury__rtree__A01_19 = MR_unbox_float(mercury__rtree__conv1_A01_19);
#line 72 "rtree.m"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv3_A23_20 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K2_15, mercury__rtree__K3_17);
    }
#line 72 "rtree.m"
    mercury__rtree__A23_20 = MR_unbox_float(mercury__rtree__conv3_A23_20);
#line 508 "rtree.m"
    mercury__rtree__A0123_21 = (mercury__rtree__A01_19 + mercury__rtree__A23_20);
#line 72 "rtree.m"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv5_A02_22 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K2_15);
    }
#line 72 "rtree.m"
    mercury__rtree__A02_22 = MR_unbox_float(mercury__rtree__conv5_A02_22);
#line 72 "rtree.m"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv7_A13_23 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K3_17);
    }
#line 72 "rtree.m"
    mercury__rtree__A13_23 = MR_unbox_float(mercury__rtree__conv7_A13_23);
#line 511 "rtree.m"
    mercury__rtree__A0213_24 = (mercury__rtree__A02_22 + mercury__rtree__A13_23);
#line 72 "rtree.m"
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv9_A03_25 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K3_17);
    }
#line 72 "rtree.m"
    mercury__rtree__A03_25 = MR_unbox_float(mercury__rtree__conv9_A03_25);
#line 72 "rtree.m"
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv11_A12_26 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K2_15);
    }
#line 72 "rtree.m"
    mercury__rtree__A12_26 = MR_unbox_float(mercury__rtree__conv11_A12_26);
#line 514 "rtree.m"
    mercury__rtree__A0312_27 = (mercury__rtree__A03_25 + mercury__rtree__A12_26);
#line 515 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__A0123_21 <= mercury__rtree__A0213_24);
#line 521 "rtree.m"
    if (mercury__rtree__succeeded)
#line 518 "rtree.m"
      {
#line 516 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__A0123_21 <= mercury__rtree__A0312_27);
#line 518 "rtree.m"
        if (mercury__rtree__succeeded)
#line 517 "rtree.m"
          mercury__rtree__Min_28 = (MR_Integer) 0;
#line 518 "rtree.m"
        else
#line 519 "rtree.m"
          mercury__rtree__Min_28 = (MR_Integer) 2;
#line 518 "rtree.m"
      }
#line 521 "rtree.m"
    else
#line 523 "rtree.m"
      {
#line 521 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__A0213_24 <= mercury__rtree__A0312_27);
#line 523 "rtree.m"
        if (mercury__rtree__succeeded)
#line 522 "rtree.m"
          mercury__rtree__Min_28 = (MR_Integer) 1;
#line 523 "rtree.m"
        else
#line 524 "rtree.m"
          mercury__rtree__Min_28 = (MR_Integer) 2;
#line 523 "rtree.m"
      }
#line 533 "rtree.m"
#line 533 "rtree.m"
    switch (mercury__rtree__Min_28) {
#line 533 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 533 "rtree.m"
      case (MR_Integer) 0:
#line 528 "rtree.m"
        {
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_12)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_13)(MR_Box, MR_Box, MR_Box);

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K4_7 = mercury__rtree__func_12(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K1_13);
          }
#line 530 "rtree.m"
          {
#line 530 "rtree.m"
            MR_Word base;
#line 530 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 530 "rtree.m"
            *mercury__rtree__T4_8 = base;
#line 530 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
#line 530 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
#line 530 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_13;
#line 530 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_14));
#line 530 "rtree.m"
          }
#line 56 "rtree.m"
          mercury__rtree__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K5_9 = mercury__rtree__func_13(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K2_15, mercury__rtree__K3_17);
          }
#line 532 "rtree.m"
          {
#line 532 "rtree.m"
            MR_Word base;
#line 532 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 532 "rtree.m"
            *mercury__rtree__T5_10 = base;
#line 532 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K2_15;
#line 532 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T2_16));
#line 532 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
#line 532 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
#line 532 "rtree.m"
          }
#line 528 "rtree.m"
        }
#line 533 "rtree.m"
        break;
#line 533 "rtree.m"
      case (MR_Integer) 1:
#line 534 "rtree.m"
        {
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_14)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_15)(MR_Box, MR_Box, MR_Box);

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K4_7 = mercury__rtree__func_14(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K2_15);
          }
#line 536 "rtree.m"
          {
#line 536 "rtree.m"
            MR_Word base;
#line 536 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 536 "rtree.m"
            *mercury__rtree__T4_8 = base;
#line 536 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
#line 536 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
#line 536 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_15;
#line 536 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_16));
#line 536 "rtree.m"
          }
#line 56 "rtree.m"
          mercury__rtree__func_15 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K5_9 = mercury__rtree__func_15(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K3_17);
          }
#line 538 "rtree.m"
          {
#line 538 "rtree.m"
            MR_Word base;
#line 538 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 538 "rtree.m"
            *mercury__rtree__T5_10 = base;
#line 538 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_13;
#line 538 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_14));
#line 538 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
#line 538 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
#line 538 "rtree.m"
          }
#line 534 "rtree.m"
        }
#line 533 "rtree.m"
        break;
#line 533 "rtree.m"
      case (MR_Integer) 2:
#line 540 "rtree.m"
        {
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_16)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_17)(MR_Box, MR_Box, MR_Box);

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K4_7 = mercury__rtree__func_16(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K3_17);
          }
#line 542 "rtree.m"
          {
#line 542 "rtree.m"
            MR_Word base;
#line 542 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 542 "rtree.m"
            *mercury__rtree__T4_8 = base;
#line 542 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_11;
#line 542 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T0_12));
#line 542 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K3_17;
#line 542 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T3_18));
#line 542 "rtree.m"
          }
#line 56 "rtree.m"
          mercury__rtree__func_17 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            *mercury__rtree__K5_9 = mercury__rtree__func_17(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K2_15);
          }
#line 544 "rtree.m"
          {
#line 544 "rtree.m"
            MR_Word base;
#line 544 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 544 "rtree.m"
            *mercury__rtree__T5_10 = base;
#line 544 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_13;
#line 544 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_14));
#line 544 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_15;
#line 544 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_16));
#line 544 "rtree.m"
          }
#line 540 "rtree.m"
        }
#line 533 "rtree.m"
        break;
#line 533 "rtree.m"
    }
#line 504 "rtree.m"
  }
#line 501 "rtree.m"
}

#line 458 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(
#line 458 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_52,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K0_10,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T0_11,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K1_12,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K2_14,
#line 458 "rtree.m"
  MR_Word mercury__rtree__T2_15,
#line 458 "rtree.m"
  MR_Box mercury__rtree__K_16,
#line 458 "rtree.m"
  MR_Box mercury__rtree__V_17,
#line 458 "rtree.m"
  MR_Word * mercury__rtree__T_18)
#line 458 "rtree.m"
{
#line 466 "rtree.m"
  {
#line 466 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 466 "rtree.m"
#line 466 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T0_11)) {
#line 466 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 466 "rtree.m"
      case (MR_Integer) 0:
#line 464 "rtree.m"
        {
#line 464 "rtree.m"
          MR_Word mercury__rtree__V_47_47;

#line 465 "rtree.m"
          {
#line 465 "rtree.m"
            mercury__rtree__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(0), mercury__rtree__V_47_47, 0) = mercury__rtree__V_17;
#line 465 "rtree.m"
          }
#line 465 "rtree.m"
          {
#line 465 "rtree.m"
            MR_Word base;
#line 465 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 465 "rtree.m"
            *mercury__rtree__T_18 = base;
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_10;
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T0_11));
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_12;
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_14;
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K_16;
#line 465 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__V_47_47));
#line 465 "rtree.m"
          }
#line 464 "rtree.m"
        }
#line 466 "rtree.m"
        break;
#line 466 "rtree.m"
      case (MR_Integer) 1:
#line 467 "rtree.m"
        {
#line 467 "rtree.m"
          MR_Box mercury__rtree__NK0_24;
#line 467 "rtree.m"
          MR_Word mercury__rtree__NT0_25;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_24 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K0_10);
          }
#line 469 "rtree.m"
          {
#line 469 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__NT0_25);
          }
#line 470 "rtree.m"
          {
#line 470 "rtree.m"
            MR_Word base;
#line 470 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 470 "rtree.m"
            *mercury__rtree__T_18 = base;
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_24;
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_25));
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_14;
#line 470 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
#line 470 "rtree.m"
          }
#line 467 "rtree.m"
        }
#line 466 "rtree.m"
        break;
#line 466 "rtree.m"
      case (MR_Integer) 2:
#line 472 "rtree.m"
        {
#line 472 "rtree.m"
          MR_Box mercury__rtree__NK0_48;
#line 472 "rtree.m"
          MR_Word mercury__rtree__NT0_49;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_48 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K0_10);
          }
#line 474 "rtree.m"
          {
#line 474 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__NT0_49);
          }
#line 475 "rtree.m"
          {
#line 475 "rtree.m"
            MR_Word base;
#line 475 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 475 "rtree.m"
            *mercury__rtree__T_18 = base;
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_48;
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_49));
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_14;
#line 475 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_15));
#line 475 "rtree.m"
          }
#line 472 "rtree.m"
        }
#line 466 "rtree.m"
        break;
#line 466 "rtree.m"
      case (MR_Integer) 3:
#line 477 "rtree.m"
        {
#line 477 "rtree.m"
          MR_Box mercury__rtree__K3_40;
#line 477 "rtree.m"
          MR_Word mercury__rtree__T3_41;
#line 477 "rtree.m"
          MR_Box mercury__rtree__K4_42;
#line 477 "rtree.m"
          MR_Word mercury__rtree__T4_43;
#line 477 "rtree.m"
          MR_Word mercury__rtree__Result_44;
#line 477 "rtree.m"
          MR_Float mercury__rtree__SizeA_58;
#line 477 "rtree.m"
          MR_Float mercury__rtree__SizeB_59;
#line 477 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeA_60;
#line 477 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeB_61;
#line 477 "rtree.m"
          MR_Float mercury__rtree__IncreaseForA_62;
#line 477 "rtree.m"
          MR_Float mercury__rtree__IncreaseForB_63;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv1_SizeA_58;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv3_SizeB_59;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv5_EnlargedSizeA_60;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv7_EnlargedSizeB_61;

#line 478 "rtree.m"
          {
#line 478 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, &mercury__rtree__K3_40, &mercury__rtree__T3_41, &mercury__rtree__K4_42, &mercury__rtree__T4_43);
          }
#line 50 "rtree.m"
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv1_SizeA_58 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K2_14);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeA_58 = MR_unbox_float(mercury__rtree__conv1_SizeA_58);
#line 50 "rtree.m"
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv3_SizeB_59 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K3_40);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeB_59 = MR_unbox_float(mercury__rtree__conv3_SizeB_59);
#line 72 "rtree.m"
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv5_EnlargedSizeA_60 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K2_14);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeA_60 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_60);
#line 72 "rtree.m"
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv7_EnlargedSizeB_61 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K3_40);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeB_61 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_61);
#line 363 "rtree.m"
          mercury__rtree__IncreaseForA_62 = (mercury__rtree__EnlargedSizeA_60 - mercury__rtree__SizeA_58);
#line 364 "rtree.m"
          mercury__rtree__IncreaseForB_63 = (mercury__rtree__EnlargedSizeB_61 - mercury__rtree__SizeB_59);
#line 365 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_62 < mercury__rtree__IncreaseForB_63);
#line 367 "rtree.m"
          if (mercury__rtree__succeeded)
#line 366 "rtree.m"
            mercury__rtree__Result_44 = (MR_Integer) 0;
#line 367 "rtree.m"
          else
#line 369 "rtree.m"
            {
#line 367 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_62 > mercury__rtree__IncreaseForB_63);
#line 369 "rtree.m"
              if (mercury__rtree__succeeded)
#line 368 "rtree.m"
                mercury__rtree__Result_44 = (MR_Integer) 1;
#line 369 "rtree.m"
              else
#line 371 "rtree.m"
                {
#line 369 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_58 <= mercury__rtree__SizeB_59);
#line 371 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 370 "rtree.m"
                    mercury__rtree__Result_44 = (MR_Integer) 0;
#line 371 "rtree.m"
                  else
#line 372 "rtree.m"
                    mercury__rtree__Result_44 = (MR_Integer) 1;
#line 371 "rtree.m"
                }
#line 369 "rtree.m"
            }
#line 485 "rtree.m"
#line 485 "rtree.m"
          switch (mercury__rtree__Result_44) {
#line 485 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 485 "rtree.m"
            case (MR_Integer) 0:
#line 481 "rtree.m"
              {
#line 481 "rtree.m"
                MR_Box mercury__rtree__K5_45;
#line 481 "rtree.m"
                MR_Word mercury__rtree__T5_46;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K5_45 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K3_40);
                }
#line 483 "rtree.m"
                {
#line 483 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T3_41, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__T5_46);
                }
#line 484 "rtree.m"
                {
#line 484 "rtree.m"
                  MR_Word base;
#line 484 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 484 "rtree.m"
                  *mercury__rtree__T_18 = base;
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_12;
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_14;
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_15));
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K4_42;
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T4_43));
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_45;
#line 484 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_46));
#line 484 "rtree.m"
                }
#line 481 "rtree.m"
              }
#line 485 "rtree.m"
              break;
#line 485 "rtree.m"
            case (MR_Integer) 1:
#line 486 "rtree.m"
              {
#line 486 "rtree.m"
                MR_Box mercury__rtree__K5_50;
#line 486 "rtree.m"
                MR_Word mercury__rtree__T5_51;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K5_50 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K4_42);
                }
#line 488 "rtree.m"
                {
#line 488 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T4_43, mercury__rtree__K_16, mercury__rtree__V_17, &mercury__rtree__T5_51);
                }
#line 489 "rtree.m"
                {
#line 489 "rtree.m"
                  MR_Word base;
#line 489 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 489 "rtree.m"
                  *mercury__rtree__T_18 = base;
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_12;
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_14;
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_15));
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K3_40;
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T3_41));
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_50;
#line 489 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_51));
#line 489 "rtree.m"
                }
#line 486 "rtree.m"
              }
#line 485 "rtree.m"
              break;
#line 485 "rtree.m"
          }
#line 477 "rtree.m"
        }
#line 466 "rtree.m"
        break;
#line 466 "rtree.m"
    }
#line 466 "rtree.m"
  }
#line 458 "rtree.m"
}

#line 422 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(
#line 422 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_48,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K0_8,
#line 422 "rtree.m"
  MR_Word mercury__rtree__T0_9,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K1_10,
#line 422 "rtree.m"
  MR_Word mercury__rtree__T1_11,
#line 422 "rtree.m"
  MR_Box mercury__rtree__K_12,
#line 422 "rtree.m"
  MR_Box mercury__rtree__V_13,
#line 422 "rtree.m"
  MR_Word * mercury__rtree__T_14)
#line 422 "rtree.m"
{
#line 429 "rtree.m"
  {
#line 429 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 429 "rtree.m"
#line 429 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T0_9)) {
#line 429 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 429 "rtree.m"
      case (MR_Integer) 0:
#line 427 "rtree.m"
        {
#line 427 "rtree.m"
          MR_Word mercury__rtree__V_43_43;

#line 428 "rtree.m"
          {
#line 428 "rtree.m"
            mercury__rtree__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(0), mercury__rtree__V_43_43, 0) = mercury__rtree__V_13;
#line 428 "rtree.m"
          }
#line 428 "rtree.m"
          {
#line 428 "rtree.m"
            MR_Word base;
#line 428 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 428 "rtree.m"
            *mercury__rtree__T_14 = base;
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_8;
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T0_9));
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_10;
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K_12;
#line 428 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__V_43_43));
#line 428 "rtree.m"
          }
#line 427 "rtree.m"
        }
#line 429 "rtree.m"
        break;
#line 429 "rtree.m"
      case (MR_Integer) 1:
#line 430 "rtree.m"
        {
#line 430 "rtree.m"
          MR_Box mercury__rtree__NK0_20;
#line 430 "rtree.m"
          MR_Word mercury__rtree__NT0_21;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_20 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K0_8);
          }
#line 432 "rtree.m"
          {
#line 432 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__NT0_21);
          }
#line 433 "rtree.m"
          {
#line 433 "rtree.m"
            MR_Word base;
#line 433 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 433 "rtree.m"
            *mercury__rtree__T_14 = base;
#line 433 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_20;
#line 433 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_21));
#line 433 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_10;
#line 433 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
#line 433 "rtree.m"
          }
#line 430 "rtree.m"
        }
#line 429 "rtree.m"
        break;
#line 429 "rtree.m"
      case (MR_Integer) 2:
#line 435 "rtree.m"
        {
#line 435 "rtree.m"
          MR_Box mercury__rtree__NK0_44;
#line 435 "rtree.m"
          MR_Word mercury__rtree__NT0_45;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_44 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K0_8);
          }
#line 437 "rtree.m"
          {
#line 437 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__NT0_45);
          }
#line 438 "rtree.m"
          {
#line 438 "rtree.m"
            MR_Word base;
#line 438 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 438 "rtree.m"
            *mercury__rtree__T_14 = base;
#line 438 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_44;
#line 438 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_45));
#line 438 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_10;
#line 438 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_11));
#line 438 "rtree.m"
          }
#line 435 "rtree.m"
        }
#line 429 "rtree.m"
        break;
#line 429 "rtree.m"
      case (MR_Integer) 3:
#line 440 "rtree.m"
        {
#line 440 "rtree.m"
          MR_Box mercury__rtree__K2_36;
#line 440 "rtree.m"
          MR_Word mercury__rtree__T2_37;
#line 440 "rtree.m"
          MR_Box mercury__rtree__K3_38;
#line 440 "rtree.m"
          MR_Word mercury__rtree__T3_39;
#line 440 "rtree.m"
          MR_Word mercury__rtree__Result_40;
#line 440 "rtree.m"
          MR_Float mercury__rtree__SizeA_54;
#line 440 "rtree.m"
          MR_Float mercury__rtree__SizeB_55;
#line 440 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeA_56;
#line 440 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeB_57;
#line 440 "rtree.m"
          MR_Float mercury__rtree__IncreaseForA_58;
#line 440 "rtree.m"
          MR_Float mercury__rtree__IncreaseForB_59;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv1_SizeA_54;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv3_SizeB_55;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv5_EnlargedSizeA_56;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv7_EnlargedSizeB_57;

#line 441 "rtree.m"
          {
#line 441 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, &mercury__rtree__K2_36, &mercury__rtree__T2_37, &mercury__rtree__K3_38, &mercury__rtree__T3_39);
          }
#line 50 "rtree.m"
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv1_SizeA_54 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K2_36);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeA_54 = MR_unbox_float(mercury__rtree__conv1_SizeA_54);
#line 50 "rtree.m"
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv3_SizeB_55 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K3_38);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeB_55 = MR_unbox_float(mercury__rtree__conv3_SizeB_55);
#line 72 "rtree.m"
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv5_EnlargedSizeA_56 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K2_36);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeA_56 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_56);
#line 72 "rtree.m"
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv7_EnlargedSizeB_57 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K3_38);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeB_57 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_57);
#line 363 "rtree.m"
          mercury__rtree__IncreaseForA_58 = (mercury__rtree__EnlargedSizeA_56 - mercury__rtree__SizeA_54);
#line 364 "rtree.m"
          mercury__rtree__IncreaseForB_59 = (mercury__rtree__EnlargedSizeB_57 - mercury__rtree__SizeB_55);
#line 365 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForB_59);
#line 367 "rtree.m"
          if (mercury__rtree__succeeded)
#line 366 "rtree.m"
            mercury__rtree__Result_40 = (MR_Integer) 0;
#line 367 "rtree.m"
          else
#line 369 "rtree.m"
            {
#line 367 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForB_59);
#line 369 "rtree.m"
              if (mercury__rtree__succeeded)
#line 368 "rtree.m"
                mercury__rtree__Result_40 = (MR_Integer) 1;
#line 369 "rtree.m"
              else
#line 371 "rtree.m"
                {
#line 369 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_54 <= mercury__rtree__SizeB_55);
#line 371 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 370 "rtree.m"
                    mercury__rtree__Result_40 = (MR_Integer) 0;
#line 371 "rtree.m"
                  else
#line 372 "rtree.m"
                    mercury__rtree__Result_40 = (MR_Integer) 1;
#line 371 "rtree.m"
                }
#line 369 "rtree.m"
            }
#line 448 "rtree.m"
#line 448 "rtree.m"
          switch (mercury__rtree__Result_40) {
#line 448 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 448 "rtree.m"
            case (MR_Integer) 0:
#line 444 "rtree.m"
              {
#line 444 "rtree.m"
                MR_Box mercury__rtree__K4_41;
#line 444 "rtree.m"
                MR_Word mercury__rtree__T4_42;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K4_41 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K2_36);
                }
#line 446 "rtree.m"
                {
#line 446 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T2_37, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__T4_42);
                }
#line 447 "rtree.m"
                {
#line 447 "rtree.m"
                  MR_Word base;
#line 447 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 447 "rtree.m"
                  *mercury__rtree__T_14 = base;
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_10;
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_11));
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K3_38;
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T3_39));
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_41;
#line 447 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_42));
#line 447 "rtree.m"
                }
#line 444 "rtree.m"
              }
#line 448 "rtree.m"
              break;
#line 448 "rtree.m"
            case (MR_Integer) 1:
#line 449 "rtree.m"
              {
#line 449 "rtree.m"
                MR_Box mercury__rtree__K4_46;
#line 449 "rtree.m"
                MR_Word mercury__rtree__T4_47;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K4_46 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K3_38);
                }
#line 451 "rtree.m"
                {
#line 451 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T3_39, mercury__rtree__K_12, mercury__rtree__V_13, &mercury__rtree__T4_47);
                }
#line 452 "rtree.m"
                {
#line 452 "rtree.m"
                  MR_Word base;
#line 452 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 452 "rtree.m"
                  *mercury__rtree__T_14 = base;
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_10;
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_11));
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_36;
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_37));
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_46;
#line 452 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_47));
#line 452 "rtree.m"
                }
#line 449 "rtree.m"
              }
#line 448 "rtree.m"
              break;
#line 448 "rtree.m"
          }
#line 440 "rtree.m"
        }
#line 429 "rtree.m"
        break;
#line 429 "rtree.m"
    }
#line 429 "rtree.m"
  }
#line 422 "rtree.m"
}

#line 298 "rtree.m"
static void MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(
#line 298 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_45,
#line 298 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 298 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 298 "rtree.m"
  MR_Box mercury__rtree__V_3,
#line 298 "rtree.m"
  MR_Word * mercury__rtree__T_4)
#line 298 "rtree.m"
{
#line 301 "rtree.m"
  while (MR_TRUE)
#line 301 "rtree.m"
    {
#line 301 "rtree.m"
      /* tailcall optimized into a loop */
#line 301 "rtree.m"
      {
#line 301 "rtree.m"
        MR_bool mercury__rtree__succeeded;

#line 301 "rtree.m"
#line 301 "rtree.m"
        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 301 "rtree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 301 "rtree.m"
          case (MR_Integer) 0:
#line 301 "rtree.m"
            {
#line 302 "rtree.m"
              {
#line 302 "rtree.m"
                mercury__require__error_1_p_0((MR_String) "insert: leaf unexpected");
#line 302 "rtree.m"
                return;
              }
#line 301 "rtree.m"
            }
#line 301 "rtree.m"
            break;
#line 301 "rtree.m"
          case (MR_Integer) 1:
#line 303 "rtree.m"
            {
#line 303 "rtree.m"
              MR_Box mercury__rtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 303 "rtree.m"
              MR_Word mercury__rtree__T0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 303 "rtree.m"
              MR_Box mercury__rtree__K1_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 303 "rtree.m"
              MR_Word mercury__rtree__T1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 303 "rtree.m"
              MR_Word mercury__rtree__Result_17;

#line 304 "rtree.m"
              {
#line 304 "rtree.m"
                mercury__rtree__Result_17 = mercury__rtree__choose_subtree_3_f_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K_2, mercury__rtree__K0_10, mercury__rtree__K1_12);
              }
#line 308 "rtree.m"
#line 308 "rtree.m"
              switch (mercury__rtree__Result_17) {
#line 308 "rtree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 308 "rtree.m"
                case (MR_Integer) 0:
#line 307 "rtree.m"
                  {
#line 307 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
#line 308 "rtree.m"
                  break;
#line 308 "rtree.m"
                case (MR_Integer) 1:
#line 310 "rtree.m"
                  {
#line 310 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
#line 308 "rtree.m"
                  break;
#line 308 "rtree.m"
              }
#line 303 "rtree.m"
            }
#line 301 "rtree.m"
            break;
#line 301 "rtree.m"
          case (MR_Integer) 2:
#line 312 "rtree.m"
            {
#line 312 "rtree.m"
              MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 312 "rtree.m"
              MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 312 "rtree.m"
              MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 312 "rtree.m"
              MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 312 "rtree.m"
              MR_Box mercury__rtree__K2_22 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 312 "rtree.m"
              MR_Word mercury__rtree__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 312 "rtree.m"
              MR_Word mercury__rtree__Result_27;
#line 312 "rtree.m"
              MR_Float mercury__rtree__AreaA_52;
#line 312 "rtree.m"
              MR_Float mercury__rtree__AreaB_53;
#line 312 "rtree.m"
              MR_Float mercury__rtree__AreaC_54;
#line 312 "rtree.m"
              MR_Float mercury__rtree__EnlargedAreaA_55;
#line 312 "rtree.m"
              MR_Float mercury__rtree__EnlargedAreaB_56;
#line 312 "rtree.m"
              MR_Float mercury__rtree__EnlargedAreaC_57;
#line 312 "rtree.m"
              MR_Float mercury__rtree__IncreaseForA_58;
#line 312 "rtree.m"
              MR_Float mercury__rtree__IncreaseForB_59;
#line 312 "rtree.m"
              MR_Float mercury__rtree__IncreaseForC_60;
#line 312 "rtree.m"
              MR_Word mercury__rtree__Result0_61;
#line 50 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
              MR_Box mercury__rtree__conv1_AreaA_52;
#line 50 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
              MR_Box mercury__rtree__conv3_AreaB_53;
#line 50 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
#line 50 "rtree.m"
              MR_Box mercury__rtree__conv5_AreaC_54;
#line 72 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
              MR_Box mercury__rtree__conv7_EnlargedAreaA_55;
#line 72 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
              MR_Box mercury__rtree__conv9_EnlargedAreaB_56;
#line 72 "rtree.m"
              MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
              MR_Box mercury__rtree__conv11_EnlargedAreaC_57;

#line 50 "rtree.m"
              {
#line 50 "rtree.m"
                mercury__rtree__conv1_AreaA_52 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K0_18);
              }
#line 50 "rtree.m"
              mercury__rtree__AreaA_52 = MR_unbox_float(mercury__rtree__conv1_AreaA_52);
#line 50 "rtree.m"
              mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
              {
#line 50 "rtree.m"
                mercury__rtree__conv3_AreaB_53 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K1_20);
              }
#line 50 "rtree.m"
              mercury__rtree__AreaB_53 = MR_unbox_float(mercury__rtree__conv3_AreaB_53);
#line 50 "rtree.m"
              mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
              {
#line 50 "rtree.m"
                mercury__rtree__conv5_AreaC_54 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K2_22);
              }
#line 50 "rtree.m"
              mercury__rtree__AreaC_54 = MR_unbox_float(mercury__rtree__conv5_AreaC_54);
#line 72 "rtree.m"
              mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
              {
#line 72 "rtree.m"
                mercury__rtree__conv7_EnlargedAreaA_55 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K0_18);
              }
#line 72 "rtree.m"
              mercury__rtree__EnlargedAreaA_55 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_55);
#line 72 "rtree.m"
              mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
              {
#line 72 "rtree.m"
                mercury__rtree__conv9_EnlargedAreaB_56 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K1_20);
              }
#line 72 "rtree.m"
              mercury__rtree__EnlargedAreaB_56 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_56);
#line 72 "rtree.m"
              mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
              {
#line 72 "rtree.m"
                mercury__rtree__conv11_EnlargedAreaC_57 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K2_22);
              }
#line 72 "rtree.m"
              mercury__rtree__EnlargedAreaC_57 = MR_unbox_float(mercury__rtree__conv11_EnlargedAreaC_57);
#line 386 "rtree.m"
              mercury__rtree__IncreaseForA_58 = (mercury__rtree__EnlargedAreaA_55 - mercury__rtree__AreaA_52);
#line 387 "rtree.m"
              mercury__rtree__IncreaseForB_59 = (mercury__rtree__EnlargedAreaB_56 - mercury__rtree__AreaB_53);
#line 388 "rtree.m"
              mercury__rtree__IncreaseForC_60 = (mercury__rtree__EnlargedAreaC_57 - mercury__rtree__AreaC_54);
#line 408 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForB_59);
#line 410 "rtree.m"
              if (mercury__rtree__succeeded)
#line 409 "rtree.m"
                mercury__rtree__Result0_61 = (MR_Integer) 0;
#line 410 "rtree.m"
              else
#line 412 "rtree.m"
                {
#line 410 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForB_59);
#line 412 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 411 "rtree.m"
                    mercury__rtree__Result0_61 = (MR_Integer) 1;
#line 412 "rtree.m"
                  else
#line 414 "rtree.m"
                    {
#line 412 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaB_53);
#line 414 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 413 "rtree.m"
                        mercury__rtree__Result0_61 = (MR_Integer) 0;
#line 414 "rtree.m"
                      else
#line 415 "rtree.m"
                        mercury__rtree__Result0_61 = (MR_Integer) 1;
#line 414 "rtree.m"
                    }
#line 412 "rtree.m"
                }
#line 391 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__Result0_61 == (MR_Integer) 0);
#line 394 "rtree.m"
              if (mercury__rtree__succeeded)
#line 392 "rtree.m"
                {
#line 408 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 < mercury__rtree__IncreaseForC_60);
#line 410 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 409 "rtree.m"
                    mercury__rtree__Result_27 = (MR_Integer) 0;
#line 410 "rtree.m"
                  else
#line 412 "rtree.m"
                    {
#line 410 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_58 > mercury__rtree__IncreaseForC_60);
#line 412 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 411 "rtree.m"
                        mercury__rtree__Result_27 = (MR_Integer) 2;
#line 412 "rtree.m"
                      else
#line 414 "rtree.m"
                        {
#line 412 "rtree.m"
                          mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaC_54);
#line 414 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 413 "rtree.m"
                            mercury__rtree__Result_27 = (MR_Integer) 0;
#line 414 "rtree.m"
                          else
#line 415 "rtree.m"
                            mercury__rtree__Result_27 = (MR_Integer) 2;
#line 414 "rtree.m"
                        }
#line 412 "rtree.m"
                    }
#line 392 "rtree.m"
                }
#line 394 "rtree.m"
              else
#line 395 "rtree.m"
                {
#line 408 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_59 < mercury__rtree__IncreaseForC_60);
#line 410 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 409 "rtree.m"
                    mercury__rtree__Result_27 = (MR_Integer) 1;
#line 410 "rtree.m"
                  else
#line 412 "rtree.m"
                    {
#line 410 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_59 > mercury__rtree__IncreaseForC_60);
#line 412 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 411 "rtree.m"
                        mercury__rtree__Result_27 = (MR_Integer) 2;
#line 412 "rtree.m"
                      else
#line 414 "rtree.m"
                        {
#line 412 "rtree.m"
                          mercury__rtree__succeeded = (mercury__rtree__AreaA_52 <= mercury__rtree__AreaB_53);
#line 414 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 413 "rtree.m"
                            mercury__rtree__Result_27 = (MR_Integer) 1;
#line 414 "rtree.m"
                          else
#line 415 "rtree.m"
                            mercury__rtree__Result_27 = (MR_Integer) 2;
#line 414 "rtree.m"
                        }
#line 412 "rtree.m"
                    }
#line 395 "rtree.m"
                }
#line 317 "rtree.m"
#line 317 "rtree.m"
              switch (mercury__rtree__Result_27) {
#line 317 "rtree.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 317 "rtree.m"
                case (MR_Integer) 0:
#line 316 "rtree.m"
                  {
#line 316 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
#line 317 "rtree.m"
                  break;
#line 317 "rtree.m"
                case (MR_Integer) 1:
#line 319 "rtree.m"
                  {
#line 319 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
#line 317 "rtree.m"
                  break;
#line 317 "rtree.m"
                case (MR_Integer) 2:
#line 322 "rtree.m"
                  {
#line 322 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
                  }
#line 317 "rtree.m"
                  break;
#line 317 "rtree.m"
              }
#line 312 "rtree.m"
            }
#line 301 "rtree.m"
            break;
#line 301 "rtree.m"
          case (MR_Integer) 3:
#line 324 "rtree.m"
            {
#line 324 "rtree.m"
              MR_Box mercury__rtree__K0_40;
#line 324 "rtree.m"
              MR_Word mercury__rtree__T0_41;
#line 324 "rtree.m"
              MR_Box mercury__rtree__K1_42;
#line 324 "rtree.m"
              MR_Word mercury__rtree__T1_43;
#line 324 "rtree.m"
              MR_Word mercury__rtree__V_44_44;

#line 326 "rtree.m"
              {
#line 326 "rtree.m"
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__HeadVar__1_1, &mercury__rtree__K0_40, &mercury__rtree__T0_41, &mercury__rtree__K1_42, &mercury__rtree__T1_43);
              }
#line 327 "rtree.m"
              {
#line 327 "rtree.m"
                mercury__rtree__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 327 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__V_44_44, 0) = mercury__rtree__K0_40;
#line 327 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__V_44_44, 1) = ((MR_Box) (mercury__rtree__T0_41));
#line 327 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__V_44_44, 2) = mercury__rtree__K1_42;
#line 327 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__V_44_44, 3) = ((MR_Box) (mercury__rtree__T1_43));
#line 327 "rtree.m"
              }
#line 327 "rtree.m"
              /* direct tailcall eliminated */
#line 327 "rtree.m"
              {
#line 327 "rtree.m"
                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_44_44;

#line 327 "rtree.m"
                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 327 "rtree.m"
              }
#line 327 "rtree.m"
              continue;
#line 324 "rtree.m"
            }
#line 301 "rtree.m"
            break;
#line 301 "rtree.m"
        }
#line 301 "rtree.m"
      }
#line 301 "rtree.m"
      break;
#line 301 "rtree.m"
    }
#line 298 "rtree.m"
}

#line 1548 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(
#line 1548 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1548 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1548 "rtree.m"
{
#line 1548 "rtree.m"
  {
#line 1548 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1548 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;

#line 1548 "rtree.m"
    {
#line 1548 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_volume_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1548 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1548 "rtree.m"
  }
#line 1548 "rtree.m"
}

#line 1547 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(
#line 1547 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1547 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1547 "rtree.m"
{
#line 1547 "rtree.m"
  {
#line 1547 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1547 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;

#line 1547 "rtree.m"
    {
#line 1547 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1547 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1547 "rtree.m"
  }
#line 1547 "rtree.m"
}

#line 1546 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(
#line 1546 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 1546 "rtree.m"
{
#line 1592 "rtree.m"
  {
#line 1592 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_10_10;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_11_11 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_5);
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_12_12 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_7);
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_13_13;

#line 1592 "rtree.m"
    mercury__rtree__V_10_10 = (mercury__rtree__V_11_11 * mercury__rtree__V_12_12);
#line 1592 "rtree.m"
    mercury__rtree__V_13_13 = (mercury__rtree__ZMax_8 - mercury__rtree__ZMin_9);
#line 1592 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__V_10_10 * mercury__rtree__V_13_13);
#line 1592 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1592 "rtree.m"
  }
#line 1546 "rtree.m"
}

#line 1545 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(
#line 1545 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1545 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1545 "rtree.m"
{
#line 1578 "rtree.m"
  {
#line 1578 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));

#line 1581 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_11);
#line 1578 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
      {
#line 1582 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_12);
#line 1578 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
          {
#line 1583 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_13);
#line 1578 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
              {
#line 1584 "rtree.m"
                mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_14);
#line 1578 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
                  {
#line 1585 "rtree.m"
                    mercury__rtree__succeeded = (mercury__rtree__AZMin_9 >= mercury__rtree__BZMin_15);
#line 1578 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 1586 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__AZMax_10 <= mercury__rtree__BZMax_16);
#line 1578 "rtree.m"
                  }
#line 1578 "rtree.m"
              }
#line 1578 "rtree.m"
          }
#line 1578 "rtree.m"
      }
#line 1578 "rtree.m"
    return mercury__rtree__succeeded;
#line 1578 "rtree.m"
  }
#line 1545 "rtree.m"
}

#line 1544 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(
#line 1544 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1544 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1544 "rtree.m"
{
#line 1544 "rtree.m"
  {
#line 1544 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1544 "rtree.m"
    {
#line 1544 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__box3d_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1544 "rtree.m"
    return mercury__rtree__succeeded;
#line 1544 "rtree.m"
  }
#line 1544 "rtree.m"
}

#line 1632 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(
#line 1632 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1632 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1632 "rtree.m"
{
#line 1632 "rtree.m"
  {
#line 1632 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1632 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;

#line 1632 "rtree.m"
    {
#line 1632 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_area_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1632 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1632 "rtree.m"
  }
#line 1632 "rtree.m"
}

#line 1631 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(
#line 1631 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1631 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1631 "rtree.m"
{
#line 1631 "rtree.m"
  {
#line 1631 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1631 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;

#line 1631 "rtree.m"
    {
#line 1631 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1631 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1631 "rtree.m"
  }
#line 1631 "rtree.m"
}

#line 1630 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(
#line 1630 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 1630 "rtree.m"
{
#line 1669 "rtree.m"
  {
#line 1669 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1669 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1669 "rtree.m"
    MR_Float mercury__rtree__XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__V_7_7 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_3);
#line 1669 "rtree.m"
    MR_Float mercury__rtree__V_8_8 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_5);

#line 1669 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__V_7_7 * mercury__rtree__V_8_8);
#line 1669 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1669 "rtree.m"
  }
#line 1630 "rtree.m"
}

#line 1629 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(
#line 1629 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1629 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1629 "rtree.m"
{
#line 1657 "rtree.m"
  {
#line 1657 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));

#line 1660 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_9);
#line 1657 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1657 "rtree.m"
      {
#line 1661 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_10);
#line 1657 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1657 "rtree.m"
          {
#line 1662 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_11);
#line 1657 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1663 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_12);
#line 1657 "rtree.m"
          }
#line 1657 "rtree.m"
      }
#line 1657 "rtree.m"
    return mercury__rtree__succeeded;
#line 1657 "rtree.m"
  }
#line 1629 "rtree.m"
}

#line 1628 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(
#line 1628 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1628 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1628 "rtree.m"
{
#line 1628 "rtree.m"
  {
#line 1628 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1628 "rtree.m"
    {
#line 1628 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__box_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1628 "rtree.m"
    return mercury__rtree__succeeded;
#line 1628 "rtree.m"
  }
#line 1628 "rtree.m"
}

#line 1703 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(
#line 1703 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1703 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1703 "rtree.m"
{
#line 1703 "rtree.m"
  {
#line 1703 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1703 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;

#line 1703 "rtree.m"
    {
#line 1703 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_length_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1703 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1703 "rtree.m"
  }
#line 1703 "rtree.m"
}

#line 1702 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(
#line 1702 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1702 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1702 "rtree.m"
{
#line 1702 "rtree.m"
  {
#line 1702 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1702 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;

#line 1702 "rtree.m"
    {
#line 1702 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 1702 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1702 "rtree.m"
  }
#line 1702 "rtree.m"
}

#line 1701 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(
#line 1701 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 1701 "rtree.m"
{
#line 1733 "rtree.m"
  {
#line 1733 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1733 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1733 "rtree.m"
    MR_Float mercury__rtree__Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1733 "rtree.m"
    MR_Float mercury__rtree__Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1733 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Max_3 - mercury__rtree__Min_4);
#line 1733 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1733 "rtree.m"
  }
#line 1701 "rtree.m"
}

#line 1700 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(
#line 1700 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1700 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1700 "rtree.m"
{
#line 1723 "rtree.m"
  {
#line 1723 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1723 "rtree.m"
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1726 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AMin_5 >= mercury__rtree__BMin_7);
#line 1723 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1727 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 <= mercury__rtree__BMax_8);
#line 1723 "rtree.m"
    return mercury__rtree__succeeded;
#line 1723 "rtree.m"
  }
#line 1700 "rtree.m"
}

#line 1699 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(
#line 1699 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1699 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 1699 "rtree.m"
{
#line 1710 "rtree.m"
  {
#line 1710 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1710 "rtree.m"
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

#line 1713 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMin_7);
#line 1715 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1714 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMin_7);
#line 1715 "rtree.m"
    else
#line 1716 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMax_8);
#line 1710 "rtree.m"
    return mercury__rtree__succeeded;
#line 1710 "rtree.m"
  }
#line 1699 "rtree.m"
}

#line 239 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0(
#line 239 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_173,
#line 239 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_174,
#line 239 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 239 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 239 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 239 "rtree.m"
{
#line 239 "rtree.m"
  while (MR_TRUE)
#line 239 "rtree.m"
    {
#line 239 "rtree.m"
      /* tailcall optimized into a loop */
#line 239 "rtree.m"
      {
#line 239 "rtree.m"
        MR_bool mercury__rtree__succeeded;
#line 239 "rtree.m"
        MR_Integer mercury__rtree__CastX_171 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 239 "rtree.m"
        MR_Integer mercury__rtree__CastY_172 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 239 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__CastX_171 == mercury__rtree__CastY_172);
#line 239 "rtree.m"
        if (mercury__rtree__succeeded)
#line 6285 "rtree.c"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "rtree.m"
        else
#line 239 "rtree.m"
#line 239 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 239 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
            case (MR_Integer) 0:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_201_201 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 239 "rtree.m"
#line 239 "rtree.m"
                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 239 "rtree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
                  case (MR_Integer) 0:
#line 239 "rtree.m"
                    {
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));

#line 239 "rtree.m"
                      {
#line 239 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_V_174, mercury__rtree__HeadVar__1_1, mercury__rtree__V_201_201, mercury__rtree__V_5_5);
                      }
#line 239 "rtree.m"
                    }
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 1:
#line 6324 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 2:
#line 6330 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 3:
#line 6336 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 1:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_209_209 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_211_211 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 239 "rtree.m"
#line 239 "rtree.m"
                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 239 "rtree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
                  case (MR_Integer) 0:
#line 6366 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 1:
#line 239 "rtree.m"
                    {
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_36_36 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_38_38 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_40_40;

#line 239 "rtree.m"
                      {
#line 239 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_40_40, mercury__rtree__V_211_211, mercury__rtree__V_36_36);
                      }
#line 6390 "rtree.c"
                      mercury__rtree__succeeded = (mercury__rtree__V_40_40 == (MR_Integer) 0);
#line 239 "rtree.m"
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_40_40;
#line 239 "rtree.m"
                      else
#line 239 "rtree.m"
                        {
#line 239 "rtree.m"
                          MR_Word mercury__rtree__V_41_41;

#line 239 "rtree.m"
                          {
#line 239 "rtree.m"
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_41_41, mercury__rtree__V_210_210, mercury__rtree__V_37_37);
                          }
#line 6410 "rtree.c"
                          mercury__rtree__succeeded = (mercury__rtree__V_41_41 == (MR_Integer) 0);
#line 239 "rtree.m"
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_41_41;
#line 239 "rtree.m"
                          else
#line 239 "rtree.m"
                            {
#line 239 "rtree.m"
                              MR_Word mercury__rtree__V_42_42;

#line 239 "rtree.m"
                              {
#line 239 "rtree.m"
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_42_42, mercury__rtree__V_209_209, mercury__rtree__V_38_38);
                              }
#line 6430 "rtree.c"
                              mercury__rtree__succeeded = (mercury__rtree__V_42_42 == (MR_Integer) 0);
#line 239 "rtree.m"
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_42_42;
#line 239 "rtree.m"
                              else
#line 239 "rtree.m"
                                {
#line 239 "rtree.m"
                                  /* direct tailcall eliminated */
#line 239 "rtree.m"
                                  {
#line 239 "rtree.m"
                                    MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_208_208;
#line 239 "rtree.m"
                                    MR_Word mercury__rtree__HeadVar__3__tmp_copy_3 = mercury__rtree__V_39_39;

#line 239 "rtree.m"
                                    mercury__rtree__HeadVar__3_3 = mercury__rtree__HeadVar__3__tmp_copy_3;
#line 239 "rtree.m"
                                    mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 239 "rtree.m"
                                  }
#line 239 "rtree.m"
                                  continue;
#line 239 "rtree.m"
                                }
#line 239 "rtree.m"
                            }
#line 239 "rtree.m"
                        }
#line 239 "rtree.m"
                    }
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 2:
#line 6471 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 3:
#line 6477 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 2:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_203_203 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_205_205 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_207_207 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 239 "rtree.m"
#line 239 "rtree.m"
                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 239 "rtree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
                  case (MR_Integer) 0:
#line 6511 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 1:
#line 6517 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 2:
#line 239 "rtree.m"
                    {
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_88_88 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_90_90 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_92_92 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_94_94;

#line 239 "rtree.m"
                      {
#line 239 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_94_94, mercury__rtree__V_207_207, mercury__rtree__V_88_88);
                      }
#line 6545 "rtree.c"
                      mercury__rtree__succeeded = (mercury__rtree__V_94_94 == (MR_Integer) 0);
#line 239 "rtree.m"
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_94_94;
#line 239 "rtree.m"
                      else
#line 239 "rtree.m"
                        {
#line 239 "rtree.m"
                          MR_Word mercury__rtree__V_95_95;

#line 239 "rtree.m"
                          {
#line 239 "rtree.m"
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_95_95, mercury__rtree__V_206_206, mercury__rtree__V_89_89);
                          }
#line 6565 "rtree.c"
                          mercury__rtree__succeeded = (mercury__rtree__V_95_95 == (MR_Integer) 0);
#line 239 "rtree.m"
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_95_95;
#line 239 "rtree.m"
                          else
#line 239 "rtree.m"
                            {
#line 239 "rtree.m"
                              MR_Word mercury__rtree__V_96_96;

#line 239 "rtree.m"
                              {
#line 239 "rtree.m"
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_96_96, mercury__rtree__V_205_205, mercury__rtree__V_90_90);
                              }
#line 6585 "rtree.c"
                              mercury__rtree__succeeded = (mercury__rtree__V_96_96 == (MR_Integer) 0);
#line 239 "rtree.m"
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_96_96;
#line 239 "rtree.m"
                              else
#line 239 "rtree.m"
                                {
#line 239 "rtree.m"
                                  MR_Word mercury__rtree__V_97_97;

#line 239 "rtree.m"
                                  {
#line 239 "rtree.m"
                                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_97_97, mercury__rtree__V_204_204, mercury__rtree__V_91_91);
                                  }
#line 6605 "rtree.c"
                                  mercury__rtree__succeeded = (mercury__rtree__V_97_97 == (MR_Integer) 0);
#line 239 "rtree.m"
                                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                  if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_97_97;
#line 239 "rtree.m"
                                  else
#line 239 "rtree.m"
                                    {
#line 239 "rtree.m"
                                      MR_Word mercury__rtree__V_98_98;

#line 239 "rtree.m"
                                      {
#line 239 "rtree.m"
                                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_98_98, mercury__rtree__V_203_203, mercury__rtree__V_92_92);
                                      }
#line 6625 "rtree.c"
                                      mercury__rtree__succeeded = (mercury__rtree__V_98_98 == (MR_Integer) 0);
#line 239 "rtree.m"
                                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_98_98;
#line 239 "rtree.m"
                                      else
#line 239 "rtree.m"
                                        {
#line 239 "rtree.m"
                                          /* direct tailcall eliminated */
#line 239 "rtree.m"
                                          {
#line 239 "rtree.m"
                                            MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_202_202;
#line 239 "rtree.m"
                                            MR_Word mercury__rtree__HeadVar__3__tmp_copy_3 = mercury__rtree__V_93_93;

#line 239 "rtree.m"
                                            mercury__rtree__HeadVar__3_3 = mercury__rtree__HeadVar__3__tmp_copy_3;
#line 239 "rtree.m"
                                            mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 239 "rtree.m"
                                          }
#line 239 "rtree.m"
                                          continue;
#line 239 "rtree.m"
                                        }
#line 239 "rtree.m"
                                    }
#line 239 "rtree.m"
                                }
#line 239 "rtree.m"
                            }
#line 239 "rtree.m"
                        }
#line 239 "rtree.m"
                    }
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 3:
#line 6670 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 3:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_194_194 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_196_196 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_198_198 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_200_200 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 239 "rtree.m"
#line 239 "rtree.m"
                switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 239 "rtree.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
                  case (MR_Integer) 0:
#line 6708 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 1:
#line 6714 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 2:
#line 6720 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                  case (MR_Integer) 3:
#line 239 "rtree.m"
                    {
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_156_156 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_158_158 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_160_160 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_162_162 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 6));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 7)));
#line 239 "rtree.m"
                      MR_Word mercury__rtree__V_164_164;

#line 239 "rtree.m"
                      {
#line 239 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_164_164, mercury__rtree__V_200_200, mercury__rtree__V_156_156);
                      }
#line 6752 "rtree.c"
                      mercury__rtree__succeeded = (mercury__rtree__V_164_164 == (MR_Integer) 0);
#line 239 "rtree.m"
                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_164_164;
#line 239 "rtree.m"
                      else
#line 239 "rtree.m"
                        {
#line 239 "rtree.m"
                          MR_Word mercury__rtree__V_165_165;

#line 239 "rtree.m"
                          {
#line 239 "rtree.m"
                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_165_165, mercury__rtree__V_199_199, mercury__rtree__V_157_157);
                          }
#line 6772 "rtree.c"
                          mercury__rtree__succeeded = (mercury__rtree__V_165_165 == (MR_Integer) 0);
#line 239 "rtree.m"
                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_165_165;
#line 239 "rtree.m"
                          else
#line 239 "rtree.m"
                            {
#line 239 "rtree.m"
                              MR_Word mercury__rtree__V_166_166;

#line 239 "rtree.m"
                              {
#line 239 "rtree.m"
                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_166_166, mercury__rtree__V_198_198, mercury__rtree__V_158_158);
                              }
#line 6792 "rtree.c"
                              mercury__rtree__succeeded = (mercury__rtree__V_166_166 == (MR_Integer) 0);
#line 239 "rtree.m"
                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_166_166;
#line 239 "rtree.m"
                              else
#line 239 "rtree.m"
                                {
#line 239 "rtree.m"
                                  MR_Word mercury__rtree__V_167_167;

#line 239 "rtree.m"
                                  {
#line 239 "rtree.m"
                                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_167_167, mercury__rtree__V_197_197, mercury__rtree__V_159_159);
                                  }
#line 6812 "rtree.c"
                                  mercury__rtree__succeeded = (mercury__rtree__V_167_167 == (MR_Integer) 0);
#line 239 "rtree.m"
                                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                  if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_167_167;
#line 239 "rtree.m"
                                  else
#line 239 "rtree.m"
                                    {
#line 239 "rtree.m"
                                      MR_Word mercury__rtree__V_168_168;

#line 239 "rtree.m"
                                      {
#line 239 "rtree.m"
                                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_168_168, mercury__rtree__V_196_196, mercury__rtree__V_160_160);
                                      }
#line 6832 "rtree.c"
                                      mercury__rtree__succeeded = (mercury__rtree__V_168_168 == (MR_Integer) 0);
#line 239 "rtree.m"
                                      mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                        *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_168_168;
#line 239 "rtree.m"
                                      else
#line 239 "rtree.m"
                                        {
#line 239 "rtree.m"
                                          MR_Word mercury__rtree__V_169_169;

#line 239 "rtree.m"
                                          {
#line 239 "rtree.m"
                                            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_173, mercury__rtree__TypeInfo_for_V_174, &mercury__rtree__V_169_169, mercury__rtree__V_195_195, mercury__rtree__V_161_161);
                                          }
#line 6852 "rtree.c"
                                          mercury__rtree__succeeded = (mercury__rtree__V_169_169 == (MR_Integer) 0);
#line 239 "rtree.m"
                                          mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                            *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_169_169;
#line 239 "rtree.m"
                                          else
#line 239 "rtree.m"
                                            {
#line 239 "rtree.m"
                                              MR_Word mercury__rtree__V_170_170;

#line 239 "rtree.m"
                                              {
#line 239 "rtree.m"
                                                mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_173, &mercury__rtree__V_170_170, mercury__rtree__V_194_194, mercury__rtree__V_162_162);
                                              }
#line 6872 "rtree.c"
                                              mercury__rtree__succeeded = (mercury__rtree__V_170_170 == (MR_Integer) 0);
#line 239 "rtree.m"
                                              mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 239 "rtree.m"
                                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                                *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_170_170;
#line 239 "rtree.m"
                                              else
#line 239 "rtree.m"
                                                {
#line 239 "rtree.m"
                                                  /* direct tailcall eliminated */
#line 239 "rtree.m"
                                                  {
#line 239 "rtree.m"
                                                    MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_193_193;
#line 239 "rtree.m"
                                                    MR_Word mercury__rtree__HeadVar__3__tmp_copy_3 = mercury__rtree__V_163_163;

#line 239 "rtree.m"
                                                    mercury__rtree__HeadVar__3_3 = mercury__rtree__HeadVar__3__tmp_copy_3;
#line 239 "rtree.m"
                                                    mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 239 "rtree.m"
                                                  }
#line 239 "rtree.m"
                                                  continue;
#line 239 "rtree.m"
                                                }
#line 239 "rtree.m"
                                            }
#line 239 "rtree.m"
                                        }
#line 239 "rtree.m"
                                    }
#line 239 "rtree.m"
                                }
#line 239 "rtree.m"
                            }
#line 239 "rtree.m"
                        }
#line 239 "rtree.m"
                    }
#line 239 "rtree.m"
                    break;
#line 239 "rtree.m"
                }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
          }
#line 239 "rtree.m"
      }
#line 239 "rtree.m"
      break;
#line 239 "rtree.m"
    }
#line 239 "rtree.m"
}

#line 239 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0(
#line 239 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_43,
#line 239 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_44,
#line 239 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 239 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 239 "rtree.m"
{
#line 239 "rtree.m"
  while (MR_TRUE)
#line 239 "rtree.m"
    {
#line 239 "rtree.m"
      /* tailcall optimized into a loop */
#line 239 "rtree.m"
      {
#line 239 "rtree.m"
        MR_bool mercury__rtree__succeeded;
#line 239 "rtree.m"
        MR_Integer mercury__rtree__CastX_41 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 239 "rtree.m"
        MR_Integer mercury__rtree__CastY_42 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 239 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__CastX_41 == mercury__rtree__CastY_42);
#line 239 "rtree.m"
        if (mercury__rtree__succeeded)
#line 239 "rtree.m"
          mercury__rtree__succeeded = MR_TRUE;
#line 239 "rtree.m"
        else
#line 239 "rtree.m"
#line 239 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 239 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 239 "rtree.m"
            case (MR_Integer) 0:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_4_4;

#line 239 "rtree.m"
                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 239 "rtree.m"
                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                  {
#line 239 "rtree.m"
                    mercury__rtree__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 6994 "rtree.c"
                    {
#line 6996 "rtree.c"
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_3_3, mercury__rtree__V_4_4);
                    }
#line 239 "rtree.m"
                  }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 1:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_9_9;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_10_10;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_11_11;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_12_12;

#line 239 "rtree.m"
                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 239 "rtree.m"
                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                  {
#line 239 "rtree.m"
                    mercury__rtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 239 "rtree.m"
                    mercury__rtree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                    mercury__rtree__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                    mercury__rtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 7040 "rtree.c"
                    {
#line 7042 "rtree.c"
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_5_5, mercury__rtree__V_9_9);
                    }
#line 239 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                      {
#line 7049 "rtree.c"
                        {
#line 7051 "rtree.c"
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_6_6, mercury__rtree__V_10_10);
                        }
#line 239 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                          {
#line 7058 "rtree.c"
                            {
#line 7060 "rtree.c"
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_7_7, mercury__rtree__V_11_11);
                            }
#line 239 "rtree.m"
                            if (mercury__rtree__succeeded)
#line 7065 "rtree.c"
                              {
#line 7067 "rtree.c"
                                /* direct tailcall eliminated */
#line 7069 "rtree.c"
                                {
#line 7071 "rtree.c"
                                  MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_8_8;
#line 7073 "rtree.c"
                                  MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_12_12;

#line 7076 "rtree.c"
                                  mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7078 "rtree.c"
                                  mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7080 "rtree.c"
                                }
#line 7082 "rtree.c"
                                continue;
#line 7084 "rtree.c"
                              }
#line 239 "rtree.m"
                          }
#line 239 "rtree.m"
                      }
#line 239 "rtree.m"
                  }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 2:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_15_15 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_17_17 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_19_19;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_20_20;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_21_21;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_22_22;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_23_23;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_24_24;

#line 239 "rtree.m"
                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 239 "rtree.m"
                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                  {
#line 239 "rtree.m"
                    mercury__rtree__V_19_19 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 239 "rtree.m"
                    mercury__rtree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                    mercury__rtree__V_21_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                    mercury__rtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "rtree.m"
                    mercury__rtree__V_23_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 239 "rtree.m"
                    mercury__rtree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 7143 "rtree.c"
                    {
#line 7145 "rtree.c"
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_13_13, mercury__rtree__V_19_19);
                    }
#line 239 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                      {
#line 7152 "rtree.c"
                        {
#line 7154 "rtree.c"
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_14_14, mercury__rtree__V_20_20);
                        }
#line 239 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                          {
#line 7161 "rtree.c"
                            {
#line 7163 "rtree.c"
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_15_15, mercury__rtree__V_21_21);
                            }
#line 239 "rtree.m"
                            if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                              {
#line 7170 "rtree.c"
                                {
#line 7172 "rtree.c"
                                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_16_16, mercury__rtree__V_22_22);
                                }
#line 239 "rtree.m"
                                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                  {
#line 7179 "rtree.c"
                                    {
#line 7181 "rtree.c"
                                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_17_17, mercury__rtree__V_23_23);
                                    }
#line 239 "rtree.m"
                                    if (mercury__rtree__succeeded)
#line 7186 "rtree.c"
                                      {
#line 7188 "rtree.c"
                                        /* direct tailcall eliminated */
#line 7190 "rtree.c"
                                        {
#line 7192 "rtree.c"
                                          MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_18_18;
#line 7194 "rtree.c"
                                          MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_24_24;

#line 7197 "rtree.c"
                                          mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7199 "rtree.c"
                                          mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7201 "rtree.c"
                                        }
#line 7203 "rtree.c"
                                        continue;
#line 7205 "rtree.c"
                                      }
#line 239 "rtree.m"
                                  }
#line 239 "rtree.m"
                              }
#line 239 "rtree.m"
                          }
#line 239 "rtree.m"
                      }
#line 239 "rtree.m"
                  }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
            case (MR_Integer) 3:
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_25_25 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_27_27 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_29_29 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_31_31 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_33_33;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_34_34;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_35_35;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_36_36;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_37_37;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_38_38;
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_39_39;
#line 239 "rtree.m"
                MR_Word mercury__rtree__V_40_40;

#line 239 "rtree.m"
                mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 239 "rtree.m"
                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                  {
#line 239 "rtree.m"
                    mercury__rtree__V_33_33 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 239 "rtree.m"
                    mercury__rtree__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "rtree.m"
                    mercury__rtree__V_35_35 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 239 "rtree.m"
                    mercury__rtree__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "rtree.m"
                    mercury__rtree__V_37_37 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 239 "rtree.m"
                    mercury__rtree__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "rtree.m"
                    mercury__rtree__V_39_39 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 239 "rtree.m"
                    mercury__rtree__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 7280 "rtree.c"
                    {
#line 7282 "rtree.c"
                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_25_25, mercury__rtree__V_33_33);
                    }
#line 239 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                      {
#line 7289 "rtree.c"
                        {
#line 7291 "rtree.c"
                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_26_26, mercury__rtree__V_34_34);
                        }
#line 239 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                          {
#line 7298 "rtree.c"
                            {
#line 7300 "rtree.c"
                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_27_27, mercury__rtree__V_35_35);
                            }
#line 239 "rtree.m"
                            if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                              {
#line 7307 "rtree.c"
                                {
#line 7309 "rtree.c"
                                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_28_28, mercury__rtree__V_36_36);
                                }
#line 239 "rtree.m"
                                if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                  {
#line 7316 "rtree.c"
                                    {
#line 7318 "rtree.c"
                                      mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_29_29, mercury__rtree__V_37_37);
                                    }
#line 239 "rtree.m"
                                    if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                      {
#line 7325 "rtree.c"
                                        {
#line 7327 "rtree.c"
                                          mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_30_30, mercury__rtree__V_38_38);
                                        }
#line 239 "rtree.m"
                                        if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                          {
#line 7334 "rtree.c"
                                            {
#line 7336 "rtree.c"
                                              mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_31_31, mercury__rtree__V_39_39);
                                            }
#line 239 "rtree.m"
                                            if (mercury__rtree__succeeded)
#line 7341 "rtree.c"
                                              {
#line 7343 "rtree.c"
                                                /* direct tailcall eliminated */
#line 7345 "rtree.c"
                                                {
#line 7347 "rtree.c"
                                                  MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_32_32;
#line 7349 "rtree.c"
                                                  MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_40_40;

#line 7352 "rtree.c"
                                                  mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7354 "rtree.c"
                                                  mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7356 "rtree.c"
                                                }
#line 7358 "rtree.c"
                                                continue;
#line 7360 "rtree.c"
                                              }
#line 239 "rtree.m"
                                          }
#line 239 "rtree.m"
                                      }
#line 239 "rtree.m"
                                  }
#line 239 "rtree.m"
                              }
#line 239 "rtree.m"
                          }
#line 239 "rtree.m"
                      }
#line 239 "rtree.m"
                  }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
              break;
#line 239 "rtree.m"
          }
#line 239 "rtree.m"
        return mercury__rtree__succeeded;
#line 239 "rtree.m"
      }
#line 239 "rtree.m"
      break;
#line 239 "rtree.m"
    }
#line 239 "rtree.m"
}

#line 225 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____rtree_2_0(
#line 225 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_25,
#line 225 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 225 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 225 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 225 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 225 "rtree.m"
{
#line 225 "rtree.m"
  {
#line 225 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 225 "rtree.m"
    MR_Integer mercury__rtree__CastX_23 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 225 "rtree.m"
    MR_Integer mercury__rtree__CastY_24 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 225 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_23 == mercury__rtree__CastY_24);
#line 225 "rtree.m"
    if (mercury__rtree__succeeded)
#line 7421 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "rtree.m"
    else
#line 225 "rtree.m"
#line 225 "rtree.m"
      switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 225 "rtree.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 225 "rtree.m"
        case (MR_Integer) 0:
#line 225 "rtree.m"
#line 225 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 225 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 225 "rtree.m"
            case (MR_Integer) 0:
#line 225 "rtree.m"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "rtree.m"
              break;
#line 225 "rtree.m"
            case (MR_Integer) 1:
#line 7445 "rtree.c"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
              break;
#line 225 "rtree.m"
            case (MR_Integer) 2:
#line 7451 "rtree.c"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
              break;
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
        case (MR_Integer) 1:
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 225 "rtree.m"
#line 225 "rtree.m"
            switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 225 "rtree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 225 "rtree.m"
              case (MR_Integer) 0:
#line 7475 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
              case (MR_Integer) 1:
#line 225 "rtree.m"
                {
#line 225 "rtree.m"
                  MR_Box mercury__rtree__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 225 "rtree.m"
                  MR_Box mercury__rtree__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 225 "rtree.m"
                  MR_Word mercury__rtree__V_13_13;

#line 225 "rtree.m"
                  {
#line 225 "rtree.m"
                    mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_25, &mercury__rtree__V_13_13, mercury__rtree__V_30_30, mercury__rtree__V_11_11);
                  }
#line 7495 "rtree.c"
                  mercury__rtree__succeeded = (mercury__rtree__V_13_13 == (MR_Integer) 0);
#line 225 "rtree.m"
                  mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 225 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 225 "rtree.m"
                    *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_13_13;
#line 225 "rtree.m"
                  else
#line 225 "rtree.m"
                    {
#line 225 "rtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__HeadVar__1_1, mercury__rtree__V_29_29, mercury__rtree__V_12_12);
                    }
#line 225 "rtree.m"
                }
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
              case (MR_Integer) 2:
#line 7516 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
            }
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
        case (MR_Integer) 2:
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Word mercury__rtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 225 "rtree.m"
#line 225 "rtree.m"
            switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 225 "rtree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 225 "rtree.m"
              case (MR_Integer) 0:
#line 7540 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
              case (MR_Integer) 1:
#line 7546 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
              case (MR_Integer) 2:
#line 225 "rtree.m"
                {
#line 225 "rtree.m"
                  MR_Word mercury__rtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 225 "rtree.m"
                  {
#line 225 "rtree.m"
                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__HeadVar__1_1, mercury__rtree__V_31_31, mercury__rtree__V_22_22);
                  }
#line 225 "rtree.m"
                }
#line 225 "rtree.m"
                break;
#line 225 "rtree.m"
            }
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
      }
#line 225 "rtree.m"
  }
#line 225 "rtree.m"
}

#line 225 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0(
#line 225 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_13,
#line 225 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_14,
#line 225 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 225 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 225 "rtree.m"
{
#line 225 "rtree.m"
  {
#line 225 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 225 "rtree.m"
    MR_Integer mercury__rtree__CastX_11 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 225 "rtree.m"
    MR_Integer mercury__rtree__CastY_12 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 225 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_11 == mercury__rtree__CastY_12);
#line 225 "rtree.m"
    if (mercury__rtree__succeeded)
#line 225 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 225 "rtree.m"
    else
#line 225 "rtree.m"
#line 225 "rtree.m"
      switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 225 "rtree.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 225 "rtree.m"
        case (MR_Integer) 0:
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Integer mercury__rtree__CastX_3 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 225 "rtree.m"
            MR_Integer mercury__rtree__CastY_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 225 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__CastY_4 == mercury__rtree__CastX_3);
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
        case (MR_Integer) 1:
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_7_7;
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_8_8;

#line 225 "rtree.m"
            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 225 "rtree.m"
            if (mercury__rtree__succeeded)
#line 225 "rtree.m"
              {
#line 225 "rtree.m"
                mercury__rtree__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 225 "rtree.m"
                mercury__rtree__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 7652 "rtree.c"
                {
#line 7654 "rtree.c"
                  mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__V_5_5, mercury__rtree__V_7_7);
                }
#line 225 "rtree.m"
                if (mercury__rtree__succeeded)
#line 7659 "rtree.c"
                  {
#line 7661 "rtree.c"
                    mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_14, mercury__rtree__V_6_6, mercury__rtree__V_8_8);
                  }
#line 225 "rtree.m"
              }
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
        case (MR_Integer) 2:
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Word mercury__rtree__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "rtree.m"
            MR_Word mercury__rtree__V_10_10;

#line 225 "rtree.m"
            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 225 "rtree.m"
            if (mercury__rtree__succeeded)
#line 225 "rtree.m"
              {
#line 225 "rtree.m"
                mercury__rtree__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 7687 "rtree.c"
                {
#line 7689 "rtree.c"
                  mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__TypeInfo_for_V_14, mercury__rtree__V_9_9, mercury__rtree__V_10_10);
                }
#line 225 "rtree.m"
              }
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
          break;
#line 225 "rtree.m"
      }
#line 225 "rtree.m"
    return mercury__rtree__succeeded;
#line 225 "rtree.m"
  }
#line 225 "rtree.m"
}

#line 559 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____orphans_2_0(
#line 559 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_6,
#line 559 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_7,
#line 559 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 559 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 559 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 559 "rtree.m"
{
#line 559 "rtree.m"
  {
#line 559 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 559 "rtree.m"
    MR_Word mercury__rtree__TypeCtorInfo_8_8 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 559 "rtree.m"
    MR_Word mercury__rtree__TypeInfo_9_9;
#line 559 "rtree.m"
    MR_Word mercury__rtree__Cast_HeadVar1_4 = mercury__rtree__HeadVar__2_2;
#line 559 "rtree.m"
    MR_Word mercury__rtree__Cast_HeadVar2_5 = mercury__rtree__HeadVar__3_3;

#line 7735 "rtree.c"
    {
#line 7737 "rtree.c"
      mercury__rtree__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7739 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_8_8));
#line 7741 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_6));
#line 7743 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_7));
#line 7745 "rtree.c"
    }
#line 559 "rtree.m"
    {
#line 559 "rtree.m"
      mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_9_9, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__Cast_HeadVar1_4, (MR_Word) mercury__rtree__Cast_HeadVar2_5);
    }
#line 559 "rtree.m"
  }
#line 559 "rtree.m"
}

#line 559 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0(
#line 559 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_5,
#line 559 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_6,
#line 559 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 559 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 559 "rtree.m"
{
#line 559 "rtree.m"
  {
#line 559 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 559 "rtree.m"
    MR_Word mercury__rtree__TypeCtorInfo_7_7 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 559 "rtree.m"
    MR_Word mercury__rtree__TypeInfo_8_8;
#line 559 "rtree.m"
    MR_Word mercury__rtree__Cast_HeadVar1_3 = mercury__rtree__HeadVar__1_1;
#line 559 "rtree.m"
    MR_Word mercury__rtree__Cast_HeadVar2_4 = mercury__rtree__HeadVar__2_2;

#line 7783 "rtree.c"
    {
#line 7785 "rtree.c"
      mercury__rtree__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7787 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_7_7));
#line 7789 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_5));
#line 7791 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_6));
#line 7793 "rtree.c"
    }
#line 559 "rtree.m"
    {
#line 559 "rtree.m"
      mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_8_8, (MR_Word) mercury__rtree__Cast_HeadVar1_3, (MR_Word) mercury__rtree__Cast_HeadVar2_4);
    }
#line 559 "rtree.m"
    return mercury__rtree__succeeded;
#line 559 "rtree.m"
  }
#line 559 "rtree.m"
}

#line 556 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____orphan_2_0(
#line 556 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_11,
#line 556 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_12,
#line 556 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 556 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 556 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 556 "rtree.m"
{
#line 556 "rtree.m"
  {
#line 556 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 556 "rtree.m"
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 556 "rtree.m"
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 556 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
#line 556 "rtree.m"
    if (mercury__rtree__succeeded)
#line 7835 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 556 "rtree.m"
    else
#line 556 "rtree.m"
      {
#line 556 "rtree.m"
        MR_Box mercury__rtree__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 556 "rtree.m"
        MR_Word mercury__rtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 556 "rtree.m"
        MR_Box mercury__rtree__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 556 "rtree.m"
        MR_Word mercury__rtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 556 "rtree.m"
        MR_Word mercury__rtree__V_8_8;

#line 556 "rtree.m"
        {
#line 556 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_K_11, &mercury__rtree__V_8_8, mercury__rtree__V_4_4, mercury__rtree__V_6_6);
        }
#line 7857 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_8_8 == (MR_Integer) 0);
#line 556 "rtree.m"
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 556 "rtree.m"
        if (mercury__rtree__succeeded)
#line 556 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_8_8;
#line 556 "rtree.m"
        else
#line 556 "rtree.m"
          {
#line 556 "rtree.m"
            mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_11, mercury__rtree__TypeInfo_for_V_12, mercury__rtree__HeadVar__1_1, mercury__rtree__V_5_5, mercury__rtree__V_7_7);
          }
#line 556 "rtree.m"
      }
#line 556 "rtree.m"
  }
#line 556 "rtree.m"
}

#line 556 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0(
#line 556 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_9,
#line 556 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_10,
#line 556 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 556 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 556 "rtree.m"
{
#line 556 "rtree.m"
  {
#line 556 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 556 "rtree.m"
    MR_Integer mercury__rtree__CastX_7 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 556 "rtree.m"
    MR_Integer mercury__rtree__CastY_8 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 556 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_7 == mercury__rtree__CastY_8);
#line 556 "rtree.m"
    if (mercury__rtree__succeeded)
#line 556 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 556 "rtree.m"
    else
#line 556 "rtree.m"
      {
#line 556 "rtree.m"
        MR_Box mercury__rtree__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 556 "rtree.m"
        MR_Word mercury__rtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "rtree.m"
        MR_Box mercury__rtree__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 556 "rtree.m"
        MR_Word mercury__rtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

#line 7920 "rtree.c"
        {
#line 7922 "rtree.c"
          mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__V_3_3, mercury__rtree__V_5_5);
        }
#line 556 "rtree.m"
        if (mercury__rtree__succeeded)
#line 7927 "rtree.c"
          {
#line 7929 "rtree.c"
            mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__TypeInfo_for_V_10, mercury__rtree__V_4_4, mercury__rtree__V_6_6);
          }
#line 556 "rtree.m"
      }
#line 556 "rtree.m"
    return mercury__rtree__succeeded;
#line 556 "rtree.m"
  }
#line 556 "rtree.m"
}

#line 250 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0(
#line 250 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 250 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 250 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 250 "rtree.m"
{
#line 250 "rtree.m"
  {
#line 250 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 250 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 250 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 71 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 76 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 250 "rtree.m"
  }
#line 250 "rtree.m"
}

#line 250 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0(
#line 250 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_1,
#line 250 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 250 "rtree.m"
{
#line 7997 "rtree.c"
  {
#line 7999 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8002 "rtree.c"
    return mercury__rtree__succeeded;
#line 8004 "rtree.c"
  }
#line 250 "rtree.m"
}

#line 254 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0(
#line 254 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 254 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 254 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 254 "rtree.m"
{
#line 254 "rtree.m"
  {
#line 254 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 254 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 254 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 71 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 76 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 254 "rtree.m"
  }
#line 254 "rtree.m"
}

#line 254 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0(
#line 254 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_1,
#line 254 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 254 "rtree.m"
{
#line 8065 "rtree.c"
  {
#line 8067 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8070 "rtree.c"
    return mercury__rtree__succeeded;
#line 8072 "rtree.c"
  }
#line 254 "rtree.m"
}

#line 259 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0(
#line 259 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 259 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 259 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 259 "rtree.m"
{
#line 259 "rtree.m"
  {
#line 259 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 259 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar1_4 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 259 "rtree.m"
    MR_Integer mercury__rtree__Cast_HeadVar2_5 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 71 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 76 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 259 "rtree.m"
  }
#line 259 "rtree.m"
}

#line 259 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0(
#line 259 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_1,
#line 259 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 259 "rtree.m"
{
#line 8133 "rtree.c"
  {
#line 8135 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8138 "rtree.c"
    return mercury__rtree__succeeded;
#line 8140 "rtree.c"
  }
#line 259 "rtree.m"
}

#line 181 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____interval_0_0(
#line 181 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 181 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 181 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 181 "rtree.m"
{
#line 181 "rtree.m"
  {
#line 181 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 181 "rtree.m"
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 181 "rtree.m"
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 181 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
#line 181 "rtree.m"
    if (mercury__rtree__succeeded)
#line 8169 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "rtree.m"
    else
#line 181 "rtree.m"
      {
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "rtree.m"
        MR_Word mercury__rtree__V_8_8;

#line 53 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_6_6);
#line 56 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
          mercury__rtree__V_8_8 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
        else
#line 61 "private_builtin.opt"
          {
#line 58 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_6_6);
#line 61 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
              mercury__rtree__V_8_8 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
            else
#line 62 "private_builtin.opt"
              mercury__rtree__V_8_8 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
          }
#line 8208 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_8_8 == (MR_Integer) 0);
#line 181 "rtree.m"
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 181 "rtree.m"
        if (mercury__rtree__succeeded)
#line 181 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_8_8;
#line 181 "rtree.m"
        else
#line 56 "private_builtin.opt"
          {
#line 53 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_7_7);
#line 56 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
            else
#line 61 "private_builtin.opt"
              {
#line 58 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_7_7);
#line 61 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                else
#line 62 "private_builtin.opt"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
              }
#line 56 "private_builtin.opt"
          }
#line 181 "rtree.m"
      }
#line 181 "rtree.m"
  }
#line 181 "rtree.m"
}

#line 181 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0(
#line 181 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 181 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 181 "rtree.m"
{
#line 181 "rtree.m"
  {
#line 181 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 181 "rtree.m"
    MR_Integer mercury__rtree__CastX_7 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 181 "rtree.m"
    MR_Integer mercury__rtree__CastY_8 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 181 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_7 == mercury__rtree__CastY_8);
#line 181 "rtree.m"
    if (mercury__rtree__succeeded)
#line 181 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 181 "rtree.m"
    else
#line 181 "rtree.m"
      {
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));

#line 8288 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_5_5);
#line 181 "rtree.m"
        if (mercury__rtree__succeeded)
#line 8292 "rtree.c"
          mercury__rtree__succeeded = (mercury__rtree__V_4_4 == mercury__rtree__V_6_6);
#line 181 "rtree.m"
      }
#line 181 "rtree.m"
    return mercury__rtree__succeeded;
#line 181 "rtree.m"
  }
#line 181 "rtree.m"
}

#line 561 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____delete_info_2_0(
#line 561 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_19,
#line 561 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_20,
#line 561 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 561 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 561 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 561 "rtree.m"
{
#line 561 "rtree.m"
  {
#line 561 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 561 "rtree.m"
    MR_Integer mercury__rtree__CastX_17 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 561 "rtree.m"
    MR_Integer mercury__rtree__CastY_18 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 561 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_17 == mercury__rtree__CastY_18);
#line 561 "rtree.m"
    if (mercury__rtree__succeeded)
#line 8331 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 561 "rtree.m"
    else
#line 561 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 561 "rtree.m"
      {
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 561 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 561 "rtree.m"
          {
#line 561 "rtree.m"
            MR_Word mercury__rtree__TypeCtorInfo_26_26 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 561 "rtree.m"
            MR_Word mercury__rtree__TypeInfo_27_27;
#line 561 "rtree.m"
            MR_Word mercury__rtree__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 8353 "rtree.c"
            {
#line 8355 "rtree.c"
              mercury__rtree__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8357 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_26_26));
#line 8359 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
#line 8361 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
#line 8363 "rtree.c"
            }
#line 561 "rtree.m"
            {
#line 561 "rtree.m"
              mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_27_27, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__V_30_30, (MR_Word) mercury__rtree__V_5_5);
            }
#line 561 "rtree.m"
          }
#line 561 "rtree.m"
        else
#line 8374 "rtree.c"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 561 "rtree.m"
      }
#line 561 "rtree.m"
    else
#line 561 "rtree.m"
      {
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 561 "rtree.m"
        MR_Integer mercury__rtree__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 561 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8389 "rtree.c"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 561 "rtree.m"
        else
#line 561 "rtree.m"
          {
#line 561 "rtree.m"
            MR_Integer mercury__rtree__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 561 "rtree.m"
            MR_Word mercury__rtree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 561 "rtree.m"
            MR_Word mercury__rtree__V_16_16;

#line 69 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_32_32 < mercury__rtree__V_14_14);
#line 72 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 71 "private_builtin.opt"
              mercury__rtree__V_16_16 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              {
#line 74 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_32_32 == mercury__rtree__V_14_14);
#line 77 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 76 "private_builtin.opt"
                  mercury__rtree__V_16_16 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                else
#line 78 "private_builtin.opt"
                  mercury__rtree__V_16_16 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
              }
#line 8424 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_16_16 == (MR_Integer) 0);
#line 561 "rtree.m"
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 561 "rtree.m"
            if (mercury__rtree__succeeded)
#line 561 "rtree.m"
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_16_16;
#line 561 "rtree.m"
            else
#line 561 "rtree.m"
              {
#line 561 "rtree.m"
                MR_Word mercury__rtree__TypeCtorInfo_22_22 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 561 "rtree.m"
                MR_Word mercury__rtree__TypeInfo_23_23;

#line 8441 "rtree.c"
                {
#line 8443 "rtree.c"
                  mercury__rtree__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8445 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_22_22));
#line 8447 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
#line 8449 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
#line 8451 "rtree.c"
                }
#line 561 "rtree.m"
                {
#line 561 "rtree.m"
                  mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_23_23, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__V_31_31, (MR_Word) mercury__rtree__V_15_15);
                }
#line 561 "rtree.m"
              }
#line 561 "rtree.m"
          }
#line 561 "rtree.m"
      }
#line 561 "rtree.m"
  }
#line 561 "rtree.m"
}

#line 561 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0(
#line 561 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_11,
#line 561 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_12,
#line 561 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 561 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 561 "rtree.m"
{
#line 561 "rtree.m"
  {
#line 561 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 561 "rtree.m"
    MR_Integer mercury__rtree__CastX_9 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 561 "rtree.m"
    MR_Integer mercury__rtree__CastY_10 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 561 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_9 == mercury__rtree__CastY_10);
#line 561 "rtree.m"
    if (mercury__rtree__succeeded)
#line 561 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 561 "rtree.m"
    else
#line 561 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 561 "rtree.m"
      {
#line 561 "rtree.m"
        MR_Word mercury__rtree__TypeCtorInfo_13_13;
#line 561 "rtree.m"
        MR_Word mercury__rtree__TypeInfo_14_14;
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_4_4;

#line 561 "rtree.m"
        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 561 "rtree.m"
        if (mercury__rtree__succeeded)
#line 561 "rtree.m"
          {
#line 561 "rtree.m"
            mercury__rtree__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 8520 "rtree.c"
            mercury__rtree__TypeCtorInfo_13_13 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 8522 "rtree.c"
            {
#line 8524 "rtree.c"
              mercury__rtree__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8526 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_13_13));
#line 8528 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
#line 8530 "rtree.c"
              MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
#line 8532 "rtree.c"
            }
#line 8534 "rtree.c"
            {
#line 8536 "rtree.c"
              mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_14_14, (MR_Word) mercury__rtree__V_3_3, (MR_Word) mercury__rtree__V_4_4);
            }
#line 561 "rtree.m"
          }
#line 561 "rtree.m"
      }
#line 561 "rtree.m"
    else
#line 561 "rtree.m"
      {
#line 561 "rtree.m"
        MR_Word mercury__rtree__TypeCtorInfo_17_17;
#line 561 "rtree.m"
        MR_Word mercury__rtree__TypeInfo_18_18;
#line 561 "rtree.m"
        MR_Integer mercury__rtree__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 561 "rtree.m"
        MR_Integer mercury__rtree__V_7_7;
#line 561 "rtree.m"
        MR_Word mercury__rtree__V_8_8;

#line 561 "rtree.m"
        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 561 "rtree.m"
        if (mercury__rtree__succeeded)
#line 561 "rtree.m"
          {
#line 561 "rtree.m"
            mercury__rtree__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 561 "rtree.m"
            mercury__rtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 8570 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_7_7);
#line 561 "rtree.m"
            if (mercury__rtree__succeeded)
#line 561 "rtree.m"
              {
#line 8576 "rtree.c"
                mercury__rtree__TypeCtorInfo_17_17 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 8578 "rtree.c"
                {
#line 8580 "rtree.c"
                  mercury__rtree__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8582 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_17_17));
#line 8584 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
#line 8586 "rtree.c"
                  MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
#line 8588 "rtree.c"
                }
#line 8590 "rtree.c"
                {
#line 8592 "rtree.c"
                  mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_18_18, (MR_Word) mercury__rtree__V_6_6, (MR_Word) mercury__rtree__V_8_8);
                }
#line 561 "rtree.m"
              }
#line 561 "rtree.m"
          }
#line 561 "rtree.m"
      }
#line 561 "rtree.m"
    return mercury__rtree__succeeded;
#line 561 "rtree.m"
  }
#line 561 "rtree.m"
}

#line 192 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____box3d_0_0(
#line 192 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 192 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 192 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 192 "rtree.m"
{
#line 192 "rtree.m"
  {
#line 192 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 192 "rtree.m"
    MR_Integer mercury__rtree__CastX_21 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 192 "rtree.m"
    MR_Integer mercury__rtree__CastY_22 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 192 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_21 == mercury__rtree__CastY_22);
#line 192 "rtree.m"
    if (mercury__rtree__succeeded)
#line 8632 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 192 "rtree.m"
    else
#line 192 "rtree.m"
      {
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 2)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 4)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
#line 192 "rtree.m"
        MR_Word mercury__rtree__V_16_16;

#line 53 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_10_10);
#line 56 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
          mercury__rtree__V_16_16 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
        else
#line 61 "private_builtin.opt"
          {
#line 58 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_10_10);
#line 61 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
              mercury__rtree__V_16_16 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
            else
#line 62 "private_builtin.opt"
              mercury__rtree__V_16_16 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
          }
#line 8687 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_16_16 == (MR_Integer) 0);
#line 192 "rtree.m"
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
        if (mercury__rtree__succeeded)
#line 192 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_16_16;
#line 192 "rtree.m"
        else
#line 192 "rtree.m"
          {
#line 192 "rtree.m"
            MR_Word mercury__rtree__V_17_17;

#line 53 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_11_11);
#line 56 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
              mercury__rtree__V_17_17 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
            else
#line 61 "private_builtin.opt"
              {
#line 58 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_11_11);
#line 61 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                  mercury__rtree__V_17_17 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                else
#line 62 "private_builtin.opt"
                  mercury__rtree__V_17_17 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
              }
#line 8724 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_17_17 == (MR_Integer) 0);
#line 192 "rtree.m"
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
            if (mercury__rtree__succeeded)
#line 192 "rtree.m"
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_17_17;
#line 192 "rtree.m"
            else
#line 192 "rtree.m"
              {
#line 192 "rtree.m"
                MR_Word mercury__rtree__V_18_18;

#line 53 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_6_6 < mercury__rtree__V_12_12);
#line 56 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                  mercury__rtree__V_18_18 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                else
#line 61 "private_builtin.opt"
                  {
#line 58 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 > mercury__rtree__V_12_12);
#line 61 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                      mercury__rtree__V_18_18 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                    else
#line 62 "private_builtin.opt"
                      mercury__rtree__V_18_18 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                  }
#line 8761 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_18_18 == (MR_Integer) 0);
#line 192 "rtree.m"
                mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
                if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                  *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_18_18;
#line 192 "rtree.m"
                else
#line 192 "rtree.m"
                  {
#line 192 "rtree.m"
                    MR_Word mercury__rtree__V_19_19;

#line 53 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_7_7 < mercury__rtree__V_13_13);
#line 56 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                      mercury__rtree__V_19_19 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                    else
#line 61 "private_builtin.opt"
                      {
#line 58 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 > mercury__rtree__V_13_13);
#line 61 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                          mercury__rtree__V_19_19 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                        else
#line 62 "private_builtin.opt"
                          mercury__rtree__V_19_19 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                      }
#line 8798 "rtree.c"
                    mercury__rtree__succeeded = (mercury__rtree__V_19_19 == (MR_Integer) 0);
#line 192 "rtree.m"
                    mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                      *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_19_19;
#line 192 "rtree.m"
                    else
#line 192 "rtree.m"
                      {
#line 192 "rtree.m"
                        MR_Word mercury__rtree__V_20_20;

#line 53 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_8_8 < mercury__rtree__V_14_14);
#line 56 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                          mercury__rtree__V_20_20 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                        else
#line 61 "private_builtin.opt"
                          {
#line 58 "private_builtin.opt"
                            mercury__rtree__succeeded = (mercury__rtree__V_8_8 > mercury__rtree__V_14_14);
#line 61 "private_builtin.opt"
                            if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                              mercury__rtree__V_20_20 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                            else
#line 62 "private_builtin.opt"
                              mercury__rtree__V_20_20 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                          }
#line 8835 "rtree.c"
                        mercury__rtree__succeeded = (mercury__rtree__V_20_20 == (MR_Integer) 0);
#line 192 "rtree.m"
                        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_20_20;
#line 192 "rtree.m"
                        else
#line 56 "private_builtin.opt"
                          {
#line 53 "private_builtin.opt"
                            mercury__rtree__succeeded = (mercury__rtree__V_9_9 < mercury__rtree__V_15_15);
#line 56 "private_builtin.opt"
                            if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                            else
#line 61 "private_builtin.opt"
                              {
#line 58 "private_builtin.opt"
                                mercury__rtree__succeeded = (mercury__rtree__V_9_9 > mercury__rtree__V_15_15);
#line 61 "private_builtin.opt"
                                if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                                else
#line 62 "private_builtin.opt"
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                              }
#line 56 "private_builtin.opt"
                          }
#line 192 "rtree.m"
                      }
#line 192 "rtree.m"
                  }
#line 192 "rtree.m"
              }
#line 192 "rtree.m"
          }
#line 192 "rtree.m"
      }
#line 192 "rtree.m"
  }
#line 192 "rtree.m"
}

#line 192 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0(
#line 192 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 192 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 192 "rtree.m"
{
#line 192 "rtree.m"
  {
#line 192 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 192 "rtree.m"
    MR_Integer mercury__rtree__CastX_15 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 192 "rtree.m"
    MR_Integer mercury__rtree__CastY_16 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 192 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_15 == mercury__rtree__CastY_16);
#line 192 "rtree.m"
    if (mercury__rtree__succeeded)
#line 192 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 192 "rtree.m"
    else
#line 192 "rtree.m"
      {
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 4)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 4)));
#line 192 "rtree.m"
        MR_Float mercury__rtree__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));

#line 8939 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_9_9);
#line 192 "rtree.m"
        if (mercury__rtree__succeeded)
#line 192 "rtree.m"
          {
#line 8945 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 == mercury__rtree__V_10_10);
#line 192 "rtree.m"
            if (mercury__rtree__succeeded)
#line 192 "rtree.m"
              {
#line 8951 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_11_11);
#line 192 "rtree.m"
                if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                  {
#line 8957 "rtree.c"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 == mercury__rtree__V_12_12);
#line 192 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                      {
#line 8963 "rtree.c"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 == mercury__rtree__V_13_13);
#line 192 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 8967 "rtree.c"
                          mercury__rtree__succeeded = (mercury__rtree__V_8_8 == mercury__rtree__V_14_14);
#line 192 "rtree.m"
                      }
#line 192 "rtree.m"
                  }
#line 192 "rtree.m"
              }
#line 192 "rtree.m"
          }
#line 192 "rtree.m"
      }
#line 192 "rtree.m"
    return mercury__rtree__succeeded;
#line 192 "rtree.m"
  }
#line 192 "rtree.m"
}

#line 186 "rtree.m"
void MR_CALL 
mercury__rtree____Compare____box_0_0(
#line 186 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__1_1,
#line 186 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 186 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 186 "rtree.m"
{
#line 186 "rtree.m"
  {
#line 186 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 186 "rtree.m"
    MR_Integer mercury__rtree__CastX_15 = (MR_Integer) mercury__rtree__HeadVar__2_2;
#line 186 "rtree.m"
    MR_Integer mercury__rtree__CastY_16 = (MR_Integer) mercury__rtree__HeadVar__3_3;

#line 186 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_15 == mercury__rtree__CastY_16);
#line 186 "rtree.m"
    if (mercury__rtree__succeeded)
#line 9010 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "rtree.m"
    else
#line 186 "rtree.m"
      {
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 2)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 186 "rtree.m"
        MR_Word mercury__rtree__V_12_12;

#line 53 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_8_8);
#line 56 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
          mercury__rtree__V_12_12 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
        else
#line 61 "private_builtin.opt"
          {
#line 58 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_8_8);
#line 61 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
              mercury__rtree__V_12_12 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
            else
#line 62 "private_builtin.opt"
              mercury__rtree__V_12_12 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
          }
#line 9057 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_12_12 == (MR_Integer) 0);
#line 186 "rtree.m"
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 186 "rtree.m"
        if (mercury__rtree__succeeded)
#line 186 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_12_12;
#line 186 "rtree.m"
        else
#line 186 "rtree.m"
          {
#line 186 "rtree.m"
            MR_Word mercury__rtree__V_13_13;

#line 53 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_9_9);
#line 56 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
              mercury__rtree__V_13_13 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
            else
#line 61 "private_builtin.opt"
              {
#line 58 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_9_9);
#line 61 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                  mercury__rtree__V_13_13 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                else
#line 62 "private_builtin.opt"
                  mercury__rtree__V_13_13 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
              }
#line 9094 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_13_13 == (MR_Integer) 0);
#line 186 "rtree.m"
            mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 186 "rtree.m"
            if (mercury__rtree__succeeded)
#line 186 "rtree.m"
              *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_13_13;
#line 186 "rtree.m"
            else
#line 186 "rtree.m"
              {
#line 186 "rtree.m"
                MR_Word mercury__rtree__V_14_14;

#line 53 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_6_6 < mercury__rtree__V_10_10);
#line 56 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                  mercury__rtree__V_14_14 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                else
#line 61 "private_builtin.opt"
                  {
#line 58 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 > mercury__rtree__V_10_10);
#line 61 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                      mercury__rtree__V_14_14 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                    else
#line 62 "private_builtin.opt"
                      mercury__rtree__V_14_14 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                  }
#line 9131 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_14_14 == (MR_Integer) 0);
#line 186 "rtree.m"
                mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 186 "rtree.m"
                if (mercury__rtree__succeeded)
#line 186 "rtree.m"
                  *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_14_14;
#line 186 "rtree.m"
                else
#line 56 "private_builtin.opt"
                  {
#line 53 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_7_7 < mercury__rtree__V_11_11);
#line 56 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 55 "private_builtin.opt"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                    else
#line 61 "private_builtin.opt"
                      {
#line 58 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 > mercury__rtree__V_11_11);
#line 61 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 60 "private_builtin.opt"
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                        else
#line 62 "private_builtin.opt"
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                      }
#line 56 "private_builtin.opt"
                  }
#line 186 "rtree.m"
              }
#line 186 "rtree.m"
          }
#line 186 "rtree.m"
      }
#line 186 "rtree.m"
  }
#line 186 "rtree.m"
}

#line 186 "rtree.m"
MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0(
#line 186 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 186 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2)
#line 186 "rtree.m"
{
#line 186 "rtree.m"
  {
#line 186 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 186 "rtree.m"
    MR_Integer mercury__rtree__CastX_11 = (MR_Integer) mercury__rtree__HeadVar__1_1;
#line 186 "rtree.m"
    MR_Integer mercury__rtree__CastY_12 = (MR_Integer) mercury__rtree__HeadVar__2_2;

#line 186 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__CastX_11 == mercury__rtree__CastY_12);
#line 186 "rtree.m"
    if (mercury__rtree__succeeded)
#line 186 "rtree.m"
      mercury__rtree__succeeded = MR_TRUE;
#line 186 "rtree.m"
    else
#line 186 "rtree.m"
      {
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 2)));
#line 186 "rtree.m"
        MR_Float mercury__rtree__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));

#line 9223 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_7_7);
#line 186 "rtree.m"
        if (mercury__rtree__succeeded)
#line 186 "rtree.m"
          {
#line 9229 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 == mercury__rtree__V_8_8);
#line 186 "rtree.m"
            if (mercury__rtree__succeeded)
#line 186 "rtree.m"
              {
#line 9235 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_9_9);
#line 186 "rtree.m"
                if (mercury__rtree__succeeded)
#line 9239 "rtree.c"
                  mercury__rtree__succeeded = (mercury__rtree__V_6_6 == mercury__rtree__V_10_10);
#line 186 "rtree.m"
              }
#line 186 "rtree.m"
          }
#line 186 "rtree.m"
      }
#line 186 "rtree.m"
    return mercury__rtree__succeeded;
#line 186 "rtree.m"
  }
#line 186 "rtree.m"
}

#line 72 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__bounding_region_size_2_f_0(
#line 72 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_4,
#line 72 "rtree.m"
  MR_Box mercury__rtree__HeadVar__1_1,
#line 72 "rtree.m"
  MR_Box mercury__rtree__HeadVar__2_2)
#line 72 "rtree.m"
{
#line 72 "rtree.m"
  {
#line 72 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 72 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv1_HeadVar__3_3;

#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv1_HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 72 "rtree.m"
    mercury__rtree__HeadVar__3_3 = MR_unbox_float(mercury__rtree__conv1_HeadVar__3_3);
#line 72 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 72 "rtree.m"
  }
#line 72 "rtree.m"
}

#line 56 "rtree.m"
MR_Box MR_CALL 
mercury__rtree__bounding_region_2_f_0(
#line 56 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_4,
#line 56 "rtree.m"
  MR_Box mercury__rtree__HeadVar__1_1,
#line 56 "rtree.m"
  MR_Box mercury__rtree__HeadVar__2_2)
#line 56 "rtree.m"
{
#line 56 "rtree.m"
  {
#line 56 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 56 "rtree.m"
    MR_Box mercury__rtree__HeadVar__3_3;
#line 56 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
    {
#line 56 "rtree.m"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 56 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 56 "rtree.m"
  }
#line 56 "rtree.m"
}

#line 50 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__size_1_f_0(
#line 50 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
#line 50 "rtree.m"
  MR_Box mercury__rtree__HeadVar__1_1)
#line 50 "rtree.m"
{
#line 50 "rtree.m"
  {
#line 50 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 50 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv1_HeadVar__2_2;

#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv1_HeadVar__2_2 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1);
    }
#line 50 "rtree.m"
    mercury__rtree__HeadVar__2_2 = MR_unbox_float(mercury__rtree__conv1_HeadVar__2_2);
#line 50 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 50 "rtree.m"
  }
#line 50 "rtree.m"
}

#line 44 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__contains_2_p_0(
#line 44 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
#line 44 "rtree.m"
  MR_Box mercury__rtree__HeadVar__1_1,
#line 44 "rtree.m"
  MR_Box mercury__rtree__HeadVar__2_2)
#line 44 "rtree.m"
{
#line 44 "rtree.m"
  {
#line 44 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 44 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
    {
#line 44 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 44 "rtree.m"
    return mercury__rtree__succeeded;
#line 44 "rtree.m"
  }
#line 44 "rtree.m"
}

#line 40 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__intersects_2_p_0(
#line 40 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_3,
#line 40 "rtree.m"
  MR_Box mercury__rtree__HeadVar__1_1,
#line 40 "rtree.m"
  MR_Box mercury__rtree__HeadVar__2_2)
#line 40 "rtree.m"
{
#line 40 "rtree.m"
  {
#line 40 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 40 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 5)));

#line 40 "rtree.m"
    {
#line 40 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 40 "rtree.m"
    return mercury__rtree__succeeded;
#line 40 "rtree.m"
  }
#line 40 "rtree.m"
}

#line 1745 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__interval_bounding_region_length_2_f_0(
#line 1745 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1745 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1745 "rtree.m"
{
#line 1747 "rtree.m"
  {
#line 1747 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1747 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;
#line 1747 "rtree.m"
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1747 "rtree.m"
    MR_Float mercury__rtree__BMax_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1747 "rtree.m"
    MR_Float mercury__rtree__AMin_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1747 "rtree.m"
    MR_Float mercury__rtree__BMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1747 "rtree.m"
    MR_Float mercury__rtree__V_10_10;
#line 1747 "rtree.m"
    MR_Float mercury__rtree__V_11_11;

#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMax_7);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__AMax_6;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__BMax_7;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMin_8 <= mercury__rtree__BMin_9);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__AMin_8;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__BMin_9;
#line 1747 "rtree.m"
    mercury__rtree__HeadVar__3_3 = (mercury__rtree__V_10_10 - mercury__rtree__V_11_11);
#line 1747 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1747 "rtree.m"
  }
#line 1745 "rtree.m"
}

#line 1737 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__interval_bounding_region_2_f_0(
#line 1737 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1737 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1737 "rtree.m"
{
#line 1739 "rtree.m"
  {
#line 1739 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1739 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;
#line 1739 "rtree.m"
    MR_Float mercury__rtree__AMin_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1739 "rtree.m"
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1739 "rtree.m"
    MR_Float mercury__rtree__AMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1739 "rtree.m"
    MR_Float mercury__rtree__BMax_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1739 "rtree.m"
    MR_Float mercury__rtree__V_10_10;
#line 1739 "rtree.m"
    MR_Float mercury__rtree__V_11_11;

#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMin_6 <= mercury__rtree__BMin_7);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__AMin_6;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__BMin_7;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMax_8 >= mercury__rtree__BMax_9);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__AMax_8;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__BMax_9;
#line 1739 "rtree.m"
    {
#line 1739 "rtree.m"
      mercury__rtree__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1739 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, 0) = MR_box_float(mercury__rtree__V_10_10);
#line 1739 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, 1) = MR_box_float(mercury__rtree__V_11_11);
#line 1739 "rtree.m"
    }
#line 1739 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1739 "rtree.m"
  }
#line 1737 "rtree.m"
}

#line 1731 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__interval_length_1_f_0(
#line 1731 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 1731 "rtree.m"
{
#line 1733 "rtree.m"
  {
#line 1733 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1733 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1733 "rtree.m"
    MR_Float mercury__rtree__Max_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1733 "rtree.m"
    MR_Float mercury__rtree__Min_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1733 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__Max_3 - mercury__rtree__Min_4);
#line 1733 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1733 "rtree.m"
  }
#line 1731 "rtree.m"
}

#line 1721 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__interval_contains_2_p_0(
#line 1721 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1721 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1721 "rtree.m"
{
#line 1723 "rtree.m"
  {
#line 1723 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1723 "rtree.m"
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1723 "rtree.m"
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));

#line 1726 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AMin_5 >= mercury__rtree__BMin_7);
#line 1723 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1727 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 <= mercury__rtree__BMax_8);
#line 1723 "rtree.m"
    return mercury__rtree__succeeded;
#line 1723 "rtree.m"
  }
#line 1721 "rtree.m"
}

#line 1708 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__interval_intersects_2_p_0(
#line 1708 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1708 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1708 "rtree.m"
{
#line 1710 "rtree.m"
  {
#line 1710 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1710 "rtree.m"
    MR_Float mercury__rtree__AMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__AMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__BMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1710 "rtree.m"
    MR_Float mercury__rtree__BMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));

#line 1713 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMin_7);
#line 1715 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1714 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMin_7);
#line 1715 "rtree.m"
    else
#line 1716 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AMin_5 <= mercury__rtree__BMax_8);
#line 1710 "rtree.m"
    return mercury__rtree__succeeded;
#line 1710 "rtree.m"
  }
#line 1708 "rtree.m"
}

#line 1686 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__box_bounding_region_area_2_f_0(
#line 1686 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1686 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1686 "rtree.m"
{
#line 1688 "rtree.m"
  {
#line 1688 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__HeadVar__3_3;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__XMax_6;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__XMin_7;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__YMax_8;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__YMin_9;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__AXMin_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__AXMax_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__AYMin_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__AYMax_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__BXMin_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__BXMax_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__BYMin_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__BYMax_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
#line 1688 "rtree.m"
    MR_Float mercury__rtree__V_18_18;
#line 1688 "rtree.m"
    MR_Float mercury__rtree__V_19_19;

#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_10 <= mercury__rtree__BXMin_14);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__XMin_7 = mercury__rtree__AXMin_10;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__XMin_7 = mercury__rtree__BXMin_14;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_11 >= mercury__rtree__BXMax_15);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__XMax_6 = mercury__rtree__AXMax_11;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__XMax_6 = mercury__rtree__BXMax_15;
#line 1688 "rtree.m"
    mercury__rtree__V_18_18 = (mercury__rtree__XMax_6 - mercury__rtree__XMin_7);
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_12 <= mercury__rtree__BYMin_16);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__YMin_9 = mercury__rtree__AYMin_12;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__YMin_9 = mercury__rtree__BYMin_16;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_13 >= mercury__rtree__BYMax_17);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__YMax_8 = mercury__rtree__AYMax_13;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__YMax_8 = mercury__rtree__BYMax_17;
#line 1688 "rtree.m"
    mercury__rtree__V_19_19 = (mercury__rtree__YMax_8 - mercury__rtree__YMin_9);
#line 1688 "rtree.m"
    mercury__rtree__HeadVar__3_3 = (mercury__rtree__V_18_18 * mercury__rtree__V_19_19);
#line 1688 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 1688 "rtree.m"
  }
#line 1686 "rtree.m"
}

#line 1673 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__box_bounding_region_2_f_0(
#line 1673 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1673 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1673 "rtree.m"
{
#line 1675 "rtree.m"
  {
#line 1675 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1675 "rtree.m"
    MR_Word mercury__rtree__C_6;
#line 1675 "rtree.m"
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
#line 1675 "rtree.m"
    MR_Float mercury__rtree__CXMin_15;
#line 1675 "rtree.m"
    MR_Float mercury__rtree__CXMax_16;
#line 1675 "rtree.m"
    MR_Float mercury__rtree__CYMin_17;
#line 1675 "rtree.m"
    MR_Float mercury__rtree__CYMax_18;

#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_11);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__CXMin_15 = mercury__rtree__AXMin_7;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__CXMin_15 = mercury__rtree__BXMin_11;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_12);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__CXMax_16 = mercury__rtree__AXMax_8;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__CXMax_16 = mercury__rtree__BXMax_12;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_13);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__CYMin_17 = mercury__rtree__AYMin_9;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__CYMin_17 = mercury__rtree__BYMin_13;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_14);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__CYMax_18 = mercury__rtree__AYMax_10;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__CYMax_18 = mercury__rtree__BYMax_14;
#line 1682 "rtree.m"
    {
#line 1682 "rtree.m"
      mercury__rtree__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 0) = MR_box_float(mercury__rtree__CXMin_15);
#line 1682 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 1) = MR_box_float(mercury__rtree__CXMax_16);
#line 1682 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 2) = MR_box_float(mercury__rtree__CYMin_17);
#line 1682 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 3) = MR_box_float(mercury__rtree__CYMax_18);
#line 1682 "rtree.m"
    }
#line 1675 "rtree.m"
    return mercury__rtree__C_6;
#line 1675 "rtree.m"
  }
#line 1673 "rtree.m"
}

#line 1667 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__box_area_1_f_0(
#line 1667 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 1667 "rtree.m"
{
#line 1669 "rtree.m"
  {
#line 1669 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1669 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1669 "rtree.m"
    MR_Float mercury__rtree__XMin_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__YMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 2)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1669 "rtree.m"
    MR_Float mercury__rtree__V_7_7 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_3);
#line 1669 "rtree.m"
    MR_Float mercury__rtree__V_8_8 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_5);

#line 1669 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__V_7_7 * mercury__rtree__V_8_8);
#line 1669 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1669 "rtree.m"
  }
#line 1667 "rtree.m"
}

#line 1655 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__box_contains_2_p_0(
#line 1655 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1655 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1655 "rtree.m"
{
#line 1657 "rtree.m"
  {
#line 1657 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
#line 1657 "rtree.m"
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));

#line 1660 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_9);
#line 1657 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1657 "rtree.m"
      {
#line 1661 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_10);
#line 1657 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1657 "rtree.m"
          {
#line 1662 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_11);
#line 1657 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1663 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_12);
#line 1657 "rtree.m"
          }
#line 1657 "rtree.m"
      }
#line 1657 "rtree.m"
    return mercury__rtree__succeeded;
#line 1657 "rtree.m"
  }
#line 1655 "rtree.m"
}

#line 1637 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__box_intersects_2_p_0(
#line 1637 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1637 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1637 "rtree.m"
{
#line 1639 "rtree.m"
  {
#line 1639 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1639 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__BXMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__BXMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__BYMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
#line 1639 "rtree.m"
    MR_Float mercury__rtree__BYMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));

#line 1642 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMin_9);
#line 1644 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1643 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AXMax_6 >= mercury__rtree__BXMin_9);
#line 1644 "rtree.m"
    else
#line 1645 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMax_10);
#line 1639 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1639 "rtree.m"
      {
#line 1647 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMin_11);
#line 1649 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1648 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__AYMax_8 >= mercury__rtree__BYMin_11);
#line 1649 "rtree.m"
        else
#line 1650 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMax_12);
#line 1639 "rtree.m"
      }
#line 1639 "rtree.m"
    return mercury__rtree__succeeded;
#line 1639 "rtree.m"
  }
#line 1637 "rtree.m"
}

#line 1612 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__box3d_bounding_region_volume_2_f_0(
#line 1612 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1612 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1612 "rtree.m"
{
#line 1614 "rtree.m"
  {
#line 1614 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__Volume_6;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 4)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 5)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 4)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 5)));
#line 1614 "rtree.m"
    MR_Float mercury__rtree__XMin_19;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__XMax_20;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__YMin_21;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__YMax_22;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__ZMin_23;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__ZMax_24;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__V_25_25;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__V_26_26;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__V_27_27;
#line 1614 "rtree.m"
    MR_Float mercury__rtree__V_28_28;

#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__XMin_19 = mercury__rtree__AXMin_7;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__XMin_19 = mercury__rtree__BXMin_13;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__XMax_20 = mercury__rtree__AXMax_8;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__XMax_20 = mercury__rtree__BXMax_14;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__YMin_21 = mercury__rtree__AYMin_9;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__YMin_21 = mercury__rtree__BYMin_15;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__YMax_22 = mercury__rtree__AYMax_10;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__YMax_22 = mercury__rtree__BYMax_16;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__ZMin_23 = mercury__rtree__AZMin_11;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__ZMin_23 = mercury__rtree__BZMin_17;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__ZMax_24 = mercury__rtree__AZMax_12;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__ZMax_24 = mercury__rtree__BZMax_18;
#line 1623 "rtree.m"
    mercury__rtree__V_26_26 = (mercury__rtree__XMax_20 - mercury__rtree__XMin_19);
#line 1623 "rtree.m"
    mercury__rtree__V_27_27 = (mercury__rtree__YMax_22 - mercury__rtree__YMin_21);
#line 1623 "rtree.m"
    mercury__rtree__V_25_25 = (mercury__rtree__V_26_26 * mercury__rtree__V_27_27);
#line 1623 "rtree.m"
    mercury__rtree__V_28_28 = (mercury__rtree__ZMax_24 - mercury__rtree__ZMin_23);
#line 1623 "rtree.m"
    mercury__rtree__Volume_6 = (mercury__rtree__V_25_25 * mercury__rtree__V_28_28);
#line 1614 "rtree.m"
    return mercury__rtree__Volume_6;
#line 1614 "rtree.m"
  }
#line 1612 "rtree.m"
}

#line 1597 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__box3d_bounding_region_2_f_0(
#line 1597 "rtree.m"
  MR_Word mercury__rtree__A_4,
#line 1597 "rtree.m"
  MR_Word mercury__rtree__B_5)
#line 1597 "rtree.m"
{
#line 1599 "rtree.m"
  {
#line 1599 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1599 "rtree.m"
    MR_Word mercury__rtree__C_6;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AXMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 0)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AXMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 1)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AYMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 2)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AYMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 3)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AZMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 4)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__AZMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_4, (MR_Integer) 5)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BXMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 0)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BXMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 1)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BYMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 2)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BYMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 3)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BZMin_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 4)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__BZMax_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_5, (MR_Integer) 5)));
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CXMin_19;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CXMax_20;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CYMin_21;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CYMax_22;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CZMin_23;
#line 1599 "rtree.m"
    MR_Float mercury__rtree__CZMax_24;

#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__CXMin_19 = mercury__rtree__AXMin_7;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__CXMin_19 = mercury__rtree__BXMin_13;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__CXMax_20 = mercury__rtree__AXMax_8;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__CXMax_20 = mercury__rtree__BXMax_14;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__CYMin_21 = mercury__rtree__AYMin_9;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__CYMin_21 = mercury__rtree__BYMin_15;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__CYMax_22 = mercury__rtree__AYMax_10;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__CYMax_22 = mercury__rtree__BYMax_16;
#line 180 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
#line 183 "float.opt"
    if (mercury__rtree__succeeded)
#line 182 "float.opt"
      mercury__rtree__CZMin_23 = mercury__rtree__AZMin_11;
#line 183 "float.opt"
    else
#line 184 "float.opt"
      mercury__rtree__CZMin_23 = mercury__rtree__BZMin_17;
#line 163 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
#line 166 "float.opt"
    if (mercury__rtree__succeeded)
#line 165 "float.opt"
      mercury__rtree__CZMax_24 = mercury__rtree__AZMax_12;
#line 166 "float.opt"
    else
#line 167 "float.opt"
      mercury__rtree__CZMax_24 = mercury__rtree__BZMax_18;
#line 1608 "rtree.m"
    {
#line 1608 "rtree.m"
      mercury__rtree__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 0) = MR_box_float(mercury__rtree__CXMin_19);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 1) = MR_box_float(mercury__rtree__CXMax_20);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 2) = MR_box_float(mercury__rtree__CYMin_21);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 3) = MR_box_float(mercury__rtree__CYMax_22);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 4) = MR_box_float(mercury__rtree__CZMin_23);
#line 1608 "rtree.m"
      MR_hl_field(MR_mktag(0), mercury__rtree__C_6, 5) = MR_box_float(mercury__rtree__CZMax_24);
#line 1608 "rtree.m"
    }
#line 1599 "rtree.m"
    return mercury__rtree__C_6;
#line 1599 "rtree.m"
  }
#line 1597 "rtree.m"
}

#line 1590 "rtree.m"
MR_Float MR_CALL 
mercury__rtree__box3d_volume_1_f_0(
#line 1590 "rtree.m"
  MR_Word mercury__rtree__Box_3)
#line 1590 "rtree.m"
{
#line 1592 "rtree.m"
  {
#line 1592 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__XMax_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 1)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__XMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 0)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__YMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 3)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__YMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 2)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__ZMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 5)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__ZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__Box_3, (MR_Integer) 4)));
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_10_10;
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_11_11 = (mercury__rtree__XMax_4 - mercury__rtree__XMin_5);
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_12_12 = (mercury__rtree__YMax_6 - mercury__rtree__YMin_7);
#line 1592 "rtree.m"
    MR_Float mercury__rtree__V_13_13;

#line 1592 "rtree.m"
    mercury__rtree__V_10_10 = (mercury__rtree__V_11_11 * mercury__rtree__V_12_12);
#line 1592 "rtree.m"
    mercury__rtree__V_13_13 = (mercury__rtree__ZMax_8 - mercury__rtree__ZMin_9);
#line 1592 "rtree.m"
    mercury__rtree__HeadVar__2_2 = (mercury__rtree__V_10_10 * mercury__rtree__V_13_13);
#line 1592 "rtree.m"
    return mercury__rtree__HeadVar__2_2;
#line 1592 "rtree.m"
  }
#line 1590 "rtree.m"
}

#line 1576 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__box3d_contains_2_p_0(
#line 1576 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1576 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1576 "rtree.m"
{
#line 1578 "rtree.m"
  {
#line 1578 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 4)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 5)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 4)));
#line 1578 "rtree.m"
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 5)));

#line 1581 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 >= mercury__rtree__BXMin_11);
#line 1578 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
      {
#line 1582 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AXMax_6 <= mercury__rtree__BXMax_12);
#line 1578 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
          {
#line 1583 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AYMin_7 >= mercury__rtree__BYMin_13);
#line 1578 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
              {
#line 1584 "rtree.m"
                mercury__rtree__succeeded = (mercury__rtree__AYMax_8 <= mercury__rtree__BYMax_14);
#line 1578 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1578 "rtree.m"
                  {
#line 1585 "rtree.m"
                    mercury__rtree__succeeded = (mercury__rtree__AZMin_9 >= mercury__rtree__BZMin_15);
#line 1578 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 1586 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__AZMax_10 <= mercury__rtree__BZMax_16);
#line 1578 "rtree.m"
                  }
#line 1578 "rtree.m"
              }
#line 1578 "rtree.m"
          }
#line 1578 "rtree.m"
      }
#line 1578 "rtree.m"
    return mercury__rtree__succeeded;
#line 1578 "rtree.m"
  }
#line 1576 "rtree.m"
}

#line 1553 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__box3d_intersects_2_p_0(
#line 1553 "rtree.m"
  MR_Word mercury__rtree__A_3,
#line 1553 "rtree.m"
  MR_Word mercury__rtree__B_4)
#line 1553 "rtree.m"
{
#line 1555 "rtree.m"
  {
#line 1555 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AXMin_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 0)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AXMax_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 1)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AYMin_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 2)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AYMax_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 3)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AZMin_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 4)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__AZMax_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__A_3, (MR_Integer) 5)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BXMin_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 0)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BXMax_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 1)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BYMin_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 2)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BYMax_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 3)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BZMin_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 4)));
#line 1555 "rtree.m"
    MR_Float mercury__rtree__BZMax_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__rtree__B_4, (MR_Integer) 5)));

#line 1558 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMin_11);
#line 1560 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1559 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AXMax_6 >= mercury__rtree__BXMin_11);
#line 1560 "rtree.m"
    else
#line 1561 "rtree.m"
      mercury__rtree__succeeded = (mercury__rtree__AXMin_5 <= mercury__rtree__BXMax_12);
#line 1555 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1555 "rtree.m"
      {
#line 1563 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMin_13);
#line 1565 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1564 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__AYMax_8 >= mercury__rtree__BYMin_13);
#line 1565 "rtree.m"
        else
#line 1566 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__AYMin_7 <= mercury__rtree__BYMax_14);
#line 1555 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1555 "rtree.m"
          {
#line 1568 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AZMin_9 <= mercury__rtree__BZMin_15);
#line 1570 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1569 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__AZMax_10 >= mercury__rtree__BZMin_15);
#line 1570 "rtree.m"
            else
#line 1571 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__AZMin_9 <= mercury__rtree__BZMax_16);
#line 1555 "rtree.m"
          }
#line 1555 "rtree.m"
      }
#line 1555 "rtree.m"
    return mercury__rtree__succeeded;
#line 1555 "rtree.m"
  }
#line 1553 "rtree.m"
}

#line 1472 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__map_values_key_2_4_p_1(
#line 1472 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_29,
#line 1472 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_30,
#line 1472 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_31,
#line 1472 "rtree.m"
  MR_Word mercury__rtree__P_5,
#line 1472 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 1472 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 1472 "rtree.m"
  MR_Word * mercury__rtree__U_8)
#line 1472 "rtree.m"
{
#line 1479 "rtree.m"
  {
#line 1479 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1479 "rtree.m"
#line 1479 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
#line 1479 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1479 "rtree.m"
      case (MR_Integer) 0:
#line 1476 "rtree.m"
        {
#line 1476 "rtree.m"
          MR_Box mercury__rtree__V_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));
#line 1476 "rtree.m"
          MR_Box mercury__rtree__W_10;
#line 1477 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_5, (MR_Integer) 1)));

#line 1477 "rtree.m"
          {
#line 1477 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_5), mercury__rtree__K_6, mercury__rtree__V_9, &mercury__rtree__W_10);
          }
#line 1476 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1476 "rtree.m"
            {
#line 1478 "rtree.m"
              {
#line 1478 "rtree.m"
                MR_Word base;
#line 1478 "rtree.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "rtree.m"
                *mercury__rtree__U_8 = base;
#line 1478 "rtree.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__rtree__W_10;
#line 1478 "rtree.m"
              }
#line 1478 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 1476 "rtree.m"
            }
#line 1476 "rtree.m"
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 1:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 2:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 3:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
    }
#line 1479 "rtree.m"
    return mercury__rtree__succeeded;
#line 1479 "rtree.m"
  }
#line 1472 "rtree.m"
}

#line 1471 "rtree.m"
void MR_CALL 
mercury__rtree__map_values_key_2_4_p_0(
#line 1471 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_29,
#line 1471 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_30,
#line 1471 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_31,
#line 1471 "rtree.m"
  MR_Word mercury__rtree__P_5,
#line 1471 "rtree.m"
  MR_Box mercury__rtree__K_6,
#line 1471 "rtree.m"
  MR_Word mercury__rtree__T_7,
#line 1471 "rtree.m"
  MR_Word * mercury__rtree__U_8)
#line 1471 "rtree.m"
{
#line 1479 "rtree.m"
  {
#line 1479 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1479 "rtree.m"
#line 1479 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T_7)) {
#line 1479 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1479 "rtree.m"
      case (MR_Integer) 0:
#line 1476 "rtree.m"
        {
#line 1476 "rtree.m"
          MR_Box mercury__rtree__V_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_7, (MR_Integer) 0));
#line 1476 "rtree.m"
          MR_Box mercury__rtree__W_10;
#line 1477 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_5, (MR_Integer) 1)));

#line 1477 "rtree.m"
          {
#line 1477 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_5), mercury__rtree__K_6, mercury__rtree__V_9, &mercury__rtree__W_10);
          }
#line 1478 "rtree.m"
          {
#line 1478 "rtree.m"
            MR_Word base;
#line 1478 "rtree.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "rtree.m"
            *mercury__rtree__U_8 = base;
#line 1478 "rtree.m"
            MR_hl_field(MR_mktag(0), base, 0) = mercury__rtree__W_10;
#line 1478 "rtree.m"
          }
#line 1476 "rtree.m"
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 1:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 2:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
      case (MR_Integer) 3:
#line 1484 "rtree.m"
        {
#line 1484 "rtree.m"
          mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
        }
#line 1479 "rtree.m"
        break;
#line 1479 "rtree.m"
    }
#line 1479 "rtree.m"
  }
#line 1471 "rtree.m"
}

#line 1452 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__map_values_2_3_p_1(
#line 1452 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_38,
#line 1452 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_39,
#line 1452 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_40,
#line 1452 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 1452 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 1452 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__3_3)
#line 1452 "rtree.m"
{
#line 1454 "rtree.m"
  {
#line 1454 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1454 "rtree.m"
#line 1454 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1454 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "rtree.m"
      case (MR_Integer) 0:
#line 1454 "rtree.m"
        {
#line 1455 "rtree.m"
          {
#line 1455 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
          }
#line 1454 "rtree.m"
          mercury__rtree__succeeded = MR_TRUE;
#line 1454 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 1:
#line 1456 "rtree.m"
        {
#line 1456 "rtree.m"
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1456 "rtree.m"
          MR_Box mercury__rtree__K1_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__U0_13;
#line 1456 "rtree.m"
          MR_Word mercury__rtree__U1_14;

#line 1457 "rtree.m"
          {
#line 1457 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_9, mercury__rtree__T0_10, &mercury__rtree__U0_13);
          }
#line 1456 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1456 "rtree.m"
            {
#line 1458 "rtree.m"
              {
#line 1458 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_11, mercury__rtree__T1_12, &mercury__rtree__U1_14);
              }
#line 1456 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1456 "rtree.m"
                {
#line 1456 "rtree.m"
                  {
#line 1456 "rtree.m"
                    MR_Word base;
#line 1456 "rtree.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "rtree.m"
                    *mercury__rtree__HeadVar__3_3 = base;
#line 1456 "rtree.m"
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_9;
#line 1456 "rtree.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__U0_13));
#line 1456 "rtree.m"
                    MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_11;
#line 1456 "rtree.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__U1_14));
#line 1456 "rtree.m"
                  }
#line 1456 "rtree.m"
                  mercury__rtree__succeeded = MR_TRUE;
#line 1456 "rtree.m"
                }
#line 1456 "rtree.m"
            }
#line 1456 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 2:
#line 1459 "rtree.m"
        {
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K2_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T2_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U0_22;
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U1_23;
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U2_24;

#line 1460 "rtree.m"
          {
#line 1460 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_16, mercury__rtree__T0_17, &mercury__rtree__U0_22);
          }
#line 1459 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1459 "rtree.m"
            {
#line 1461 "rtree.m"
              {
#line 1461 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_18, mercury__rtree__T1_19, &mercury__rtree__U1_23);
              }
#line 1459 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1459 "rtree.m"
                {
#line 1462 "rtree.m"
                  {
#line 1462 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_20, mercury__rtree__T2_21, &mercury__rtree__U2_24);
                  }
#line 1459 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1459 "rtree.m"
                    {
#line 1459 "rtree.m"
                      {
#line 1459 "rtree.m"
                        MR_Word base;
#line 1459 "rtree.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "rtree.m"
                        *mercury__rtree__HeadVar__3_3 = base;
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_16;
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__U0_22));
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_18;
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__U1_23));
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_20;
#line 1459 "rtree.m"
                        MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__U2_24));
#line 1459 "rtree.m"
                      }
#line 1459 "rtree.m"
                      mercury__rtree__succeeded = MR_TRUE;
#line 1459 "rtree.m"
                    }
#line 1459 "rtree.m"
                }
#line 1459 "rtree.m"
            }
#line 1459 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 3:
#line 1464 "rtree.m"
        {
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K0_26 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K1_28 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K2_30 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K3_32 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U0_34;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U1_35;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U2_36;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U3_37;

#line 1465 "rtree.m"
          {
#line 1465 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_26, mercury__rtree__T0_27, &mercury__rtree__U0_34);
          }
#line 1464 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1464 "rtree.m"
            {
#line 1466 "rtree.m"
              {
#line 1466 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_28, mercury__rtree__T1_29, &mercury__rtree__U1_35);
              }
#line 1464 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1464 "rtree.m"
                {
#line 1467 "rtree.m"
                  {
#line 1467 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_30, mercury__rtree__T2_31, &mercury__rtree__U2_36);
                  }
#line 1464 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1464 "rtree.m"
                    {
#line 1468 "rtree.m"
                      {
#line 1468 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__map_values_key_2_4_p_1(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K3_32, mercury__rtree__T3_33, &mercury__rtree__U3_37);
                      }
#line 1464 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1464 "rtree.m"
                        {
#line 1464 "rtree.m"
                          {
#line 1464 "rtree.m"
                            MR_Word base;
#line 1464 "rtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "rtree.m"
                            *mercury__rtree__HeadVar__3_3 = base;
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_26;
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__U0_34));
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_28;
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__U1_35));
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_30;
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__U2_36));
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_32;
#line 1464 "rtree.m"
                            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__U3_37));
#line 1464 "rtree.m"
                          }
#line 1464 "rtree.m"
                          mercury__rtree__succeeded = MR_TRUE;
#line 1464 "rtree.m"
                        }
#line 1464 "rtree.m"
                    }
#line 1464 "rtree.m"
                }
#line 1464 "rtree.m"
            }
#line 1464 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
    }
#line 1454 "rtree.m"
    return mercury__rtree__succeeded;
#line 1454 "rtree.m"
  }
#line 1452 "rtree.m"
}

#line 1451 "rtree.m"
void MR_CALL 
mercury__rtree__map_values_2_3_p_0(
#line 1451 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_38,
#line 1451 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_39,
#line 1451 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_40,
#line 1451 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 1451 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 1451 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__3_3)
#line 1451 "rtree.m"
{
#line 1454 "rtree.m"
  {
#line 1454 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1454 "rtree.m"
#line 1454 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1454 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1454 "rtree.m"
      case (MR_Integer) 0:
#line 1454 "rtree.m"
        {
#line 1455 "rtree.m"
          {
#line 1455 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "map_values_2: unexpected leaf.");
#line 1455 "rtree.m"
            return;
          }
#line 1454 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 1:
#line 1456 "rtree.m"
        {
#line 1456 "rtree.m"
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__T0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1456 "rtree.m"
          MR_Box mercury__rtree__K1_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__T1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1456 "rtree.m"
          MR_Word mercury__rtree__U0_13;
#line 1456 "rtree.m"
          MR_Word mercury__rtree__U1_14;

#line 1457 "rtree.m"
          {
#line 1457 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_9, mercury__rtree__T0_10, &mercury__rtree__U0_13);
          }
#line 1458 "rtree.m"
          {
#line 1458 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_11, mercury__rtree__T1_12, &mercury__rtree__U1_14);
          }
#line 1456 "rtree.m"
          {
#line 1456 "rtree.m"
            MR_Word base;
#line 1456 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "rtree.m"
            *mercury__rtree__HeadVar__3_3 = base;
#line 1456 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K0_9;
#line 1456 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__U0_13));
#line 1456 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_11;
#line 1456 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__U1_14));
#line 1456 "rtree.m"
          }
#line 1456 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 2:
#line 1459 "rtree.m"
        {
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1459 "rtree.m"
          MR_Box mercury__rtree__K2_20 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__T2_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U0_22;
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U1_23;
#line 1459 "rtree.m"
          MR_Word mercury__rtree__U2_24;

#line 1460 "rtree.m"
          {
#line 1460 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_16, mercury__rtree__T0_17, &mercury__rtree__U0_22);
          }
#line 1461 "rtree.m"
          {
#line 1461 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_18, mercury__rtree__T1_19, &mercury__rtree__U1_23);
          }
#line 1462 "rtree.m"
          {
#line 1462 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_20, mercury__rtree__T2_21, &mercury__rtree__U2_24);
          }
#line 1459 "rtree.m"
          {
#line 1459 "rtree.m"
            MR_Word base;
#line 1459 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "rtree.m"
            *mercury__rtree__HeadVar__3_3 = base;
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_16;
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__U0_22));
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_18;
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__U1_23));
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_20;
#line 1459 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__U2_24));
#line 1459 "rtree.m"
          }
#line 1459 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
      case (MR_Integer) 3:
#line 1464 "rtree.m"
        {
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K0_26 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K1_28 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K2_30 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T2_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1464 "rtree.m"
          MR_Box mercury__rtree__K3_32 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__T3_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U0_34;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U1_35;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U2_36;
#line 1464 "rtree.m"
          MR_Word mercury__rtree__U3_37;

#line 1465 "rtree.m"
          {
#line 1465 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K0_26, mercury__rtree__T0_27, &mercury__rtree__U0_34);
          }
#line 1466 "rtree.m"
          {
#line 1466 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K1_28, mercury__rtree__T1_29, &mercury__rtree__U1_35);
          }
#line 1467 "rtree.m"
          {
#line 1467 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K2_30, mercury__rtree__T2_31, &mercury__rtree__U2_36);
          }
#line 1468 "rtree.m"
          {
#line 1468 "rtree.m"
            mercury__rtree__map_values_key_2_4_p_0(mercury__rtree__TypeInfo_for_K_38, mercury__rtree__TypeInfo_for_V_39, mercury__rtree__TypeInfo_for_W_40, mercury__rtree__P_1, mercury__rtree__K3_32, mercury__rtree__T3_33, &mercury__rtree__U3_37);
          }
#line 1464 "rtree.m"
          {
#line 1464 "rtree.m"
            MR_Word base;
#line 1464 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1464 "rtree.m"
            *mercury__rtree__HeadVar__3_3 = base;
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_26;
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__U0_34));
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_28;
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__U1_35));
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_30;
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__U2_36));
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_32;
#line 1464 "rtree.m"
            MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__U3_37));
#line 1464 "rtree.m"
          }
#line 1464 "rtree.m"
        }
#line 1454 "rtree.m"
        break;
#line 1454 "rtree.m"
    }
#line 1454 "rtree.m"
  }
#line 1451 "rtree.m"
}

#line 1424 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__fold_subtree_5_p_2(
#line 1424 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_33,
#line 1424 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_34,
#line 1424 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_35,
#line 1424 "rtree.m"
  MR_Word mercury__rtree__P_6,
#line 1424 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 1424 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 1424 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
#line 1424 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
#line 1424 "rtree.m"
{
#line 1431 "rtree.m"
  {
#line 1431 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1431 "rtree.m"
#line 1431 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
#line 1431 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "rtree.m"
      case (MR_Integer) 0:
#line 1429 "rtree.m"
        {
#line 1429 "rtree.m"
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1430 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

#line 1430 "rtree.m"
          {
#line 1430 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 1:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 2:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 3:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
    }
#line 1431 "rtree.m"
    return mercury__rtree__succeeded;
#line 1431 "rtree.m"
  }
#line 1424 "rtree.m"
}

#line 1423 "rtree.m"
void MR_CALL 
mercury__rtree__fold_subtree_5_p_1(
#line 1423 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_33,
#line 1423 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_34,
#line 1423 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_35,
#line 1423 "rtree.m"
  MR_Word mercury__rtree__P_6,
#line 1423 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 1423 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 1423 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
#line 1423 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
#line 1423 "rtree.m"
{
#line 1431 "rtree.m"
  {
#line 1431 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1431 "rtree.m"
#line 1431 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
#line 1431 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "rtree.m"
      case (MR_Integer) 0:
#line 1429 "rtree.m"
        {
#line 1429 "rtree.m"
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1430 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

#line 1430 "rtree.m"
          {
#line 1430 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 1:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 2:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 3:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
    }
#line 1431 "rtree.m"
  }
#line 1423 "rtree.m"
}

#line 1422 "rtree.m"
void MR_CALL 
mercury__rtree__fold_subtree_5_p_0(
#line 1422 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_33,
#line 1422 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_34,
#line 1422 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_35,
#line 1422 "rtree.m"
  MR_Word mercury__rtree__P_6,
#line 1422 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 1422 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 1422 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_29,
#line 1422 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_30)
#line 1422 "rtree.m"
{
#line 1431 "rtree.m"
  {
#line 1431 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1431 "rtree.m"
#line 1431 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T_8)) {
#line 1431 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1431 "rtree.m"
      case (MR_Integer) 0:
#line 1429 "rtree.m"
        {
#line 1429 "rtree.m"
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1430 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

#line 1430 "rtree.m"
          {
#line 1430 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 1:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 2:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
      case (MR_Integer) 3:
#line 1436 "rtree.m"
        {
#line 1436 "rtree.m"
          mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
        }
#line 1431 "rtree.m"
        break;
#line 1431 "rtree.m"
    }
#line 1431 "rtree.m"
  }
#line 1422 "rtree.m"
}

#line 1404 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__fold_2_4_p_2(
#line 1404 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_49,
#line 1404 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_50,
#line 1404 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_51,
#line 1404 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 1404 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 1404 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 1404 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 1404 "rtree.m"
{
#line 1406 "rtree.m"
  {
#line 1406 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1406 "rtree.m"
#line 1406 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1406 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "rtree.m"
      case (MR_Integer) 0:
#line 1406 "rtree.m"
        {
#line 1407 "rtree.m"
          {
#line 1407 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
          }
#line 1406 "rtree.m"
          mercury__rtree__succeeded = MR_TRUE;
#line 1406 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 1:
#line 1408 "rtree.m"
        {
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

#line 1409 "rtree.m"
          {
#line 1409 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
#line 1408 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1410 "rtree.m"
            {
#line 1410 "rtree.m"
              mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
            }
#line 1408 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 2:
#line 1411 "rtree.m"
        {
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

#line 1412 "rtree.m"
          {
#line 1412 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
#line 1411 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1411 "rtree.m"
            {
#line 1413 "rtree.m"
              {
#line 1413 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
              }
#line 1411 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1414 "rtree.m"
                {
#line 1414 "rtree.m"
                  mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
                }
#line 1411 "rtree.m"
            }
#line 1411 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 3:
#line 1415 "rtree.m"
        {
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

#line 1416 "rtree.m"
          {
#line 1416 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_34, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
          }
#line 1415 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1415 "rtree.m"
            {
#line 1417 "rtree.m"
              {
#line 1417 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
              }
#line 1415 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1415 "rtree.m"
                {
#line 1418 "rtree.m"
                  {
#line 1418 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
                  }
#line 1415 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1419 "rtree.m"
                    {
#line 1419 "rtree.m"
                      mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
                    }
#line 1415 "rtree.m"
                }
#line 1415 "rtree.m"
            }
#line 1415 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
    }
#line 1406 "rtree.m"
    return mercury__rtree__succeeded;
#line 1406 "rtree.m"
  }
#line 1404 "rtree.m"
}

#line 1403 "rtree.m"
void MR_CALL 
mercury__rtree__fold_2_4_p_1(
#line 1403 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_49,
#line 1403 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_50,
#line 1403 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_51,
#line 1403 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 1403 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 1403 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 1403 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 1403 "rtree.m"
{
#line 1406 "rtree.m"
  {
#line 1406 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1406 "rtree.m"
#line 1406 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1406 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "rtree.m"
      case (MR_Integer) 0:
#line 1406 "rtree.m"
        {
#line 1407 "rtree.m"
          {
#line 1407 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
#line 1407 "rtree.m"
            return;
          }
#line 1406 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 1:
#line 1408 "rtree.m"
        {
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

#line 1409 "rtree.m"
          {
#line 1409 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
#line 1410 "rtree.m"
          {
#line 1410 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1408 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 2:
#line 1411 "rtree.m"
        {
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

#line 1412 "rtree.m"
          {
#line 1412 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
#line 1413 "rtree.m"
          {
#line 1413 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
          }
#line 1414 "rtree.m"
          {
#line 1414 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1411 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 3:
#line 1415 "rtree.m"
        {
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

#line 1416 "rtree.m"
          {
#line 1416 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_34, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
          }
#line 1417 "rtree.m"
          {
#line 1417 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
          }
#line 1418 "rtree.m"
          {
#line 1418 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
          }
#line 1419 "rtree.m"
          {
#line 1419 "rtree.m"
            mercury__rtree__fold_subtree_5_p_1(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1415 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
    }
#line 1406 "rtree.m"
  }
#line 1403 "rtree.m"
}

#line 1402 "rtree.m"
void MR_CALL 
mercury__rtree__fold_2_4_p_0(
#line 1402 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_49,
#line 1402 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_50,
#line 1402 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_51,
#line 1402 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 1402 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 1402 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 1402 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 1402 "rtree.m"
{
#line 1406 "rtree.m"
  {
#line 1406 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1406 "rtree.m"
#line 1406 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1406 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1406 "rtree.m"
      case (MR_Integer) 0:
#line 1406 "rtree.m"
        {
#line 1407 "rtree.m"
          {
#line 1407 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "fold: leaf unexpected");
#line 1407 "rtree.m"
            return;
          }
#line 1406 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 1:
#line 1408 "rtree.m"
        {
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K0_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__K1_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1408 "rtree.m"
          MR_Word mercury__rtree__T1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1408 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_18_18;

#line 1409 "rtree.m"
          {
#line 1409 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_11, mercury__rtree__T0_12, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_18_18);
          }
#line 1410 "rtree.m"
          {
#line 1410 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1408 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 2:
#line 1411 "rtree.m"
        {
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K1_23 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T1_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__K2_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1411 "rtree.m"
          MR_Word mercury__rtree__T2_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_30_30;
#line 1411 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_31_31;

#line 1412 "rtree.m"
          {
#line 1412 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_21, mercury__rtree__T0_22, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_30_30);
          }
#line 1413 "rtree.m"
          {
#line 1413 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_23, mercury__rtree__T1_24, mercury__rtree__STATE_VARIABLE_Acc_30_30, &mercury__rtree__STATE_VARIABLE_Acc_31_31);
          }
#line 1414 "rtree.m"
          {
#line 1414 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1411 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
      case (MR_Integer) 3:
#line 1415 "rtree.m"
        {
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K0_34 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K1_36 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 2));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T1_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 3)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K2_38 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 4));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T2_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 5)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__K3_40 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 6));
#line 1415 "rtree.m"
          MR_Word mercury__rtree__T3_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__2_2, (MR_Integer) 7)));
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_45_45;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_46_46;
#line 1415 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_47_47;

#line 1416 "rtree.m"
          {
#line 1416 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K0_34, mercury__rtree__T0_35, mercury__rtree__STATE_VARIABLE_Acc_0_3, &mercury__rtree__STATE_VARIABLE_Acc_45_45);
          }
#line 1417 "rtree.m"
          {
#line 1417 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_36, mercury__rtree__T1_37, mercury__rtree__STATE_VARIABLE_Acc_45_45, &mercury__rtree__STATE_VARIABLE_Acc_46_46);
          }
#line 1418 "rtree.m"
          {
#line 1418 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_38, mercury__rtree__T2_39, mercury__rtree__STATE_VARIABLE_Acc_46_46, &mercury__rtree__STATE_VARIABLE_Acc_47_47);
          }
#line 1419 "rtree.m"
          {
#line 1419 "rtree.m"
            mercury__rtree__fold_subtree_5_p_0(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1415 "rtree.m"
        }
#line 1406 "rtree.m"
        break;
#line 1406 "rtree.m"
    }
#line 1406 "rtree.m"
  }
#line 1402 "rtree.m"
}

#line 1376 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_1(
#line 1376 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_17,
#line 1376 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_18,
#line 1376 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_19,
#line 1376 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 1376 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 1376 "rtree.m"
  MR_Word mercury__rtree__KTest_9,
#line 1376 "rtree.m"
  MR_Word mercury__rtree__VPred_10,
#line 1376 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_13,
#line 1376 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_14)
#line 1376 "rtree.m"
{
#line 1386 "rtree.m"
  {
#line 1386 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1380 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_9, (MR_Integer) 1)));

#line 1380 "rtree.m"
    {
#line 1380 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_9), mercury__rtree__K_7);
    }
#line 1386 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1383 "rtree.m"
      {
#line 1383 "rtree.m"
        MR_Box mercury__rtree__V_12;

#line 1381 "rtree.m"
        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0)));
#line 1381 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1381 "rtree.m"
          {
#line 1381 "rtree.m"
            mercury__rtree__V_12 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1382 "rtree.m"
            {
#line 1382 "rtree.m"
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_10, (MR_Integer) 1)));

#line 1382 "rtree.m"
              {
#line 1382 "rtree.m"
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_10), mercury__rtree__K_7, mercury__rtree__V_12, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
              }
#line 1382 "rtree.m"
            }
#line 1381 "rtree.m"
          }
#line 1381 "rtree.m"
        else
#line 1384 "rtree.m"
          {
#line 1384 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__TypeInfo_for_A_19, mercury__rtree__T_8, mercury__rtree__KTest_9, mercury__rtree__VPred_10, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
          }
#line 1383 "rtree.m"
      }
#line 1386 "rtree.m"
    else
#line 1386 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_14 = mercury__rtree__STATE_VARIABLE_Acc_0_13;
#line 1386 "rtree.m"
  }
#line 1376 "rtree.m"
}

#line 1374 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_subtree_6_p_0(
#line 1374 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_17,
#line 1374 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_18,
#line 1374 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_19,
#line 1374 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 1374 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 1374 "rtree.m"
  MR_Word mercury__rtree__KTest_9,
#line 1374 "rtree.m"
  MR_Word mercury__rtree__VPred_10,
#line 1374 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_13,
#line 1374 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_14)
#line 1374 "rtree.m"
{
#line 1386 "rtree.m"
  {
#line 1386 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1380 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_9, (MR_Integer) 1)));

#line 1380 "rtree.m"
    {
#line 1380 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_9), mercury__rtree__K_7);
    }
#line 1386 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1383 "rtree.m"
      {
#line 1383 "rtree.m"
        MR_Box mercury__rtree__V_12;

#line 1381 "rtree.m"
        mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0)));
#line 1381 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1381 "rtree.m"
          {
#line 1381 "rtree.m"
            mercury__rtree__V_12 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1382 "rtree.m"
            {
#line 1382 "rtree.m"
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_10, (MR_Integer) 1)));

#line 1382 "rtree.m"
              {
#line 1382 "rtree.m"
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_10), mercury__rtree__K_7, mercury__rtree__V_12, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
              }
#line 1382 "rtree.m"
            }
#line 1381 "rtree.m"
          }
#line 1381 "rtree.m"
        else
#line 1384 "rtree.m"
          {
#line 1384 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__TypeInfo_for_A_19, mercury__rtree__T_8, mercury__rtree__KTest_9, mercury__rtree__VPred_10, mercury__rtree__STATE_VARIABLE_Acc_0_13, mercury__rtree__STATE_VARIABLE_Acc_14);
          }
#line 1383 "rtree.m"
      }
#line 1386 "rtree.m"
    else
#line 1386 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_14 = mercury__rtree__STATE_VARIABLE_Acc_0_13;
#line 1386 "rtree.m"
  }
#line 1374 "rtree.m"
}

#line 1351 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_1(
#line 1351 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_57,
#line 1351 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_58,
#line 1351 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_59,
#line 1351 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1351 "rtree.m"
  MR_Word mercury__rtree__KTest_2,
#line 1351 "rtree.m"
  MR_Word mercury__rtree__VPred_3,
#line 1351 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
#line 1351 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
#line 1351 "rtree.m"
{
#line 1354 "rtree.m"
  {
#line 1354 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1354 "rtree.m"
#line 1354 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 1354 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1354 "rtree.m"
      case (MR_Integer) 0:
#line 1354 "rtree.m"
        {
#line 1355 "rtree.m"
          {
#line 1355 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
#line 1355 "rtree.m"
            return;
          }
#line 1354 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 1:
#line 1356 "rtree.m"
        {
#line 1356 "rtree.m"
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1356 "rtree.m"
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "rtree.m"
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1356 "rtree.m"
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1356 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_22_22;

#line 1358 "rtree.m"
          {
#line 1358 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_16, mercury__rtree__T0_17, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_22_22);
          }
#line 1359 "rtree.m"
          {
#line 1359 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_18, mercury__rtree__T1_19, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_22_22, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1356 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 2:
#line 1360 "rtree.m"
        {
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_36_36;
#line 1360 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_37_37;

#line 1362 "rtree.m"
          {
#line 1362 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_36_36);
          }
#line 1363 "rtree.m"
          {
#line 1363 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_36_36, &mercury__rtree__STATE_VARIABLE_Acc_37_37);
          }
#line 1364 "rtree.m"
          {
#line 1364 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_37_37, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1360 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 3:
#line 1365 "rtree.m"
        {
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_53_53;
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_54_54;
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_55_55;

#line 1367 "rtree.m"
          {
#line 1367 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
          }
#line 1368 "rtree.m"
          {
#line 1368 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
          }
#line 1369 "rtree.m"
          {
#line 1369 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
          }
#line 1370 "rtree.m"
          {
#line 1370 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_1(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_55_55, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1365 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
    }
#line 1354 "rtree.m"
  }
#line 1351 "rtree.m"
}

#line 1349 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_2_5_p_0(
#line 1349 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_57,
#line 1349 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_58,
#line 1349 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_59,
#line 1349 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1349 "rtree.m"
  MR_Word mercury__rtree__KTest_2,
#line 1349 "rtree.m"
  MR_Word mercury__rtree__VPred_3,
#line 1349 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
#line 1349 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
#line 1349 "rtree.m"
{
#line 1354 "rtree.m"
  {
#line 1354 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1354 "rtree.m"
#line 1354 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 1354 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1354 "rtree.m"
      case (MR_Integer) 0:
#line 1354 "rtree.m"
        {
#line 1355 "rtree.m"
          {
#line 1355 "rtree.m"
            mercury__require__error_1_p_0((MR_String) "search_general_fold_2: unexpected leaf node");
#line 1355 "rtree.m"
            return;
          }
#line 1354 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 1:
#line 1356 "rtree.m"
        {
#line 1356 "rtree.m"
          MR_Box mercury__rtree__K0_16 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1356 "rtree.m"
          MR_Word mercury__rtree__T0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "rtree.m"
          MR_Box mercury__rtree__K1_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1356 "rtree.m"
          MR_Word mercury__rtree__T1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1356 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_22_22;

#line 1358 "rtree.m"
          {
#line 1358 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_16, mercury__rtree__T0_17, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_22_22);
          }
#line 1359 "rtree.m"
          {
#line 1359 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_18, mercury__rtree__T1_19, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_22_22, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1356 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 2:
#line 1360 "rtree.m"
        {
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1360 "rtree.m"
          MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1360 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_36_36;
#line 1360 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_37_37;

#line 1362 "rtree.m"
          {
#line 1362 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_36_36);
          }
#line 1363 "rtree.m"
          {
#line 1363 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_36_36, &mercury__rtree__STATE_VARIABLE_Acc_37_37);
          }
#line 1364 "rtree.m"
          {
#line 1364 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_37_37, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1360 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
      case (MR_Integer) 3:
#line 1365 "rtree.m"
        {
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 1365 "rtree.m"
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_53_53;
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_54_54;
#line 1365 "rtree.m"
          MR_Box mercury__rtree__STATE_VARIABLE_Acc_55_55;

#line 1367 "rtree.m"
          {
#line 1367 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_0_4, &mercury__rtree__STATE_VARIABLE_Acc_53_53);
          }
#line 1368 "rtree.m"
          {
#line 1368 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_53_53, &mercury__rtree__STATE_VARIABLE_Acc_54_54);
          }
#line 1369 "rtree.m"
          {
#line 1369 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_54_54, &mercury__rtree__STATE_VARIABLE_Acc_55_55);
          }
#line 1370 "rtree.m"
          {
#line 1370 "rtree.m"
            mercury__rtree__search_general_fold_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_57, mercury__rtree__TypeInfo_for_V_58, mercury__rtree__TypeInfo_for_A_59, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__KTest_2, mercury__rtree__VPred_3, mercury__rtree__STATE_VARIABLE_Acc_55_55, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1365 "rtree.m"
        }
#line 1354 "rtree.m"
        break;
#line 1354 "rtree.m"
    }
#line 1354 "rtree.m"
  }
#line 1349 "rtree.m"
}

#line 1313 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_better_solution_three_11_p_0(
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__VM_12,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__EM_13,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__E1_14,
#line 1313 "rtree.m"
  MR_Box mercury__rtree__E2_15,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T1_17,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__P_19,
#line 1313 "rtree.m"
  MR_Word mercury__rtree__C_20,
#line 1313 "rtree.m"
  MR_Box * mercury__rtree__V_21,
#line 1313 "rtree.m"
  MR_Box * mercury__rtree__E_22)
#line 1313 "rtree.m"
{
#line 1325 "rtree.m"
  {
#line 1325 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1325 "rtree.m"
    MR_Box mercury__rtree__V0_23;
#line 1325 "rtree.m"
    MR_Box mercury__rtree__F0_24;

#line 1317 "rtree.m"
    {
#line 1317 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T0_16, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__EM_13, &mercury__rtree__V0_23, &mercury__rtree__F0_24);
    }
#line 1325 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1321 "rtree.m"
      {
#line 1318 "rtree.m"
        MR_Word mercury__rtree__V_29_29;

#line 1318 "rtree.m"
        {
#line 1318 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_29_29, mercury__rtree__EM_13, mercury__rtree__F0_24);
        }
#line 1318 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_29_29);
#line 1321 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1255 "rtree.m"
          {
#line 1255 "rtree.m"
            MR_Word mercury__rtree__R_40;
#line 1494 "rtree.m"
            MR_Word mercury__rtree__V_47_47;

#line 1494 "rtree.m"
            {
#line 1494 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_47_47, mercury__rtree__EM_13, mercury__rtree__E1_14);
            }
#line 1494 "rtree.m"
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_47_47);
#line 1493 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1497 "rtree.m"
              {
#line 1495 "rtree.m"
                MR_Word mercury__rtree__V_48_48;

#line 1495 "rtree.m"
                {
#line 1495 "rtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_48_48, mercury__rtree__EM_13, mercury__rtree__E2_15);
                }
#line 1495 "rtree.m"
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_48_48);
#line 1497 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1496 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 0;
#line 1497 "rtree.m"
                else
#line 1498 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 2;
#line 1497 "rtree.m"
              }
#line 1493 "rtree.m"
            else
#line 1503 "rtree.m"
              {
#line 1501 "rtree.m"
                MR_Word mercury__rtree__V_49_49;

#line 1501 "rtree.m"
                {
#line 1501 "rtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_49_49, mercury__rtree__E1_14, mercury__rtree__E2_15);
                }
#line 1501 "rtree.m"
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_49_49);
#line 1503 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1502 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 1;
#line 1503 "rtree.m"
                else
#line 1504 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 2;
#line 1503 "rtree.m"
              }
#line 1261 "rtree.m"
#line 1261 "rtree.m"
            switch (mercury__rtree__R_40) {
#line 1261 "rtree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "rtree.m"
              case (MR_Integer) 0:
#line 1258 "rtree.m"
                {
#line 1259 "rtree.m"
                  *mercury__rtree__V_21 = mercury__rtree__VM_12;
#line 1260 "rtree.m"
                  *mercury__rtree__E_22 = mercury__rtree__EM_13;
#line 1258 "rtree.m"
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
              case (MR_Integer) 1:
#line 1263 "rtree.m"
                {
#line 1263 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
              case (MR_Integer) 2:
#line 1266 "rtree.m"
                {
#line 1266 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__T2_18, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
            }
#line 1255 "rtree.m"
          }
#line 1321 "rtree.m"
        else
#line 1255 "rtree.m"
          {
#line 1255 "rtree.m"
            MR_Word mercury__rtree__R_60;
#line 1494 "rtree.m"
            MR_Word mercury__rtree__V_67_67;

#line 1494 "rtree.m"
            {
#line 1494 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_67_67, mercury__rtree__F0_24, mercury__rtree__E1_14);
            }
#line 1494 "rtree.m"
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_67_67);
#line 1493 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1497 "rtree.m"
              {
#line 1495 "rtree.m"
                MR_Word mercury__rtree__V_68_68;

#line 1495 "rtree.m"
                {
#line 1495 "rtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_68_68, mercury__rtree__F0_24, mercury__rtree__E2_15);
                }
#line 1495 "rtree.m"
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_68_68);
#line 1497 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1496 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 0;
#line 1497 "rtree.m"
                else
#line 1498 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 2;
#line 1497 "rtree.m"
              }
#line 1493 "rtree.m"
            else
#line 1503 "rtree.m"
              {
#line 1501 "rtree.m"
                MR_Word mercury__rtree__V_69_69;

#line 1501 "rtree.m"
                {
#line 1501 "rtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_69_69, mercury__rtree__E1_14, mercury__rtree__E2_15);
                }
#line 1501 "rtree.m"
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_69_69);
#line 1503 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1502 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 1;
#line 1503 "rtree.m"
                else
#line 1504 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 2;
#line 1503 "rtree.m"
              }
#line 1261 "rtree.m"
#line 1261 "rtree.m"
            switch (mercury__rtree__R_60) {
#line 1261 "rtree.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "rtree.m"
              case (MR_Integer) 0:
#line 1258 "rtree.m"
                {
#line 1259 "rtree.m"
                  *mercury__rtree__V_21 = mercury__rtree__V0_23;
#line 1260 "rtree.m"
                  *mercury__rtree__E_22 = mercury__rtree__F0_24;
#line 1258 "rtree.m"
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
              case (MR_Integer) 1:
#line 1263 "rtree.m"
                {
#line 1263 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_23, mercury__rtree__F0_24, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
              case (MR_Integer) 2:
#line 1266 "rtree.m"
                {
#line 1266 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_23, mercury__rtree__F0_24, mercury__rtree__E1_14, mercury__rtree__T2_18, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
                }
#line 1261 "rtree.m"
                break;
#line 1261 "rtree.m"
            }
#line 1255 "rtree.m"
          }
#line 1321 "rtree.m"
      }
#line 1325 "rtree.m"
    else
#line 1326 "rtree.m"
      {
#line 1326 "rtree.m"
        mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
      }
#line 1325 "rtree.m"
  }
#line 1313 "rtree.m"
}

#line 1287 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_three_12_p_0(
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__VM_13,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__EM_14,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E0_15,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E1_16,
#line 1287 "rtree.m"
  MR_Box mercury__rtree__E2_17,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T0_18,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T1_19,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__P_21,
#line 1287 "rtree.m"
  MR_Word mercury__rtree__C_22,
#line 1287 "rtree.m"
  MR_Box * mercury__rtree__V_23,
#line 1287 "rtree.m"
  MR_Box * mercury__rtree__E_24)
#line 1287 "rtree.m"
{
#line 1291 "rtree.m"
  {
#line 1291 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1291 "rtree.m"
    MR_Word mercury__rtree__R_25;
#line 1291 "rtree.m"
    MR_Word mercury__rtree__Min0_34;
#line 1291 "rtree.m"
    MR_Box mercury__rtree__MinItem0_35;
#line 1291 "rtree.m"
    MR_Word mercury__rtree__Min1_36;
#line 1291 "rtree.m"
    MR_Box mercury__rtree__MinItem_37;
#line 1515 "rtree.m"
    MR_Word mercury__rtree__V_41_41;
#line 1522 "rtree.m"
    MR_Word mercury__rtree__V_42_42;
#line 1529 "rtree.m"
    MR_Word mercury__rtree__V_43_43;

#line 1515 "rtree.m"
    {
#line 1515 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_41_41, mercury__rtree__EM_14, mercury__rtree__E0_15);
    }
#line 1515 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_41_41);
#line 1518 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1516 "rtree.m"
      {
#line 1516 "rtree.m"
        mercury__rtree__Min0_34 = (MR_Integer) 0;
#line 1517 "rtree.m"
        mercury__rtree__MinItem0_35 = mercury__rtree__EM_14;
#line 1516 "rtree.m"
      }
#line 1518 "rtree.m"
    else
#line 1519 "rtree.m"
      {
#line 1519 "rtree.m"
        mercury__rtree__Min0_34 = (MR_Integer) 1;
#line 1520 "rtree.m"
        mercury__rtree__MinItem0_35 = mercury__rtree__E0_15;
#line 1519 "rtree.m"
      }
#line 1522 "rtree.m"
    {
#line 1522 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_42_42, mercury__rtree__MinItem0_35, mercury__rtree__E1_16);
    }
#line 1522 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_42_42);
#line 1525 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1523 "rtree.m"
      {
#line 1523 "rtree.m"
        mercury__rtree__Min1_36 = mercury__rtree__Min0_34;
#line 1524 "rtree.m"
        mercury__rtree__MinItem_37 = mercury__rtree__MinItem0_35;
#line 1523 "rtree.m"
      }
#line 1525 "rtree.m"
    else
#line 1526 "rtree.m"
      {
#line 1526 "rtree.m"
        mercury__rtree__Min1_36 = (MR_Integer) 2;
#line 1527 "rtree.m"
        mercury__rtree__MinItem_37 = mercury__rtree__E1_16;
#line 1526 "rtree.m"
      }
#line 1529 "rtree.m"
    {
#line 1529 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_27, &mercury__rtree__V_43_43, mercury__rtree__MinItem_37, mercury__rtree__E2_17);
    }
#line 1529 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_43_43);
#line 1531 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1530 "rtree.m"
      mercury__rtree__R_25 = mercury__rtree__Min1_36;
#line 1531 "rtree.m"
    else
#line 1532 "rtree.m"
      mercury__rtree__R_25 = (MR_Integer) 3;
#line 1297 "rtree.m"
#line 1297 "rtree.m"
    switch (mercury__rtree__R_25) {
#line 1297 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1297 "rtree.m"
      case (MR_Integer) 0:
#line 1294 "rtree.m"
        {
#line 1295 "rtree.m"
          *mercury__rtree__V_23 = mercury__rtree__VM_13;
#line 1296 "rtree.m"
          *mercury__rtree__E_24 = mercury__rtree__EM_14;
#line 1294 "rtree.m"
        }
#line 1297 "rtree.m"
        break;
#line 1297 "rtree.m"
      case (MR_Integer) 3:
#line 1307 "rtree.m"
        {
#line 1307 "rtree.m"
          mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E1_16, mercury__rtree__T2_20, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
        }
#line 1297 "rtree.m"
        break;
#line 1297 "rtree.m"
      case (MR_Integer) 1:
#line 1299 "rtree.m"
        {
#line 1299 "rtree.m"
          mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E1_16, mercury__rtree__E2_17, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
        }
#line 1297 "rtree.m"
        break;
#line 1297 "rtree.m"
      case (MR_Integer) 2:
#line 1303 "rtree.m"
        {
#line 1303 "rtree.m"
          mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
        }
#line 1297 "rtree.m"
        break;
#line 1297 "rtree.m"
    }
#line 1291 "rtree.m"
  }
#line 1287 "rtree.m"
}

#line 1271 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_better_solution_two_9_p_0(
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__VM_10,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__EM_11,
#line 1271 "rtree.m"
  MR_Box mercury__rtree__E1_12,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__P_15,
#line 1271 "rtree.m"
  MR_Word mercury__rtree__C_16,
#line 1271 "rtree.m"
  MR_Box * mercury__rtree__V_17,
#line 1271 "rtree.m"
  MR_Box * mercury__rtree__E_18)
#line 1271 "rtree.m"
{
#line 1281 "rtree.m"
  {
#line 1281 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1281 "rtree.m"
    MR_Box mercury__rtree__V0_19;
#line 1281 "rtree.m"
    MR_Box mercury__rtree__F0_20;

#line 1275 "rtree.m"
    {
#line 1275 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T0_13, mercury__rtree__P_15, mercury__rtree__C_16, mercury__rtree__EM_11, &mercury__rtree__V0_19, &mercury__rtree__F0_20);
    }
#line 1281 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1278 "rtree.m"
      {
#line 1276 "rtree.m"
        MR_Word mercury__rtree__V_25_25;

#line 1276 "rtree.m"
        {
#line 1276 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_25_25, mercury__rtree__EM_11, mercury__rtree__F0_20);
        }
#line 1276 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_25_25);
#line 1278 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1237 "rtree.m"
          {
#line 1234 "rtree.m"
            MR_Word mercury__rtree__V_38_38;

#line 1234 "rtree.m"
            {
#line 1234 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_38_38, mercury__rtree__EM_11, mercury__rtree__E1_12);
            }
#line 1234 "rtree.m"
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_38_38);
#line 1237 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1235 "rtree.m"
              {
#line 1235 "rtree.m"
                *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1236 "rtree.m"
                *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1235 "rtree.m"
              }
#line 1237 "rtree.m"
            else
#line 1245 "rtree.m"
              {
#line 1245 "rtree.m"
                MR_Box mercury__rtree__V0_34;
#line 1245 "rtree.m"
                MR_Box mercury__rtree__F0_35;

#line 1237 "rtree.m"
                {
#line 1237 "rtree.m"
                  mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T1_14, mercury__rtree__P_15, mercury__rtree__C_16, mercury__rtree__EM_11, &mercury__rtree__V0_34, &mercury__rtree__F0_35);
                }
#line 1245 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1241 "rtree.m"
                  {
#line 1238 "rtree.m"
                    MR_Word mercury__rtree__V_39_39;

#line 1238 "rtree.m"
                    {
#line 1238 "rtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_39_39, mercury__rtree__EM_11, mercury__rtree__F0_35);
                    }
#line 1238 "rtree.m"
                    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_39_39);
#line 1241 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 1239 "rtree.m"
                      {
#line 1239 "rtree.m"
                        *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1240 "rtree.m"
                        *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1239 "rtree.m"
                      }
#line 1241 "rtree.m"
                    else
#line 1242 "rtree.m"
                      {
#line 1242 "rtree.m"
                        *mercury__rtree__V_17 = mercury__rtree__V0_34;
#line 1243 "rtree.m"
                        *mercury__rtree__E_18 = mercury__rtree__F0_35;
#line 1242 "rtree.m"
                      }
#line 1241 "rtree.m"
                  }
#line 1245 "rtree.m"
                else
#line 1246 "rtree.m"
                  {
#line 1246 "rtree.m"
                    *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1247 "rtree.m"
                    *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1246 "rtree.m"
                  }
#line 1245 "rtree.m"
              }
#line 1237 "rtree.m"
          }
#line 1278 "rtree.m"
        else
#line 1237 "rtree.m"
          {
#line 1234 "rtree.m"
            MR_Word mercury__rtree__V_52_52;

#line 1234 "rtree.m"
            {
#line 1234 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_52_52, mercury__rtree__F0_20, mercury__rtree__E1_12);
            }
#line 1234 "rtree.m"
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_52_52);
#line 1237 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1235 "rtree.m"
              {
#line 1235 "rtree.m"
                *mercury__rtree__V_17 = mercury__rtree__V0_19;
#line 1236 "rtree.m"
                *mercury__rtree__E_18 = mercury__rtree__F0_20;
#line 1235 "rtree.m"
              }
#line 1237 "rtree.m"
            else
#line 1245 "rtree.m"
              {
#line 1245 "rtree.m"
                MR_Box mercury__rtree__V0_48;
#line 1245 "rtree.m"
                MR_Box mercury__rtree__F0_49;

#line 1237 "rtree.m"
                {
#line 1237 "rtree.m"
                  mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T1_14, mercury__rtree__P_15, mercury__rtree__C_16, mercury__rtree__F0_20, &mercury__rtree__V0_48, &mercury__rtree__F0_49);
                }
#line 1245 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1241 "rtree.m"
                  {
#line 1238 "rtree.m"
                    MR_Word mercury__rtree__V_53_53;

#line 1238 "rtree.m"
                    {
#line 1238 "rtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_53_53, mercury__rtree__F0_20, mercury__rtree__F0_49);
                    }
#line 1238 "rtree.m"
                    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_53_53);
#line 1241 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 1239 "rtree.m"
                      {
#line 1239 "rtree.m"
                        *mercury__rtree__V_17 = mercury__rtree__V0_19;
#line 1240 "rtree.m"
                        *mercury__rtree__E_18 = mercury__rtree__F0_20;
#line 1239 "rtree.m"
                      }
#line 1241 "rtree.m"
                    else
#line 1242 "rtree.m"
                      {
#line 1242 "rtree.m"
                        *mercury__rtree__V_17 = mercury__rtree__V0_48;
#line 1243 "rtree.m"
                        *mercury__rtree__E_18 = mercury__rtree__F0_49;
#line 1242 "rtree.m"
                      }
#line 1241 "rtree.m"
                  }
#line 1245 "rtree.m"
                else
#line 1246 "rtree.m"
                  {
#line 1246 "rtree.m"
                    *mercury__rtree__V_17 = mercury__rtree__V0_19;
#line 1247 "rtree.m"
                    *mercury__rtree__E_18 = mercury__rtree__F0_20;
#line 1246 "rtree.m"
                  }
#line 1245 "rtree.m"
              }
#line 1237 "rtree.m"
          }
#line 1278 "rtree.m"
      }
#line 1281 "rtree.m"
    else
#line 1237 "rtree.m"
      {
#line 1234 "rtree.m"
        MR_Word mercury__rtree__V_66_66;

#line 1234 "rtree.m"
        {
#line 1234 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_66_66, mercury__rtree__EM_11, mercury__rtree__E1_12);
        }
#line 1234 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_66_66);
#line 1237 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1235 "rtree.m"
          {
#line 1235 "rtree.m"
            *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1236 "rtree.m"
            *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1235 "rtree.m"
          }
#line 1237 "rtree.m"
        else
#line 1245 "rtree.m"
          {
#line 1245 "rtree.m"
            MR_Box mercury__rtree__V0_62;
#line 1245 "rtree.m"
            MR_Box mercury__rtree__F0_63;

#line 1237 "rtree.m"
            {
#line 1237 "rtree.m"
              mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T1_14, mercury__rtree__P_15, mercury__rtree__C_16, mercury__rtree__EM_11, &mercury__rtree__V0_62, &mercury__rtree__F0_63);
            }
#line 1245 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1241 "rtree.m"
              {
#line 1238 "rtree.m"
                MR_Word mercury__rtree__V_67_67;

#line 1238 "rtree.m"
                {
#line 1238 "rtree.m"
                  mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_67_67, mercury__rtree__EM_11, mercury__rtree__F0_63);
                }
#line 1238 "rtree.m"
                mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_67_67);
#line 1241 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1239 "rtree.m"
                  {
#line 1239 "rtree.m"
                    *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1240 "rtree.m"
                    *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1239 "rtree.m"
                  }
#line 1241 "rtree.m"
                else
#line 1242 "rtree.m"
                  {
#line 1242 "rtree.m"
                    *mercury__rtree__V_17 = mercury__rtree__V0_62;
#line 1243 "rtree.m"
                    *mercury__rtree__E_18 = mercury__rtree__F0_63;
#line 1242 "rtree.m"
                  }
#line 1241 "rtree.m"
              }
#line 1245 "rtree.m"
            else
#line 1246 "rtree.m"
              {
#line 1246 "rtree.m"
                *mercury__rtree__V_17 = mercury__rtree__VM_10;
#line 1247 "rtree.m"
                *mercury__rtree__E_18 = mercury__rtree__EM_11;
#line 1246 "rtree.m"
              }
#line 1245 "rtree.m"
          }
#line 1237 "rtree.m"
      }
#line 1281 "rtree.m"
  }
#line 1271 "rtree.m"
}

#line 1252 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_two_10_p_0(
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__VM_11,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__EM_12,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__E0_13,
#line 1252 "rtree.m"
  MR_Box mercury__rtree__E1_14,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__T0_15,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__P_17,
#line 1252 "rtree.m"
  MR_Word mercury__rtree__C_18,
#line 1252 "rtree.m"
  MR_Box * mercury__rtree__V_19,
#line 1252 "rtree.m"
  MR_Box * mercury__rtree__E_20)
#line 1252 "rtree.m"
{
#line 1255 "rtree.m"
  {
#line 1255 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1255 "rtree.m"
    MR_Word mercury__rtree__R_21;
#line 1494 "rtree.m"
    MR_Word mercury__rtree__V_31_31;

#line 1494 "rtree.m"
    {
#line 1494 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_31_31, mercury__rtree__EM_12, mercury__rtree__E0_13);
    }
#line 1494 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_31_31);
#line 1493 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1497 "rtree.m"
      {
#line 1495 "rtree.m"
        MR_Word mercury__rtree__V_32_32;

#line 1495 "rtree.m"
        {
#line 1495 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_32_32, mercury__rtree__EM_12, mercury__rtree__E1_14);
        }
#line 1495 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_32_32);
#line 1497 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1496 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 0;
#line 1497 "rtree.m"
        else
#line 1498 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 2;
#line 1497 "rtree.m"
      }
#line 1493 "rtree.m"
    else
#line 1503 "rtree.m"
      {
#line 1501 "rtree.m"
        MR_Word mercury__rtree__V_33_33;

#line 1501 "rtree.m"
        {
#line 1501 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_33_33, mercury__rtree__E0_13, mercury__rtree__E1_14);
        }
#line 1501 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_33_33);
#line 1503 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1502 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 1;
#line 1503 "rtree.m"
        else
#line 1504 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 2;
#line 1503 "rtree.m"
      }
#line 1261 "rtree.m"
#line 1261 "rtree.m"
    switch (mercury__rtree__R_21) {
#line 1261 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "rtree.m"
      case (MR_Integer) 0:
#line 1258 "rtree.m"
        {
#line 1259 "rtree.m"
          *mercury__rtree__V_19 = mercury__rtree__VM_11;
#line 1260 "rtree.m"
          *mercury__rtree__E_20 = mercury__rtree__EM_12;
#line 1258 "rtree.m"
        }
#line 1261 "rtree.m"
        break;
#line 1261 "rtree.m"
      case (MR_Integer) 1:
#line 1263 "rtree.m"
        {
#line 1263 "rtree.m"
          mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E1_14, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
        }
#line 1261 "rtree.m"
        break;
#line 1261 "rtree.m"
      case (MR_Integer) 2:
#line 1266 "rtree.m"
        {
#line 1266 "rtree.m"
          mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E0_13, mercury__rtree__T1_16, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
        }
#line 1261 "rtree.m"
        break;
#line 1261 "rtree.m"
    }
#line 1255 "rtree.m"
  }
#line 1252 "rtree.m"
}

#line 1230 "rtree.m"
static void MR_CALL 
mercury__rtree__search_first_2_find_better_solution_one_8_p_0(
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_21,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_22,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_23,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__VM_9,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__EM_10,
#line 1230 "rtree.m"
  MR_Box mercury__rtree__E0_11,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__P_13,
#line 1230 "rtree.m"
  MR_Word mercury__rtree__C_14,
#line 1230 "rtree.m"
  MR_Box * mercury__rtree__V_15,
#line 1230 "rtree.m"
  MR_Box * mercury__rtree__E_16)
#line 1230 "rtree.m"
{
#line 1237 "rtree.m"
  {
#line 1237 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1234 "rtree.m"
    MR_Word mercury__rtree__V_24_24;

#line 1234 "rtree.m"
    {
#line 1234 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_22, &mercury__rtree__V_24_24, mercury__rtree__EM_10, mercury__rtree__E0_11);
    }
#line 1234 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_24_24);
#line 1237 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1235 "rtree.m"
      {
#line 1235 "rtree.m"
        *mercury__rtree__V_15 = mercury__rtree__VM_9;
#line 1236 "rtree.m"
        *mercury__rtree__E_16 = mercury__rtree__EM_10;
#line 1235 "rtree.m"
      }
#line 1237 "rtree.m"
    else
#line 1245 "rtree.m"
      {
#line 1245 "rtree.m"
        MR_Box mercury__rtree__V0_17;
#line 1245 "rtree.m"
        MR_Box mercury__rtree__F0_18;

#line 1237 "rtree.m"
        {
#line 1237 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_23, mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_22, mercury__rtree__T0_12, mercury__rtree__P_13, mercury__rtree__C_14, mercury__rtree__EM_10, &mercury__rtree__V0_17, &mercury__rtree__F0_18);
        }
#line 1245 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1241 "rtree.m"
          {
#line 1238 "rtree.m"
            MR_Word mercury__rtree__V_25_25;

#line 1238 "rtree.m"
            {
#line 1238 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_22, &mercury__rtree__V_25_25, mercury__rtree__EM_10, mercury__rtree__F0_18);
            }
#line 1238 "rtree.m"
            mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_25_25);
#line 1241 "rtree.m"
            if (mercury__rtree__succeeded)
#line 1239 "rtree.m"
              {
#line 1239 "rtree.m"
                *mercury__rtree__V_15 = mercury__rtree__VM_9;
#line 1240 "rtree.m"
                *mercury__rtree__E_16 = mercury__rtree__EM_10;
#line 1239 "rtree.m"
              }
#line 1241 "rtree.m"
            else
#line 1242 "rtree.m"
              {
#line 1242 "rtree.m"
                *mercury__rtree__V_15 = mercury__rtree__V0_17;
#line 1243 "rtree.m"
                *mercury__rtree__E_16 = mercury__rtree__F0_18;
#line 1242 "rtree.m"
              }
#line 1241 "rtree.m"
          }
#line 1245 "rtree.m"
        else
#line 1246 "rtree.m"
          {
#line 1246 "rtree.m"
            *mercury__rtree__V_15 = mercury__rtree__VM_9;
#line 1247 "rtree.m"
            *mercury__rtree__E_16 = mercury__rtree__EM_10;
#line 1246 "rtree.m"
          }
#line 1245 "rtree.m"
      }
#line 1237 "rtree.m"
  }
#line 1230 "rtree.m"
}

#line 1214 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_two_8_p_0(
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_19,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_20,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_21,
#line 1214 "rtree.m"
  MR_Box mercury__rtree__E1_9,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__T0_10,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__T1_11,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__P_12,
#line 1214 "rtree.m"
  MR_Word mercury__rtree__C_13,
#line 1214 "rtree.m"
  MR_Box mercury__rtree__L_14,
#line 1214 "rtree.m"
  MR_Box * mercury__rtree__V_15,
#line 1214 "rtree.m"
  MR_Box * mercury__rtree__E_16)
#line 1214 "rtree.m"
{
#line 1220 "rtree.m"
  {
#line 1220 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1220 "rtree.m"
    MR_Box mercury__rtree__V0_17;
#line 1220 "rtree.m"
    MR_Box mercury__rtree__E0_18;

#line 1218 "rtree.m"
    {
#line 1218 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_19, mercury__rtree__T0_10, mercury__rtree__P_12, mercury__rtree__C_13, mercury__rtree__L_14, &mercury__rtree__V0_17, &mercury__rtree__E0_18);
    }
#line 1220 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1219 "rtree.m"
      {
#line 1219 "rtree.m"
        {
#line 1219 "rtree.m"
          mercury__rtree__search_first_2_find_better_solution_one_8_p_0(mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_19, mercury__rtree__TypeInfo_for_K_20, mercury__rtree__V0_17, mercury__rtree__E0_18, mercury__rtree__E1_9, mercury__rtree__T1_11, mercury__rtree__P_12, mercury__rtree__C_13, mercury__rtree__V_15, mercury__rtree__E_16);
        }
#line 1219 "rtree.m"
        mercury__rtree__succeeded = MR_TRUE;
#line 1219 "rtree.m"
      }
#line 1220 "rtree.m"
    else
#line 1221 "rtree.m"
      {
#line 1221 "rtree.m"
        mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_19, mercury__rtree__T1_11, mercury__rtree__P_12, mercury__rtree__C_13, mercury__rtree__L_14, mercury__rtree__V_15, mercury__rtree__E_16);
      }
#line 1220 "rtree.m"
    return mercury__rtree__succeeded;
#line 1220 "rtree.m"
  }
#line 1214 "rtree.m"
}

#line 1200 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_three_10_p_0(
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_23,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_24,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_25,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__E1_11,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__E2_12,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__T2_15,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__P_16,
#line 1200 "rtree.m"
  MR_Word mercury__rtree__C_17,
#line 1200 "rtree.m"
  MR_Box mercury__rtree__L_18,
#line 1200 "rtree.m"
  MR_Box * mercury__rtree__V_19,
#line 1200 "rtree.m"
  MR_Box * mercury__rtree__E_20)
#line 1200 "rtree.m"
{
#line 1208 "rtree.m"
  {
#line 1208 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1208 "rtree.m"
    MR_Box mercury__rtree__V0_21;
#line 1208 "rtree.m"
    MR_Box mercury__rtree__E0_22;

#line 1205 "rtree.m"
    {
#line 1205 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_25, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__T0_13, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__L_18, &mercury__rtree__V0_21, &mercury__rtree__E0_22);
    }
#line 1208 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1206 "rtree.m"
      {
#line 1206 "rtree.m"
        {
#line 1206 "rtree.m"
          mercury__rtree__search_first_2_find_better_solution_two_10_p_0(mercury__rtree__TypeInfo_for_V_25, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__V0_21, mercury__rtree__E0_22, mercury__rtree__E1_11, mercury__rtree__E2_12, mercury__rtree__T1_14, mercury__rtree__T2_15, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__V_19, mercury__rtree__E_20);
        }
#line 1206 "rtree.m"
        mercury__rtree__succeeded = MR_TRUE;
#line 1206 "rtree.m"
      }
#line 1208 "rtree.m"
    else
#line 1130 "rtree.m"
      {
#line 1128 "rtree.m"
        MR_Word mercury__rtree__V_36_36;

#line 1128 "rtree.m"
        {
#line 1128 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_23, &mercury__rtree__V_36_36, mercury__rtree__E1_11, mercury__rtree__E2_12);
        }
#line 1128 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_36_36);
#line 1130 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1129 "rtree.m"
          {
#line 1129 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_25, mercury__rtree__E2_12, mercury__rtree__T1_14, mercury__rtree__T2_15, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__L_18, mercury__rtree__V_19, mercury__rtree__E_20);
          }
#line 1130 "rtree.m"
        else
#line 1131 "rtree.m"
          {
#line 1131 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_25, mercury__rtree__E1_11, mercury__rtree__T2_15, mercury__rtree__T1_14, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__L_18, mercury__rtree__V_19, mercury__rtree__E_20);
          }
#line 1130 "rtree.m"
      }
#line 1208 "rtree.m"
    return mercury__rtree__succeeded;
#line 1208 "rtree.m"
  }
#line 1200 "rtree.m"
}

#line 1186 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_try_first_from_four_12_p_0(
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_27,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_28,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_29,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E1_13,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E2_14,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__E3_15,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T1_17,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__T3_19,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__P_20,
#line 1186 "rtree.m"
  MR_Word mercury__rtree__C_21,
#line 1186 "rtree.m"
  MR_Box mercury__rtree__L_22,
#line 1186 "rtree.m"
  MR_Box * mercury__rtree__V_23,
#line 1186 "rtree.m"
  MR_Box * mercury__rtree__E_24)
#line 1186 "rtree.m"
{
#line 1194 "rtree.m"
  {
#line 1194 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1194 "rtree.m"
    MR_Box mercury__rtree__V0_25;
#line 1194 "rtree.m"
    MR_Box mercury__rtree__E0_26;

#line 1191 "rtree.m"
    {
#line 1191 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__T0_16, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__L_22, &mercury__rtree__V0_25, &mercury__rtree__E0_26);
    }
#line 1194 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1192 "rtree.m"
      {
#line 1192 "rtree.m"
        {
#line 1192 "rtree.m"
          mercury__rtree__search_first_2_find_better_solution_three_12_p_0(mercury__rtree__TypeInfo_for_V_29, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_25, mercury__rtree__E0_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__E3_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__V_23, mercury__rtree__E_24);
        }
#line 1192 "rtree.m"
        mercury__rtree__succeeded = MR_TRUE;
#line 1192 "rtree.m"
      }
#line 1194 "rtree.m"
    else
#line 1195 "rtree.m"
      {
#line 1195 "rtree.m"
        mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_29, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__E3_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__L_22, mercury__rtree__V_23, mercury__rtree__E_24);
      }
#line 1194 "rtree.m"
    return mercury__rtree__succeeded;
#line 1194 "rtree.m"
  }
#line 1186 "rtree.m"
}

#line 1155 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_four_choices_13_p_0(
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_28,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_29,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_30,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E0_14,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E1_15,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E2_16,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__E3_17,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T0_18,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T1_19,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__T3_21,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__P_22,
#line 1155 "rtree.m"
  MR_Word mercury__rtree__C_23,
#line 1155 "rtree.m"
  MR_Box mercury__rtree__L_24,
#line 1155 "rtree.m"
  MR_Box * mercury__rtree__V_25,
#line 1155 "rtree.m"
  MR_Box * mercury__rtree__E_26)
#line 1155 "rtree.m"
{
#line 1159 "rtree.m"
  {
#line 1159 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1159 "rtree.m"
    MR_Word mercury__rtree__R_27;
#line 1159 "rtree.m"
    MR_Word mercury__rtree__Min0_36;
#line 1159 "rtree.m"
    MR_Box mercury__rtree__MinItem0_37;
#line 1159 "rtree.m"
    MR_Word mercury__rtree__Min1_38;
#line 1159 "rtree.m"
    MR_Box mercury__rtree__MinItem_39;
#line 1515 "rtree.m"
    MR_Word mercury__rtree__V_43_43;
#line 1522 "rtree.m"
    MR_Word mercury__rtree__V_44_44;
#line 1529 "rtree.m"
    MR_Word mercury__rtree__V_45_45;

#line 1515 "rtree.m"
    {
#line 1515 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__V_43_43, mercury__rtree__E0_14, mercury__rtree__E1_15);
    }
#line 1515 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_43_43);
#line 1518 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1516 "rtree.m"
      {
#line 1516 "rtree.m"
        mercury__rtree__Min0_36 = (MR_Integer) 0;
#line 1517 "rtree.m"
        mercury__rtree__MinItem0_37 = mercury__rtree__E0_14;
#line 1516 "rtree.m"
      }
#line 1518 "rtree.m"
    else
#line 1519 "rtree.m"
      {
#line 1519 "rtree.m"
        mercury__rtree__Min0_36 = (MR_Integer) 1;
#line 1520 "rtree.m"
        mercury__rtree__MinItem0_37 = mercury__rtree__E1_15;
#line 1519 "rtree.m"
      }
#line 1522 "rtree.m"
    {
#line 1522 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__V_44_44, mercury__rtree__MinItem0_37, mercury__rtree__E2_16);
    }
#line 1522 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_44_44);
#line 1525 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1523 "rtree.m"
      {
#line 1523 "rtree.m"
        mercury__rtree__Min1_38 = mercury__rtree__Min0_36;
#line 1524 "rtree.m"
        mercury__rtree__MinItem_39 = mercury__rtree__MinItem0_37;
#line 1523 "rtree.m"
      }
#line 1525 "rtree.m"
    else
#line 1526 "rtree.m"
      {
#line 1526 "rtree.m"
        mercury__rtree__Min1_38 = (MR_Integer) 2;
#line 1527 "rtree.m"
        mercury__rtree__MinItem_39 = mercury__rtree__E2_16;
#line 1526 "rtree.m"
      }
#line 1529 "rtree.m"
    {
#line 1529 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_28, &mercury__rtree__V_45_45, mercury__rtree__MinItem_39, mercury__rtree__E3_17);
    }
#line 1529 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_45_45);
#line 1531 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1530 "rtree.m"
      mercury__rtree__R_27 = mercury__rtree__Min1_38;
#line 1531 "rtree.m"
    else
#line 1532 "rtree.m"
      mercury__rtree__R_27 = (MR_Integer) 3;
#line 1165 "rtree.m"
#line 1165 "rtree.m"
    switch (mercury__rtree__R_27) {
#line 1165 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1165 "rtree.m"
      case (MR_Integer) 0:
#line 1163 "rtree.m"
        {
#line 1163 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
#line 1165 "rtree.m"
        break;
#line 1165 "rtree.m"
      case (MR_Integer) 3:
#line 1175 "rtree.m"
        {
#line 1175 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__T3_21, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
#line 1165 "rtree.m"
        break;
#line 1165 "rtree.m"
      case (MR_Integer) 1:
#line 1167 "rtree.m"
        {
#line 1167 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
#line 1165 "rtree.m"
        break;
#line 1165 "rtree.m"
      case (MR_Integer) 2:
#line 1171 "rtree.m"
        {
#line 1171 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E3_17, mercury__rtree__T2_20, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
#line 1165 "rtree.m"
        break;
#line 1165 "rtree.m"
    }
#line 1159 "rtree.m"
    return mercury__rtree__succeeded;
#line 1159 "rtree.m"
  }
#line 1155 "rtree.m"
}

#line 1134 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_three_choices_11_p_0(
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_24,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_25,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_26,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E0_12,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E1_13,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__E2_14,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T0_15,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__T2_17,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__P_18,
#line 1134 "rtree.m"
  MR_Word mercury__rtree__C_19,
#line 1134 "rtree.m"
  MR_Box mercury__rtree__L_20,
#line 1134 "rtree.m"
  MR_Box * mercury__rtree__V_21,
#line 1134 "rtree.m"
  MR_Box * mercury__rtree__E_22)
#line 1134 "rtree.m"
{
#line 1140 "rtree.m"
  {
#line 1140 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1140 "rtree.m"
    MR_Word mercury__rtree__R_23;
#line 1494 "rtree.m"
    MR_Word mercury__rtree__V_33_33;

#line 1494 "rtree.m"
    {
#line 1494 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__V_33_33, mercury__rtree__E0_12, mercury__rtree__E1_13);
    }
#line 1494 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_33_33);
#line 1493 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1497 "rtree.m"
      {
#line 1495 "rtree.m"
        MR_Word mercury__rtree__V_34_34;

#line 1495 "rtree.m"
        {
#line 1495 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__V_34_34, mercury__rtree__E0_12, mercury__rtree__E2_14);
        }
#line 1495 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_34_34);
#line 1497 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1496 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 0;
#line 1497 "rtree.m"
        else
#line 1498 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 2;
#line 1497 "rtree.m"
      }
#line 1493 "rtree.m"
    else
#line 1503 "rtree.m"
      {
#line 1501 "rtree.m"
        MR_Word mercury__rtree__V_35_35;

#line 1501 "rtree.m"
        {
#line 1501 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_24, &mercury__rtree__V_35_35, mercury__rtree__E1_13, mercury__rtree__E2_14);
        }
#line 1501 "rtree.m"
        mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_35_35);
#line 1503 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1502 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 1;
#line 1503 "rtree.m"
        else
#line 1504 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 2;
#line 1503 "rtree.m"
      }
#line 1145 "rtree.m"
#line 1145 "rtree.m"
    switch (mercury__rtree__R_23) {
#line 1145 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1145 "rtree.m"
      case (MR_Integer) 0:
#line 1144 "rtree.m"
        {
#line 1144 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
        }
#line 1145 "rtree.m"
        break;
#line 1145 "rtree.m"
      case (MR_Integer) 1:
#line 1147 "rtree.m"
        {
#line 1147 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E2_14, mercury__rtree__T1_16, mercury__rtree__T0_15, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
        }
#line 1145 "rtree.m"
        break;
#line 1145 "rtree.m"
      case (MR_Integer) 2:
#line 1150 "rtree.m"
        {
#line 1150 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E1_13, mercury__rtree__T2_17, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
        }
#line 1145 "rtree.m"
        break;
#line 1145 "rtree.m"
    }
#line 1140 "rtree.m"
    return mercury__rtree__succeeded;
#line 1140 "rtree.m"
  }
#line 1134 "rtree.m"
}

#line 1124 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__search_first_2_two_choices_9_p_0(
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_20,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_21,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__E0_10,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__E1_11,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__P_14,
#line 1124 "rtree.m"
  MR_Word mercury__rtree__C_15,
#line 1124 "rtree.m"
  MR_Box mercury__rtree__L_16,
#line 1124 "rtree.m"
  MR_Box * mercury__rtree__V_17,
#line 1124 "rtree.m"
  MR_Box * mercury__rtree__E_18)
#line 1124 "rtree.m"
{
#line 1130 "rtree.m"
  {
#line 1130 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1128 "rtree.m"
    MR_Word mercury__rtree__V_23_23;

#line 1128 "rtree.m"
    {
#line 1128 "rtree.m"
      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_20, &mercury__rtree__V_23_23, mercury__rtree__E0_10, mercury__rtree__E1_11);
    }
#line 1128 "rtree.m"
    mercury__rtree__succeeded = ((MR_Integer) 1 == mercury__rtree__V_23_23);
#line 1130 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1129 "rtree.m"
      {
#line 1129 "rtree.m"
        mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__E1_11, mercury__rtree__T0_12, mercury__rtree__T1_13, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
      }
#line 1130 "rtree.m"
    else
#line 1131 "rtree.m"
      {
#line 1131 "rtree.m"
        mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__E0_10, mercury__rtree__T1_13, mercury__rtree__T0_12, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
      }
#line 1130 "rtree.m"
    return mercury__rtree__succeeded;
#line 1130 "rtree.m"
  }
#line 1124 "rtree.m"
}

#line 1023 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__search_first_2_6_p_0(
#line 1023 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_76,
#line 1023 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_77,
#line 1023 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_78,
#line 1023 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 1023 "rtree.m"
  MR_Word mercury__rtree__P_2,
#line 1023 "rtree.m"
  MR_Word mercury__rtree__C_3,
#line 1023 "rtree.m"
  MR_Box mercury__rtree__L_4,
#line 1023 "rtree.m"
  MR_Box * mercury__rtree__V_5,
#line 1023 "rtree.m"
  MR_Box * mercury__rtree__E_6)
#line 1023 "rtree.m"
{
#line 1026 "rtree.m"
  while (MR_TRUE)
#line 1026 "rtree.m"
    {
#line 1026 "rtree.m"
      /* tailcall optimized into a loop */
#line 1026 "rtree.m"
      {
#line 1026 "rtree.m"
        MR_bool mercury__rtree__succeeded;

#line 1026 "rtree.m"
#line 1026 "rtree.m"
        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 1026 "rtree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "rtree.m"
          case (MR_Integer) 0:
#line 1026 "rtree.m"
            {
#line 1026 "rtree.m"
              *mercury__rtree__V_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1027 "rtree.m"
              {
#line 1027 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_V_77, mercury__rtree__TypeInfo_for_E_78, *mercury__rtree__V_5, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__E_6);
              }
#line 1026 "rtree.m"
            }
#line 1026 "rtree.m"
            break;
#line 1026 "rtree.m"
          case (MR_Integer) 1:
#line 1028 "rtree.m"
            {
#line 1028 "rtree.m"
              MR_Box mercury__rtree__K0_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1028 "rtree.m"
              MR_Word mercury__rtree__T0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1028 "rtree.m"
              MR_Box mercury__rtree__K1_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1028 "rtree.m"
              MR_Word mercury__rtree__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1035 "rtree.m"
              MR_Box mercury__rtree__E0_21;

#line 1029 "rtree.m"
              {
#line 1029 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K0_12, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E0_21);
              }
#line 1035 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1032 "rtree.m"
                {
#line 1032 "rtree.m"
                  MR_Box mercury__rtree__E1_22;

#line 1030 "rtree.m"
                  {
#line 1030 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_14, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_22);
                  }
#line 1032 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1031 "rtree.m"
                    {
#line 1031 "rtree.m"
                      mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_21, mercury__rtree__E1_22, mercury__rtree__T0_13, mercury__rtree__T1_15, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                    }
#line 1032 "rtree.m"
                  else
#line 1033 "rtree.m"
                    {
#line 1033 "rtree.m"
                      /* direct tailcall eliminated */
#line 1033 "rtree.m"
                      {
#line 1033 "rtree.m"
                        MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T0_13;

#line 1033 "rtree.m"
                        mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1033 "rtree.m"
                      }
#line 1033 "rtree.m"
                      continue;
#line 1033 "rtree.m"
                    }
#line 1032 "rtree.m"
                }
#line 1035 "rtree.m"
              else
#line 1036 "rtree.m"
                {
#line 1036 "rtree.m"
                  MR_Box mercury__rtree__V_23_23;

#line 1036 "rtree.m"
                  {
#line 1036 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_14, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__V_23_23);
                  }
#line 1036 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1037 "rtree.m"
                    {
#line 1037 "rtree.m"
                      /* direct tailcall eliminated */
#line 1037 "rtree.m"
                      {
#line 1037 "rtree.m"
                        MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T1_15;

#line 1037 "rtree.m"
                        mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1037 "rtree.m"
                      }
#line 1037 "rtree.m"
                      continue;
#line 1037 "rtree.m"
                    }
#line 1036 "rtree.m"
                }
#line 1028 "rtree.m"
            }
#line 1026 "rtree.m"
            break;
#line 1026 "rtree.m"
          case (MR_Integer) 2:
#line 1039 "rtree.m"
            {
#line 1039 "rtree.m"
              MR_Box mercury__rtree__K0_24 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1039 "rtree.m"
              MR_Word mercury__rtree__T0_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1039 "rtree.m"
              MR_Box mercury__rtree__K1_26 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1039 "rtree.m"
              MR_Word mercury__rtree__T1_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1039 "rtree.m"
              MR_Box mercury__rtree__K2_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1039 "rtree.m"
              MR_Word mercury__rtree__T2_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1053 "rtree.m"
              MR_Box mercury__rtree__E0_35;

#line 1040 "rtree.m"
              {
#line 1040 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K0_24, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E0_35);
              }
#line 1053 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1048 "rtree.m"
                {
#line 1048 "rtree.m"
                  MR_Box mercury__rtree__E1_36;

#line 1041 "rtree.m"
                  {
#line 1041 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_26, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_36);
                  }
#line 1048 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1045 "rtree.m"
                    {
#line 1045 "rtree.m"
                      MR_Box mercury__rtree__E2_37;

#line 1042 "rtree.m"
                      {
#line 1042 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_37);
                      }
#line 1045 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1043 "rtree.m"
                        {
#line 1043 "rtree.m"
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__E2_37, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
#line 1045 "rtree.m"
                      else
#line 1046 "rtree.m"
                        {
#line 1046 "rtree.m"
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
#line 1045 "rtree.m"
                    }
#line 1048 "rtree.m"
                  else
#line 1050 "rtree.m"
                    {
#line 1050 "rtree.m"
                      MR_Box mercury__rtree__E2_39;

#line 1048 "rtree.m"
                      {
#line 1048 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_39);
                      }
#line 1050 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1049 "rtree.m"
                        {
#line 1049 "rtree.m"
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E2_39, mercury__rtree__T0_25, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
#line 1050 "rtree.m"
                      else
#line 1051 "rtree.m"
                        {
#line 1051 "rtree.m"
                          /* direct tailcall eliminated */
#line 1051 "rtree.m"
                          {
#line 1051 "rtree.m"
                            MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T0_25;

#line 1051 "rtree.m"
                            mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1051 "rtree.m"
                          }
#line 1051 "rtree.m"
                          continue;
#line 1051 "rtree.m"
                        }
#line 1050 "rtree.m"
                    }
#line 1048 "rtree.m"
                }
#line 1053 "rtree.m"
              else
#line 1059 "rtree.m"
                {
#line 1059 "rtree.m"
                  MR_Box mercury__rtree__E1_41;

#line 1053 "rtree.m"
                  {
#line 1053 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_26, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_41);
                  }
#line 1059 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1056 "rtree.m"
                    {
#line 1056 "rtree.m"
                      MR_Box mercury__rtree__E2_40;

#line 1054 "rtree.m"
                      {
#line 1054 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_40);
                      }
#line 1056 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1055 "rtree.m"
                        {
#line 1055 "rtree.m"
                          mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_41, mercury__rtree__E2_40, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                        }
#line 1056 "rtree.m"
                      else
#line 1057 "rtree.m"
                        {
#line 1057 "rtree.m"
                          /* direct tailcall eliminated */
#line 1057 "rtree.m"
                          {
#line 1057 "rtree.m"
                            MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T1_27;

#line 1057 "rtree.m"
                            mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1057 "rtree.m"
                          }
#line 1057 "rtree.m"
                          continue;
#line 1057 "rtree.m"
                        }
#line 1056 "rtree.m"
                    }
#line 1059 "rtree.m"
                  else
#line 1060 "rtree.m"
                    {
#line 1060 "rtree.m"
                      MR_Box mercury__rtree__V_38_38;

#line 1060 "rtree.m"
                      {
#line 1060 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_28, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__V_38_38);
                      }
#line 1060 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1061 "rtree.m"
                        {
#line 1061 "rtree.m"
                          /* direct tailcall eliminated */
#line 1061 "rtree.m"
                          {
#line 1061 "rtree.m"
                            MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T2_29;

#line 1061 "rtree.m"
                            mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1061 "rtree.m"
                          }
#line 1061 "rtree.m"
                          continue;
#line 1061 "rtree.m"
                        }
#line 1060 "rtree.m"
                    }
#line 1059 "rtree.m"
                }
#line 1039 "rtree.m"
            }
#line 1026 "rtree.m"
            break;
#line 1026 "rtree.m"
          case (MR_Integer) 3:
#line 1063 "rtree.m"
            {
#line 1063 "rtree.m"
              MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1063 "rtree.m"
              MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "rtree.m"
              MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 1063 "rtree.m"
              MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 1063 "rtree.m"
              MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 1063 "rtree.m"
              MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 1063 "rtree.m"
              MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 1063 "rtree.m"
              MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 1095 "rtree.m"
              MR_Box mercury__rtree__E0_56;
#line 1010 "rtree.m"
              MR_Word mercury__rtree__V_83_83;
#line 1010 "rtree.m"
              MR_Word mercury__rtree__V_84_84;
#line 1011 "rtree.m"
              MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_2, (MR_Integer) 1)));

#line 1011 "rtree.m"
              {
#line 1011 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_2), mercury__rtree__K0_43, &mercury__rtree__E0_56);
              }
#line 1010 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1010 "rtree.m"
                {
#line 1012 "rtree.m"
                  mercury__rtree__V_83_83 = (MR_Integer) 1;
#line 1012 "rtree.m"
                  {
#line 1012 "rtree.m"
                    mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_78, &mercury__rtree__V_84_84, mercury__rtree__E0_56, mercury__rtree__L_4);
                  }
#line 1012 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__V_83_83 == mercury__rtree__V_84_84);
#line 1010 "rtree.m"
                }
#line 1095 "rtree.m"
              if (mercury__rtree__succeeded)
#line 1081 "rtree.m"
                {
#line 1081 "rtree.m"
                  MR_Box mercury__rtree__E1_57;
#line 1010 "rtree.m"
                  MR_Word mercury__rtree__V_89_89;
#line 1010 "rtree.m"
                  MR_Word mercury__rtree__V_90_90;
#line 1011 "rtree.m"
                  MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_2, (MR_Integer) 1)));

#line 1011 "rtree.m"
                  {
#line 1011 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__P_2), mercury__rtree__K1_45, &mercury__rtree__E1_57);
                  }
#line 1010 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1010 "rtree.m"
                    {
#line 1012 "rtree.m"
                      mercury__rtree__V_89_89 = (MR_Integer) 1;
#line 1012 "rtree.m"
                      {
#line 1012 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_78, &mercury__rtree__V_90_90, mercury__rtree__E1_57, mercury__rtree__L_4);
                      }
#line 1012 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__V_89_89 == mercury__rtree__V_90_90);
#line 1010 "rtree.m"
                    }
#line 1081 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1074 "rtree.m"
                    {
#line 1074 "rtree.m"
                      MR_Box mercury__rtree__E2_58;

#line 1066 "rtree.m"
                      {
#line 1066 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_58);
                      }
#line 1074 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1070 "rtree.m"
                        {
#line 1070 "rtree.m"
                          MR_Box mercury__rtree__E3_59;

#line 1067 "rtree.m"
                          {
#line 1067 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_59);
                          }
#line 1070 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1068 "rtree.m"
                            {
#line 1068 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_four_choices_13_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__E3_59, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1070 "rtree.m"
                          else
#line 1071 "rtree.m"
                            {
#line 1071 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1070 "rtree.m"
                        }
#line 1074 "rtree.m"
                      else
#line 1077 "rtree.m"
                        {
#line 1077 "rtree.m"
                          MR_Box mercury__rtree__E3_61;

#line 1074 "rtree.m"
                          {
#line 1074 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_61);
                          }
#line 1077 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1075 "rtree.m"
                            {
#line 1075 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E3_61, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1077 "rtree.m"
                          else
#line 1078 "rtree.m"
                            {
#line 1078 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1077 "rtree.m"
                        }
#line 1074 "rtree.m"
                    }
#line 1081 "rtree.m"
                  else
#line 1088 "rtree.m"
                    {
#line 1088 "rtree.m"
                      MR_Box mercury__rtree__E2_64;

#line 1081 "rtree.m"
                      {
#line 1081 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_64);
                      }
#line 1088 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1085 "rtree.m"
                        {
#line 1085 "rtree.m"
                          MR_Box mercury__rtree__E3_62;

#line 1082 "rtree.m"
                          {
#line 1082 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_62);
                          }
#line 1085 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1083 "rtree.m"
                            {
#line 1083 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__E3_62, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1085 "rtree.m"
                          else
#line 1086 "rtree.m"
                            {
#line 1086 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1085 "rtree.m"
                        }
#line 1088 "rtree.m"
                      else
#line 1090 "rtree.m"
                        {
#line 1090 "rtree.m"
                          MR_Box mercury__rtree__E3_63;

#line 1088 "rtree.m"
                          {
#line 1088 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_63);
                          }
#line 1090 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1089 "rtree.m"
                            {
#line 1089 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E3_63, mercury__rtree__T0_44, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1090 "rtree.m"
                          else
#line 1091 "rtree.m"
                            {
#line 1091 "rtree.m"
                              /* direct tailcall eliminated */
#line 1091 "rtree.m"
                              {
#line 1091 "rtree.m"
                                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T0_44;

#line 1091 "rtree.m"
                                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1091 "rtree.m"
                              }
#line 1091 "rtree.m"
                              continue;
#line 1091 "rtree.m"
                            }
#line 1090 "rtree.m"
                        }
#line 1088 "rtree.m"
                    }
#line 1081 "rtree.m"
                }
#line 1095 "rtree.m"
              else
#line 1109 "rtree.m"
                {
#line 1109 "rtree.m"
                  MR_Box mercury__rtree__E1_73;

#line 1095 "rtree.m"
                  {
#line 1095 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K1_45, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E1_73);
                  }
#line 1109 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 1103 "rtree.m"
                    {
#line 1103 "rtree.m"
                      MR_Box mercury__rtree__E2_68;

#line 1096 "rtree.m"
                      {
#line 1096 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_68);
                      }
#line 1103 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1100 "rtree.m"
                        {
#line 1100 "rtree.m"
                          MR_Box mercury__rtree__E3_66;

#line 1097 "rtree.m"
                          {
#line 1097 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_66);
                          }
#line 1100 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1098 "rtree.m"
                            {
#line 1098 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__E3_66, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1100 "rtree.m"
                          else
#line 1101 "rtree.m"
                            {
#line 1101 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1100 "rtree.m"
                        }
#line 1103 "rtree.m"
                      else
#line 1105 "rtree.m"
                        {
#line 1105 "rtree.m"
                          MR_Box mercury__rtree__E3_67;

#line 1103 "rtree.m"
                          {
#line 1103 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_67);
                          }
#line 1105 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1104 "rtree.m"
                            {
#line 1104 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E3_67, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1105 "rtree.m"
                          else
#line 1106 "rtree.m"
                            {
#line 1106 "rtree.m"
                              /* direct tailcall eliminated */
#line 1106 "rtree.m"
                              {
#line 1106 "rtree.m"
                                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T1_46;

#line 1106 "rtree.m"
                                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1106 "rtree.m"
                              }
#line 1106 "rtree.m"
                              continue;
#line 1106 "rtree.m"
                            }
#line 1105 "rtree.m"
                        }
#line 1103 "rtree.m"
                    }
#line 1109 "rtree.m"
                  else
#line 1115 "rtree.m"
                    {
#line 1115 "rtree.m"
                      MR_Box mercury__rtree__E2_71;

#line 1109 "rtree.m"
                      {
#line 1109 "rtree.m"
                        mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K2_47, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E2_71);
                      }
#line 1115 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 1112 "rtree.m"
                        {
#line 1112 "rtree.m"
                          MR_Box mercury__rtree__E3_70;

#line 1110 "rtree.m"
                          {
#line 1110 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__E3_70);
                          }
#line 1112 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1111 "rtree.m"
                            {
#line 1111 "rtree.m"
                              mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E2_71, mercury__rtree__E3_70, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                            }
#line 1112 "rtree.m"
                          else
#line 1113 "rtree.m"
                            {
#line 1113 "rtree.m"
                              /* direct tailcall eliminated */
#line 1113 "rtree.m"
                              {
#line 1113 "rtree.m"
                                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T2_48;

#line 1113 "rtree.m"
                                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1113 "rtree.m"
                              }
#line 1113 "rtree.m"
                              continue;
#line 1113 "rtree.m"
                            }
#line 1112 "rtree.m"
                        }
#line 1115 "rtree.m"
                      else
#line 1116 "rtree.m"
                        {
#line 1116 "rtree.m"
                          MR_Box mercury__rtree__V_60_60;

#line 1116 "rtree.m"
                          {
#line 1116 "rtree.m"
                            mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_E_78, mercury__rtree__K3_49, mercury__rtree__P_2, mercury__rtree__L_4, &mercury__rtree__V_60_60);
                          }
#line 1116 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 1117 "rtree.m"
                            {
#line 1117 "rtree.m"
                              /* direct tailcall eliminated */
#line 1117 "rtree.m"
                              {
#line 1117 "rtree.m"
                                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__T3_50;

#line 1117 "rtree.m"
                                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 1117 "rtree.m"
                              }
#line 1117 "rtree.m"
                              continue;
#line 1117 "rtree.m"
                            }
#line 1116 "rtree.m"
                        }
#line 1115 "rtree.m"
                    }
#line 1109 "rtree.m"
                }
#line 1063 "rtree.m"
            }
#line 1026 "rtree.m"
            break;
#line 1026 "rtree.m"
        }
#line 1026 "rtree.m"
        return mercury__rtree__succeeded;
#line 1026 "rtree.m"
      }
#line 1026 "rtree.m"
      break;
#line 1026 "rtree.m"
    }
#line 1023 "rtree.m"
}

#line 1007 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__maybe_limit_4_p_0(
#line 1007 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_10,
#line 1007 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_E_11,
#line 1007 "rtree.m"
  MR_Box mercury__rtree__K_5,
#line 1007 "rtree.m"
  MR_Word mercury__rtree__P_6,
#line 1007 "rtree.m"
  MR_Box mercury__rtree__L_7,
#line 1007 "rtree.m"
  MR_Box * mercury__rtree__E_8)
#line 1007 "rtree.m"
{
#line 1010 "rtree.m"
  {
#line 1010 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 1010 "rtree.m"
    MR_Word mercury__rtree__V_9_9;
#line 1010 "rtree.m"
    MR_Word mercury__rtree__V_12_12;
#line 1011 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

#line 1011 "rtree.m"
    {
#line 1011 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_5, mercury__rtree__E_8);
    }
#line 1010 "rtree.m"
    if (mercury__rtree__succeeded)
#line 1010 "rtree.m"
      {
#line 1012 "rtree.m"
        mercury__rtree__V_9_9 = (MR_Integer) 1;
#line 1012 "rtree.m"
        {
#line 1012 "rtree.m"
          mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_E_11, &mercury__rtree__V_12_12, *mercury__rtree__E_8, mercury__rtree__L_7);
        }
#line 1012 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__V_9_9 == mercury__rtree__V_12_12);
#line 1010 "rtree.m"
      }
#line 1010 "rtree.m"
    return mercury__rtree__succeeded;
#line 1010 "rtree.m"
  }
#line 1007 "rtree.m"
}

#line 981 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_subtree_6_p_0(
#line 981 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_15,
#line 981 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_16,
#line 981 "rtree.m"
  MR_Box mercury__rtree__K_7,
#line 981 "rtree.m"
  MR_Word mercury__rtree__T_8,
#line 981 "rtree.m"
  MR_Word mercury__rtree__KeyTest_9,
#line 981 "rtree.m"
  MR_Word mercury__rtree__ValueTest_10,
#line 981 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_12,
#line 981 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_13)
#line 981 "rtree.m"
{
#line 989 "rtree.m"
  {
#line 989 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 987 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KeyTest_9, (MR_Integer) 1)));

#line 987 "rtree.m"
    {
#line 987 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KeyTest_9), mercury__rtree__K_7);
    }
#line 989 "rtree.m"
    if (mercury__rtree__succeeded)
#line 988 "rtree.m"
      {
#line 988 "rtree.m"
        mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_15, mercury__rtree__TypeInfo_for_V_16, mercury__rtree__T_8, mercury__rtree__KeyTest_9, mercury__rtree__ValueTest_10, mercury__rtree__STATE_VARIABLE_Values_0_12, mercury__rtree__STATE_VARIABLE_Values_13);
      }
#line 989 "rtree.m"
    else
#line 989 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Values_13 = mercury__rtree__STATE_VARIABLE_Values_0_12;
#line 989 "rtree.m"
  }
#line 981 "rtree.m"
}

#line 955 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_2_5_p_0(
#line 955 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_58,
#line 955 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_59,
#line 955 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 955 "rtree.m"
  MR_Word mercury__rtree__KeyTest_2,
#line 955 "rtree.m"
  MR_Word mercury__rtree__ValueTest_3,
#line 955 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Values_0_4,
#line 955 "rtree.m"
  MR_Word * mercury__rtree__STATE_VARIABLE_Values_5)
#line 955 "rtree.m"
{
#line 959 "rtree.m"
  {
#line 959 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 959 "rtree.m"
#line 959 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 959 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 959 "rtree.m"
      case (MR_Integer) 0:
#line 959 "rtree.m"
        {
#line 959 "rtree.m"
          MR_Box mercury__rtree__Value_6 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 960 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__ValueTest_3, (MR_Integer) 1)));

#line 960 "rtree.m"
          {
#line 960 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__ValueTest_3), mercury__rtree__Value_6);
          }
#line 962 "rtree.m"
          if (mercury__rtree__succeeded)
#line 961 "rtree.m"
            {
#line 961 "rtree.m"
              MR_Word base;
#line 961 "rtree.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "rtree.m"
              *mercury__rtree__STATE_VARIABLE_Values_5 = base;
#line 961 "rtree.m"
              MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__Value_6;
#line 961 "rtree.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_Values_0_4));
#line 961 "rtree.m"
            }
#line 962 "rtree.m"
          else
#line 962 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Values_5 = mercury__rtree__STATE_VARIABLE_Values_0_4;
#line 959 "rtree.m"
        }
#line 959 "rtree.m"
        break;
#line 959 "rtree.m"
      case (MR_Integer) 1:
#line 965 "rtree.m"
        {
#line 965 "rtree.m"
          MR_Box mercury__rtree__K0_17 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 965 "rtree.m"
          MR_Word mercury__rtree__T0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "rtree.m"
          MR_Box mercury__rtree__K1_19 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 965 "rtree.m"
          MR_Word mercury__rtree__T1_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 965 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_23_23;

#line 967 "rtree.m"
          {
#line 967 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K0_17, mercury__rtree__T0_18, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_23_23);
          }
#line 968 "rtree.m"
          {
#line 968 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K1_19, mercury__rtree__T1_20, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_23_23, mercury__rtree__STATE_VARIABLE_Values_5);
          }
#line 965 "rtree.m"
        }
#line 959 "rtree.m"
        break;
#line 959 "rtree.m"
      case (MR_Integer) 2:
#line 969 "rtree.m"
        {
#line 969 "rtree.m"
          MR_Box mercury__rtree__K0_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 969 "rtree.m"
          MR_Word mercury__rtree__T0_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 969 "rtree.m"
          MR_Box mercury__rtree__K1_31 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 969 "rtree.m"
          MR_Word mercury__rtree__T1_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 969 "rtree.m"
          MR_Box mercury__rtree__K2_33 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 969 "rtree.m"
          MR_Word mercury__rtree__T2_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 969 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_37_37;
#line 969 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_38_38;

#line 971 "rtree.m"
          {
#line 971 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K0_29, mercury__rtree__T0_30, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_37_37);
          }
#line 972 "rtree.m"
          {
#line 972 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K1_31, mercury__rtree__T1_32, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_37_37, &mercury__rtree__STATE_VARIABLE_Values_38_38);
          }
#line 973 "rtree.m"
          {
#line 973 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K2_33, mercury__rtree__T2_34, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_38_38, mercury__rtree__STATE_VARIABLE_Values_5);
          }
#line 969 "rtree.m"
        }
#line 959 "rtree.m"
        break;
#line 959 "rtree.m"
      case (MR_Integer) 3:
#line 974 "rtree.m"
        {
#line 974 "rtree.m"
          MR_Box mercury__rtree__K0_44 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 974 "rtree.m"
          MR_Word mercury__rtree__T0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 974 "rtree.m"
          MR_Box mercury__rtree__K1_46 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 974 "rtree.m"
          MR_Word mercury__rtree__T1_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 974 "rtree.m"
          MR_Box mercury__rtree__K2_48 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 974 "rtree.m"
          MR_Word mercury__rtree__T2_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 974 "rtree.m"
          MR_Box mercury__rtree__K3_50 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 974 "rtree.m"
          MR_Word mercury__rtree__T3_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 974 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_54_54;
#line 974 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_55_55;
#line 974 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_Values_56_56;

#line 976 "rtree.m"
          {
#line 976 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K0_44, mercury__rtree__T0_45, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_0_4, &mercury__rtree__STATE_VARIABLE_Values_54_54);
          }
#line 977 "rtree.m"
          {
#line 977 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K1_46, mercury__rtree__T1_47, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_54_54, &mercury__rtree__STATE_VARIABLE_Values_55_55);
          }
#line 978 "rtree.m"
          {
#line 978 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K2_48, mercury__rtree__T2_49, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_55_55, &mercury__rtree__STATE_VARIABLE_Values_56_56);
          }
#line 979 "rtree.m"
          {
#line 979 "rtree.m"
            mercury__rtree__search_general_subtree_6_p_0(mercury__rtree__TypeInfo_for_K_58, mercury__rtree__TypeInfo_for_V_59, mercury__rtree__K3_50, mercury__rtree__T3_51, mercury__rtree__KeyTest_2, mercury__rtree__ValueTest_3, mercury__rtree__STATE_VARIABLE_Values_56_56, mercury__rtree__STATE_VARIABLE_Values_5);
          }
#line 974 "rtree.m"
        }
#line 959 "rtree.m"
        break;
#line 959 "rtree.m"
    }
#line 959 "rtree.m"
  }
#line 955 "rtree.m"
}

#line 827 "rtree.m"
static void MR_CALL 
mercury__rtree__insert_tree_and_split_child3_11_p_0(
#line 827 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_56,
#line 827 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K0_12,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T0_13,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K1_14,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T1_15,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K2_16,
#line 827 "rtree.m"
  MR_Word mercury__rtree__T2_17,
#line 827 "rtree.m"
  MR_Box mercury__rtree__K_18,
#line 827 "rtree.m"
  MR_Word mercury__rtree__S_19,
#line 827 "rtree.m"
  MR_Integer mercury__rtree__D0_20,
#line 827 "rtree.m"
  MR_Integer mercury__rtree__D_21,
#line 827 "rtree.m"
  MR_Word * mercury__rtree__T_22)
#line 827 "rtree.m"
{
#line 835 "rtree.m"
  {
#line 835 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 835 "rtree.m"
#line 835 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T0_13)) {
#line 835 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 835 "rtree.m"
      case (MR_Integer) 0:
#line 834 "rtree.m"
        {
#line 834 "rtree.m"
          MR_Word base;
#line 834 "rtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 834 "rtree.m"
          *mercury__rtree__T_22 = base;
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K0_12;
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T0_13));
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_14;
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_16;
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K_18;
#line 834 "rtree.m"
          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__S_19));
#line 834 "rtree.m"
        }
#line 835 "rtree.m"
        break;
#line 835 "rtree.m"
      case (MR_Integer) 1:
#line 836 "rtree.m"
        {
#line 836 "rtree.m"
          MR_Box mercury__rtree__NK0_28;
#line 836 "rtree.m"
          MR_Word mercury__rtree__NT0_29;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_28 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K0_12);
          }
#line 838 "rtree.m"
          {
#line 838 "rtree.m"
            mercury__rtree__NT0_29 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
          }
#line 839 "rtree.m"
          {
#line 839 "rtree.m"
            MR_Word base;
#line 839 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 839 "rtree.m"
            *mercury__rtree__T_22 = base;
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_28;
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_29));
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_14;
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_16;
#line 839 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
#line 839 "rtree.m"
          }
#line 836 "rtree.m"
        }
#line 835 "rtree.m"
        break;
#line 835 "rtree.m"
      case (MR_Integer) 2:
#line 841 "rtree.m"
        {
#line 841 "rtree.m"
          MR_Box mercury__rtree__NK0_51;
#line 841 "rtree.m"
          MR_Word mercury__rtree__NT0_52;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_51 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K0_12);
          }
#line 843 "rtree.m"
          {
#line 843 "rtree.m"
            mercury__rtree__NT0_52 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
          }
#line 844 "rtree.m"
          {
#line 844 "rtree.m"
            MR_Word base;
#line 844 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 844 "rtree.m"
            *mercury__rtree__T_22 = base;
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__NK0_51;
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__NT0_52));
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_14;
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_15));
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_16;
#line 844 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_17));
#line 844 "rtree.m"
          }
#line 841 "rtree.m"
        }
#line 835 "rtree.m"
        break;
#line 835 "rtree.m"
      case (MR_Integer) 3:
#line 846 "rtree.m"
        {
#line 846 "rtree.m"
          MR_Box mercury__rtree__K3_44;
#line 846 "rtree.m"
          MR_Word mercury__rtree__T3_45;
#line 846 "rtree.m"
          MR_Box mercury__rtree__K4_46;
#line 846 "rtree.m"
          MR_Word mercury__rtree__T4_47;
#line 846 "rtree.m"
          MR_Word mercury__rtree__Result_48;
#line 846 "rtree.m"
          MR_Float mercury__rtree__SizeA_61;
#line 846 "rtree.m"
          MR_Float mercury__rtree__SizeB_62;
#line 846 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeA_63;
#line 846 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeB_64;
#line 846 "rtree.m"
          MR_Float mercury__rtree__IncreaseForA_65;
#line 846 "rtree.m"
          MR_Float mercury__rtree__IncreaseForB_66;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv1_SizeA_61;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv3_SizeB_62;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv5_EnlargedSizeA_63;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv7_EnlargedSizeB_64;

#line 847 "rtree.m"
          {
#line 847 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, &mercury__rtree__K3_44, &mercury__rtree__T3_45, &mercury__rtree__K4_46, &mercury__rtree__T4_47);
          }
#line 50 "rtree.m"
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv1_SizeA_61 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K2_16);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeA_61 = MR_unbox_float(mercury__rtree__conv1_SizeA_61);
#line 50 "rtree.m"
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv3_SizeB_62 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K3_44);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeB_62 = MR_unbox_float(mercury__rtree__conv3_SizeB_62);
#line 72 "rtree.m"
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv5_EnlargedSizeA_63 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K2_16);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeA_63 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_63);
#line 72 "rtree.m"
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv7_EnlargedSizeB_64 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K3_44);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeB_64 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_64);
#line 363 "rtree.m"
          mercury__rtree__IncreaseForA_65 = (mercury__rtree__EnlargedSizeA_63 - mercury__rtree__SizeA_61);
#line 364 "rtree.m"
          mercury__rtree__IncreaseForB_66 = (mercury__rtree__EnlargedSizeB_64 - mercury__rtree__SizeB_62);
#line 365 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_65 < mercury__rtree__IncreaseForB_66);
#line 367 "rtree.m"
          if (mercury__rtree__succeeded)
#line 366 "rtree.m"
            mercury__rtree__Result_48 = (MR_Integer) 0;
#line 367 "rtree.m"
          else
#line 369 "rtree.m"
            {
#line 367 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_65 > mercury__rtree__IncreaseForB_66);
#line 369 "rtree.m"
              if (mercury__rtree__succeeded)
#line 368 "rtree.m"
                mercury__rtree__Result_48 = (MR_Integer) 1;
#line 369 "rtree.m"
              else
#line 371 "rtree.m"
                {
#line 369 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_61 <= mercury__rtree__SizeB_62);
#line 371 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 370 "rtree.m"
                    mercury__rtree__Result_48 = (MR_Integer) 0;
#line 371 "rtree.m"
                  else
#line 372 "rtree.m"
                    mercury__rtree__Result_48 = (MR_Integer) 1;
#line 371 "rtree.m"
                }
#line 369 "rtree.m"
            }
#line 854 "rtree.m"
#line 854 "rtree.m"
          switch (mercury__rtree__Result_48) {
#line 854 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 854 "rtree.m"
            case (MR_Integer) 0:
#line 850 "rtree.m"
              {
#line 850 "rtree.m"
                MR_Box mercury__rtree__K5_49;
#line 850 "rtree.m"
                MR_Word mercury__rtree__T5_50;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K5_49 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K3_44);
                }
#line 852 "rtree.m"
                {
#line 852 "rtree.m"
                  mercury__rtree__T5_50 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T3_45, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
                }
#line 853 "rtree.m"
                {
#line 853 "rtree.m"
                  MR_Word base;
#line 853 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 853 "rtree.m"
                  *mercury__rtree__T_22 = base;
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_14;
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_15));
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_16;
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_17));
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K4_46;
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T4_47));
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_49;
#line 853 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_50));
#line 853 "rtree.m"
                }
#line 850 "rtree.m"
              }
#line 854 "rtree.m"
              break;
#line 854 "rtree.m"
            case (MR_Integer) 1:
#line 855 "rtree.m"
              {
#line 855 "rtree.m"
                MR_Box mercury__rtree__K5_53;
#line 855 "rtree.m"
                MR_Word mercury__rtree__T5_54;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K5_53 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K4_46);
                }
#line 857 "rtree.m"
                {
#line 857 "rtree.m"
                  mercury__rtree__T5_54 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T4_47, mercury__rtree__K_18, mercury__rtree__S_19, mercury__rtree__D0_20, mercury__rtree__D_21);
                }
#line 858 "rtree.m"
                {
#line 858 "rtree.m"
                  MR_Word base;
#line 858 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 858 "rtree.m"
                  *mercury__rtree__T_22 = base;
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__K1_14;
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__T1_15));
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K2_16;
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T2_17));
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K3_44;
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T3_45));
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K5_53;
#line 858 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T5_54));
#line 858 "rtree.m"
                }
#line 855 "rtree.m"
              }
#line 854 "rtree.m"
              break;
#line 854 "rtree.m"
          }
#line 846 "rtree.m"
        }
#line 835 "rtree.m"
        break;
#line 835 "rtree.m"
    }
#line 835 "rtree.m"
  }
#line 827 "rtree.m"
}

#line 792 "rtree.m"
static void MR_CALL 
mercury__rtree__insert_tree_and_split_child2_9_p_0(
#line 792 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_52,
#line 792 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_51,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K0_10,
#line 792 "rtree.m"
  MR_Word mercury__rtree__T0_11,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K1_12,
#line 792 "rtree.m"
  MR_Word mercury__rtree__T1_13,
#line 792 "rtree.m"
  MR_Box mercury__rtree__K_14,
#line 792 "rtree.m"
  MR_Word mercury__rtree__S_15,
#line 792 "rtree.m"
  MR_Integer mercury__rtree__D0_16,
#line 792 "rtree.m"
  MR_Integer mercury__rtree__D_17,
#line 792 "rtree.m"
  MR_Word * mercury__rtree__T_18)
#line 792 "rtree.m"
{
#line 800 "rtree.m"
  {
#line 800 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 800 "rtree.m"
#line 800 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__T0_11)) {
#line 800 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 800 "rtree.m"
      case (MR_Integer) 0:
#line 799 "rtree.m"
        {
#line 799 "rtree.m"
          MR_Word base;
#line 799 "rtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 799 "rtree.m"
          *mercury__rtree__T_18 = base;
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K0_10;
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T0_11));
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_12;
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K_14;
#line 799 "rtree.m"
          MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__S_15));
#line 799 "rtree.m"
        }
#line 800 "rtree.m"
        break;
#line 800 "rtree.m"
      case (MR_Integer) 1:
#line 801 "rtree.m"
        {
#line 801 "rtree.m"
          MR_Box mercury__rtree__NK0_24;
#line 801 "rtree.m"
          MR_Word mercury__rtree__NT0_25;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_24 = mercury__rtree__func_11(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K0_10);
          }
#line 803 "rtree.m"
          {
#line 803 "rtree.m"
            mercury__rtree__NT0_25 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
          }
#line 804 "rtree.m"
          {
#line 804 "rtree.m"
            MR_Word base;
#line 804 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 804 "rtree.m"
            *mercury__rtree__T_18 = base;
#line 804 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_24;
#line 804 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_25));
#line 804 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_12;
#line 804 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 804 "rtree.m"
          }
#line 801 "rtree.m"
        }
#line 800 "rtree.m"
        break;
#line 800 "rtree.m"
      case (MR_Integer) 2:
#line 806 "rtree.m"
        {
#line 806 "rtree.m"
          MR_Box mercury__rtree__NK0_47;
#line 806 "rtree.m"
          MR_Word mercury__rtree__NT0_48;
#line 56 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
          {
#line 56 "rtree.m"
            mercury__rtree__NK0_47 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K0_10);
          }
#line 808 "rtree.m"
          {
#line 808 "rtree.m"
            mercury__rtree__NT0_48 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
          }
#line 809 "rtree.m"
          {
#line 809 "rtree.m"
            MR_Word base;
#line 809 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 809 "rtree.m"
            *mercury__rtree__T_18 = base;
#line 809 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__NK0_47;
#line 809 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__NT0_48));
#line 809 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_12;
#line 809 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_13));
#line 809 "rtree.m"
          }
#line 806 "rtree.m"
        }
#line 800 "rtree.m"
        break;
#line 800 "rtree.m"
      case (MR_Integer) 3:
#line 811 "rtree.m"
        {
#line 811 "rtree.m"
          MR_Box mercury__rtree__K2_40;
#line 811 "rtree.m"
          MR_Word mercury__rtree__T2_41;
#line 811 "rtree.m"
          MR_Box mercury__rtree__K3_42;
#line 811 "rtree.m"
          MR_Word mercury__rtree__T3_43;
#line 811 "rtree.m"
          MR_Word mercury__rtree__Result_44;
#line 811 "rtree.m"
          MR_Float mercury__rtree__SizeA_57;
#line 811 "rtree.m"
          MR_Float mercury__rtree__SizeB_58;
#line 811 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeA_59;
#line 811 "rtree.m"
          MR_Float mercury__rtree__EnlargedSizeB_60;
#line 811 "rtree.m"
          MR_Float mercury__rtree__IncreaseForA_61;
#line 811 "rtree.m"
          MR_Float mercury__rtree__IncreaseForB_62;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv1_SizeA_57;
#line 50 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
          MR_Box mercury__rtree__conv3_SizeB_58;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv5_EnlargedSizeA_59;
#line 72 "rtree.m"
          MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
          MR_Box mercury__rtree__conv7_EnlargedSizeB_60;

#line 812 "rtree.m"
          {
#line 812 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, &mercury__rtree__K2_40, &mercury__rtree__T2_41, &mercury__rtree__K3_42, &mercury__rtree__T3_43);
          }
#line 50 "rtree.m"
          mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv1_SizeA_57 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K2_40);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeA_57 = MR_unbox_float(mercury__rtree__conv1_SizeA_57);
#line 50 "rtree.m"
          mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
          {
#line 50 "rtree.m"
            mercury__rtree__conv3_SizeB_58 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K3_42);
          }
#line 50 "rtree.m"
          mercury__rtree__SizeB_58 = MR_unbox_float(mercury__rtree__conv3_SizeB_58);
#line 72 "rtree.m"
          mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv5_EnlargedSizeA_59 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K2_40);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeA_59 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_59);
#line 72 "rtree.m"
          mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
          {
#line 72 "rtree.m"
            mercury__rtree__conv7_EnlargedSizeB_60 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K3_42);
          }
#line 72 "rtree.m"
          mercury__rtree__EnlargedSizeB_60 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_60);
#line 363 "rtree.m"
          mercury__rtree__IncreaseForA_61 = (mercury__rtree__EnlargedSizeA_59 - mercury__rtree__SizeA_57);
#line 364 "rtree.m"
          mercury__rtree__IncreaseForB_62 = (mercury__rtree__EnlargedSizeB_60 - mercury__rtree__SizeB_58);
#line 365 "rtree.m"
          mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_61 < mercury__rtree__IncreaseForB_62);
#line 367 "rtree.m"
          if (mercury__rtree__succeeded)
#line 366 "rtree.m"
            mercury__rtree__Result_44 = (MR_Integer) 0;
#line 367 "rtree.m"
          else
#line 369 "rtree.m"
            {
#line 367 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_61 > mercury__rtree__IncreaseForB_62);
#line 369 "rtree.m"
              if (mercury__rtree__succeeded)
#line 368 "rtree.m"
                mercury__rtree__Result_44 = (MR_Integer) 1;
#line 369 "rtree.m"
              else
#line 371 "rtree.m"
                {
#line 369 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__SizeA_57 <= mercury__rtree__SizeB_58);
#line 371 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 370 "rtree.m"
                    mercury__rtree__Result_44 = (MR_Integer) 0;
#line 371 "rtree.m"
                  else
#line 372 "rtree.m"
                    mercury__rtree__Result_44 = (MR_Integer) 1;
#line 371 "rtree.m"
                }
#line 369 "rtree.m"
            }
#line 819 "rtree.m"
#line 819 "rtree.m"
          switch (mercury__rtree__Result_44) {
#line 819 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 819 "rtree.m"
            case (MR_Integer) 0:
#line 815 "rtree.m"
              {
#line 815 "rtree.m"
                MR_Box mercury__rtree__K4_45;
#line 815 "rtree.m"
                MR_Word mercury__rtree__T4_46;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K4_45 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K2_40);
                }
#line 817 "rtree.m"
                {
#line 817 "rtree.m"
                  mercury__rtree__T4_46 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T2_41, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
                }
#line 818 "rtree.m"
                {
#line 818 "rtree.m"
                  MR_Word base;
#line 818 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 818 "rtree.m"
                  *mercury__rtree__T_18 = base;
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_12;
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K3_42;
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T3_43));
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_45;
#line 818 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_46));
#line 818 "rtree.m"
                }
#line 815 "rtree.m"
              }
#line 819 "rtree.m"
              break;
#line 819 "rtree.m"
            case (MR_Integer) 1:
#line 820 "rtree.m"
              {
#line 820 "rtree.m"
                MR_Box mercury__rtree__K4_49;
#line 820 "rtree.m"
                MR_Word mercury__rtree__T4_50;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K4_49 = mercury__rtree__func_9(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K3_42);
                }
#line 822 "rtree.m"
                {
#line 822 "rtree.m"
                  mercury__rtree__T4_50 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_52, mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T3_43, mercury__rtree__K_14, mercury__rtree__S_15, mercury__rtree__D0_16, mercury__rtree__D_17);
                }
#line 823 "rtree.m"
                {
#line 823 "rtree.m"
                  MR_Word base;
#line 823 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 823 "rtree.m"
                  *mercury__rtree__T_18 = base;
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_12;
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_13));
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_40;
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_41));
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K4_49;
#line 823 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T4_50));
#line 823 "rtree.m"
                }
#line 820 "rtree.m"
              }
#line 819 "rtree.m"
              break;
#line 819 "rtree.m"
          }
#line 811 "rtree.m"
        }
#line 800 "rtree.m"
        break;
#line 800 "rtree.m"
    }
#line 800 "rtree.m"
  }
#line 792 "rtree.m"
}

#line 749 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__insert_tree_5_f_0(
#line 749 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_68,
#line 749 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_67,
#line 749 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 749 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 749 "rtree.m"
  MR_Word mercury__rtree__S_3,
#line 749 "rtree.m"
  MR_Integer mercury__rtree__D0_4,
#line 749 "rtree.m"
  MR_Integer mercury__rtree__D_5)
#line 749 "rtree.m"
{
#line 752 "rtree.m"
  while (MR_TRUE)
#line 752 "rtree.m"
    {
#line 752 "rtree.m"
      /* tailcall optimized into a loop */
#line 752 "rtree.m"
      {
#line 752 "rtree.m"
        MR_bool mercury__rtree__succeeded;
#line 752 "rtree.m"
        MR_Word mercury__rtree__HeadVar__6_6;

#line 752 "rtree.m"
#line 752 "rtree.m"
        switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 752 "rtree.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 752 "rtree.m"
          case (MR_Integer) 0:
#line 752 "rtree.m"
            {
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeInfo_70_70;
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeCtorInfo_71_71 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_rtree_2_2;
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeInfo_72_72;
#line 753 "rtree.m"
              MR_Box mercury__rtree__conv0_HeadVar__6_6;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__rtree__insert_tree_5_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__rtree__TypeClassInfo_for_region_67 ;
	Index =  (MR_Integer) 1 ;
		{
#line 134 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 16124 "rtree.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtree__TypeInfo_70_70  = TypeInfo;
#line 134 "private_builtin.opt"
}
#line 16131 "rtree.c"
              {
#line 16133 "rtree.c"
                mercury__rtree__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 16135 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_71_71));
#line 16137 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 1) = ((MR_Box) (mercury__rtree__TypeInfo_70_70));
#line 16139 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_68));
#line 16141 "rtree.c"
              }
#line 753 "rtree.m"
              {
#line 753 "rtree.m"
                mercury__rtree__conv0_HeadVar__6_6 = mercury__require__func_error_1_f_0(mercury__rtree__TypeInfo_72_72, (MR_String) "insert_tree: leaf unexpected");
              }
#line 753 "rtree.m"
              mercury__rtree__HeadVar__6_6 = ((MR_Word) mercury__rtree__conv0_HeadVar__6_6);
#line 752 "rtree.m"
            }
#line 752 "rtree.m"
            break;
#line 752 "rtree.m"
          case (MR_Integer) 1:
#line 754 "rtree.m"
            {
#line 754 "rtree.m"
              MR_Box mercury__rtree__K0_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 754 "rtree.m"
              MR_Word mercury__rtree__T0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 754 "rtree.m"
              MR_Box mercury__rtree__K1_15 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 754 "rtree.m"
              MR_Word mercury__rtree__T1_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));

#line 755 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__D0_4 == mercury__rtree__D_5);
#line 757 "rtree.m"
              if (mercury__rtree__succeeded)
#line 756 "rtree.m"
                {
#line 756 "rtree.m"
                  mercury__rtree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 0) = mercury__rtree__K0_13;
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 1) = ((MR_Box) (mercury__rtree__T0_14));
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 2) = mercury__rtree__K1_15;
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 3) = ((MR_Box) (mercury__rtree__T1_16));
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 4) = mercury__rtree__K_2;
#line 756 "rtree.m"
                  MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__6_6, 5) = ((MR_Box) (mercury__rtree__S_3));
#line 756 "rtree.m"
                }
#line 757 "rtree.m"
              else
#line 758 "rtree.m"
                {
#line 758 "rtree.m"
                  MR_Word mercury__rtree__Result_22;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__SizeA_77;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__SizeB_78;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__EnlargedSizeA_79;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__EnlargedSizeB_80;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__IncreaseForA_81;
#line 758 "rtree.m"
                  MR_Float mercury__rtree__IncreaseForB_82;
#line 50 "rtree.m"
                  MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
                  MR_Box mercury__rtree__conv2_SizeA_77;
#line 50 "rtree.m"
                  MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box);
#line 50 "rtree.m"
                  MR_Box mercury__rtree__conv4_SizeB_78;
#line 72 "rtree.m"
                  MR_Box MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
                  MR_Box mercury__rtree__conv6_EnlargedSizeA_79;
#line 72 "rtree.m"
                  MR_Box MR_CALL (* mercury__rtree__func_7)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
                  MR_Box mercury__rtree__conv8_EnlargedSizeB_80;

#line 50 "rtree.m"
                  {
#line 50 "rtree.m"
                    mercury__rtree__conv2_SizeA_77 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K0_13);
                  }
#line 50 "rtree.m"
                  mercury__rtree__SizeA_77 = MR_unbox_float(mercury__rtree__conv2_SizeA_77);
#line 50 "rtree.m"
                  mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
                  {
#line 50 "rtree.m"
                    mercury__rtree__conv4_SizeB_78 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K1_15);
                  }
#line 50 "rtree.m"
                  mercury__rtree__SizeB_78 = MR_unbox_float(mercury__rtree__conv4_SizeB_78);
#line 72 "rtree.m"
                  mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
                  {
#line 72 "rtree.m"
                    mercury__rtree__conv6_EnlargedSizeA_79 = mercury__rtree__func_5(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K0_13);
                  }
#line 72 "rtree.m"
                  mercury__rtree__EnlargedSizeA_79 = MR_unbox_float(mercury__rtree__conv6_EnlargedSizeA_79);
#line 72 "rtree.m"
                  mercury__rtree__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
                  {
#line 72 "rtree.m"
                    mercury__rtree__conv8_EnlargedSizeB_80 = mercury__rtree__func_7(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K1_15);
                  }
#line 72 "rtree.m"
                  mercury__rtree__EnlargedSizeB_80 = MR_unbox_float(mercury__rtree__conv8_EnlargedSizeB_80);
#line 363 "rtree.m"
                  mercury__rtree__IncreaseForA_81 = (mercury__rtree__EnlargedSizeA_79 - mercury__rtree__SizeA_77);
#line 364 "rtree.m"
                  mercury__rtree__IncreaseForB_82 = (mercury__rtree__EnlargedSizeB_80 - mercury__rtree__SizeB_78);
#line 365 "rtree.m"
                  mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_81 < mercury__rtree__IncreaseForB_82);
#line 367 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 366 "rtree.m"
                    mercury__rtree__Result_22 = (MR_Integer) 0;
#line 367 "rtree.m"
                  else
#line 369 "rtree.m"
                    {
#line 367 "rtree.m"
                      mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_81 > mercury__rtree__IncreaseForB_82);
#line 369 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 368 "rtree.m"
                        mercury__rtree__Result_22 = (MR_Integer) 1;
#line 369 "rtree.m"
                      else
#line 371 "rtree.m"
                        {
#line 369 "rtree.m"
                          mercury__rtree__succeeded = (mercury__rtree__SizeA_77 <= mercury__rtree__SizeB_78);
#line 371 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 370 "rtree.m"
                            mercury__rtree__Result_22 = (MR_Integer) 0;
#line 371 "rtree.m"
                          else
#line 372 "rtree.m"
                            mercury__rtree__Result_22 = (MR_Integer) 1;
#line 371 "rtree.m"
                        }
#line 369 "rtree.m"
                    }
#line 762 "rtree.m"
#line 762 "rtree.m"
                  switch (mercury__rtree__Result_22) {
#line 762 "rtree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 762 "rtree.m"
                    case (MR_Integer) 0:
#line 760 "rtree.m"
                      {
#line 760 "rtree.m"
                        MR_Integer mercury__rtree__V_25_25 = (mercury__rtree__D0_4 + (MR_Integer) 1);

#line 761 "rtree.m"
                        {
#line 761 "rtree.m"
                          mercury__rtree__insert_tree_and_split_child2_9_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K0_13, mercury__rtree__T0_14, mercury__rtree__K1_15, mercury__rtree__T1_16, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__V_25_25, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
#line 760 "rtree.m"
                      }
#line 762 "rtree.m"
                      break;
#line 762 "rtree.m"
                    case (MR_Integer) 1:
#line 763 "rtree.m"
                      {
#line 763 "rtree.m"
                        MR_Integer mercury__rtree__V_23_23 = (mercury__rtree__D0_4 + (MR_Integer) 1);

#line 764 "rtree.m"
                        {
#line 764 "rtree.m"
                          mercury__rtree__insert_tree_and_split_child2_9_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K1_15, mercury__rtree__T1_16, mercury__rtree__K0_13, mercury__rtree__T0_14, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__V_23_23, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
#line 763 "rtree.m"
                      }
#line 762 "rtree.m"
                      break;
#line 762 "rtree.m"
                  }
#line 758 "rtree.m"
                }
#line 754 "rtree.m"
            }
#line 752 "rtree.m"
            break;
#line 752 "rtree.m"
          case (MR_Integer) 2:
#line 767 "rtree.m"
            {
#line 767 "rtree.m"
              MR_Box mercury__rtree__K0_27 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 767 "rtree.m"
              MR_Word mercury__rtree__T0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 767 "rtree.m"
              MR_Box mercury__rtree__K1_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 767 "rtree.m"
              MR_Word mercury__rtree__T1_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 767 "rtree.m"
              MR_Box mercury__rtree__K2_31 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 767 "rtree.m"
              MR_Word mercury__rtree__T2_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));

#line 768 "rtree.m"
              mercury__rtree__succeeded = (mercury__rtree__D0_4 == mercury__rtree__D_5);
#line 770 "rtree.m"
              if (mercury__rtree__succeeded)
#line 769 "rtree.m"
                {
#line 769 "rtree.m"
                  mercury__rtree__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 0) = mercury__rtree__K0_27;
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 1) = ((MR_Box) (mercury__rtree__T0_28));
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 2) = mercury__rtree__K1_29;
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 3) = ((MR_Box) (mercury__rtree__T1_30));
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 4) = mercury__rtree__K2_31;
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 5) = ((MR_Box) (mercury__rtree__T2_32));
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 6) = mercury__rtree__K_2;
#line 769 "rtree.m"
                  MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__6_6, 7) = ((MR_Box) (mercury__rtree__S_3));
#line 769 "rtree.m"
                }
#line 770 "rtree.m"
              else
#line 771 "rtree.m"
                {
#line 771 "rtree.m"
                  MR_Word mercury__rtree__Result_38;

#line 771 "rtree.m"
                  {
#line 771 "rtree.m"
                    mercury__rtree__Result_38 = mercury__rtree__choose_subtree_4_f_0(mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K_2, mercury__rtree__K0_27, mercury__rtree__K1_29, mercury__rtree__K2_31);
                  }
#line 776 "rtree.m"
#line 776 "rtree.m"
                  switch (mercury__rtree__Result_38) {
#line 776 "rtree.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 776 "rtree.m"
                    case (MR_Integer) 0:
#line 773 "rtree.m"
                      {
#line 773 "rtree.m"
                        MR_Integer mercury__rtree__V_43_43 = (mercury__rtree__D0_4 + (MR_Integer) 1);

#line 774 "rtree.m"
                        {
#line 774 "rtree.m"
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__V_43_43, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
#line 773 "rtree.m"
                      }
#line 776 "rtree.m"
                      break;
#line 776 "rtree.m"
                    case (MR_Integer) 1:
#line 777 "rtree.m"
                      {
#line 777 "rtree.m"
                        MR_Integer mercury__rtree__V_41_41 = (mercury__rtree__D0_4 + (MR_Integer) 1);

#line 778 "rtree.m"
                        {
#line 778 "rtree.m"
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__V_41_41, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
#line 777 "rtree.m"
                      }
#line 776 "rtree.m"
                      break;
#line 776 "rtree.m"
                    case (MR_Integer) 2:
#line 781 "rtree.m"
                      {
#line 781 "rtree.m"
                        MR_Integer mercury__rtree__V_39_39 = (mercury__rtree__D0_4 + (MR_Integer) 1);

#line 782 "rtree.m"
                        {
#line 782 "rtree.m"
                          mercury__rtree__insert_tree_and_split_child3_11_p_0(mercury__rtree__TypeInfo_for_V_68, mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__K2_31, mercury__rtree__T2_32, mercury__rtree__K0_27, mercury__rtree__T0_28, mercury__rtree__K1_29, mercury__rtree__T1_30, mercury__rtree__K_2, mercury__rtree__S_3, mercury__rtree__V_39_39, mercury__rtree__D_5, &mercury__rtree__HeadVar__6_6);
                        }
#line 781 "rtree.m"
                      }
#line 776 "rtree.m"
                      break;
#line 776 "rtree.m"
                  }
#line 771 "rtree.m"
                }
#line 767 "rtree.m"
            }
#line 752 "rtree.m"
            break;
#line 752 "rtree.m"
          case (MR_Integer) 3:
#line 786 "rtree.m"
            {
#line 786 "rtree.m"
              MR_Box mercury__rtree__K0_59;
#line 786 "rtree.m"
              MR_Word mercury__rtree__T0_60;
#line 786 "rtree.m"
              MR_Box mercury__rtree__K1_61;
#line 786 "rtree.m"
              MR_Word mercury__rtree__T1_62;
#line 786 "rtree.m"
              MR_Word mercury__rtree__NRT_63;
#line 786 "rtree.m"
              MR_Integer mercury__rtree__V_65_65;

#line 788 "rtree.m"
              {
#line 788 "rtree.m"
                mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_67, mercury__rtree__HeadVar__1_1, &mercury__rtree__K0_59, &mercury__rtree__T0_60, &mercury__rtree__K1_61, &mercury__rtree__T1_62);
              }
#line 789 "rtree.m"
              {
#line 789 "rtree.m"
                mercury__rtree__NRT_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 789 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 0) = mercury__rtree__K0_59;
#line 789 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 1) = ((MR_Box) (mercury__rtree__T0_60));
#line 789 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 2) = mercury__rtree__K1_61;
#line 789 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__NRT_63, 3) = ((MR_Box) (mercury__rtree__T1_62));
#line 789 "rtree.m"
              }
#line 790 "rtree.m"
              mercury__rtree__V_65_65 = (mercury__rtree__D_5 + (MR_Integer) 1);
#line 790 "rtree.m"
              /* direct tailcall eliminated */
#line 790 "rtree.m"
              {
#line 790 "rtree.m"
                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__NRT_63;
#line 790 "rtree.m"
                MR_Integer mercury__rtree__D__tmp_copy_5 = mercury__rtree__V_65_65;

#line 790 "rtree.m"
                mercury__rtree__D_5 = mercury__rtree__D__tmp_copy_5;
#line 790 "rtree.m"
                mercury__rtree__D0_4 = (MR_Integer) 1;
#line 790 "rtree.m"
                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 790 "rtree.m"
              }
#line 790 "rtree.m"
              continue;
#line 786 "rtree.m"
            }
#line 752 "rtree.m"
            break;
#line 752 "rtree.m"
        }
#line 752 "rtree.m"
        return mercury__rtree__HeadVar__6_6;
#line 752 "rtree.m"
      }
#line 752 "rtree.m"
      break;
#line 752 "rtree.m"
    }
#line 749 "rtree.m"
}

#line 734 "rtree.m"
static void MR_CALL 
mercury__rtree__reinsert_deleted_subtrees_4_p_0(
#line 734 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_31,
#line 734 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_30,
#line 734 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 734 "rtree.m"
  MR_Integer mercury__rtree__Depth_2,
#line 734 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 734 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__4_4)
#line 734 "rtree.m"
{
#line 737 "rtree.m"
  while (MR_TRUE)
#line 737 "rtree.m"
    {
#line 737 "rtree.m"
      /* tailcall optimized into a loop */
#line 737 "rtree.m"
      {
#line 737 "rtree.m"
        MR_bool mercury__rtree__succeeded;

#line 737 "rtree.m"
        if ((mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "rtree.m"
          *mercury__rtree__HeadVar__4_4 = mercury__rtree__HeadVar__3_3;
#line 737 "rtree.m"
        else
#line 738 "rtree.m"
          {
#line 738 "rtree.m"
            MR_Box mercury__rtree__K_9;
#line 738 "rtree.m"
            MR_Word mercury__rtree__T_10;
#line 738 "rtree.m"
            MR_Word mercury__rtree__DLs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 738 "rtree.m"
            MR_Word mercury__rtree__T1_15;
#line 738 "rtree.m"
            MR_Word mercury__rtree__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 740 "rtree.m"
            MR_Box mercury__rtree__V_16_16;
#line 740 "rtree.m"
            MR_Word mercury__rtree__V_17_17;
#line 740 "rtree.m"
            MR_Box mercury__rtree__V_18_18;
#line 740 "rtree.m"
            MR_Word mercury__rtree__V_19_19;
#line 740 "rtree.m"
            MR_Box mercury__rtree__V_20_20;
#line 740 "rtree.m"
            MR_Word mercury__rtree__V_21_21;
#line 740 "rtree.m"
            MR_Box mercury__rtree__V_22_22;
#line 740 "rtree.m"
            MR_Word mercury__rtree__V_23_23;

#line 738 "rtree.m"
            mercury__rtree__K_9 = (MR_hl_field(MR_mktag(0), mercury__rtree__V_24_24, (MR_Integer) 0));
#line 738 "rtree.m"
            mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__V_24_24, (MR_Integer) 1)));
#line 739 "rtree.m"
            {
#line 739 "rtree.m"
              mercury__rtree__T1_15 = mercury__rtree__insert_tree_5_f_0(mercury__rtree__TypeInfo_for_V_31, mercury__rtree__TypeClassInfo_for_region_30, mercury__rtree__HeadVar__3_3, mercury__rtree__K_9, mercury__rtree__T_10, (MR_Integer) 1, mercury__rtree__Depth_2);
            }
#line 740 "rtree.m"
            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)));
#line 740 "rtree.m"
            if (mercury__rtree__succeeded)
#line 740 "rtree.m"
              {
#line 740 "rtree.m"
                mercury__rtree__V_16_16 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 740 "rtree.m"
                mercury__rtree__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 1)));
#line 740 "rtree.m"
                mercury__rtree__V_18_18 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 2));
#line 740 "rtree.m"
                mercury__rtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 3)));
#line 740 "rtree.m"
                mercury__rtree__V_20_20 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 4));
#line 740 "rtree.m"
                mercury__rtree__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 5)));
#line 740 "rtree.m"
                mercury__rtree__V_22_22 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 6));
#line 740 "rtree.m"
                mercury__rtree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__3_3, (MR_Integer) 7)));
#line 741 "rtree.m"
                {
#line 741 "rtree.m"
                  MR_Integer mercury__rtree__V_26_26 = (mercury__rtree__Depth_2 + (MR_Integer) 2);

#line 741 "rtree.m"
                  /* direct tailcall eliminated */
#line 741 "rtree.m"
                  {
#line 741 "rtree.m"
                    MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__DLs_11;
#line 741 "rtree.m"
                    MR_Integer mercury__rtree__Depth__tmp_copy_2 = mercury__rtree__V_26_26;
#line 741 "rtree.m"
                    MR_Word mercury__rtree__HeadVar__3__tmp_copy_3 = mercury__rtree__T1_15;

#line 741 "rtree.m"
                    mercury__rtree__HeadVar__3_3 = mercury__rtree__HeadVar__3__tmp_copy_3;
#line 741 "rtree.m"
                    mercury__rtree__Depth_2 = mercury__rtree__Depth__tmp_copy_2;
#line 741 "rtree.m"
                    mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 741 "rtree.m"
                  }
#line 741 "rtree.m"
                  continue;
#line 741 "rtree.m"
                }
#line 740 "rtree.m"
              }
#line 740 "rtree.m"
            else
#line 743 "rtree.m"
              {
#line 743 "rtree.m"
                MR_Integer mercury__rtree__V_28_28 = (mercury__rtree__Depth_2 + (MR_Integer) 1);

#line 743 "rtree.m"
                /* direct tailcall eliminated */
#line 743 "rtree.m"
                {
#line 743 "rtree.m"
                  MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__DLs_11;
#line 743 "rtree.m"
                  MR_Integer mercury__rtree__Depth__tmp_copy_2 = mercury__rtree__V_28_28;
#line 743 "rtree.m"
                  MR_Word mercury__rtree__HeadVar__3__tmp_copy_3 = mercury__rtree__T1_15;

#line 743 "rtree.m"
                  mercury__rtree__HeadVar__3_3 = mercury__rtree__HeadVar__3__tmp_copy_3;
#line 743 "rtree.m"
                  mercury__rtree__Depth_2 = mercury__rtree__Depth__tmp_copy_2;
#line 743 "rtree.m"
                  mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 743 "rtree.m"
                }
#line 743 "rtree.m"
                continue;
#line 743 "rtree.m"
              }
#line 738 "rtree.m"
          }
#line 737 "rtree.m"
      }
#line 737 "rtree.m"
      break;
#line 737 "rtree.m"
    }
#line 734 "rtree.m"
}

#line 707 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion4_14_p_0(
#line 707 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_43,
#line 707 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_42,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K0_15,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T0_16,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K1_17,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T1_18,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K2_19,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T2_20,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K3_21,
#line 707 "rtree.m"
  MR_Word mercury__rtree__T3_22,
#line 707 "rtree.m"
  MR_Box mercury__rtree__K_23,
#line 707 "rtree.m"
  MR_Box mercury__rtree__V_24,
#line 707 "rtree.m"
  MR_Integer mercury__rtree__D_25,
#line 707 "rtree.m"
  MR_Box * mercury__rtree__DK_26,
#line 707 "rtree.m"
  MR_Word * mercury__rtree__DT_27,
#line 707 "rtree.m"
  MR_Word * mercury__rtree__DI_28)
#line 707 "rtree.m"
{
#line 711 "rtree.m"
  {
#line 711 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 711 "rtree.m"
    MR_Box mercury__rtree__DK0_29;
#line 711 "rtree.m"
    MR_Word mercury__rtree__DT0_30;
#line 711 "rtree.m"
    MR_Word mercury__rtree__DI0_31;
#line 711 "rtree.m"
    MR_Integer mercury__rtree__V_38_38;
#line 711 "rtree.m"
    MR_Integer mercury__rtree__V_39_39;
#line 44 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
    {
#line 44 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K_23, mercury__rtree__K0_15);
    }
#line 711 "rtree.m"
    if (mercury__rtree__succeeded)
#line 711 "rtree.m"
      {
#line 713 "rtree.m"
        mercury__rtree__V_39_39 = (MR_Integer) 1;
#line 713 "rtree.m"
        mercury__rtree__V_38_38 = (mercury__rtree__D_25 + mercury__rtree__V_39_39);
#line 713 "rtree.m"
        {
#line 713 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_43, mercury__rtree__TypeClassInfo_for_region_42, mercury__rtree__T0_16, mercury__rtree__K_23, mercury__rtree__V_24, mercury__rtree__V_38_38, &mercury__rtree__DK0_29, &mercury__rtree__DT0_30, &mercury__rtree__DI0_31);
        }
#line 711 "rtree.m"
        if (mercury__rtree__succeeded)
#line 711 "rtree.m"
          {
#line 720 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__DI0_31)) == (MR_mktag((MR_Integer) 0))))
#line 715 "rtree.m"
              {
#line 715 "rtree.m"
                MR_Word mercury__rtree__DLs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__DI0_31, (MR_Integer) 0)));
#line 715 "rtree.m"
                MR_Box mercury__rtree__K12_33;
#line 715 "rtree.m"
                MR_Integer mercury__rtree__V_40_40 = (mercury__rtree__D_25 + (MR_Integer) 1);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);

#line 716 "rtree.m"
                {
#line 716 "rtree.m"
                  MR_Word base;
#line 716 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "rtree.m"
                  *mercury__rtree__DI_28 = base;
#line 716 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtree__V_40_40));
#line 716 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DLs_32));
#line 716 "rtree.m"
                }
#line 717 "rtree.m"
                {
#line 717 "rtree.m"
                  MR_Word base;
#line 717 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 717 "rtree.m"
                  *mercury__rtree__DT_27 = base;
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__K1_17;
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__T1_18));
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K2_19;
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T2_20));
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K3_21;
#line 717 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T3_22));
#line 717 "rtree.m"
                }
#line 56 "rtree.m"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K12_33 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K1_17, mercury__rtree__K2_19);
                }
#line 56 "rtree.m"
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  *mercury__rtree__DK_26 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K3_21, mercury__rtree__K12_33);
                }
#line 715 "rtree.m"
              }
#line 720 "rtree.m"
            else
#line 721 "rtree.m"
              {
#line 721 "rtree.m"
                MR_Box mercury__rtree__TK_36;
#line 721 "rtree.m"
                MR_Box mercury__rtree__K23_37;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box);

#line 722 "rtree.m"
                *mercury__rtree__DI_28 = mercury__rtree__DI0_31;
#line 723 "rtree.m"
                {
#line 723 "rtree.m"
                  MR_Word base;
#line 723 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 723 "rtree.m"
                  *mercury__rtree__DT_27 = base;
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 0) = mercury__rtree__DK0_29;
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mercury__rtree__DT0_30));
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 2) = mercury__rtree__K1_17;
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mercury__rtree__T1_18));
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 4) = mercury__rtree__K2_19;
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mercury__rtree__T2_20));
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 6) = mercury__rtree__K3_21;
#line 723 "rtree.m"
                  MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mercury__rtree__T3_22));
#line 723 "rtree.m"
                }
#line 56 "rtree.m"
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__TK_36 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__DK0_29, mercury__rtree__K1_17);
                }
#line 56 "rtree.m"
                mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__K23_37 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K2_19, mercury__rtree__K3_21);
                }
#line 56 "rtree.m"
                mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  *mercury__rtree__DK_26 = mercury__rtree__func_5(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__TK_36, mercury__rtree__K23_37);
                }
#line 721 "rtree.m"
              }
#line 720 "rtree.m"
            mercury__rtree__succeeded = MR_TRUE;
#line 711 "rtree.m"
          }
#line 711 "rtree.m"
      }
#line 711 "rtree.m"
    return mercury__rtree__succeeded;
#line 711 "rtree.m"
  }
#line 707 "rtree.m"
}

#line 687 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion3_12_p_0(
#line 687 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_37,
#line 687 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_36,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K0_13,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T0_14,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K1_15,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T1_16,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K2_17,
#line 687 "rtree.m"
  MR_Word mercury__rtree__T2_18,
#line 687 "rtree.m"
  MR_Box mercury__rtree__K_19,
#line 687 "rtree.m"
  MR_Box mercury__rtree__V_20,
#line 687 "rtree.m"
  MR_Integer mercury__rtree__Depth_21,
#line 687 "rtree.m"
  MR_Box * mercury__rtree__DK_22,
#line 687 "rtree.m"
  MR_Word * mercury__rtree__DT_23,
#line 687 "rtree.m"
  MR_Word * mercury__rtree__DI_24)
#line 687 "rtree.m"
{
#line 691 "rtree.m"
  {
#line 691 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 691 "rtree.m"
    MR_Box mercury__rtree__DK0_25;
#line 691 "rtree.m"
    MR_Word mercury__rtree__DT0_26;
#line 691 "rtree.m"
    MR_Word mercury__rtree__DI0_27;
#line 691 "rtree.m"
    MR_Integer mercury__rtree__V_32_32;
#line 691 "rtree.m"
    MR_Integer mercury__rtree__V_33_33;
#line 44 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
    {
#line 44 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__K_19, mercury__rtree__K0_13);
    }
#line 691 "rtree.m"
    if (mercury__rtree__succeeded)
#line 691 "rtree.m"
      {
#line 693 "rtree.m"
        mercury__rtree__V_33_33 = (MR_Integer) 1;
#line 693 "rtree.m"
        mercury__rtree__V_32_32 = (mercury__rtree__Depth_21 + mercury__rtree__V_33_33);
#line 693 "rtree.m"
        {
#line 693 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_37, mercury__rtree__TypeClassInfo_for_region_36, mercury__rtree__T0_14, mercury__rtree__K_19, mercury__rtree__V_20, mercury__rtree__V_32_32, &mercury__rtree__DK0_25, &mercury__rtree__DT0_26, &mercury__rtree__DI0_27);
        }
#line 691 "rtree.m"
        if (mercury__rtree__succeeded)
#line 691 "rtree.m"
          {
#line 699 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__DI0_27)) == (MR_mktag((MR_Integer) 0))))
#line 695 "rtree.m"
              {
#line 695 "rtree.m"
                MR_Word mercury__rtree__DLs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__DI0_27, (MR_Integer) 0)));
#line 695 "rtree.m"
                MR_Integer mercury__rtree__V_34_34 = (mercury__rtree__Depth_21 + (MR_Integer) 1);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);

#line 696 "rtree.m"
                {
#line 696 "rtree.m"
                  MR_Word base;
#line 696 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "rtree.m"
                  *mercury__rtree__DI_24 = base;
#line 696 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__rtree__V_34_34));
#line 696 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DLs_28));
#line 696 "rtree.m"
                }
#line 697 "rtree.m"
                {
#line 697 "rtree.m"
                  MR_Word base;
#line 697 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 697 "rtree.m"
                  *mercury__rtree__DT_23 = base;
#line 697 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K1_15;
#line 697 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__T1_16));
#line 697 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K2_17;
#line 697 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T2_18));
#line 697 "rtree.m"
                }
#line 56 "rtree.m"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  *mercury__rtree__DK_22 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__K1_15, mercury__rtree__K2_17);
                }
#line 695 "rtree.m"
              }
#line 699 "rtree.m"
            else
#line 700 "rtree.m"
              {
#line 700 "rtree.m"
                MR_Box mercury__rtree__TK_31;
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box);

#line 701 "rtree.m"
                *mercury__rtree__DI_24 = mercury__rtree__DI0_27;
#line 702 "rtree.m"
                {
#line 702 "rtree.m"
                  MR_Word base;
#line 702 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 702 "rtree.m"
                  *mercury__rtree__DT_23 = base;
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rtree__DK0_25;
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__rtree__DT0_26));
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 2) = mercury__rtree__K1_15;
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rtree__T1_16));
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 4) = mercury__rtree__K2_17;
#line 702 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (mercury__rtree__T2_18));
#line 702 "rtree.m"
                }
#line 56 "rtree.m"
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  mercury__rtree__TK_31 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__DK0_25, mercury__rtree__K1_15);
                }
#line 56 "rtree.m"
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  *mercury__rtree__DK_22 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__TK_31, mercury__rtree__K2_17);
                }
#line 700 "rtree.m"
              }
#line 699 "rtree.m"
            mercury__rtree__succeeded = MR_TRUE;
#line 691 "rtree.m"
          }
#line 691 "rtree.m"
      }
#line 691 "rtree.m"
    return mercury__rtree__succeeded;
#line 691 "rtree.m"
  }
#line 687 "rtree.m"
}

#line 667 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__try_deletion2_10_p_0(
#line 667 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_32,
#line 667 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_31,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K0_11,
#line 667 "rtree.m"
  MR_Word mercury__rtree__T0_12,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K1_13,
#line 667 "rtree.m"
  MR_Word mercury__rtree__T1_14,
#line 667 "rtree.m"
  MR_Box mercury__rtree__K_15,
#line 667 "rtree.m"
  MR_Box mercury__rtree__V_16,
#line 667 "rtree.m"
  MR_Integer mercury__rtree__Depth_17,
#line 667 "rtree.m"
  MR_Box * mercury__rtree__DK_18,
#line 667 "rtree.m"
  MR_Word * mercury__rtree__DT_19,
#line 667 "rtree.m"
  MR_Word * mercury__rtree__Info_20)
#line 667 "rtree.m"
{
#line 671 "rtree.m"
  {
#line 671 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 671 "rtree.m"
    MR_Box mercury__rtree__DK0_21;
#line 671 "rtree.m"
    MR_Word mercury__rtree__DT0_22;
#line 671 "rtree.m"
    MR_Word mercury__rtree__Info0_23;
#line 671 "rtree.m"
    MR_Integer mercury__rtree__V_28_28;
#line 671 "rtree.m"
    MR_Integer mercury__rtree__V_29_29;
#line 44 "rtree.m"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
    {
#line 44 "rtree.m"
      mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_31), mercury__rtree__K_15, mercury__rtree__K0_11);
    }
#line 671 "rtree.m"
    if (mercury__rtree__succeeded)
#line 671 "rtree.m"
      {
#line 673 "rtree.m"
        mercury__rtree__V_29_29 = (MR_Integer) 1;
#line 673 "rtree.m"
        mercury__rtree__V_28_28 = (mercury__rtree__Depth_17 + mercury__rtree__V_29_29);
#line 673 "rtree.m"
        {
#line 673 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_32, mercury__rtree__TypeClassInfo_for_region_31, mercury__rtree__T0_12, mercury__rtree__K_15, mercury__rtree__V_16, mercury__rtree__V_28_28, &mercury__rtree__DK0_21, &mercury__rtree__DT0_22, &mercury__rtree__Info0_23);
        }
#line 671 "rtree.m"
        if (mercury__rtree__succeeded)
#line 671 "rtree.m"
          {
#line 680 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__Info0_23)) == (MR_mktag((MR_Integer) 0))))
#line 675 "rtree.m"
              {
#line 675 "rtree.m"
                MR_Word mercury__rtree__DLs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Info0_23, (MR_Integer) 0)));
#line 675 "rtree.m"
                MR_Word mercury__rtree__Del_25;
#line 675 "rtree.m"
                MR_Word mercury__rtree__V_30_30;

#line 676 "rtree.m"
                {
#line 676 "rtree.m"
                  mercury__rtree__Del_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 676 "rtree.m"
                  MR_hl_field(MR_mktag(0), mercury__rtree__Del_25, 0) = mercury__rtree__K1_13;
#line 676 "rtree.m"
                  MR_hl_field(MR_mktag(0), mercury__rtree__Del_25, 1) = ((MR_Box) (mercury__rtree__T1_14));
#line 676 "rtree.m"
                }
#line 677 "rtree.m"
                {
#line 677 "rtree.m"
                  mercury__rtree__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__V_30_30, 0) = ((MR_Box) (mercury__rtree__Del_25));
#line 677 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__V_30_30, 1) = ((MR_Box) (mercury__rtree__DLs_24));
#line 677 "rtree.m"
                }
#line 677 "rtree.m"
                {
#line 677 "rtree.m"
                  MR_Word base;
#line 677 "rtree.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 677 "rtree.m"
                  *mercury__rtree__Info_20 = base;
#line 677 "rtree.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__rtree__V_30_30));
#line 677 "rtree.m"
                }
#line 678 "rtree.m"
                *mercury__rtree__DT_19 = mercury__rtree__DT0_22;
#line 679 "rtree.m"
                *mercury__rtree__DK_18 = mercury__rtree__K_15;
#line 675 "rtree.m"
              }
#line 680 "rtree.m"
            else
#line 681 "rtree.m"
              {
#line 56 "rtree.m"
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);

#line 682 "rtree.m"
                {
#line 682 "rtree.m"
                  MR_Word base;
#line 682 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 682 "rtree.m"
                  *mercury__rtree__DT_19 = base;
#line 682 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__DK0_21;
#line 682 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__rtree__DT0_22));
#line 682 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__rtree__K1_13;
#line 682 "rtree.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rtree__T1_14));
#line 682 "rtree.m"
                }
#line 56 "rtree.m"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 8)));
#line 56 "rtree.m"
                {
#line 56 "rtree.m"
                  *mercury__rtree__DK_18 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_31), mercury__rtree__K1_13, mercury__rtree__DK0_21);
                }
#line 684 "rtree.m"
                *mercury__rtree__Info_20 = mercury__rtree__Info0_23;
#line 681 "rtree.m"
              }
#line 680 "rtree.m"
            mercury__rtree__succeeded = MR_TRUE;
#line 671 "rtree.m"
          }
#line 671 "rtree.m"
      }
#line 671 "rtree.m"
    return mercury__rtree__succeeded;
#line 671 "rtree.m"
  }
#line 667 "rtree.m"
}

#line 614 "rtree.m"
static MR_bool MR_CALL 
mercury__rtree__delete_2_7_p_0(
#line 614 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_67,
#line 614 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_66,
#line 614 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 614 "rtree.m"
  MR_Box mercury__rtree__K_2,
#line 614 "rtree.m"
  MR_Box mercury__rtree__V_3,
#line 614 "rtree.m"
  MR_Integer mercury__rtree__Depth_4,
#line 614 "rtree.m"
  MR_Box * mercury__rtree__HeadVar__5_5,
#line 614 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__6_6,
#line 614 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__7_7)
#line 614 "rtree.m"
{
#line 617 "rtree.m"
  {
#line 617 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 617 "rtree.m"
#line 617 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 617 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "rtree.m"
      case (MR_Integer) 0:
#line 617 "rtree.m"
        {
#line 617 "rtree.m"
          MR_Box mercury__rtree__V_8 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 617 "rtree.m"
          MR_Word mercury__rtree__V_11_11;

#line 617 "rtree.m"
          {
#line 617 "rtree.m"
            mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__V_3, mercury__rtree__V_8);
          }
#line 617 "rtree.m"
          if (mercury__rtree__succeeded)
#line 617 "rtree.m"
            {
#line 617 "rtree.m"
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__K_2;
#line 617 "rtree.m"
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__HeadVar__1_1;
#line 617 "rtree.m"
              mercury__rtree__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "rtree.m"
              *mercury__rtree__HeadVar__7_7 = (MR_Word) &mercury__rtree_scalar_common_4[0];
#line 617 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 617 "rtree.m"
            }
#line 617 "rtree.m"
        }
#line 617 "rtree.m"
        break;
#line 617 "rtree.m"
      case (MR_Integer) 1:
#line 618 "rtree.m"
        {
#line 618 "rtree.m"
          MR_Box mercury__rtree__K0_12 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 618 "rtree.m"
          MR_Word mercury__rtree__T0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "rtree.m"
          MR_Box mercury__rtree__K1_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 618 "rtree.m"
          MR_Word mercury__rtree__T1_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 623 "rtree.m"
          MR_Box mercury__rtree__DK0_22;
#line 623 "rtree.m"
          MR_Word mercury__rtree__DT0_23;
#line 623 "rtree.m"
          MR_Word mercury__rtree__Info0_24;

#line 619 "rtree.m"
          {
#line 619 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__try_deletion2_10_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K0_12, mercury__rtree__T0_13, mercury__rtree__K1_14, mercury__rtree__T1_15, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_22, &mercury__rtree__DT0_23, &mercury__rtree__Info0_24);
          }
#line 623 "rtree.m"
          if (mercury__rtree__succeeded)
#line 620 "rtree.m"
            {
#line 620 "rtree.m"
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_22;
#line 621 "rtree.m"
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_23;
#line 622 "rtree.m"
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_24;
#line 620 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 620 "rtree.m"
            }
#line 623 "rtree.m"
          else
#line 624 "rtree.m"
            {
#line 624 "rtree.m"
              mercury__rtree__succeeded = mercury__rtree__try_deletion2_10_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_14, mercury__rtree__T1_15, mercury__rtree__K0_12, mercury__rtree__T0_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
            }
#line 618 "rtree.m"
        }
#line 617 "rtree.m"
        break;
#line 617 "rtree.m"
      case (MR_Integer) 2:
#line 626 "rtree.m"
        {
#line 626 "rtree.m"
          MR_Box mercury__rtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 626 "rtree.m"
          MR_Word mercury__rtree__T0_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "rtree.m"
          MR_Box mercury__rtree__K1_27 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 626 "rtree.m"
          MR_Word mercury__rtree__T1_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 626 "rtree.m"
          MR_Box mercury__rtree__K2_29 = (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 626 "rtree.m"
          MR_Word mercury__rtree__T2_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 631 "rtree.m"
          MR_Box mercury__rtree__DK0_37;
#line 631 "rtree.m"
          MR_Word mercury__rtree__DT0_38;
#line 631 "rtree.m"
          MR_Word mercury__rtree__Info0_39;

#line 627 "rtree.m"
          {
#line 627 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_37, &mercury__rtree__DT0_38, &mercury__rtree__Info0_39);
          }
#line 631 "rtree.m"
          if (mercury__rtree__succeeded)
#line 628 "rtree.m"
            {
#line 628 "rtree.m"
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_37;
#line 629 "rtree.m"
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_38;
#line 630 "rtree.m"
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_39;
#line 628 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 628 "rtree.m"
            }
#line 631 "rtree.m"
          else
#line 635 "rtree.m"
            {
#line 635 "rtree.m"
              MR_Box mercury__rtree__DK0_40;
#line 635 "rtree.m"
              MR_Word mercury__rtree__DT0_41;
#line 635 "rtree.m"
              MR_Word mercury__rtree__Info0_42;

#line 631 "rtree.m"
              {
#line 631 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_40, &mercury__rtree__DT0_41, &mercury__rtree__Info0_42);
              }
#line 635 "rtree.m"
              if (mercury__rtree__succeeded)
#line 632 "rtree.m"
                {
#line 632 "rtree.m"
                  *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_40;
#line 633 "rtree.m"
                  *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_41;
#line 634 "rtree.m"
                  *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_42;
#line 632 "rtree.m"
                  mercury__rtree__succeeded = MR_TRUE;
#line 632 "rtree.m"
                }
#line 635 "rtree.m"
              else
#line 636 "rtree.m"
                {
#line 636 "rtree.m"
                  mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                }
#line 635 "rtree.m"
            }
#line 626 "rtree.m"
        }
#line 617 "rtree.m"
        break;
#line 617 "rtree.m"
      case (MR_Integer) 3:
#line 638 "rtree.m"
        {
#line 638 "rtree.m"
          MR_Box mercury__rtree__K0_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 638 "rtree.m"
          MR_Word mercury__rtree__T0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 638 "rtree.m"
          MR_Box mercury__rtree__K1_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 2));
#line 638 "rtree.m"
          MR_Word mercury__rtree__T1_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 3)));
#line 638 "rtree.m"
          MR_Box mercury__rtree__K2_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 4));
#line 638 "rtree.m"
          MR_Word mercury__rtree__T2_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 5)));
#line 638 "rtree.m"
          MR_Box mercury__rtree__K3_49 = (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 6));
#line 638 "rtree.m"
          MR_Word mercury__rtree__T3_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__HeadVar__1_1, (MR_Integer) 7)));
#line 646 "rtree.m"
          MR_Box mercury__rtree__DK0_57;
#line 646 "rtree.m"
          MR_Word mercury__rtree__DT0_58;
#line 646 "rtree.m"
          MR_Word mercury__rtree__Info0_59;

#line 640 "rtree.m"
          {
#line 640 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_57, &mercury__rtree__DT0_58, &mercury__rtree__Info0_59);
          }
#line 646 "rtree.m"
          if (mercury__rtree__succeeded)
#line 643 "rtree.m"
            {
#line 643 "rtree.m"
              *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_57;
#line 644 "rtree.m"
              *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_58;
#line 645 "rtree.m"
              *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_59;
#line 643 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 643 "rtree.m"
            }
#line 646 "rtree.m"
          else
#line 653 "rtree.m"
            {
#line 653 "rtree.m"
              MR_Box mercury__rtree__DK0_63;
#line 653 "rtree.m"
              MR_Word mercury__rtree__DT0_64;
#line 653 "rtree.m"
              MR_Word mercury__rtree__Info0_65;

#line 647 "rtree.m"
              {
#line 647 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_63, &mercury__rtree__DT0_64, &mercury__rtree__Info0_65);
              }
#line 653 "rtree.m"
              if (mercury__rtree__succeeded)
#line 650 "rtree.m"
                {
#line 650 "rtree.m"
                  *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_63;
#line 651 "rtree.m"
                  *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_64;
#line 652 "rtree.m"
                  *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_65;
#line 650 "rtree.m"
                  mercury__rtree__succeeded = MR_TRUE;
#line 650 "rtree.m"
                }
#line 653 "rtree.m"
              else
#line 660 "rtree.m"
                {
#line 660 "rtree.m"
                  MR_Box mercury__rtree__DK0_60;
#line 660 "rtree.m"
                  MR_Word mercury__rtree__DT0_61;
#line 660 "rtree.m"
                  MR_Word mercury__rtree__Info0_62;

#line 654 "rtree.m"
                  {
#line 654 "rtree.m"
                    mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, &mercury__rtree__DK0_60, &mercury__rtree__DT0_61, &mercury__rtree__Info0_62);
                  }
#line 660 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 657 "rtree.m"
                    {
#line 657 "rtree.m"
                      *mercury__rtree__HeadVar__5_5 = mercury__rtree__DK0_60;
#line 658 "rtree.m"
                      *mercury__rtree__HeadVar__6_6 = mercury__rtree__DT0_61;
#line 659 "rtree.m"
                      *mercury__rtree__HeadVar__7_7 = mercury__rtree__Info0_62;
#line 657 "rtree.m"
                      mercury__rtree__succeeded = MR_TRUE;
#line 657 "rtree.m"
                    }
#line 660 "rtree.m"
                  else
#line 661 "rtree.m"
                    {
#line 661 "rtree.m"
                      mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                    }
#line 660 "rtree.m"
                }
#line 653 "rtree.m"
            }
#line 638 "rtree.m"
        }
#line 617 "rtree.m"
        break;
#line 617 "rtree.m"
    }
#line 617 "rtree.m"
    return mercury__rtree__succeeded;
#line 617 "rtree.m"
  }
#line 614 "rtree.m"
}

#line 377 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__choose_subtree_4_f_0(
#line 377 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_27,
#line 377 "rtree.m"
  MR_Box mercury__rtree__Key_6,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KA_7,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KB_8,
#line 377 "rtree.m"
  MR_Box mercury__rtree__KC_9)
#line 377 "rtree.m"
{
#line 379 "rtree.m"
  {
#line 379 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 379 "rtree.m"
    MR_Word mercury__rtree__Result_10;
#line 379 "rtree.m"
    MR_Float mercury__rtree__AreaA_11;
#line 379 "rtree.m"
    MR_Float mercury__rtree__AreaB_12;
#line 379 "rtree.m"
    MR_Float mercury__rtree__AreaC_13;
#line 379 "rtree.m"
    MR_Float mercury__rtree__EnlargedAreaA_14;
#line 379 "rtree.m"
    MR_Float mercury__rtree__EnlargedAreaB_15;
#line 379 "rtree.m"
    MR_Float mercury__rtree__EnlargedAreaC_16;
#line 379 "rtree.m"
    MR_Float mercury__rtree__IncreaseForA_17;
#line 379 "rtree.m"
    MR_Float mercury__rtree__IncreaseForB_18;
#line 379 "rtree.m"
    MR_Float mercury__rtree__IncreaseForC_19;
#line 379 "rtree.m"
    MR_Word mercury__rtree__Result0_20;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv1_AreaA_11;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv3_AreaB_12;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv5_AreaC_13;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv7_EnlargedAreaA_14;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv9_EnlargedAreaB_15;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv11_EnlargedAreaC_16;

#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv1_AreaA_11 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KA_7);
    }
#line 50 "rtree.m"
    mercury__rtree__AreaA_11 = MR_unbox_float(mercury__rtree__conv1_AreaA_11);
#line 50 "rtree.m"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv3_AreaB_12 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KB_8);
    }
#line 50 "rtree.m"
    mercury__rtree__AreaB_12 = MR_unbox_float(mercury__rtree__conv3_AreaB_12);
#line 50 "rtree.m"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv5_AreaC_13 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KC_9);
    }
#line 50 "rtree.m"
    mercury__rtree__AreaC_13 = MR_unbox_float(mercury__rtree__conv5_AreaC_13);
#line 72 "rtree.m"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv7_EnlargedAreaA_14 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KA_7);
    }
#line 72 "rtree.m"
    mercury__rtree__EnlargedAreaA_14 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_14);
#line 72 "rtree.m"
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv9_EnlargedAreaB_15 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KB_8);
    }
#line 72 "rtree.m"
    mercury__rtree__EnlargedAreaB_15 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_15);
#line 72 "rtree.m"
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv11_EnlargedAreaC_16 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KC_9);
    }
#line 72 "rtree.m"
    mercury__rtree__EnlargedAreaC_16 = MR_unbox_float(mercury__rtree__conv11_EnlargedAreaC_16);
#line 386 "rtree.m"
    mercury__rtree__IncreaseForA_17 = (mercury__rtree__EnlargedAreaA_14 - mercury__rtree__AreaA_11);
#line 387 "rtree.m"
    mercury__rtree__IncreaseForB_18 = (mercury__rtree__EnlargedAreaB_15 - mercury__rtree__AreaB_12);
#line 388 "rtree.m"
    mercury__rtree__IncreaseForC_19 = (mercury__rtree__EnlargedAreaC_16 - mercury__rtree__AreaC_13);
#line 408 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 < mercury__rtree__IncreaseForB_18);
#line 410 "rtree.m"
    if (mercury__rtree__succeeded)
#line 409 "rtree.m"
      mercury__rtree__Result0_20 = (MR_Integer) 0;
#line 410 "rtree.m"
    else
#line 412 "rtree.m"
      {
#line 410 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 > mercury__rtree__IncreaseForB_18);
#line 412 "rtree.m"
        if (mercury__rtree__succeeded)
#line 411 "rtree.m"
          mercury__rtree__Result0_20 = (MR_Integer) 1;
#line 412 "rtree.m"
        else
#line 414 "rtree.m"
          {
#line 412 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaB_12);
#line 414 "rtree.m"
            if (mercury__rtree__succeeded)
#line 413 "rtree.m"
              mercury__rtree__Result0_20 = (MR_Integer) 0;
#line 414 "rtree.m"
            else
#line 415 "rtree.m"
              mercury__rtree__Result0_20 = (MR_Integer) 1;
#line 414 "rtree.m"
          }
#line 412 "rtree.m"
      }
#line 391 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__Result0_20 == (MR_Integer) 0);
#line 394 "rtree.m"
    if (mercury__rtree__succeeded)
#line 392 "rtree.m"
      {
#line 408 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 < mercury__rtree__IncreaseForC_19);
#line 410 "rtree.m"
        if (mercury__rtree__succeeded)
#line 409 "rtree.m"
          mercury__rtree__Result_10 = (MR_Integer) 0;
#line 410 "rtree.m"
        else
#line 412 "rtree.m"
          {
#line 410 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_17 > mercury__rtree__IncreaseForC_19);
#line 412 "rtree.m"
            if (mercury__rtree__succeeded)
#line 411 "rtree.m"
              mercury__rtree__Result_10 = (MR_Integer) 2;
#line 412 "rtree.m"
            else
#line 414 "rtree.m"
              {
#line 412 "rtree.m"
                mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaC_13);
#line 414 "rtree.m"
                if (mercury__rtree__succeeded)
#line 413 "rtree.m"
                  mercury__rtree__Result_10 = (MR_Integer) 0;
#line 414 "rtree.m"
                else
#line 415 "rtree.m"
                  mercury__rtree__Result_10 = (MR_Integer) 2;
#line 414 "rtree.m"
              }
#line 412 "rtree.m"
          }
#line 392 "rtree.m"
      }
#line 394 "rtree.m"
    else
#line 395 "rtree.m"
      {
#line 408 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_18 < mercury__rtree__IncreaseForC_19);
#line 410 "rtree.m"
        if (mercury__rtree__succeeded)
#line 409 "rtree.m"
          mercury__rtree__Result_10 = (MR_Integer) 1;
#line 410 "rtree.m"
        else
#line 412 "rtree.m"
          {
#line 410 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__IncreaseForB_18 > mercury__rtree__IncreaseForC_19);
#line 412 "rtree.m"
            if (mercury__rtree__succeeded)
#line 411 "rtree.m"
              mercury__rtree__Result_10 = (MR_Integer) 2;
#line 412 "rtree.m"
            else
#line 414 "rtree.m"
              {
#line 412 "rtree.m"
                mercury__rtree__succeeded = (mercury__rtree__AreaA_11 <= mercury__rtree__AreaB_12);
#line 414 "rtree.m"
                if (mercury__rtree__succeeded)
#line 413 "rtree.m"
                  mercury__rtree__Result_10 = (MR_Integer) 1;
#line 414 "rtree.m"
                else
#line 415 "rtree.m"
                  mercury__rtree__Result_10 = (MR_Integer) 2;
#line 414 "rtree.m"
              }
#line 412 "rtree.m"
          }
#line 395 "rtree.m"
      }
#line 379 "rtree.m"
    return mercury__rtree__Result_10;
#line 379 "rtree.m"
  }
#line 377 "rtree.m"
}

#line 353 "rtree.m"
static MR_Word MR_CALL 
mercury__rtree__choose_subtree_3_f_0(
#line 353 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_15,
#line 353 "rtree.m"
  MR_Box mercury__rtree__Key_5,
#line 353 "rtree.m"
  MR_Box mercury__rtree__KA_6,
#line 353 "rtree.m"
  MR_Box mercury__rtree__KB_7)
#line 353 "rtree.m"
{
#line 355 "rtree.m"
  {
#line 355 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 355 "rtree.m"
    MR_Word mercury__rtree__Result_8;
#line 355 "rtree.m"
    MR_Float mercury__rtree__SizeA_9;
#line 355 "rtree.m"
    MR_Float mercury__rtree__SizeB_10;
#line 355 "rtree.m"
    MR_Float mercury__rtree__EnlargedSizeA_11;
#line 355 "rtree.m"
    MR_Float mercury__rtree__EnlargedSizeB_12;
#line 355 "rtree.m"
    MR_Float mercury__rtree__IncreaseForA_13;
#line 355 "rtree.m"
    MR_Float mercury__rtree__IncreaseForB_14;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv1_SizeA_9;
#line 50 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 50 "rtree.m"
    MR_Box mercury__rtree__conv3_SizeB_10;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv5_EnlargedSizeA_11;
#line 72 "rtree.m"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 72 "rtree.m"
    MR_Box mercury__rtree__conv7_EnlargedSizeB_12;

#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv1_SizeA_9 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KA_6);
    }
#line 50 "rtree.m"
    mercury__rtree__SizeA_9 = MR_unbox_float(mercury__rtree__conv1_SizeA_9);
#line 50 "rtree.m"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 50 "rtree.m"
    {
#line 50 "rtree.m"
      mercury__rtree__conv3_SizeB_10 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KB_7);
    }
#line 50 "rtree.m"
    mercury__rtree__SizeB_10 = MR_unbox_float(mercury__rtree__conv3_SizeB_10);
#line 72 "rtree.m"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv5_EnlargedSizeA_11 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KA_6);
    }
#line 72 "rtree.m"
    mercury__rtree__EnlargedSizeA_11 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_11);
#line 72 "rtree.m"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
#line 72 "rtree.m"
    {
#line 72 "rtree.m"
      mercury__rtree__conv7_EnlargedSizeB_12 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KB_7);
    }
#line 72 "rtree.m"
    mercury__rtree__EnlargedSizeB_12 = MR_unbox_float(mercury__rtree__conv7_EnlargedSizeB_12);
#line 363 "rtree.m"
    mercury__rtree__IncreaseForA_13 = (mercury__rtree__EnlargedSizeA_11 - mercury__rtree__SizeA_9);
#line 364 "rtree.m"
    mercury__rtree__IncreaseForB_14 = (mercury__rtree__EnlargedSizeB_12 - mercury__rtree__SizeB_10);
#line 365 "rtree.m"
    mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_13 < mercury__rtree__IncreaseForB_14);
#line 367 "rtree.m"
    if (mercury__rtree__succeeded)
#line 366 "rtree.m"
      mercury__rtree__Result_8 = (MR_Integer) 0;
#line 367 "rtree.m"
    else
#line 369 "rtree.m"
      {
#line 367 "rtree.m"
        mercury__rtree__succeeded = (mercury__rtree__IncreaseForA_13 > mercury__rtree__IncreaseForB_14);
#line 369 "rtree.m"
        if (mercury__rtree__succeeded)
#line 368 "rtree.m"
          mercury__rtree__Result_8 = (MR_Integer) 1;
#line 369 "rtree.m"
        else
#line 371 "rtree.m"
          {
#line 369 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__SizeA_9 <= mercury__rtree__SizeB_10);
#line 371 "rtree.m"
            if (mercury__rtree__succeeded)
#line 370 "rtree.m"
              mercury__rtree__Result_8 = (MR_Integer) 0;
#line 371 "rtree.m"
            else
#line 372 "rtree.m"
              mercury__rtree__Result_8 = (MR_Integer) 1;
#line 371 "rtree.m"
          }
#line 369 "rtree.m"
      }
#line 355 "rtree.m"
    return mercury__rtree__Result_8;
#line 355 "rtree.m"
  }
#line 353 "rtree.m"
}

#line 171 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__map_values_3_p_1(
#line 171 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_12,
#line 171 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_13,
#line 171 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_14,
#line 171 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 171 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 171 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__3_3)
#line 171 "rtree.m"
{
#line 1444 "rtree.m"
  {
#line 1444 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1444 "rtree.m"
#line 1444 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1444 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1444 "rtree.m"
      case (MR_Integer) 0:
#line 1444 "rtree.m"
        {
#line 1444 "rtree.m"
          *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1444 "rtree.m"
          mercury__rtree__succeeded = MR_TRUE;
#line 1444 "rtree.m"
        }
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
      case (MR_Integer) 1:
#line 1445 "rtree.m"
        {
#line 1445 "rtree.m"
          MR_Box mercury__rtree__K_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1445 "rtree.m"
          MR_Box mercury__rtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 1445 "rtree.m"
          MR_Box mercury__rtree__W_8;
#line 1446 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

#line 1446 "rtree.m"
          {
#line 1446 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K_6, mercury__rtree__V_7, &mercury__rtree__W_8);
          }
#line 1445 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1445 "rtree.m"
            {
#line 1445 "rtree.m"
              {
#line 1445 "rtree.m"
                MR_Word base;
#line 1445 "rtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "rtree.m"
                *mercury__rtree__HeadVar__3_3 = base;
#line 1445 "rtree.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_6;
#line 1445 "rtree.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__W_8;
#line 1445 "rtree.m"
              }
#line 1445 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 1445 "rtree.m"
            }
#line 1445 "rtree.m"
        }
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
      case (MR_Integer) 2:
#line 1447 "rtree.m"
        {
#line 1447 "rtree.m"
          MR_Word mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1447 "rtree.m"
          MR_Word mercury__rtree__U_11;

#line 1448 "rtree.m"
          {
#line 1448 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_12, mercury__rtree__TypeInfo_for_V_13, mercury__rtree__TypeInfo_for_W_14, mercury__rtree__P_1, mercury__rtree__T_10, &mercury__rtree__U_11);
          }
#line 1447 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1447 "rtree.m"
            {
#line 1447 "rtree.m"
              {
#line 1447 "rtree.m"
                MR_Word base;
#line 1447 "rtree.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "rtree.m"
                *mercury__rtree__HeadVar__3_3 = base;
#line 1447 "rtree.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__U_11));
#line 1447 "rtree.m"
              }
#line 1447 "rtree.m"
              mercury__rtree__succeeded = MR_TRUE;
#line 1447 "rtree.m"
            }
#line 1447 "rtree.m"
        }
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
    }
#line 1444 "rtree.m"
    return mercury__rtree__succeeded;
#line 1444 "rtree.m"
  }
#line 171 "rtree.m"
}

#line 170 "rtree.m"
void MR_CALL 
mercury__rtree__map_values_3_p_0(
#line 170 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_12,
#line 170 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_13,
#line 170 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_W_14,
#line 170 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 170 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 170 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__3_3)
#line 170 "rtree.m"
{
#line 1444 "rtree.m"
  {
#line 1444 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1444 "rtree.m"
#line 1444 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1444 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1444 "rtree.m"
      case (MR_Integer) 0:
#line 1444 "rtree.m"
        *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
      case (MR_Integer) 1:
#line 1445 "rtree.m"
        {
#line 1445 "rtree.m"
          MR_Box mercury__rtree__K_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1445 "rtree.m"
          MR_Box mercury__rtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 1445 "rtree.m"
          MR_Box mercury__rtree__W_8;
#line 1446 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));

#line 1446 "rtree.m"
          {
#line 1446 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K_6, mercury__rtree__V_7, &mercury__rtree__W_8);
          }
#line 1445 "rtree.m"
          {
#line 1445 "rtree.m"
            MR_Word base;
#line 1445 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "rtree.m"
            *mercury__rtree__HeadVar__3_3 = base;
#line 1445 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_6;
#line 1445 "rtree.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__W_8;
#line 1445 "rtree.m"
          }
#line 1445 "rtree.m"
        }
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
      case (MR_Integer) 2:
#line 1447 "rtree.m"
        {
#line 1447 "rtree.m"
          MR_Word mercury__rtree__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));
#line 1447 "rtree.m"
          MR_Word mercury__rtree__U_11;

#line 1448 "rtree.m"
          {
#line 1448 "rtree.m"
            mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_12, mercury__rtree__TypeInfo_for_V_13, mercury__rtree__TypeInfo_for_W_14, mercury__rtree__P_1, mercury__rtree__T_10, &mercury__rtree__U_11);
          }
#line 1447 "rtree.m"
          {
#line 1447 "rtree.m"
            MR_Word base;
#line 1447 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "rtree.m"
            *mercury__rtree__HeadVar__3_3 = base;
#line 1447 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__U_11));
#line 1447 "rtree.m"
          }
#line 1447 "rtree.m"
        }
#line 1444 "rtree.m"
        break;
#line 1444 "rtree.m"
    }
#line 1444 "rtree.m"
  }
#line 170 "rtree.m"
}

#line 164 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__fold_4_p_2(
#line 164 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_22,
#line 164 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_23,
#line 164 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_24,
#line 164 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 164 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 164 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 164 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 164 "rtree.m"
{
#line 1395 "rtree.m"
  {
#line 1395 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1395 "rtree.m"
#line 1395 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1395 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "rtree.m"
      case (MR_Integer) 0:
#line 1395 "rtree.m"
        {
#line 1395 "rtree.m"
          *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
          mercury__rtree__succeeded = MR_TRUE;
#line 1395 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 1:
#line 1396 "rtree.m"
        {
#line 1396 "rtree.m"
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1396 "rtree.m"
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 1397 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1397 "rtree.m"
          {
#line 1397 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 2:
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1398 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
    }
#line 1395 "rtree.m"
    return mercury__rtree__succeeded;
#line 1395 "rtree.m"
  }
#line 164 "rtree.m"
}

#line 163 "rtree.m"
void MR_CALL 
mercury__rtree__fold_4_p_1(
#line 163 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_22,
#line 163 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_23,
#line 163 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_24,
#line 163 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 163 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 163 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 163 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 163 "rtree.m"
{
#line 1395 "rtree.m"
  {
#line 1395 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1395 "rtree.m"
#line 1395 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1395 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "rtree.m"
      case (MR_Integer) 0:
#line 1395 "rtree.m"
        *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 1:
#line 1396 "rtree.m"
        {
#line 1396 "rtree.m"
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1396 "rtree.m"
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 1397 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1397 "rtree.m"
          {
#line 1397 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 2:
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1398 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
    }
#line 1395 "rtree.m"
  }
#line 163 "rtree.m"
}

#line 162 "rtree.m"
void MR_CALL 
mercury__rtree__fold_4_p_0(
#line 162 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_22,
#line 162 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_23,
#line 162 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_24,
#line 162 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 162 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 162 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_3,
#line 162 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_4)
#line 162 "rtree.m"
{
#line 1395 "rtree.m"
  {
#line 1395 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1395 "rtree.m"
#line 1395 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) {
#line 1395 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1395 "rtree.m"
      case (MR_Integer) 0:
#line 1395 "rtree.m"
        *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 1:
#line 1396 "rtree.m"
        {
#line 1396 "rtree.m"
          MR_Box mercury__rtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));
#line 1396 "rtree.m"
          MR_Box mercury__rtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 1397 "rtree.m"
          void MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));

#line 1397 "rtree.m"
          {
#line 1397 "rtree.m"
            mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
      case (MR_Integer) 2:
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1398 "rtree.m"
        }
#line 1395 "rtree.m"
        break;
#line 1395 "rtree.m"
    }
#line 1395 "rtree.m"
  }
#line 162 "rtree.m"
}

#line 155 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_5_p_1(
#line 155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_26,
#line 155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_27,
#line 155 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_28,
#line 155 "rtree.m"
  MR_Word mercury__rtree__KTest_1,
#line 155 "rtree.m"
  MR_Word mercury__rtree__VPred_2,
#line 155 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 155 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
#line 155 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
#line 155 "rtree.m"
{
#line 1335 "rtree.m"
  {
#line 1335 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1335 "rtree.m"
#line 1335 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 1335 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1335 "rtree.m"
      case (MR_Integer) 0:
#line 1335 "rtree.m"
        *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
      case (MR_Integer) 1:
#line 1336 "rtree.m"
        {
#line 1336 "rtree.m"
          MR_Box mercury__rtree__K_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 1336 "rtree.m"
          MR_Box mercury__rtree__V_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 1337 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_1, (MR_Integer) 1)));

#line 1337 "rtree.m"
          {
#line 1337 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_1), mercury__rtree__K_13);
          }
#line 1339 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1338 "rtree.m"
            {
#line 1338 "rtree.m"
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_2, (MR_Integer) 1)));

#line 1338 "rtree.m"
              {
#line 1338 "rtree.m"
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_2), mercury__rtree__K_13, mercury__rtree__V_14, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
              }
#line 1338 "rtree.m"
            }
#line 1339 "rtree.m"
          else
#line 1339 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1336 "rtree.m"
        }
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
      case (MR_Integer) 2:
#line 1342 "rtree.m"
        {
#line 1342 "rtree.m"
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 1343 "rtree.m"
          {
#line 1343 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1342 "rtree.m"
        }
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
    }
#line 1335 "rtree.m"
  }
#line 155 "rtree.m"
}

#line 153 "rtree.m"
void MR_CALL 
mercury__rtree__search_general_fold_5_p_0(
#line 153 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_26,
#line 153 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_27,
#line 153 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_A_28,
#line 153 "rtree.m"
  MR_Word mercury__rtree__KTest_1,
#line 153 "rtree.m"
  MR_Word mercury__rtree__VPred_2,
#line 153 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 153 "rtree.m"
  MR_Box mercury__rtree__STATE_VARIABLE_Acc_0_4,
#line 153 "rtree.m"
  MR_Box * mercury__rtree__STATE_VARIABLE_Acc_5)
#line 153 "rtree.m"
{
#line 1335 "rtree.m"
  {
#line 1335 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 1335 "rtree.m"
#line 1335 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 1335 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1335 "rtree.m"
      case (MR_Integer) 0:
#line 1335 "rtree.m"
        *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
      case (MR_Integer) 1:
#line 1336 "rtree.m"
        {
#line 1336 "rtree.m"
          MR_Box mercury__rtree__K_13 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 1336 "rtree.m"
          MR_Box mercury__rtree__V_14 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 1337 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__KTest_1, (MR_Integer) 1)));

#line 1337 "rtree.m"
          {
#line 1337 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__KTest_1), mercury__rtree__K_13);
          }
#line 1339 "rtree.m"
          if (mercury__rtree__succeeded)
#line 1338 "rtree.m"
            {
#line 1338 "rtree.m"
              void MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__VPred_2, (MR_Integer) 1)));

#line 1338 "rtree.m"
              {
#line 1338 "rtree.m"
                mercury__rtree__func_1(((MR_Box) mercury__rtree__VPred_2), mercury__rtree__K_13, mercury__rtree__V_14, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
              }
#line 1338 "rtree.m"
            }
#line 1339 "rtree.m"
          else
#line 1339 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1336 "rtree.m"
        }
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
      case (MR_Integer) 2:
#line 1342 "rtree.m"
        {
#line 1342 "rtree.m"
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 1343 "rtree.m"
          {
#line 1343 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
          }
#line 1342 "rtree.m"
        }
#line 1335 "rtree.m"
        break;
#line 1335 "rtree.m"
    }
#line 1335 "rtree.m"
  }
#line 153 "rtree.m"
}

#line 142 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__search_first_6_p_0(
#line 142 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_20,
#line 142 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_L_21,
#line 142 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 142 "rtree.m"
  MR_Word mercury__rtree__P_1,
#line 142 "rtree.m"
  MR_Word mercury__rtree__C_2,
#line 142 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 142 "rtree.m"
  MR_Box mercury__rtree__L_4,
#line 142 "rtree.m"
  MR_Box * mercury__rtree__HeadVar__5_5,
#line 142 "rtree.m"
  MR_Box * mercury__rtree__HeadVar__6_6)
#line 142 "rtree.m"
{
#line 998 "rtree.m"
  {
#line 998 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 998 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 998 "rtree.m"
      {
#line 998 "rtree.m"
        MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 998 "rtree.m"
        MR_Box mercury__rtree__V_13_13;
#line 998 "rtree.m"
        MR_Word mercury__rtree__V_27_27;
#line 998 "rtree.m"
        MR_Word mercury__rtree__V_28_28;
#line 998 "rtree.m"
        MR_Word mercury__rtree__V_33_33;
#line 998 "rtree.m"
        MR_Word mercury__rtree__V_34_34;
#line 1011 "rtree.m"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box *);
#line 1011 "rtree.m"
        MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box *);

#line 998 "rtree.m"
        *mercury__rtree__HeadVar__5_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 1011 "rtree.m"
        mercury__rtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_1, (MR_Integer) 1)));
#line 1011 "rtree.m"
        {
#line 1011 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_1), mercury__rtree__K0_9, &mercury__rtree__V_13_13);
        }
#line 998 "rtree.m"
        if (mercury__rtree__succeeded)
#line 998 "rtree.m"
          {
#line 1012 "rtree.m"
            mercury__rtree__V_27_27 = (MR_Integer) 1;
#line 1012 "rtree.m"
            {
#line 1012 "rtree.m"
              mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_L_21, &mercury__rtree__V_28_28, mercury__rtree__V_13_13, mercury__rtree__L_4);
            }
#line 1012 "rtree.m"
            mercury__rtree__succeeded = (mercury__rtree__V_27_27 == mercury__rtree__V_28_28);
#line 998 "rtree.m"
            if (mercury__rtree__succeeded)
#line 998 "rtree.m"
              {
#line 1011 "rtree.m"
                mercury__rtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__C_2, (MR_Integer) 1)));
#line 1011 "rtree.m"
                {
#line 1011 "rtree.m"
                  mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__C_2), *mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6);
                }
#line 998 "rtree.m"
                if (mercury__rtree__succeeded)
#line 998 "rtree.m"
                  {
#line 1012 "rtree.m"
                    mercury__rtree__V_33_33 = (MR_Integer) 1;
#line 1012 "rtree.m"
                    {
#line 1012 "rtree.m"
                      mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_L_21, &mercury__rtree__V_34_34, *mercury__rtree__HeadVar__6_6, mercury__rtree__L_4);
                    }
#line 1012 "rtree.m"
                    mercury__rtree__succeeded = (mercury__rtree__V_33_33 == mercury__rtree__V_34_34);
#line 998 "rtree.m"
                  }
#line 998 "rtree.m"
              }
#line 998 "rtree.m"
          }
#line 998 "rtree.m"
      }
#line 998 "rtree.m"
    else
#line 998 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1001 "rtree.m"
      {
#line 1001 "rtree.m"
        MR_Word mercury__rtree__T_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 1002 "rtree.m"
        {
#line 1002 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_L_21, mercury__rtree__T_16, mercury__rtree__P_1, mercury__rtree__C_2, mercury__rtree__L_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6);
        }
#line 1001 "rtree.m"
      }
#line 998 "rtree.m"
    else
#line 998 "rtree.m"
      mercury__rtree__succeeded = MR_FALSE;
#line 998 "rtree.m"
    return mercury__rtree__succeeded;
#line 998 "rtree.m"
  }
#line 142 "rtree.m"
}

#line 123 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__search_general_3_f_0(
#line 123 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_17,
#line 123 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_18,
#line 123 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 123 "rtree.m"
  MR_Word mercury__rtree__HeadVar__2_2,
#line 123 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3)
#line 123 "rtree.m"
{
#line 946 "rtree.m"
  {
#line 946 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 946 "rtree.m"
    MR_Word mercury__rtree__HeadVar__4_4;

#line 946 "rtree.m"
#line 946 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 946 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 946 "rtree.m"
      case (MR_Integer) 0:
#line 946 "rtree.m"
        mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "rtree.m"
        break;
#line 946 "rtree.m"
      case (MR_Integer) 1:
#line 947 "rtree.m"
        {
#line 947 "rtree.m"
          MR_Box mercury__rtree__K_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 947 "rtree.m"
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 948 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 1)));
#line 948 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box);

#line 948 "rtree.m"
          {
#line 948 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_9);
          }
#line 948 "rtree.m"
          if (mercury__rtree__succeeded)
#line 948 "rtree.m"
            {
#line 948 "rtree.m"
              mercury__rtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 1)));
#line 948 "rtree.m"
              {
#line 948 "rtree.m"
                mercury__rtree__succeeded = mercury__rtree__func_1(((MR_Box) mercury__rtree__HeadVar__2_2), mercury__rtree__V_10);
              }
#line 948 "rtree.m"
            }
#line 947 "rtree.m"
          if (mercury__rtree__succeeded)
#line 948 "rtree.m"
            {
#line 948 "rtree.m"
              MR_Word mercury__rtree__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 948 "rtree.m"
              {
#line 948 "rtree.m"
                mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 0) = mercury__rtree__V_10;
#line 948 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 1) = ((MR_Box) (mercury__rtree__V_11_11));
#line 948 "rtree.m"
              }
#line 948 "rtree.m"
            }
#line 947 "rtree.m"
          else
#line 948 "rtree.m"
            mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "rtree.m"
        }
#line 946 "rtree.m"
        break;
#line 946 "rtree.m"
      case (MR_Integer) 2:
#line 949 "rtree.m"
        {
#line 949 "rtree.m"
          MR_Word mercury__rtree__T_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 949 "rtree.m"
          MR_Word mercury__rtree__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 950 "rtree.m"
          {
#line 950 "rtree.m"
            mercury__rtree__search_general_2_5_p_0(mercury__rtree__TypeInfo_for_K_17, mercury__rtree__TypeInfo_for_V_18, mercury__rtree__T_14, mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2, mercury__rtree__V_16_16, &mercury__rtree__HeadVar__4_4);
          }
#line 949 "rtree.m"
        }
#line 946 "rtree.m"
        break;
#line 946 "rtree.m"
    }
#line 946 "rtree.m"
    return mercury__rtree__HeadVar__4_4;
#line 946 "rtree.m"
  }
#line 123 "rtree.m"
}

#line 106 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__search_contains_2_f_0(
#line 106 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_14,
#line 106 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 106 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 106 "rtree.m"
  MR_Box mercury__rtree__K_2)
#line 106 "rtree.m"
{
#line 908 "rtree.m"
  {
#line 908 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 908 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;

#line 908 "rtree.m"
#line 908 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 908 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 908 "rtree.m"
      case (MR_Integer) 0:
#line 908 "rtree.m"
        mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "rtree.m"
        break;
#line 908 "rtree.m"
      case (MR_Integer) 1:
#line 909 "rtree.m"
        {
#line 909 "rtree.m"
          MR_Box mercury__rtree__K0_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 909 "rtree.m"
          MR_Box mercury__rtree__V0_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
#line 44 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

#line 44 "rtree.m"
          {
#line 44 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__K_2, mercury__rtree__K0_5);
          }
#line 909 "rtree.m"
          if (mercury__rtree__succeeded)
#line 910 "rtree.m"
            {
#line 910 "rtree.m"
              MR_Word mercury__rtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 910 "rtree.m"
              {
#line 910 "rtree.m"
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V0_6;
#line 910 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_8_8));
#line 910 "rtree.m"
              }
#line 910 "rtree.m"
            }
#line 909 "rtree.m"
          else
#line 910 "rtree.m"
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "rtree.m"
        }
#line 908 "rtree.m"
        break;
#line 908 "rtree.m"
      case (MR_Integer) 2:
#line 911 "rtree.m"
        {
#line 911 "rtree.m"
          MR_Word mercury__rtree__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "rtree.m"
          MR_Word mercury__rtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 920 "rtree.m"
#line 920 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__T_9)) {
#line 920 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 920 "rtree.m"
            case (MR_Integer) 0:
#line 920 "rtree.m"
              {
#line 920 "rtree.m"
                MR_Box mercury__rtree__Value_15 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_9, (MR_Integer) 0));

#line 920 "rtree.m"
                {
#line 920 "rtree.m"
                  mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__Value_15;
#line 920 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_12_12));
#line 920 "rtree.m"
                }
#line 920 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 1:
#line 921 "rtree.m"
              {
#line 921 "rtree.m"
                MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_9, (MR_Integer) 0));
#line 921 "rtree.m"
                MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_9, (MR_Integer) 1)));
#line 921 "rtree.m"
                MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(1), mercury__rtree__T_9, (MR_Integer) 2));
#line 921 "rtree.m"
                MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__T_9, (MR_Integer) 3)));
#line 921 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 922 "rtree.m"
                {
#line 922 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_16_26);
                }
#line 923 "rtree.m"
                {
#line 923 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_16_26, &mercury__rtree__HeadVar__3_3);
                }
#line 921 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 2:
#line 924 "rtree.m"
              {
#line 924 "rtree.m"
                MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 0));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 1)));
#line 924 "rtree.m"
                MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 2));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 3)));
#line 924 "rtree.m"
                MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 4));
#line 924 "rtree.m"
                MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__T_9, (MR_Integer) 5)));
#line 924 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_28_38;
#line 924 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 925 "rtree.m"
                {
#line 925 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__K_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_28_38);
                }
#line 926 "rtree.m"
                {
#line 926 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_28_38, &mercury__rtree__STATE_VARIABLE_Values_29_39);
                }
#line 927 "rtree.m"
                {
#line 927 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_29_39, &mercury__rtree__HeadVar__3_3);
                }
#line 924 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
            case (MR_Integer) 3:
#line 928 "rtree.m"
              {
#line 928 "rtree.m"
                MR_Box mercury__rtree__K0_41 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 0));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 1)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K1_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 2));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 3)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K2_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 4));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T2_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 5)));
#line 928 "rtree.m"
                MR_Box mercury__rtree__K3_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 6));
#line 928 "rtree.m"
                MR_Word mercury__rtree__T3_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__T_9, (MR_Integer) 7)));
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_43_53;
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_44_54;
#line 928 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 929 "rtree.m"
                {
#line 929 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_41, mercury__rtree__T0_42, mercury__rtree__K_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_43_53);
                }
#line 930 "rtree.m"
                {
#line 930 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_43, mercury__rtree__T1_44, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_43_53, &mercury__rtree__STATE_VARIABLE_Values_44_54);
                }
#line 931 "rtree.m"
                {
#line 931 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_45, mercury__rtree__T2_46, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_44_54, &mercury__rtree__STATE_VARIABLE_Values_45_55);
                }
#line 932 "rtree.m"
                {
#line 932 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_99_111_110_116_97_105_110_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K3_47, mercury__rtree__T3_48, mercury__rtree__K_2, mercury__rtree__STATE_VARIABLE_Values_45_55, &mercury__rtree__HeadVar__3_3);
                }
#line 928 "rtree.m"
              }
#line 920 "rtree.m"
              break;
#line 920 "rtree.m"
          }
#line 911 "rtree.m"
        }
#line 908 "rtree.m"
        break;
#line 908 "rtree.m"
    }
#line 908 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 908 "rtree.m"
  }
#line 106 "rtree.m"
}

#line 102 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__search_intersects_2_f_0(
#line 102 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_14,
#line 102 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_13,
#line 102 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1,
#line 102 "rtree.m"
  MR_Box mercury__rtree__QueryKey_2)
#line 102 "rtree.m"
{
#line 867 "rtree.m"
  {
#line 867 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 867 "rtree.m"
    MR_Word mercury__rtree__HeadVar__3_3;

#line 867 "rtree.m"
#line 867 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) {
#line 867 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 867 "rtree.m"
      case (MR_Integer) 0:
#line 867 "rtree.m"
        mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "rtree.m"
        break;
#line 867 "rtree.m"
      case (MR_Integer) 1:
#line 868 "rtree.m"
        {
#line 868 "rtree.m"
          MR_Box mercury__rtree__K_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 868 "rtree.m"
          MR_Box mercury__rtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
#line 40 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

#line 40 "rtree.m"
          {
#line 40 "rtree.m"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_2, mercury__rtree__K_5);
          }
#line 868 "rtree.m"
          if (mercury__rtree__succeeded)
#line 869 "rtree.m"
            {
#line 869 "rtree.m"
              MR_Word mercury__rtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 869 "rtree.m"
              {
#line 869 "rtree.m"
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V_6;
#line 869 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_8_8));
#line 869 "rtree.m"
              }
#line 869 "rtree.m"
            }
#line 868 "rtree.m"
          else
#line 869 "rtree.m"
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "rtree.m"
        }
#line 867 "rtree.m"
        break;
#line 867 "rtree.m"
      case (MR_Integer) 2:
#line 870 "rtree.m"
        {
#line 870 "rtree.m"
          MR_Word mercury__rtree__RTree_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "rtree.m"
          MR_Word mercury__rtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 879 "rtree.m"
#line 879 "rtree.m"
          switch (MR_tag((MR_Word) mercury__rtree__RTree_9)) {
#line 879 "rtree.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 879 "rtree.m"
            case (MR_Integer) 0:
#line 879 "rtree.m"
              {
#line 879 "rtree.m"
                MR_Box mercury__rtree__Value_15 = (MR_hl_field(MR_mktag(0), mercury__rtree__RTree_9, (MR_Integer) 0));

#line 879 "rtree.m"
                {
#line 879 "rtree.m"
                  mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 879 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__Value_15;
#line 879 "rtree.m"
                  MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_12_12));
#line 879 "rtree.m"
                }
#line 879 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 1:
#line 880 "rtree.m"
              {
#line 880 "rtree.m"
                MR_Box mercury__rtree__K0_18 = (MR_hl_field(MR_mktag(1), mercury__rtree__RTree_9, (MR_Integer) 0));
#line 880 "rtree.m"
                MR_Word mercury__rtree__T0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__RTree_9, (MR_Integer) 1)));
#line 880 "rtree.m"
                MR_Box mercury__rtree__K1_20 = (MR_hl_field(MR_mktag(1), mercury__rtree__RTree_9, (MR_Integer) 2));
#line 880 "rtree.m"
                MR_Word mercury__rtree__T1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__RTree_9, (MR_Integer) 3)));
#line 880 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_16_26;

#line 881 "rtree.m"
                {
#line 881 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__QueryKey_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_16_26);
                }
#line 882 "rtree.m"
                {
#line 882 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_16_26, &mercury__rtree__HeadVar__3_3);
                }
#line 880 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 2:
#line 883 "rtree.m"
              {
#line 883 "rtree.m"
                MR_Box mercury__rtree__K0_28 = (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 0));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T0_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 1)));
#line 883 "rtree.m"
                MR_Box mercury__rtree__K1_30 = (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 2));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T1_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 3)));
#line 883 "rtree.m"
                MR_Box mercury__rtree__K2_32 = (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 4));
#line 883 "rtree.m"
                MR_Word mercury__rtree__T2_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__RTree_9, (MR_Integer) 5)));
#line 883 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_28_38;
#line 883 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_29_39;

#line 884 "rtree.m"
                {
#line 884 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_28, mercury__rtree__T0_29, mercury__rtree__QueryKey_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_28_38);
                }
#line 885 "rtree.m"
                {
#line 885 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_30, mercury__rtree__T1_31, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_28_38, &mercury__rtree__STATE_VARIABLE_Values_29_39);
                }
#line 886 "rtree.m"
                {
#line 886 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_32, mercury__rtree__T2_33, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_29_39, &mercury__rtree__HeadVar__3_3);
                }
#line 883 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
            case (MR_Integer) 3:
#line 887 "rtree.m"
              {
#line 887 "rtree.m"
                MR_Box mercury__rtree__K0_41 = (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 0));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 1)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K1_43 = (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 2));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 3)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K2_45 = (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 4));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T2_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 5)));
#line 887 "rtree.m"
                MR_Box mercury__rtree__K3_47 = (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 6));
#line 887 "rtree.m"
                MR_Word mercury__rtree__T3_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__rtree__RTree_9, (MR_Integer) 7)));
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_43_53;
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_44_54;
#line 887 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_Values_45_55;

#line 888 "rtree.m"
                {
#line 888 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K0_41, mercury__rtree__T0_42, mercury__rtree__QueryKey_2, mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_Values_43_53);
                }
#line 889 "rtree.m"
                {
#line 889 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K1_43, mercury__rtree__T1_44, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_43_53, &mercury__rtree__STATE_VARIABLE_Values_44_54);
                }
#line 890 "rtree.m"
                {
#line 890 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K2_45, mercury__rtree__T2_46, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_44_54, &mercury__rtree__STATE_VARIABLE_Values_45_55);
                }
#line 891 "rtree.m"
                {
#line 891 "rtree.m"
                  mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_105_110_116_101_114_115_101_99_116_115_95_115_117_98_116_114_101_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_13, mercury__rtree__K3_47, mercury__rtree__T3_48, mercury__rtree__QueryKey_2, mercury__rtree__STATE_VARIABLE_Values_45_55, &mercury__rtree__HeadVar__3_3);
                }
#line 887 "rtree.m"
              }
#line 879 "rtree.m"
              break;
#line 879 "rtree.m"
          }
#line 870 "rtree.m"
        }
#line 867 "rtree.m"
        break;
#line 867 "rtree.m"
    }
#line 867 "rtree.m"
    return mercury__rtree__HeadVar__3_3;
#line 867 "rtree.m"
  }
#line 102 "rtree.m"
}

#line 97 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__delete_4_p_0(
#line 97 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_56,
#line 97 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_55,
#line 97 "rtree.m"
  MR_Box mercury__rtree__K_1,
#line 97 "rtree.m"
  MR_Box mercury__rtree__V_2,
#line 97 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 97 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__4_4)
#line 97 "rtree.m"
{
#line 565 "rtree.m"
  {
#line 565 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 565 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 565 "rtree.m"
      {
#line 565 "rtree.m"
        MR_Box mercury__rtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 565 "rtree.m"
        MR_Box mercury__rtree__V_57_57 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 44 "rtree.m"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box);

#line 565 "rtree.m"
        {
#line 565 "rtree.m"
          mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__V_2, mercury__rtree__V_57_57);
        }
#line 565 "rtree.m"
        if (mercury__rtree__succeeded)
#line 565 "rtree.m"
          {
#line 565 "rtree.m"
            *mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 44 "rtree.m"
            mercury__rtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 6)));
#line 44 "rtree.m"
            {
#line 44 "rtree.m"
              mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_1, mercury__rtree__K0_7);
            }
#line 565 "rtree.m"
          }
#line 565 "rtree.m"
      }
#line 565 "rtree.m"
    else
#line 565 "rtree.m"
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 567 "rtree.m"
      {
#line 567 "rtree.m"
        MR_Word mercury__rtree__Info_13;
#line 567 "rtree.m"
        MR_Word mercury__rtree__STATE_VARIABLE_T_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 567 "rtree.m"
        MR_Word mercury__rtree__STATE_VARIABLE_T_27_27;
#line 570 "rtree.m"
        MR_Box mercury__rtree__V_12_12;

#line 570 "rtree.m"
        {
#line 570 "rtree.m"
          mercury__rtree__succeeded = mercury__rtree__delete_2_7_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__STATE_VARIABLE_T_25_25, mercury__rtree__K_1, mercury__rtree__V_2, (MR_Integer) 1, &mercury__rtree__V_12_12, &mercury__rtree__STATE_VARIABLE_T_27_27, &mercury__rtree__Info_13);
        }
#line 567 "rtree.m"
        if (mercury__rtree__succeeded)
#line 567 "rtree.m"
          {
#line 575 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__Info_13)) == (MR_mktag((MR_Integer) 0))))
#line 576 "rtree.m"
              {
#line 576 "rtree.m"
                MR_Word mercury__rtree__Orphans_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Info_13, (MR_Integer) 0)));

#line 604 "rtree.m"
                if ((mercury__rtree__Orphans_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "rtree.m"
                  {
#line 606 "rtree.m"
                    {
#line 606 "rtree.m"
                      mercury__require__error_1_p_0((MR_String) "delete: expected delete info");
                    }
#line 605 "rtree.m"
                  }
#line 604 "rtree.m"
                else
#line 583 "rtree.m"
                  {
#line 583 "rtree.m"
                    MR_Word mercury__rtree__Orphan_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans_53, (MR_Integer) 0)));
#line 583 "rtree.m"
                    MR_Word mercury__rtree__Orphans0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans_53, (MR_Integer) 1)));
#line 583 "rtree.m"
                    MR_Box mercury__rtree__OrphanKey_18 = (MR_hl_field(MR_mktag(0), mercury__rtree__Orphan_16, (MR_Integer) 0));
#line 583 "rtree.m"
                    MR_Word mercury__rtree__OrphanTree_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__Orphan_16, (MR_Integer) 1)));
#line 600 "rtree.m"
                    MR_Box mercury__rtree__OrphanValue_20;

#line 590 "rtree.m"
                    mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__OrphanTree_19)) == (MR_mktag((MR_Integer) 0)));
#line 590 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 590 "rtree.m"
                      {
#line 590 "rtree.m"
                        mercury__rtree__OrphanValue_20 = (MR_hl_field(MR_mktag(0), mercury__rtree__OrphanTree_19, (MR_Integer) 0));
#line 591 "rtree.m"
                        mercury__rtree__succeeded = (mercury__rtree__Orphans0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 592 "rtree.m"
                          {
#line 592 "rtree.m"
                            MR_Word base;
#line 592 "rtree.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "rtree.m"
                            *mercury__rtree__HeadVar__4_4 = base;
#line 592 "rtree.m"
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__OrphanKey_18;
#line 592 "rtree.m"
                            MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__OrphanValue_20;
#line 592 "rtree.m"
                          }
#line 593 "rtree.m"
                        else
#line 597 "rtree.m"
                          {
#line 597 "rtree.m"
                            MR_Box mercury__rtree__NextOrphanKey_21;
#line 597 "rtree.m"
                            MR_Word mercury__rtree__NextOrphanTree_22;
#line 593 "rtree.m"
                            MR_Word mercury__rtree__V_30_30;
#line 593 "rtree.m"
                            MR_Word mercury__rtree__V_31_31;

#line 593 "rtree.m"
                            mercury__rtree__succeeded = ((MR_tag((MR_Word) mercury__rtree__Orphans0_17)) == (MR_mktag((MR_Integer) 1)));
#line 593 "rtree.m"
                            if (mercury__rtree__succeeded)
#line 593 "rtree.m"
                              {
#line 593 "rtree.m"
                                mercury__rtree__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans0_17, (MR_Integer) 0)));
#line 593 "rtree.m"
                                mercury__rtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Orphans0_17, (MR_Integer) 1)));
#line 593 "rtree.m"
                                mercury__rtree__NextOrphanKey_21 = (MR_hl_field(MR_mktag(0), mercury__rtree__V_30_30, (MR_Integer) 0));
#line 593 "rtree.m"
                                mercury__rtree__NextOrphanTree_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__rtree__V_30_30, (MR_Integer) 1)));
#line 593 "rtree.m"
                                mercury__rtree__succeeded = (mercury__rtree__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "rtree.m"
                              }
#line 597 "rtree.m"
                            if (mercury__rtree__succeeded)
#line 595 "rtree.m"
                              {
#line 595 "rtree.m"
                                MR_Word mercury__rtree__STATE_VARIABLE_T_38_42;

#line 594 "rtree.m"
                                {
#line 594 "rtree.m"
                                  mercury__rtree__STATE_VARIABLE_T_38_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 594 "rtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 0) = mercury__rtree__OrphanKey_18;
#line 594 "rtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 1) = ((MR_Box) (mercury__rtree__OrphanTree_19));
#line 594 "rtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 2) = mercury__rtree__NextOrphanKey_21;
#line 594 "rtree.m"
                                  MR_hl_field(MR_mktag(1), mercury__rtree__STATE_VARIABLE_T_38_42, 3) = ((MR_Box) (mercury__rtree__NextOrphanTree_22));
#line 594 "rtree.m"
                                }
#line 596 "rtree.m"
                                {
#line 596 "rtree.m"
                                  MR_Word base;
#line 596 "rtree.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 596 "rtree.m"
                                  *mercury__rtree__HeadVar__4_4 = base;
#line 596 "rtree.m"
                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_42));
#line 596 "rtree.m"
                                }
#line 595 "rtree.m"
                              }
#line 597 "rtree.m"
                            else
#line 598 "rtree.m"
                              {
#line 598 "rtree.m"
                                {
#line 598 "rtree.m"
                                  mercury__require__error_1_p_0((MR_String) "delete: unbalanced rtree");
                                }
#line 598 "rtree.m"
                              }
#line 597 "rtree.m"
                          }
#line 590 "rtree.m"
                      }
#line 590 "rtree.m"
                    else
#line 601 "rtree.m"
                      {
#line 601 "rtree.m"
                        MR_Word mercury__rtree__STATE_VARIABLE_T_38_47;

#line 601 "rtree.m"
                        {
#line 601 "rtree.m"
                          mercury__rtree__reinsert_deleted_subtrees_4_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__Orphans0_17, (MR_Integer) 1, mercury__rtree__OrphanTree_19, &mercury__rtree__STATE_VARIABLE_T_38_47);
                        }
#line 602 "rtree.m"
                        {
#line 602 "rtree.m"
                          MR_Word base;
#line 602 "rtree.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "rtree.m"
                          *mercury__rtree__HeadVar__4_4 = base;
#line 602 "rtree.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_47));
#line 602 "rtree.m"
                        }
#line 601 "rtree.m"
                      }
#line 583 "rtree.m"
                  }
#line 576 "rtree.m"
              }
#line 575 "rtree.m"
            else
#line 572 "rtree.m"
              {
#line 572 "rtree.m"
                MR_Integer mercury__rtree__Depth_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__rtree__Info_13, (MR_Integer) 0)));
#line 572 "rtree.m"
                MR_Word mercury__rtree__Orphans_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rtree__Info_13, (MR_Integer) 1)));
#line 572 "rtree.m"
                MR_Word mercury__rtree__STATE_VARIABLE_T_38_38;

#line 573 "rtree.m"
                {
#line 573 "rtree.m"
                  mercury__rtree__reinsert_deleted_subtrees_4_p_0(mercury__rtree__TypeInfo_for_V_56, mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__Orphans_15, mercury__rtree__Depth_14, mercury__rtree__STATE_VARIABLE_T_27_27, &mercury__rtree__STATE_VARIABLE_T_38_38);
                }
#line 574 "rtree.m"
                {
#line 574 "rtree.m"
                  MR_Word base;
#line 574 "rtree.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "rtree.m"
                  *mercury__rtree__HeadVar__4_4 = base;
#line 574 "rtree.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_38_38));
#line 574 "rtree.m"
                }
#line 572 "rtree.m"
              }
#line 575 "rtree.m"
            mercury__rtree__succeeded = MR_TRUE;
#line 567 "rtree.m"
          }
#line 567 "rtree.m"
      }
#line 565 "rtree.m"
    else
#line 565 "rtree.m"
      mercury__rtree__succeeded = MR_FALSE;
#line 565 "rtree.m"
    return mercury__rtree__succeeded;
#line 565 "rtree.m"
  }
#line 97 "rtree.m"
}

#line 88 "rtree.m"
void MR_CALL 
mercury__rtree__insert_4_p_0(
#line 88 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_22,
#line 88 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_21,
#line 88 "rtree.m"
  MR_Box mercury__rtree__K_1,
#line 88 "rtree.m"
  MR_Box mercury__rtree__V_2,
#line 88 "rtree.m"
  MR_Word mercury__rtree__HeadVar__3_3,
#line 88 "rtree.m"
  MR_Word * mercury__rtree__HeadVar__4_4)
#line 88 "rtree.m"
{
#line 288 "rtree.m"
  {
#line 288 "rtree.m"
    MR_bool mercury__rtree__succeeded;

#line 288 "rtree.m"
#line 288 "rtree.m"
    switch (MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) {
#line 288 "rtree.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "rtree.m"
      case (MR_Integer) 0:
#line 288 "rtree.m"
        {
#line 288 "rtree.m"
          MR_Word base;
#line 288 "rtree.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "rtree.m"
          *mercury__rtree__HeadVar__4_4 = base;
#line 288 "rtree.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__rtree__K_1;
#line 288 "rtree.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__rtree__V_2;
#line 288 "rtree.m"
        }
#line 288 "rtree.m"
        break;
#line 288 "rtree.m"
      case (MR_Integer) 1:
#line 289 "rtree.m"
        {
#line 289 "rtree.m"
          MR_Box mercury__rtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));
#line 289 "rtree.m"
          MR_Box mercury__rtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, (MR_Integer) 1));
#line 289 "rtree.m"
          MR_Word mercury__rtree__V_12_12;
#line 289 "rtree.m"
          MR_Word mercury__rtree__V_13_13;
#line 289 "rtree.m"
          MR_Word mercury__rtree__V_14_14;

#line 290 "rtree.m"
          {
#line 290 "rtree.m"
            mercury__rtree__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(0), mercury__rtree__V_13_13, 0) = mercury__rtree__V0_10;
#line 290 "rtree.m"
          }
#line 290 "rtree.m"
          {
#line 290 "rtree.m"
            mercury__rtree__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(0), mercury__rtree__V_14_14, 0) = mercury__rtree__V_2;
#line 290 "rtree.m"
          }
#line 290 "rtree.m"
          {
#line 290 "rtree.m"
            mercury__rtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(1), mercury__rtree__V_12_12, 0) = mercury__rtree__K0_9;
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(1), mercury__rtree__V_12_12, 1) = ((MR_Box) (mercury__rtree__V_13_13));
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(1), mercury__rtree__V_12_12, 2) = mercury__rtree__K_1;
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(1), mercury__rtree__V_12_12, 3) = ((MR_Box) (mercury__rtree__V_14_14));
#line 290 "rtree.m"
          }
#line 290 "rtree.m"
          {
#line 290 "rtree.m"
            MR_Word base;
#line 290 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rtree.m"
            *mercury__rtree__HeadVar__4_4 = base;
#line 290 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__V_12_12));
#line 290 "rtree.m"
          }
#line 289 "rtree.m"
        }
#line 288 "rtree.m"
        break;
#line 288 "rtree.m"
      case (MR_Integer) 2:
#line 291 "rtree.m"
        {
#line 291 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_T_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));
#line 291 "rtree.m"
          MR_Word mercury__rtree__STATE_VARIABLE_T_19;

#line 292 "rtree.m"
          {
#line 292 "rtree.m"
            mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_49_93_95_48_4_p_0(mercury__rtree__TypeClassInfo_for_region_21, mercury__rtree__STATE_VARIABLE_T_0_18, mercury__rtree__K_1, mercury__rtree__V_2, &mercury__rtree__STATE_VARIABLE_T_19);
          }
#line 291 "rtree.m"
          {
#line 291 "rtree.m"
            MR_Word base;
#line 291 "rtree.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 291 "rtree.m"
            *mercury__rtree__HeadVar__4_4 = base;
#line 291 "rtree.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__rtree__STATE_VARIABLE_T_19));
#line 291 "rtree.m"
          }
#line 291 "rtree.m"
        }
#line 288 "rtree.m"
        break;
#line 288 "rtree.m"
    }
#line 288 "rtree.m"
  }
#line 88 "rtree.m"
}

#line 87 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__insert_3_f_0(
#line 87 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_12,
#line 87 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_11,
#line 87 "rtree.m"
  MR_Box mercury__rtree__K_5,
#line 87 "rtree.m"
  MR_Box mercury__rtree__V_6,
#line 87 "rtree.m"
  MR_Word mercury__rtree__STATE_VARIABLE_Tree_0_8)
#line 87 "rtree.m"
{
#line 286 "rtree.m"
  {
#line 286 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 286 "rtree.m"
    MR_Word mercury__rtree__STATE_VARIABLE_Tree_9;

#line 286 "rtree.m"
    {
#line 286 "rtree.m"
      mercury__rtree__insert_4_p_0(mercury__rtree__TypeInfo_for_V_12, mercury__rtree__TypeClassInfo_for_region_11, mercury__rtree__K_5, mercury__rtree__V_6, mercury__rtree__STATE_VARIABLE_Tree_0_8, &mercury__rtree__STATE_VARIABLE_Tree_9);
    }
#line 286 "rtree.m"
    return mercury__rtree__STATE_VARIABLE_Tree_9;
#line 286 "rtree.m"
  }
#line 87 "rtree.m"
}

#line 83 "rtree.m"
MR_bool MR_CALL 
mercury__rtree__is_empty_1_p_0(
#line 83 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_K_2,
#line 83 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_3,
#line 83 "rtree.m"
  MR_Word mercury__rtree__HeadVar__1_1)
#line 83 "rtree.m"
{
#line 277 "rtree.m"
  {
#line 277 "rtree.m"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 277 "rtree.m"
    return mercury__rtree__succeeded;
#line 277 "rtree.m"
  }
#line 83 "rtree.m"
}

#line 79 "rtree.m"
MR_Word MR_CALL 
mercury__rtree__init_0_f_0(
#line 79 "rtree.m"
  MR_Word mercury__rtree__TypeInfo_for_V_3,
#line 79 "rtree.m"
  MR_Word mercury__rtree__TypeClassInfo_for_region_2)
#line 79 "rtree.m"
{
#line 270 "rtree.m"
  {
#line 270 "rtree.m"
    MR_bool mercury__rtree__succeeded;
#line 270 "rtree.m"
    MR_Word mercury__rtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 270 "rtree.m"
    return mercury__rtree__HeadVar__1_1;
#line 270 "rtree.m"
  }
#line 79 "rtree.m"
}

void mercury__rtree__init(void)
{
}

void mercury__rtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_box_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_box3d_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_delete_info_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_interval_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_four_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_three_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_min_of_two_result_0);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_orphan_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_orphans_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_rtree_2);
	MR_register_type_ctor_info(&mercury__rtree__rtree__type_ctor_info_rtree_2_2);
}

void mercury__rtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module rtree. */
