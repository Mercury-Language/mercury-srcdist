/*
** Automatically generated from `rtree.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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




#line 86 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4];

#line 89 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box_0_0;

#line 92 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1];

#line 95 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1];

#line 98 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1];

#line 101 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1];

#line 104 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6];

#line 107 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_box3d_0_0;

#line 110 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1];

#line 113 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1];

#line 116 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1];

#line 119 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1];

#line 122 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2;

#line 125 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2;

#line 128 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1];

#line 131 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_0;

#line 134 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2];

#line 137 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_delete_info_2_1;

#line 140 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1];

#line 143 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1];

#line 146 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_delete_info_2[2];

#line 149 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2];

#line 152 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2];

#line 155 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2];

#line 158 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_interval_0_0;

#line 161 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1];

#line 164 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1];

#line 167 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1];

#line 170 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1];

#line 173 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0;

#line 176 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1;

#line 179 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2;

#line 182 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3;

#line 185 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4];

#line 188 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4];

#line 191 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4];

#line 194 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0;

#line 197 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1;

#line 200 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2;

#line 203 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3];

#line 206 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3];

#line 209 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3];

#line 212 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0;

#line 215 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1;

#line 218 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2];

#line 221 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2];

#line 224 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2];

#line 227 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2;

#line 230 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2];

#line 233 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_orphan_2_0;

#line 236 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1];

#line 239 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1];

#line 242 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1];

#line 245 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1];

#line 248 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_0;

#line 251 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2];

#line 254 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_1;

#line 257 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1];

#line 260 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2;

#line 263 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1];

#line 266 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1];

#line 269 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1];

#line 272 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2[3];

#line 275 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3];

#line 278 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3];

#line 281 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1];

#line 284 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_0;

#line 287 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4];

#line 290 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_1;

#line 293 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6];

#line 296 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_2;

#line 299 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_3[8];

#line 302 "rtree.c"
static const MR_DuFunctorDesc mercury__rtree__rtree__du_functor_desc_rtree_2_2_3;

#line 305 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1];

#line 308 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1];

#line 311 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1];

#line 314 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1];

#line 317 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_rtree_2_2[4];

#line 320 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4];

#line 323 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4];

#line 326 "rtree.c"
static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1];

#line 329 "rtree.c"
static const MR_TypeClassMethod mercury__rtree__rtree__type_class_id_method_ids_region_1[5];

#line 332 "rtree.c"
static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1;

#line 335 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
#line 338 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 340 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 343 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
#line 346 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 348 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 350 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 353 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
#line 356 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 358 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 361 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
#line 364 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 366 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 368 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 371 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
#line 374 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 376 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 378 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 380 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 383 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
#line 386 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 388 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 390 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 392 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 394 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 397 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
#line 400 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 402 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 405 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
#line 408 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 410 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 412 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 415 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
#line 418 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 420 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 423 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
#line 426 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 428 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 430 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 433 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
#line 436 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 438 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 441 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
#line 444 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 446 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 448 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 451 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
#line 454 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 456 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 459 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
#line 462 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 464 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 466 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3);

#line 469 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
#line 472 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 474 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 476 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 478 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 481 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
#line 484 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 486 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 488 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 490 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 492 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 495 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
#line 498 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 500 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 502 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 504 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 507 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
#line 510 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 512 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 514 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 516 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 518 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 521 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
#line 524 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 526 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 528 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 530 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 533 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
#line 536 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 538 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 540 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 542 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 544 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 547 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
#line 550 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 552 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 554 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 556 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4);

#line 559 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
#line 562 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 564 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 566 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 568 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 570 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5);

#line 573 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
#line 576 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 578 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 580 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 583 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
#line 586 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 588 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 590 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 593 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
#line 596 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 598 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 601 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 604 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 606 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 608 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 611 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 614 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 616 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 618 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 621 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
#line 624 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 626 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 628 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 631 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
#line 634 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 636 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 638 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 641 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
#line 644 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 646 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 649 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 652 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 654 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 656 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 659 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 662 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 664 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 666 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 669 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
#line 672 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 674 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 676 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 679 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
#line 682 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 684 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 686 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 689 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
#line 692 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 694 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1);

#line 697 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 700 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 702 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 704 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 707 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 710 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 712 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 714 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2);

#line 13 "ops.opt"
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
#include "type_desc.mh"
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
#include "version_array.mh"
#include "version_array.mh"



#line 1768 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1776 "rtree.c"
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

#line 1791 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

#line 1796 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box_0_0
  }
};

#line 1805 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box_0_0
};

#line 1810 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box_0[1] = {
  (MR_Integer) 0
};

#line 1815 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box",
  {
    mercury__rtree__rtree__du_name_ordered_box_0
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_box_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box_0
};

#line 1836 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_box3d_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1846 "rtree.c"
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

#line 1861 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_box3d_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

#line 1866 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_box3d_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_box3d_0_0
  }
};

#line 1875 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_box3d_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_box3d_0_0
};

#line 1880 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_box3d_0[1] = {
  (MR_Integer) 0
};

#line 1885 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_box3d_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____box3d_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____box3d_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "box3d",
  {
    mercury__rtree__rtree__du_name_ordered_box3d_0
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_box3d_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_box3d_0
};

#line 1906 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_orphan_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1915 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_orphan_2__pseudo_1__pseudo_2
  }
};

#line 1923 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_0[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

#line 1928 "rtree.c"
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

#line 1943 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_delete_info_2_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
};

#line 1949 "rtree.c"
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

#line 1964 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0
};

#line 1969 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_delete_info_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

#line 1974 "rtree.c"
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

#line 1988 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_delete_info_2[2] = {
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_0,
  &mercury__rtree__rtree__du_functor_desc_delete_info_2_1
};

#line 1994 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_delete_info_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2000 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_delete_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____delete_info_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____delete_info_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "delete_info",
  {
    mercury__rtree__rtree__du_name_ordered_delete_info_2
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_delete_info_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_delete_info_2
};

#line 2021 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_interval_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2027 "rtree.c"
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

#line 2042 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_interval_0_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

#line 2047 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_interval_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_interval_0_0
  }
};

#line 2056 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_interval_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_interval_0_0
};

#line 2061 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_interval_0[1] = {
  (MR_Integer) 0
};

#line 2066 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_interval_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____interval_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____interval_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "interval",
  {
    mercury__rtree__rtree__du_name_ordered_interval_0
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_interval_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_interval_0
};

#line 2087 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0 = {
  (MR_String) "min4_first",
  (MR_Integer) 0
};

#line 2093 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1 = {
  (MR_String) "min4_second",
  (MR_Integer) 1
};

#line 2099 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2 = {
  (MR_String) "min4_third",
  (MR_Integer) 2
};

#line 2105 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3 = {
  (MR_String) "min4_fourth",
  (MR_Integer) 3
};

#line 2111 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3
};

#line 2119 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0[4] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_3,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_four_result_0_2
};

#line 2127 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_four_result_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2135 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_four_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_four_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_four_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_four_result",
  {
    mercury__rtree__rtree__enum_name_ordered_min_of_four_result_0
  },
  {
    mercury__rtree__rtree__enum_value_ordered_min_of_four_result_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_four_result_0
};

#line 2156 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0 = {
  (MR_String) "min3_first",
  (MR_Integer) 0
};

#line 2162 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1 = {
  (MR_String) "min3_second",
  (MR_Integer) 1
};

#line 2168 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2 = {
  (MR_String) "min3_third",
  (MR_Integer) 2
};

#line 2174 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

#line 2181 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0[3] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_1,
  &mercury__rtree__rtree__enum_functor_desc_min_of_three_result_0_2
};

#line 2188 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_three_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2195 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_three_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_three_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_three_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_three_result",
  {
    mercury__rtree__rtree__enum_name_ordered_min_of_three_result_0
  },
  {
    mercury__rtree__rtree__enum_value_ordered_min_of_three_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_three_result_0
};

#line 2216 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0 = {
  (MR_String) "min2_first",
  (MR_Integer) 0
};

#line 2222 "rtree.c"
static const MR_EnumFunctorDesc mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1 = {
  (MR_String) "min2_second",
  (MR_Integer) 1
};

#line 2228 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

#line 2234 "rtree.c"
static const MR_EnumFunctorDescPtr mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0[2] = {
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_0,
  &mercury__rtree__rtree__enum_functor_desc_min_of_two_result_0_1
};

#line 2240 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_min_of_two_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2246 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_min_of_two_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__rtree____Unify____min_of_two_result_0_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____min_of_two_result_0_0_10001)),
  (MR_String) "rtree",
  (MR_String) "min_of_two_result",
  {
    mercury__rtree__rtree__enum_name_ordered_min_of_two_result_0
  },
  {
    mercury__rtree__rtree__enum_value_ordered_min_of_two_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_min_of_two_result_0
};

#line 2267 "rtree.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2 = {
  &mercury__rtree__rtree__type_ctor_info_rtree_2_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2276 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_orphan_2_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2282 "rtree.c"
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

#line 2297 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_orphan_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

#line 2302 "rtree.c"
static const MR_DuPtagLayout mercury__rtree__rtree__du_ptag_ordered_orphan_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rtree__rtree__du_stag_ordered_orphan_2_0
  }
};

#line 2311 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_orphan_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_orphan_2_0
};

#line 2316 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_orphan_2[1] = {
  (MR_Integer) 0
};

#line 2321 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphan_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____orphan_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphan_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphan",
  {
    mercury__rtree__rtree__du_name_ordered_orphan_2
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_orphan_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_orphan_2
};

#line 2342 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_orphans_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__rtree____Unify____orphans_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____orphans_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "orphans",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__rtree__list__pti_list_1__pseudo_rtree__pti_orphan_2__pseudo_1__pseudo_2
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2363 "rtree.c"
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

#line 2378 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2384 "rtree.c"
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

#line 2399 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2[1] = {
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2404 "rtree.c"
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

#line 2419 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0
};

#line 2424 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1
};

#line 2429 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

#line 2434 "rtree.c"
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

#line 2453 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2[3] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_1,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2
};

#line 2460 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2467 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree",
  {
    mercury__rtree__rtree__du_name_ordered_rtree_2
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_rtree_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2
};

#line 2488 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 2493 "rtree.c"
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

#line 2508 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2516 "rtree.c"
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

#line 2531 "rtree.c"
static const MR_PseudoTypeInfo mercury__rtree__rtree__field_types_rtree_2_2_2[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__rtree__rtree__pti_rtree_2_2__pseudo_1__pseudo_2
};

#line 2541 "rtree.c"
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

#line 2556 "rtree.c"
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

#line 2568 "rtree.c"
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

#line 2583 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_0[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0
};

#line 2588 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_1[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

#line 2593 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_2[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2
};

#line 2598 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_stag_ordered_rtree_2_2_3[1] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3
};

#line 2603 "rtree.c"
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

#line 2627 "rtree.c"
static const MR_DuFunctorDescPtr mercury__rtree__rtree__du_name_ordered_rtree_2_2[4] = {
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_3,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_0,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_2,
  &mercury__rtree__rtree__du_functor_desc_rtree_2_2_1
};

#line 2635 "rtree.c"
static const MR_Integer mercury__rtree__rtree__functor_number_map_rtree_2_2[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2643 "rtree.c"
const MR_TypeCtorInfo_Struct mercury__rtree__rtree__type_ctor_info_rtree_2_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rtree____Unify____rtree_2_2_0_10001)),
  ((MR_Box) (mercury__rtree____Compare____rtree_2_2_0_10001)),
  (MR_String) "rtree",
  (MR_String) "rtree_2",
  {
    mercury__rtree__rtree__du_name_ordered_rtree_2_2
  },
  {
    mercury__rtree__rtree__du_ptag_ordered_rtree_2_2
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__rtree__rtree__functor_number_map_rtree_2_2
};

#line 2664 "rtree.c"
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

#line 2678 "rtree.c"
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

#line 2692 "rtree.c"
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

#line 2706 "rtree.c"
static const MR_ConstString mercury__rtree__rtree__type_class_id_var_names_region_1[1] = {
  (MR_String) "K"
};

#line 2711 "rtree.c"
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

#line 2740 "rtree.c"
static const MR_TypeClassId mercury__rtree__rtree__type_class_id_region_1 = {
  (MR_String) "rtree",
  (MR_String) "region",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 5,
  mercury__rtree__rtree__type_class_id_var_names_region_1,
  mercury__rtree__rtree__type_class_id_method_ids_region_1
};

#line 2751 "rtree.c"
const MR_TypeClassDeclStruct mercury__rtree__rtree__type_class_decl_region_1 = {
  &mercury__rtree__rtree__type_class_id_region_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2759 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box_0_0_10001(
#line 2762 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2764 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2766 "rtree.c"
{
#line 2768 "rtree.c"
  {
#line 2770 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2773 "rtree.c"
    {
#line 2775 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____box_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2778 "rtree.c"
    return mercury__rtree__succeeded;
#line 2780 "rtree.c"
  }
#line 2782 "rtree.c"
}

#line 2785 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box_0_0_10001(
#line 2788 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2790 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2792 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2794 "rtree.c"
{
#line 2796 "rtree.c"
  {
#line 2798 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2801 "rtree.c"
    {
#line 2803 "rtree.c"
      mercury__rtree____Compare____box_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2806 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2808 "rtree.c"
  }
#line 2810 "rtree.c"
}

#line 2813 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____box3d_0_0_10001(
#line 2816 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2818 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2820 "rtree.c"
{
#line 2822 "rtree.c"
  {
#line 2824 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2827 "rtree.c"
    {
#line 2829 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____box3d_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2832 "rtree.c"
    return mercury__rtree__succeeded;
#line 2834 "rtree.c"
  }
#line 2836 "rtree.c"
}

#line 2839 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____box3d_0_0_10001(
#line 2842 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2844 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2846 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2848 "rtree.c"
{
#line 2850 "rtree.c"
  {
#line 2852 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2855 "rtree.c"
    {
#line 2857 "rtree.c"
      mercury__rtree____Compare____box3d_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2860 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2862 "rtree.c"
  }
#line 2864 "rtree.c"
}

#line 2867 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____delete_info_2_0_10001(
#line 2870 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2872 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2874 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 2876 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 2878 "rtree.c"
{
#line 2880 "rtree.c"
  {
#line 2882 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2885 "rtree.c"
    {
#line 2887 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 2890 "rtree.c"
    return mercury__rtree__succeeded;
#line 2892 "rtree.c"
  }
#line 2894 "rtree.c"
}

#line 2897 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____delete_info_2_0_10001(
#line 2900 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2902 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2904 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 2906 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 2908 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 2910 "rtree.c"
{
#line 2912 "rtree.c"
  {
#line 2914 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2917 "rtree.c"
    {
#line 2919 "rtree.c"
      mercury__rtree____Compare____delete_info_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 2922 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2924 "rtree.c"
  }
#line 2926 "rtree.c"
}

#line 2929 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____interval_0_0_10001(
#line 2932 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2934 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2936 "rtree.c"
{
#line 2938 "rtree.c"
  {
#line 2940 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2943 "rtree.c"
    {
#line 2945 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____interval_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 2948 "rtree.c"
    return mercury__rtree__succeeded;
#line 2950 "rtree.c"
  }
#line 2952 "rtree.c"
}

#line 2955 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____interval_0_0_10001(
#line 2958 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 2960 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 2962 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 2964 "rtree.c"
{
#line 2966 "rtree.c"
  {
#line 2968 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 2971 "rtree.c"
    {
#line 2973 "rtree.c"
      mercury__rtree____Compare____interval_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 2976 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 2978 "rtree.c"
  }
#line 2980 "rtree.c"
}

#line 2983 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_four_result_0_0_10001(
#line 2986 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 2988 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 2990 "rtree.c"
{
#line 2992 "rtree.c"
  {
#line 2994 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 2997 "rtree.c"
    {
#line 2999 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_four_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3002 "rtree.c"
    return mercury__rtree__succeeded;
#line 3004 "rtree.c"
  }
#line 3006 "rtree.c"
}

#line 3009 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_four_result_0_0_10001(
#line 3012 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 3014 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3016 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 3018 "rtree.c"
{
#line 3020 "rtree.c"
  {
#line 3022 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3025 "rtree.c"
    {
#line 3027 "rtree.c"
      mercury__rtree____Compare____min_of_four_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 3030 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3032 "rtree.c"
  }
#line 3034 "rtree.c"
}

#line 3037 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_three_result_0_0_10001(
#line 3040 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3042 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3044 "rtree.c"
{
#line 3046 "rtree.c"
  {
#line 3048 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3051 "rtree.c"
    {
#line 3053 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_three_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3056 "rtree.c"
    return mercury__rtree__succeeded;
#line 3058 "rtree.c"
  }
#line 3060 "rtree.c"
}

#line 3063 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_three_result_0_0_10001(
#line 3066 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 3068 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3070 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 3072 "rtree.c"
{
#line 3074 "rtree.c"
  {
#line 3076 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3079 "rtree.c"
    {
#line 3081 "rtree.c"
      mercury__rtree____Compare____min_of_three_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 3084 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3086 "rtree.c"
  }
#line 3088 "rtree.c"
}

#line 3091 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____min_of_two_result_0_0_10001(
#line 3094 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3096 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3098 "rtree.c"
{
#line 3100 "rtree.c"
  {
#line 3102 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3105 "rtree.c"
    {
#line 3107 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____min_of_two_result_0_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3110 "rtree.c"
    return mercury__rtree__succeeded;
#line 3112 "rtree.c"
  }
#line 3114 "rtree.c"
}

#line 3117 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____min_of_two_result_0_0_10001(
#line 3120 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_1,
#line 3122 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3124 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3)
#line 3126 "rtree.c"
{
#line 3128 "rtree.c"
  {
#line 3130 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3133 "rtree.c"
    {
#line 3135 "rtree.c"
      mercury__rtree____Compare____min_of_two_result_0_0(&mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3));
    }
#line 3138 "rtree.c"
    *mercury__rtree__wrapper_arg_1 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3140 "rtree.c"
  }
#line 3142 "rtree.c"
}

#line 3145 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphan_2_0_10001(
#line 3148 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3150 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3152 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 3154 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 3156 "rtree.c"
{
#line 3158 "rtree.c"
  {
#line 3160 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3163 "rtree.c"
    {
#line 3165 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 3168 "rtree.c"
    return mercury__rtree__succeeded;
#line 3170 "rtree.c"
  }
#line 3172 "rtree.c"
}

#line 3175 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphan_2_0_10001(
#line 3178 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3180 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3182 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 3184 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 3186 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 3188 "rtree.c"
{
#line 3190 "rtree.c"
  {
#line 3192 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3195 "rtree.c"
    {
#line 3197 "rtree.c"
      mercury__rtree____Compare____orphan_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3200 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3202 "rtree.c"
  }
#line 3204 "rtree.c"
}

#line 3207 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____orphans_2_0_10001(
#line 3210 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3212 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3214 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 3216 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 3218 "rtree.c"
{
#line 3220 "rtree.c"
  {
#line 3222 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3225 "rtree.c"
    {
#line 3227 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 3230 "rtree.c"
    return mercury__rtree__succeeded;
#line 3232 "rtree.c"
  }
#line 3234 "rtree.c"
}

#line 3237 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____orphans_2_0_10001(
#line 3240 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3242 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3244 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 3246 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 3248 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 3250 "rtree.c"
{
#line 3252 "rtree.c"
  {
#line 3254 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3257 "rtree.c"
    {
#line 3259 "rtree.c"
      mercury__rtree____Compare____orphans_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3262 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3264 "rtree.c"
  }
#line 3266 "rtree.c"
}

#line 3269 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_0_10001(
#line 3272 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3274 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3276 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 3278 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 3280 "rtree.c"
{
#line 3282 "rtree.c"
  {
#line 3284 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3287 "rtree.c"
    {
#line 3289 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 3292 "rtree.c"
    return mercury__rtree__succeeded;
#line 3294 "rtree.c"
  }
#line 3296 "rtree.c"
}

#line 3299 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_0_10001(
#line 3302 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3304 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3306 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 3308 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 3310 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 3312 "rtree.c"
{
#line 3314 "rtree.c"
  {
#line 3316 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3319 "rtree.c"
    {
#line 3321 "rtree.c"
      mercury__rtree____Compare____rtree_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3324 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3326 "rtree.c"
  }
#line 3328 "rtree.c"
}

#line 3331 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree____Unify____rtree_2_2_0_10001(
#line 3334 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3336 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3338 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_3,
#line 3340 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4)
#line 3342 "rtree.c"
{
#line 3344 "rtree.c"
  {
#line 3346 "rtree.c"
    MR_bool mercury__rtree__succeeded;

#line 3349 "rtree.c"
    {
#line 3351 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), ((MR_Word) mercury__rtree__wrapper_arg_3), ((MR_Word) mercury__rtree__wrapper_arg_4));
    }
#line 3354 "rtree.c"
    return mercury__rtree__succeeded;
#line 3356 "rtree.c"
  }
#line 3358 "rtree.c"
}

#line 3361 "rtree.c"
static void MR_CALL 
mercury__rtree____Compare____rtree_2_2_0_10001(
#line 3364 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3366 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2,
#line 3368 "rtree.c"
  MR_Box * mercury__rtree__wrapper_arg_3,
#line 3370 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_4,
#line 3372 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_5)
#line 3374 "rtree.c"
{
#line 3376 "rtree.c"
  {
#line 3378 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__1_1;

#line 3381 "rtree.c"
    {
#line 3383 "rtree.c"
      mercury__rtree____Compare____rtree_2_2_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2), &mercury__rtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rtree__wrapper_arg_4), ((MR_Word) mercury__rtree__wrapper_arg_5));
    }
#line 3386 "rtree.c"
    *mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__1_1));
#line 3388 "rtree.c"
  }
#line 3390 "rtree.c"
}

#line 3393 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0_10001(
#line 3396 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3398 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3400 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3402 "rtree.c"
{
#line 3404 "rtree.c"
  {
#line 3406 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3408 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3411 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3413 "rtree.c"
    {
#line 3415 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3418 "rtree.c"
    return mercury__rtree__succeeded;
#line 3420 "rtree.c"
  }
#line 3422 "rtree.c"
}

#line 3425 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0_10001(
#line 3428 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3430 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3432 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3434 "rtree.c"
{
#line 3436 "rtree.c"
  {
#line 3438 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3440 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3443 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3445 "rtree.c"
    {
#line 3447 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3450 "rtree.c"
    return mercury__rtree__succeeded;
#line 3452 "rtree.c"
  }
#line 3454 "rtree.c"
}

#line 3457 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0_10001(
#line 3460 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3462 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3464 "rtree.c"
{
#line 3466 "rtree.c"
  {
#line 3468 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3470 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3472 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3475 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3477 "rtree.c"
    {
#line 3479 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3482 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3484 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3486 "rtree.c"
  }
#line 3488 "rtree.c"
}

#line 3491 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3494 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3496 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3498 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3500 "rtree.c"
{
#line 3502 "rtree.c"
  {
#line 3504 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3506 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3508 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3511 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3513 "rtree.c"
    {
#line 3515 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3518 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3520 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3522 "rtree.c"
  }
#line 3524 "rtree.c"
}

#line 3527 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3530 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3532 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3534 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3536 "rtree.c"
{
#line 3538 "rtree.c"
  {
#line 3540 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3542 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3544 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3547 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3549 "rtree.c"
    {
#line 3551 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__interval__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3554 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3556 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3558 "rtree.c"
  }
#line 3560 "rtree.c"
}

#line 3563 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0_10001(
#line 3566 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3568 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3570 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3572 "rtree.c"
{
#line 3574 "rtree.c"
  {
#line 3576 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3578 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3581 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3583 "rtree.c"
    {
#line 3585 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3588 "rtree.c"
    return mercury__rtree__succeeded;
#line 3590 "rtree.c"
  }
#line 3592 "rtree.c"
}

#line 3595 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0_10001(
#line 3598 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3600 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3602 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3604 "rtree.c"
{
#line 3606 "rtree.c"
  {
#line 3608 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3610 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3613 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3615 "rtree.c"
    {
#line 3617 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3620 "rtree.c"
    return mercury__rtree__succeeded;
#line 3622 "rtree.c"
  }
#line 3624 "rtree.c"
}

#line 3627 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0_10001(
#line 3630 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3632 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3634 "rtree.c"
{
#line 3636 "rtree.c"
  {
#line 3638 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3640 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3642 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3645 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3647 "rtree.c"
    {
#line 3649 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3652 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3654 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3656 "rtree.c"
  }
#line 3658 "rtree.c"
}

#line 3661 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3664 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3666 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3668 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3670 "rtree.c"
{
#line 3672 "rtree.c"
  {
#line 3674 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3676 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3678 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3681 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3683 "rtree.c"
    {
#line 3685 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3688 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3690 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3692 "rtree.c"
  }
#line 3694 "rtree.c"
}

#line 3697 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3700 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3702 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3704 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3706 "rtree.c"
{
#line 3708 "rtree.c"
  {
#line 3710 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3712 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3714 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3717 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3719 "rtree.c"
    {
#line 3721 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3724 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3726 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3728 "rtree.c"
  }
#line 3730 "rtree.c"
}

#line 3733 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0_10001(
#line 3736 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3738 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3740 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3742 "rtree.c"
{
#line 3744 "rtree.c"
  {
#line 3746 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3748 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3751 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3753 "rtree.c"
    {
#line 3755 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__intersects_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3758 "rtree.c"
    return mercury__rtree__succeeded;
#line 3760 "rtree.c"
  }
#line 3762 "rtree.c"
}

#line 3765 "rtree.c"
static MR_bool MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0_10001(
#line 3768 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3770 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3772 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3774 "rtree.c"
{
#line 3776 "rtree.c"
  {
#line 3778 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 3780 "rtree.c"
    MR_Box mercury__rtree__closure;

#line 3783 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3785 "rtree.c"
    {
#line 3787 "rtree.c"
      mercury__rtree__succeeded = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__contains_2_2_p_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3790 "rtree.c"
    return mercury__rtree__succeeded;
#line 3792 "rtree.c"
  }
#line 3794 "rtree.c"
}

#line 3797 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0_10001(
#line 3800 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3802 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1)
#line 3804 "rtree.c"
{
#line 3806 "rtree.c"
  {
#line 3808 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_2;
#line 3810 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3812 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__2_2;

#line 3815 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3817 "rtree.c"
    {
#line 3819 "rtree.c"
      mercury__rtree__conv0_HeadVar__2_2 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__size_1_1_f_0(((MR_Word) mercury__rtree__wrapper_arg_1));
    }
#line 3822 "rtree.c"
    mercury__rtree__wrapper_arg_2 = MR_box_float(mercury__rtree__conv0_HeadVar__2_2);
#line 3824 "rtree.c"
    return mercury__rtree__wrapper_arg_2;
#line 3826 "rtree.c"
  }
#line 3828 "rtree.c"
}

#line 3831 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0_10001(
#line 3834 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3836 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3838 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3840 "rtree.c"
{
#line 3842 "rtree.c"
  {
#line 3844 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3846 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3848 "rtree.c"
    MR_Word mercury__rtree__conv0_HeadVar__3_3;

#line 3851 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3853 "rtree.c"
    {
#line 3855 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3858 "rtree.c"
    mercury__rtree__wrapper_arg_3 = ((MR_Box) (mercury__rtree__conv0_HeadVar__3_3));
#line 3860 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3862 "rtree.c"
  }
#line 3864 "rtree.c"
}

#line 3867 "rtree.c"
static MR_Box MR_CALL 
mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0_10001(
#line 3870 "rtree.c"
  MR_Box mercury__rtree__closure_arg,
#line 3872 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_1,
#line 3874 "rtree.c"
  MR_Box mercury__rtree__wrapper_arg_2)
#line 3876 "rtree.c"
{
#line 3878 "rtree.c"
  {
#line 3880 "rtree.c"
    MR_Box mercury__rtree__wrapper_arg_3;
#line 3882 "rtree.c"
    MR_Box mercury__rtree__closure;
#line 3884 "rtree.c"
    MR_Float mercury__rtree__conv0_HeadVar__3_3;

#line 3887 "rtree.c"
    mercury__rtree__closure = mercury__rtree__closure_arg;
#line 3889 "rtree.c"
    {
#line 3891 "rtree.c"
      mercury__rtree__conv0_HeadVar__3_3 = mercury__rtree__ClassMethod_for_rtree__region____rtree__box3d__arity0______rtree__bounding_region_size_2_2_f_0(((MR_Word) mercury__rtree__wrapper_arg_1), ((MR_Word) mercury__rtree__wrapper_arg_2));
    }
#line 3894 "rtree.c"
    mercury__rtree__wrapper_arg_3 = MR_box_float(mercury__rtree__conv0_HeadVar__3_3);
#line 3896 "rtree.c"
    return mercury__rtree__wrapper_arg_3;
#line 3898 "rtree.c"
  }
#line 3900 "rtree.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__rtree__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
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
#line 3947 "rtree.c"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

#line 3950 "rtree.c"
        {
#line 3952 "rtree.c"
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
        }
#line 940 "rtree.m"
        if (mercury__rtree__succeeded)
#line 920 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 3))))
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
          else
#line 920 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 0))))
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
            else
#line 920 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 2))))
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
              else
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
#line 940 "rtree.m"
        else
#line 939 "rtree.m"
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
#line 4186 "rtree.c"
        MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4189 "rtree.c"
        {
#line 4191 "rtree.c"
          mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_8, mercury__rtree__K_6);
        }
#line 899 "rtree.m"
        if (mercury__rtree__succeeded)
#line 879 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 3))))
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
          else
#line 879 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 0))))
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
            else
#line 879 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 2))))
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
              else
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
#line 899 "rtree.m"
        else
#line 898 "rtree.m"
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
#line 4455 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4457 "rtree.c"
    MR_Box mercury__rtree__conv1_A01_19;
#line 4459 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
#line 4461 "rtree.c"
    MR_Box mercury__rtree__conv3_A23_20;
#line 4463 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 4465 "rtree.c"
    MR_Box mercury__rtree__conv5_A02_22;
#line 4467 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 4469 "rtree.c"
    MR_Box mercury__rtree__conv7_A13_23;
#line 4471 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 4473 "rtree.c"
    MR_Box mercury__rtree__conv9_A03_25;
#line 4475 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 4477 "rtree.c"
    MR_Box mercury__rtree__conv11_A12_26;

#line 4480 "rtree.c"
    {
#line 4482 "rtree.c"
      mercury__rtree__conv1_A01_19 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K1_13);
    }
#line 4485 "rtree.c"
    mercury__rtree__A01_19 = MR_unbox_float(mercury__rtree__conv1_A01_19);
#line 4487 "rtree.c"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4489 "rtree.c"
    {
#line 4491 "rtree.c"
      mercury__rtree__conv3_A23_20 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K2_15, mercury__rtree__K3_17);
    }
#line 4494 "rtree.c"
    mercury__rtree__A23_20 = MR_unbox_float(mercury__rtree__conv3_A23_20);
#line 508 "rtree.m"
    mercury__rtree__A0123_21 = (mercury__rtree__A01_19 + mercury__rtree__A23_20);
#line 4498 "rtree.c"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4500 "rtree.c"
    {
#line 4502 "rtree.c"
      mercury__rtree__conv5_A02_22 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K2_15);
    }
#line 4505 "rtree.c"
    mercury__rtree__A02_22 = MR_unbox_float(mercury__rtree__conv5_A02_22);
#line 4507 "rtree.c"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4509 "rtree.c"
    {
#line 4511 "rtree.c"
      mercury__rtree__conv7_A13_23 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K3_17);
    }
#line 4514 "rtree.c"
    mercury__rtree__A13_23 = MR_unbox_float(mercury__rtree__conv7_A13_23);
#line 511 "rtree.m"
    mercury__rtree__A0213_24 = (mercury__rtree__A02_22 + mercury__rtree__A13_23);
#line 4518 "rtree.c"
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4520 "rtree.c"
    {
#line 4522 "rtree.c"
      mercury__rtree__conv9_A03_25 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K0_11, mercury__rtree__K3_17);
    }
#line 4525 "rtree.c"
    mercury__rtree__A03_25 = MR_unbox_float(mercury__rtree__conv9_A03_25);
#line 4527 "rtree.c"
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4529 "rtree.c"
    {
#line 4531 "rtree.c"
      mercury__rtree__conv11_A12_26 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_29), mercury__rtree__K1_13, mercury__rtree__K2_15);
    }
#line 4534 "rtree.c"
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
    if ((mercury__rtree__Min_28 == (MR_Integer) 0))
#line 528 "rtree.m"
      {
#line 4576 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_12)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4578 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_13)(MR_Box, MR_Box, MR_Box);

#line 4581 "rtree.c"
        {
#line 4583 "rtree.c"
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
#line 4604 "rtree.c"
        mercury__rtree__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4606 "rtree.c"
        {
#line 4608 "rtree.c"
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
    else
#line 533 "rtree.m"
      if ((mercury__rtree__Min_28 == (MR_Integer) 1))
#line 534 "rtree.m"
        {
#line 4637 "rtree.c"
          MR_Box MR_CALL (* mercury__rtree__func_14)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4639 "rtree.c"
          MR_Box MR_CALL (* mercury__rtree__func_15)(MR_Box, MR_Box, MR_Box);

#line 4642 "rtree.c"
          {
#line 4644 "rtree.c"
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
#line 4665 "rtree.c"
          mercury__rtree__func_15 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4667 "rtree.c"
          {
#line 4669 "rtree.c"
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
      else
#line 540 "rtree.m"
        {
#line 4696 "rtree.c"
          MR_Box MR_CALL (* mercury__rtree__func_16)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4698 "rtree.c"
          MR_Box MR_CALL (* mercury__rtree__func_17)(MR_Box, MR_Box, MR_Box);

#line 4701 "rtree.c"
          {
#line 4703 "rtree.c"
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
#line 4724 "rtree.c"
          mercury__rtree__func_17 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_29, (MR_Integer) 0)), (MR_Integer) 8)));
#line 4726 "rtree.c"
          {
#line 4728 "rtree.c"
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
    if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 3))))
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
#line 4812 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 4814 "rtree.c"
        MR_Box mercury__rtree__conv1_SizeA_58;
#line 4816 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 4818 "rtree.c"
        MR_Box mercury__rtree__conv3_SizeB_59;
#line 4820 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 4822 "rtree.c"
        MR_Box mercury__rtree__conv5_EnlargedSizeA_60;
#line 4824 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 4826 "rtree.c"
        MR_Box mercury__rtree__conv7_EnlargedSizeB_61;

#line 478 "rtree.m"
        {
#line 478 "rtree.m"
          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_52, mercury__rtree__T0_11, &mercury__rtree__K3_40, &mercury__rtree__T3_41, &mercury__rtree__K4_42, &mercury__rtree__T4_43);
        }
#line 4834 "rtree.c"
        mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4836 "rtree.c"
        {
#line 4838 "rtree.c"
          mercury__rtree__conv1_SizeA_58 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K2_14);
        }
#line 4841 "rtree.c"
        mercury__rtree__SizeA_58 = MR_unbox_float(mercury__rtree__conv1_SizeA_58);
#line 4843 "rtree.c"
        mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 7)));
#line 4845 "rtree.c"
        {
#line 4847 "rtree.c"
          mercury__rtree__conv3_SizeB_59 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K3_40);
        }
#line 4850 "rtree.c"
        mercury__rtree__SizeB_59 = MR_unbox_float(mercury__rtree__conv3_SizeB_59);
#line 4852 "rtree.c"
        mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4854 "rtree.c"
        {
#line 4856 "rtree.c"
          mercury__rtree__conv5_EnlargedSizeA_60 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K2_14);
        }
#line 4859 "rtree.c"
        mercury__rtree__EnlargedSizeA_60 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_60);
#line 4861 "rtree.c"
        mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 9)));
#line 4863 "rtree.c"
        {
#line 4865 "rtree.c"
          mercury__rtree__conv7_EnlargedSizeB_61 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_52), mercury__rtree__K_16, mercury__rtree__K3_40);
        }
#line 4868 "rtree.c"
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
        if ((mercury__rtree__Result_44 == (MR_Integer) 0))
#line 481 "rtree.m"
          {
#line 481 "rtree.m"
            MR_Box mercury__rtree__K5_45;
#line 481 "rtree.m"
            MR_Word mercury__rtree__T5_46;
#line 4916 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 4919 "rtree.c"
            {
#line 4921 "rtree.c"
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
        else
#line 486 "rtree.m"
          {
#line 486 "rtree.m"
            MR_Box mercury__rtree__K5_50;
#line 486 "rtree.m"
            MR_Word mercury__rtree__T5_51;
#line 4965 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 4968 "rtree.c"
            {
#line 4970 "rtree.c"
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
#line 477 "rtree.m"
      }
#line 466 "rtree.m"
    else
#line 466 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 466 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 2))))
#line 472 "rtree.m"
          {
#line 472 "rtree.m"
            MR_Box mercury__rtree__NK0_48;
#line 472 "rtree.m"
            MR_Word mercury__rtree__NT0_49;
#line 5063 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5066 "rtree.c"
            {
#line 5068 "rtree.c"
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
        else
#line 467 "rtree.m"
          {
#line 467 "rtree.m"
            MR_Box mercury__rtree__NK0_24;
#line 467 "rtree.m"
            MR_Word mercury__rtree__NT0_25;
#line 5108 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_52, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5111 "rtree.c"
            {
#line 5113 "rtree.c"
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
    if (((MR_tag((MR_Word) mercury__rtree__T0_9)) == (MR_mktag((MR_Integer) 3))))
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
#line 5202 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 5204 "rtree.c"
        MR_Box mercury__rtree__conv1_SizeA_54;
#line 5206 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 5208 "rtree.c"
        MR_Box mercury__rtree__conv3_SizeB_55;
#line 5210 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 5212 "rtree.c"
        MR_Box mercury__rtree__conv5_EnlargedSizeA_56;
#line 5214 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 5216 "rtree.c"
        MR_Box mercury__rtree__conv7_EnlargedSizeB_57;

#line 441 "rtree.m"
        {
#line 441 "rtree.m"
          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_48, mercury__rtree__T0_9, &mercury__rtree__K2_36, &mercury__rtree__T2_37, &mercury__rtree__K3_38, &mercury__rtree__T3_39);
        }
#line 5224 "rtree.c"
        mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 5226 "rtree.c"
        {
#line 5228 "rtree.c"
          mercury__rtree__conv1_SizeA_54 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K2_36);
        }
#line 5231 "rtree.c"
        mercury__rtree__SizeA_54 = MR_unbox_float(mercury__rtree__conv1_SizeA_54);
#line 5233 "rtree.c"
        mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 5235 "rtree.c"
        {
#line 5237 "rtree.c"
          mercury__rtree__conv3_SizeB_55 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K3_38);
        }
#line 5240 "rtree.c"
        mercury__rtree__SizeB_55 = MR_unbox_float(mercury__rtree__conv3_SizeB_55);
#line 5242 "rtree.c"
        mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
#line 5244 "rtree.c"
        {
#line 5246 "rtree.c"
          mercury__rtree__conv5_EnlargedSizeA_56 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K2_36);
        }
#line 5249 "rtree.c"
        mercury__rtree__EnlargedSizeA_56 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_56);
#line 5251 "rtree.c"
        mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 9)));
#line 5253 "rtree.c"
        {
#line 5255 "rtree.c"
          mercury__rtree__conv7_EnlargedSizeB_57 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_48), mercury__rtree__K_12, mercury__rtree__K3_38);
        }
#line 5258 "rtree.c"
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
        if ((mercury__rtree__Result_40 == (MR_Integer) 0))
#line 444 "rtree.m"
          {
#line 444 "rtree.m"
            MR_Box mercury__rtree__K4_41;
#line 444 "rtree.m"
            MR_Word mercury__rtree__T4_42;
#line 5306 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5309 "rtree.c"
            {
#line 5311 "rtree.c"
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
        else
#line 449 "rtree.m"
          {
#line 449 "rtree.m"
            MR_Box mercury__rtree__K4_46;
#line 449 "rtree.m"
            MR_Word mercury__rtree__T4_47;
#line 5351 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5354 "rtree.c"
            {
#line 5356 "rtree.c"
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
#line 440 "rtree.m"
      }
#line 429 "rtree.m"
    else
#line 429 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T0_9)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 429 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T0_9)) == (MR_mktag((MR_Integer) 2))))
#line 435 "rtree.m"
          {
#line 435 "rtree.m"
            MR_Box mercury__rtree__NK0_44;
#line 435 "rtree.m"
            MR_Word mercury__rtree__NT0_45;
#line 5441 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5444 "rtree.c"
            {
#line 5446 "rtree.c"
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
        else
#line 430 "rtree.m"
          {
#line 430 "rtree.m"
            MR_Box mercury__rtree__NK0_20;
#line 430 "rtree.m"
            MR_Word mercury__rtree__NT0_21;
#line 5482 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_48, (MR_Integer) 0)), (MR_Integer) 8)));

#line 5485 "rtree.c"
            {
#line 5487 "rtree.c"
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
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
        else
#line 301 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
          else
#line 301 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 5650 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 5652 "rtree.c"
                MR_Box mercury__rtree__conv1_AreaA_52;
#line 5654 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 5656 "rtree.c"
                MR_Box mercury__rtree__conv3_AreaB_53;
#line 5658 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
#line 5660 "rtree.c"
                MR_Box mercury__rtree__conv5_AreaC_54;
#line 5662 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 5664 "rtree.c"
                MR_Box mercury__rtree__conv7_EnlargedAreaA_55;
#line 5666 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 5668 "rtree.c"
                MR_Box mercury__rtree__conv9_EnlargedAreaB_56;
#line 5670 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 5672 "rtree.c"
                MR_Box mercury__rtree__conv11_EnlargedAreaC_57;

#line 5675 "rtree.c"
                {
#line 5677 "rtree.c"
                  mercury__rtree__conv1_AreaA_52 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K0_18);
                }
#line 5680 "rtree.c"
                mercury__rtree__AreaA_52 = MR_unbox_float(mercury__rtree__conv1_AreaA_52);
#line 5682 "rtree.c"
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 5684 "rtree.c"
                {
#line 5686 "rtree.c"
                  mercury__rtree__conv3_AreaB_53 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K1_20);
                }
#line 5689 "rtree.c"
                mercury__rtree__AreaB_53 = MR_unbox_float(mercury__rtree__conv3_AreaB_53);
#line 5691 "rtree.c"
                mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 7)));
#line 5693 "rtree.c"
                {
#line 5695 "rtree.c"
                  mercury__rtree__conv5_AreaC_54 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K2_22);
                }
#line 5698 "rtree.c"
                mercury__rtree__AreaC_54 = MR_unbox_float(mercury__rtree__conv5_AreaC_54);
#line 5700 "rtree.c"
                mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 5702 "rtree.c"
                {
#line 5704 "rtree.c"
                  mercury__rtree__conv7_EnlargedAreaA_55 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K0_18);
                }
#line 5707 "rtree.c"
                mercury__rtree__EnlargedAreaA_55 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_55);
#line 5709 "rtree.c"
                mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 5711 "rtree.c"
                {
#line 5713 "rtree.c"
                  mercury__rtree__conv9_EnlargedAreaB_56 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K1_20);
                }
#line 5716 "rtree.c"
                mercury__rtree__EnlargedAreaB_56 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_56);
#line 5718 "rtree.c"
                mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_45, (MR_Integer) 0)), (MR_Integer) 9)));
#line 5720 "rtree.c"
                {
#line 5722 "rtree.c"
                  mercury__rtree__conv11_EnlargedAreaC_57 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_45), mercury__rtree__K_2, mercury__rtree__K2_22);
                }
#line 5725 "rtree.c"
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
                if ((mercury__rtree__Result_27 == (MR_Integer) 0))
#line 316 "rtree.m"
                  {
#line 316 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
#line 316 "rtree.m"
                    return;
                  }
#line 317 "rtree.m"
                else
#line 317 "rtree.m"
                  if ((mercury__rtree__Result_27 == (MR_Integer) 1))
#line 319 "rtree.m"
                    {
#line 319 "rtree.m"
                      mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
#line 319 "rtree.m"
                      return;
                    }
#line 317 "rtree.m"
                  else
#line 322 "rtree.m"
                    {
#line 322 "rtree.m"
                      mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_51_95_95_91_49_93_95_48_9_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K2_22, mercury__rtree__T2_23, mercury__rtree__K0_18, mercury__rtree__T0_19, mercury__rtree__K1_20, mercury__rtree__T1_21, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
#line 322 "rtree.m"
                      return;
                    }
#line 312 "rtree.m"
              }
#line 301 "rtree.m"
            else
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
                if ((mercury__rtree__Result_17 == (MR_Integer) 0))
#line 307 "rtree.m"
                  {
#line 307 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
#line 307 "rtree.m"
                    return;
                  }
#line 308 "rtree.m"
                else
#line 310 "rtree.m"
                  {
#line 310 "rtree.m"
                    mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_97_110_100_95_115_112_108_105_116_95_99_104_105_108_100_50_95_95_91_49_93_95_48_7_p_0(mercury__rtree__TypeClassInfo_for_region_45, mercury__rtree__K1_12, mercury__rtree__T1_13, mercury__rtree__K0_10, mercury__rtree__T0_11, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__T_4);
#line 310 "rtree.m"
                    return;
                  }
#line 303 "rtree.m"
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_volume_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__box3d_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__succeeded = mercury__rtree__box3d_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_area_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__box_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__succeeded = mercury__rtree__box_intersects_2_p_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_length_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
      return mercury__rtree__HeadVar__3_3 = mercury__rtree__interval_bounding_region_2_f_0(mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
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
#line 6508 "rtree.c"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "rtree.m"
        else
#line 239 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
              if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
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
#line 6561 "rtree.c"
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
#line 6581 "rtree.c"
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
#line 6601 "rtree.c"
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
#line 6621 "rtree.c"
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
#line 6641 "rtree.c"
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
#line 6661 "rtree.c"
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
#line 6681 "rtree.c"
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
              else
#line 239 "rtree.m"
                if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6730 "rtree.c"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                else
#line 239 "rtree.m"
                  if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6736 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                  else
#line 6740 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
            }
#line 239 "rtree.m"
          else
#line 239 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 239 "rtree.m"
              {
#line 239 "rtree.m"
                MR_Box mercury__rtree__V_201_201 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 239 "rtree.m"
                if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6755 "rtree.c"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                else
#line 239 "rtree.m"
                  if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 239 "rtree.m"
                    {
#line 239 "rtree.m"
                      MR_Box mercury__rtree__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__3_3, (MR_Integer) 0));

#line 239 "rtree.m"
                      {
#line 239 "rtree.m"
                        mercury__builtin__compare_3_p_0(mercury__rtree__TypeInfo_for_V_174, mercury__rtree__HeadVar__1_1, mercury__rtree__V_201_201, mercury__rtree__V_5_5);
#line 239 "rtree.m"
                        return;
                      }
#line 239 "rtree.m"
                    }
#line 239 "rtree.m"
                  else
#line 239 "rtree.m"
                    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6779 "rtree.c"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                    else
#line 6783 "rtree.c"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
            else
#line 239 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
                  if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6808 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                  else
#line 239 "rtree.m"
                    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6814 "rtree.c"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    else
#line 239 "rtree.m"
                      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
#line 6842 "rtree.c"
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
#line 6862 "rtree.c"
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
#line 6882 "rtree.c"
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
#line 6902 "rtree.c"
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
#line 6922 "rtree.c"
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
                      else
#line 6965 "rtree.c"
                        *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                }
#line 239 "rtree.m"
              else
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
                  if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 6984 "rtree.c"
                    *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                  else
#line 239 "rtree.m"
                    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6990 "rtree.c"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "rtree.m"
                    else
#line 239 "rtree.m"
                      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6996 "rtree.c"
                        *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "rtree.m"
                      else
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
#line 7018 "rtree.c"
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
#line 7038 "rtree.c"
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
#line 7058 "rtree.c"
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
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 7201 "rtree.c"
                  {
#line 7203 "rtree.c"
                    mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_25_25, mercury__rtree__V_33_33);
                  }
#line 239 "rtree.m"
                  if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                    {
#line 7210 "rtree.c"
                      {
#line 7212 "rtree.c"
                        mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_26_26, mercury__rtree__V_34_34);
                      }
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        {
#line 7219 "rtree.c"
                          {
#line 7221 "rtree.c"
                            mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_27_27, mercury__rtree__V_35_35);
                          }
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            {
#line 7228 "rtree.c"
                              {
#line 7230 "rtree.c"
                                mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_28_28, mercury__rtree__V_36_36);
                              }
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                {
#line 7237 "rtree.c"
                                  {
#line 7239 "rtree.c"
                                    mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_29_29, mercury__rtree__V_37_37);
                                  }
#line 239 "rtree.m"
                                  if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                    {
#line 7246 "rtree.c"
                                      {
#line 7248 "rtree.c"
                                        mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_30_30, mercury__rtree__V_38_38);
                                      }
#line 239 "rtree.m"
                                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                        {
#line 7255 "rtree.c"
                                          {
#line 7257 "rtree.c"
                                            mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_31_31, mercury__rtree__V_39_39);
                                          }
#line 239 "rtree.m"
                                          if (mercury__rtree__succeeded)
#line 7262 "rtree.c"
                                            {
#line 7264 "rtree.c"
                                              /* direct tailcall eliminated */
#line 7266 "rtree.c"
                                              {
#line 7268 "rtree.c"
                                                MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_32_32;
#line 7270 "rtree.c"
                                                MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_40_40;

#line 7273 "rtree.c"
                                                mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7275 "rtree.c"
                                                mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7277 "rtree.c"
                                              }
#line 7279 "rtree.c"
                                              continue;
#line 7281 "rtree.c"
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
          else
#line 239 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 7318 "rtree.c"
                    {
#line 7320 "rtree.c"
                      return mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_3_3, mercury__rtree__V_4_4);
                    }
#line 239 "rtree.m"
                  }
#line 239 "rtree.m"
              }
#line 239 "rtree.m"
            else
#line 239 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 7376 "rtree.c"
                      {
#line 7378 "rtree.c"
                        mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_13_13, mercury__rtree__V_19_19);
                      }
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        {
#line 7385 "rtree.c"
                          {
#line 7387 "rtree.c"
                            mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_14_14, mercury__rtree__V_20_20);
                          }
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            {
#line 7394 "rtree.c"
                              {
#line 7396 "rtree.c"
                                mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_15_15, mercury__rtree__V_21_21);
                              }
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                {
#line 7403 "rtree.c"
                                  {
#line 7405 "rtree.c"
                                    mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_16_16, mercury__rtree__V_22_22);
                                  }
#line 239 "rtree.m"
                                  if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                                    {
#line 7412 "rtree.c"
                                      {
#line 7414 "rtree.c"
                                        mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_17_17, mercury__rtree__V_23_23);
                                      }
#line 239 "rtree.m"
                                      if (mercury__rtree__succeeded)
#line 7419 "rtree.c"
                                        {
#line 7421 "rtree.c"
                                          /* direct tailcall eliminated */
#line 7423 "rtree.c"
                                          {
#line 7425 "rtree.c"
                                            MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_18_18;
#line 7427 "rtree.c"
                                            MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_24_24;

#line 7430 "rtree.c"
                                            mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7432 "rtree.c"
                                            mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7434 "rtree.c"
                                          }
#line 7436 "rtree.c"
                                          continue;
#line 7438 "rtree.c"
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
              else
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
#line 7487 "rtree.c"
                      {
#line 7489 "rtree.c"
                        mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_5_5, mercury__rtree__V_9_9);
                      }
#line 239 "rtree.m"
                      if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                        {
#line 7496 "rtree.c"
                          {
#line 7498 "rtree.c"
                            mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__TypeInfo_for_V_44, mercury__rtree__V_6_6, mercury__rtree__V_10_10);
                          }
#line 239 "rtree.m"
                          if (mercury__rtree__succeeded)
#line 239 "rtree.m"
                            {
#line 7505 "rtree.c"
                              {
#line 7507 "rtree.c"
                                mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_43, mercury__rtree__V_7_7, mercury__rtree__V_11_11);
                              }
#line 239 "rtree.m"
                              if (mercury__rtree__succeeded)
#line 7512 "rtree.c"
                                {
#line 7514 "rtree.c"
                                  /* direct tailcall eliminated */
#line 7516 "rtree.c"
                                  {
#line 7518 "rtree.c"
                                    MR_Word mercury__rtree__HeadVar__1__tmp_copy_1 = mercury__rtree__V_8_8;
#line 7520 "rtree.c"
                                    MR_Word mercury__rtree__HeadVar__2__tmp_copy_2 = mercury__rtree__V_12_12;

#line 7523 "rtree.c"
                                    mercury__rtree__HeadVar__2_2 = mercury__rtree__HeadVar__2__tmp_copy_2;
#line 7525 "rtree.c"
                                    mercury__rtree__HeadVar__1_1 = mercury__rtree__HeadVar__1__tmp_copy_1;
#line 7527 "rtree.c"
                                  }
#line 7529 "rtree.c"
                                  continue;
#line 7531 "rtree.c"
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
#line 7580 "rtree.c"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "rtree.m"
    else
#line 225 "rtree.m"
      if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "rtree.m"
        if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "rtree.m"
        else
#line 225 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7594 "rtree.c"
            *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
          else
#line 7598 "rtree.c"
            *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
      else
#line 225 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_29_29 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 1));
#line 225 "rtree.m"
            MR_Box mercury__rtree__V_30_30 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__2_2, (MR_Integer) 0));

#line 225 "rtree.m"
            if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7613 "rtree.c"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
            else
#line 225 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 7633 "rtree.c"
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
#line 225 "rtree.m"
                      return;
                    }
#line 225 "rtree.m"
                }
#line 225 "rtree.m"
              else
#line 7654 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
        else
#line 225 "rtree.m"
          {
#line 225 "rtree.m"
            MR_Word mercury__rtree__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 225 "rtree.m"
            if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7667 "rtree.c"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
            else
#line 225 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7673 "rtree.c"
                *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 225 "rtree.m"
              else
#line 225 "rtree.m"
                {
#line 225 "rtree.m"
                  MR_Word mercury__rtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 225 "rtree.m"
                  {
#line 225 "rtree.m"
                    mercury__rtree____Compare____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__HeadVar__1_1, mercury__rtree__V_31_31, mercury__rtree__V_22_22);
#line 225 "rtree.m"
                    return;
                  }
#line 225 "rtree.m"
                }
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
      if ((mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 225 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 7766 "rtree.c"
                {
#line 7768 "rtree.c"
                  mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__V_5_5, mercury__rtree__V_7_7);
                }
#line 225 "rtree.m"
                if (mercury__rtree__succeeded)
#line 7773 "rtree.c"
                  {
#line 7775 "rtree.c"
                    return mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_V_14, mercury__rtree__V_6_6, mercury__rtree__V_8_8);
                  }
#line 225 "rtree.m"
              }
#line 225 "rtree.m"
          }
#line 225 "rtree.m"
        else
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
#line 7799 "rtree.c"
                {
#line 7801 "rtree.c"
                  return mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_13, mercury__rtree__TypeInfo_for_V_14, mercury__rtree__V_9_9, mercury__rtree__V_10_10);
                }
#line 225 "rtree.m"
              }
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

#line 7843 "rtree.c"
    {
#line 7845 "rtree.c"
      mercury__rtree__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7847 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_8_8));
#line 7849 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_6));
#line 7851 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_9_9, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_7));
#line 7853 "rtree.c"
    }
#line 559 "rtree.m"
    {
#line 559 "rtree.m"
      mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_9_9, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__Cast_HeadVar1_4, (MR_Word) mercury__rtree__Cast_HeadVar2_5);
#line 559 "rtree.m"
      return;
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

#line 7893 "rtree.c"
    {
#line 7895 "rtree.c"
      mercury__rtree__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7897 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_7_7));
#line 7899 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_5));
#line 7901 "rtree.c"
      MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_8_8, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_6));
#line 7903 "rtree.c"
    }
#line 559 "rtree.m"
    {
#line 559 "rtree.m"
      return mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_8_8, (MR_Word) mercury__rtree__Cast_HeadVar1_3, (MR_Word) mercury__rtree__Cast_HeadVar2_4);
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
#line 7945 "rtree.c"
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
#line 7967 "rtree.c"
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
#line 556 "rtree.m"
            return;
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

#line 8032 "rtree.c"
        {
#line 8034 "rtree.c"
          mercury__rtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__V_3_3, mercury__rtree__V_5_5);
        }
#line 556 "rtree.m"
        if (mercury__rtree__succeeded)
#line 8039 "rtree.c"
          {
#line 8041 "rtree.c"
            return mercury__rtree__succeeded = mercury__rtree____Unify____rtree_2_2_0(mercury__rtree__TypeInfo_for_K_9, mercury__rtree__TypeInfo_for_V_10, mercury__rtree__V_4_4, mercury__rtree__V_6_6);
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

#line 66 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 68 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 73 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 8109 "rtree.c"
  {
#line 8111 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8114 "rtree.c"
    return mercury__rtree__succeeded;
#line 8116 "rtree.c"
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

#line 66 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 68 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 73 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 8177 "rtree.c"
  {
#line 8179 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8182 "rtree.c"
    return mercury__rtree__succeeded;
#line 8184 "rtree.c"
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

#line 66 "private_builtin.opt"
    mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 < mercury__rtree__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__rtree__succeeded)
#line 68 "private_builtin.opt"
      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__Cast_HeadVar1_4 == mercury__rtree__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 73 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 8245 "rtree.c"
  {
#line 8247 "rtree.c"
    MR_bool mercury__rtree__succeeded = (mercury__rtree__HeadVar__2_1 == mercury__rtree__HeadVar__2_2);

#line 8250 "rtree.c"
    return mercury__rtree__succeeded;
#line 8252 "rtree.c"
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
#line 8281 "rtree.c"
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

#line 118 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_6_6);
#line 121 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
          mercury__rtree__V_8_8 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
        else
#line 126 "private_builtin.opt"
          {
#line 123 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_6_6);
#line 126 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
              mercury__rtree__V_8_8 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
            else
#line 127 "private_builtin.opt"
              mercury__rtree__V_8_8 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
          }
#line 8320 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_8_8 == (MR_Integer) 0);
#line 181 "rtree.m"
        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 181 "rtree.m"
        if (mercury__rtree__succeeded)
#line 181 "rtree.m"
          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_8_8;
#line 181 "rtree.m"
        else
#line 121 "private_builtin.opt"
          {
#line 118 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_7_7);
#line 121 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
            else
#line 126 "private_builtin.opt"
              {
#line 123 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_7_7);
#line 126 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                else
#line 127 "private_builtin.opt"
                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
              }
#line 121 "private_builtin.opt"
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

#line 8400 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_5_5);
#line 181 "rtree.m"
        if (mercury__rtree__succeeded)
#line 8404 "rtree.c"
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
#line 8443 "rtree.c"
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

#line 8465 "rtree.c"
              {
#line 8467 "rtree.c"
                mercury__rtree__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8469 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_26_26));
#line 8471 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
#line 8473 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_27_27, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
#line 8475 "rtree.c"
              }
#line 561 "rtree.m"
              {
#line 561 "rtree.m"
                mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_27_27, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__V_30_30, (MR_Word) mercury__rtree__V_5_5);
#line 561 "rtree.m"
                return;
              }
#line 561 "rtree.m"
            }
#line 561 "rtree.m"
          else
#line 8488 "rtree.c"
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
#line 8503 "rtree.c"
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

#line 66 "private_builtin.opt"
              mercury__rtree__succeeded = (mercury__rtree__V_32_32 < mercury__rtree__V_14_14);
#line 69 "private_builtin.opt"
              if (mercury__rtree__succeeded)
#line 68 "private_builtin.opt"
                mercury__rtree__V_16_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__rtree__succeeded = (mercury__rtree__V_32_32 == mercury__rtree__V_14_14);
#line 74 "private_builtin.opt"
                  if (mercury__rtree__succeeded)
#line 73 "private_builtin.opt"
                    mercury__rtree__V_16_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    mercury__rtree__V_16_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 8538 "rtree.c"
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

#line 8555 "rtree.c"
                  {
#line 8557 "rtree.c"
                    mercury__rtree__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8559 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_22_22));
#line 8561 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_19));
#line 8563 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_23_23, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_20));
#line 8565 "rtree.c"
                  }
#line 561 "rtree.m"
                  {
#line 561 "rtree.m"
                    mercury__list____Compare____list_1_0(mercury__rtree__TypeInfo_23_23, mercury__rtree__HeadVar__1_1, (MR_Word) mercury__rtree__V_31_31, (MR_Word) mercury__rtree__V_15_15);
#line 561 "rtree.m"
                    return;
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
#line 8636 "rtree.c"
              mercury__rtree__TypeCtorInfo_13_13 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 8638 "rtree.c"
              {
#line 8640 "rtree.c"
                mercury__rtree__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8642 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_13_13));
#line 8644 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
#line 8646 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_14_14, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
#line 8648 "rtree.c"
              }
#line 8650 "rtree.c"
              {
#line 8652 "rtree.c"
                return mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_14_14, (MR_Word) mercury__rtree__V_3_3, (MR_Word) mercury__rtree__V_4_4);
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
#line 8686 "rtree.c"
              mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_7_7);
#line 561 "rtree.m"
              if (mercury__rtree__succeeded)
#line 561 "rtree.m"
                {
#line 8692 "rtree.c"
                  mercury__rtree__TypeCtorInfo_17_17 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_orphan_2;
#line 8694 "rtree.c"
                  {
#line 8696 "rtree.c"
                    mercury__rtree__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8698 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_17_17));
#line 8700 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 1) = ((MR_Box) (mercury__rtree__TypeInfo_for_K_11));
#line 8702 "rtree.c"
                    MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_18_18, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_12));
#line 8704 "rtree.c"
                  }
#line 8706 "rtree.c"
                  {
#line 8708 "rtree.c"
                    return mercury__rtree__succeeded = mercury__list____Unify____list_1_0(mercury__rtree__TypeInfo_18_18, (MR_Word) mercury__rtree__V_6_6, (MR_Word) mercury__rtree__V_8_8);
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
#line 8748 "rtree.c"
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

#line 118 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_10_10);
#line 121 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
          mercury__rtree__V_16_16 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
        else
#line 126 "private_builtin.opt"
          {
#line 123 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_10_10);
#line 126 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
              mercury__rtree__V_16_16 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
            else
#line 127 "private_builtin.opt"
              mercury__rtree__V_16_16 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
          }
#line 8803 "rtree.c"
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

#line 118 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_11_11);
#line 121 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
              mercury__rtree__V_17_17 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
            else
#line 126 "private_builtin.opt"
              {
#line 123 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_11_11);
#line 126 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                  mercury__rtree__V_17_17 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                else
#line 127 "private_builtin.opt"
                  mercury__rtree__V_17_17 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
              }
#line 8840 "rtree.c"
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

#line 118 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_6_6 < mercury__rtree__V_12_12);
#line 121 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                  mercury__rtree__V_18_18 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                else
#line 126 "private_builtin.opt"
                  {
#line 123 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 > mercury__rtree__V_12_12);
#line 126 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                      mercury__rtree__V_18_18 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                    else
#line 127 "private_builtin.opt"
                      mercury__rtree__V_18_18 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                  }
#line 8877 "rtree.c"
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

#line 118 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_7_7 < mercury__rtree__V_13_13);
#line 121 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                      mercury__rtree__V_19_19 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                    else
#line 126 "private_builtin.opt"
                      {
#line 123 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 > mercury__rtree__V_13_13);
#line 126 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                          mercury__rtree__V_19_19 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                        else
#line 127 "private_builtin.opt"
                          mercury__rtree__V_19_19 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                      }
#line 8914 "rtree.c"
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

#line 118 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_8_8 < mercury__rtree__V_14_14);
#line 121 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                          mercury__rtree__V_20_20 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                        else
#line 126 "private_builtin.opt"
                          {
#line 123 "private_builtin.opt"
                            mercury__rtree__succeeded = (mercury__rtree__V_8_8 > mercury__rtree__V_14_14);
#line 126 "private_builtin.opt"
                            if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                              mercury__rtree__V_20_20 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                            else
#line 127 "private_builtin.opt"
                              mercury__rtree__V_20_20 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                          }
#line 8951 "rtree.c"
                        mercury__rtree__succeeded = (mercury__rtree__V_20_20 == (MR_Integer) 0);
#line 192 "rtree.m"
                        mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 192 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                          *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_20_20;
#line 192 "rtree.m"
                        else
#line 121 "private_builtin.opt"
                          {
#line 118 "private_builtin.opt"
                            mercury__rtree__succeeded = (mercury__rtree__V_9_9 < mercury__rtree__V_15_15);
#line 121 "private_builtin.opt"
                            if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                              *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                            else
#line 126 "private_builtin.opt"
                              {
#line 123 "private_builtin.opt"
                                mercury__rtree__succeeded = (mercury__rtree__V_9_9 > mercury__rtree__V_15_15);
#line 126 "private_builtin.opt"
                                if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                                else
#line 127 "private_builtin.opt"
                                  *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                              }
#line 121 "private_builtin.opt"
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

#line 9055 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_9_9);
#line 192 "rtree.m"
        if (mercury__rtree__succeeded)
#line 192 "rtree.m"
          {
#line 9061 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 == mercury__rtree__V_10_10);
#line 192 "rtree.m"
            if (mercury__rtree__succeeded)
#line 192 "rtree.m"
              {
#line 9067 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_11_11);
#line 192 "rtree.m"
                if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                  {
#line 9073 "rtree.c"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 == mercury__rtree__V_12_12);
#line 192 "rtree.m"
                    if (mercury__rtree__succeeded)
#line 192 "rtree.m"
                      {
#line 9079 "rtree.c"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 == mercury__rtree__V_13_13);
#line 192 "rtree.m"
                        if (mercury__rtree__succeeded)
#line 9083 "rtree.c"
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
#line 9126 "rtree.c"
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

#line 118 "private_builtin.opt"
        mercury__rtree__succeeded = (mercury__rtree__V_4_4 < mercury__rtree__V_8_8);
#line 121 "private_builtin.opt"
        if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
          mercury__rtree__V_12_12 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
        else
#line 126 "private_builtin.opt"
          {
#line 123 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 > mercury__rtree__V_8_8);
#line 126 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
              mercury__rtree__V_12_12 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
            else
#line 127 "private_builtin.opt"
              mercury__rtree__V_12_12 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
          }
#line 9173 "rtree.c"
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

#line 118 "private_builtin.opt"
            mercury__rtree__succeeded = (mercury__rtree__V_5_5 < mercury__rtree__V_9_9);
#line 121 "private_builtin.opt"
            if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
              mercury__rtree__V_13_13 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
            else
#line 126 "private_builtin.opt"
              {
#line 123 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 > mercury__rtree__V_9_9);
#line 126 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                  mercury__rtree__V_13_13 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                else
#line 127 "private_builtin.opt"
                  mercury__rtree__V_13_13 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
              }
#line 9210 "rtree.c"
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

#line 118 "private_builtin.opt"
                mercury__rtree__succeeded = (mercury__rtree__V_6_6 < mercury__rtree__V_10_10);
#line 121 "private_builtin.opt"
                if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                  mercury__rtree__V_14_14 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                else
#line 126 "private_builtin.opt"
                  {
#line 123 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_6_6 > mercury__rtree__V_10_10);
#line 126 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                      mercury__rtree__V_14_14 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                    else
#line 127 "private_builtin.opt"
                      mercury__rtree__V_14_14 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                  }
#line 9247 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_14_14 == (MR_Integer) 0);
#line 186 "rtree.m"
                mercury__rtree__succeeded = !(mercury__rtree__succeeded);
#line 186 "rtree.m"
                if (mercury__rtree__succeeded)
#line 186 "rtree.m"
                  *mercury__rtree__HeadVar__1_1 = mercury__rtree__V_14_14;
#line 186 "rtree.m"
                else
#line 121 "private_builtin.opt"
                  {
#line 118 "private_builtin.opt"
                    mercury__rtree__succeeded = (mercury__rtree__V_7_7 < mercury__rtree__V_11_11);
#line 121 "private_builtin.opt"
                    if (mercury__rtree__succeeded)
#line 120 "private_builtin.opt"
                      *mercury__rtree__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                    else
#line 126 "private_builtin.opt"
                      {
#line 123 "private_builtin.opt"
                        mercury__rtree__succeeded = (mercury__rtree__V_7_7 > mercury__rtree__V_11_11);
#line 126 "private_builtin.opt"
                        if (mercury__rtree__succeeded)
#line 125 "private_builtin.opt"
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                        else
#line 127 "private_builtin.opt"
                          *mercury__rtree__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                      }
#line 121 "private_builtin.opt"
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

#line 9339 "rtree.c"
        mercury__rtree__succeeded = (mercury__rtree__V_3_3 == mercury__rtree__V_7_7);
#line 186 "rtree.m"
        if (mercury__rtree__succeeded)
#line 186 "rtree.m"
          {
#line 9345 "rtree.c"
            mercury__rtree__succeeded = (mercury__rtree__V_4_4 == mercury__rtree__V_8_8);
#line 186 "rtree.m"
            if (mercury__rtree__succeeded)
#line 186 "rtree.m"
              {
#line 9351 "rtree.c"
                mercury__rtree__succeeded = (mercury__rtree__V_5_5 == mercury__rtree__V_9_9);
#line 186 "rtree.m"
                if (mercury__rtree__succeeded)
#line 9355 "rtree.c"
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

#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMax_6 >= mercury__rtree__BMax_7);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__AMax_6;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__BMax_7;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMin_8 <= mercury__rtree__BMin_9);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__AMin_8;
#line 109 "float.opt"
    else
#line 110 "float.opt"
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

#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMin_6 <= mercury__rtree__BMin_7);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__AMin_6;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__V_10_10 = mercury__rtree__BMin_7;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AMax_8 >= mercury__rtree__BMax_9);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__V_11_11 = mercury__rtree__AMax_8;
#line 101 "float.opt"
    else
#line 102 "float.opt"
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

#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_10 <= mercury__rtree__BXMin_14);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__XMin_7 = mercury__rtree__AXMin_10;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__XMin_7 = mercury__rtree__BXMin_14;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_11 >= mercury__rtree__BXMax_15);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__XMax_6 = mercury__rtree__AXMax_11;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__XMax_6 = mercury__rtree__BXMax_15;
#line 1688 "rtree.m"
    mercury__rtree__V_18_18 = (mercury__rtree__XMax_6 - mercury__rtree__XMin_7);
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_12 <= mercury__rtree__BYMin_16);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__YMin_9 = mercury__rtree__AYMin_12;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__YMin_9 = mercury__rtree__BYMin_16;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_13 >= mercury__rtree__BYMax_17);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__YMax_8 = mercury__rtree__AYMax_13;
#line 101 "float.opt"
    else
#line 102 "float.opt"
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

#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_11);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__CXMin_15 = mercury__rtree__AXMin_7;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__CXMin_15 = mercury__rtree__BXMin_11;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_12);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__CXMax_16 = mercury__rtree__AXMax_8;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__CXMax_16 = mercury__rtree__BXMax_12;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_13);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__CYMin_17 = mercury__rtree__AYMin_9;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__CYMin_17 = mercury__rtree__BYMin_13;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_14);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__CYMax_18 = mercury__rtree__AYMax_10;
#line 101 "float.opt"
    else
#line 102 "float.opt"
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

#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__XMin_19 = mercury__rtree__AXMin_7;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__XMin_19 = mercury__rtree__BXMin_13;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__XMax_20 = mercury__rtree__AXMax_8;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__XMax_20 = mercury__rtree__BXMax_14;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__YMin_21 = mercury__rtree__AYMin_9;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__YMin_21 = mercury__rtree__BYMin_15;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__YMax_22 = mercury__rtree__AYMax_10;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__YMax_22 = mercury__rtree__BYMax_16;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__ZMin_23 = mercury__rtree__AZMin_11;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__ZMin_23 = mercury__rtree__BZMin_17;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__ZMax_24 = mercury__rtree__AZMax_12;
#line 101 "float.opt"
    else
#line 102 "float.opt"
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

#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMin_7 <= mercury__rtree__BXMin_13);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__CXMin_19 = mercury__rtree__AXMin_7;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__CXMin_19 = mercury__rtree__BXMin_13;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AXMax_8 >= mercury__rtree__BXMax_14);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__CXMax_20 = mercury__rtree__AXMax_8;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__CXMax_20 = mercury__rtree__BXMax_14;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMin_9 <= mercury__rtree__BYMin_15);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__CYMin_21 = mercury__rtree__AYMin_9;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__CYMin_21 = mercury__rtree__BYMin_15;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AYMax_10 >= mercury__rtree__BYMax_16);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__CYMax_22 = mercury__rtree__AYMax_10;
#line 101 "float.opt"
    else
#line 102 "float.opt"
      mercury__rtree__CYMax_22 = mercury__rtree__BYMax_16;
#line 106 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMin_11 <= mercury__rtree__BZMin_17);
#line 109 "float.opt"
    if (mercury__rtree__succeeded)
#line 108 "float.opt"
      mercury__rtree__CZMin_23 = mercury__rtree__AZMin_11;
#line 109 "float.opt"
    else
#line 110 "float.opt"
      mercury__rtree__CZMin_23 = mercury__rtree__BZMin_17;
#line 98 "float.opt"
    mercury__rtree__succeeded = (mercury__rtree__AZMax_12 >= mercury__rtree__BZMax_18);
#line 101 "float.opt"
    if (mercury__rtree__succeeded)
#line 100 "float.opt"
      mercury__rtree__CZMax_24 = mercury__rtree__AZMax_12;
#line 101 "float.opt"
    else
#line 102 "float.opt"
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
    if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 3))))
#line 1484 "rtree.m"
      {
#line 1484 "rtree.m"
        return mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
      }
#line 1479 "rtree.m"
    else
#line 1479 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1479 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 2))))
#line 1484 "rtree.m"
          {
#line 1484 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
          }
#line 1479 "rtree.m"
        else
#line 1484 "rtree.m"
          {
#line 1484 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__map_values_2_3_p_1(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
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
    if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 3))))
#line 1484 "rtree.m"
      {
#line 1484 "rtree.m"
        mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
#line 1484 "rtree.m"
        return;
      }
#line 1479 "rtree.m"
    else
#line 1479 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1479 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T_7)) == (MR_mktag((MR_Integer) 2))))
#line 1484 "rtree.m"
          {
#line 1484 "rtree.m"
            mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
#line 1484 "rtree.m"
            return;
          }
#line 1479 "rtree.m"
        else
#line 1484 "rtree.m"
          {
#line 1484 "rtree.m"
            mercury__rtree__map_values_2_3_p_0(mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__TypeInfo_for_W_31, mercury__rtree__P_5, mercury__rtree__T_7, mercury__rtree__U_8);
#line 1484 "rtree.m"
            return;
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
    else
#line 1454 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1454 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
        else
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
    else
#line 1454 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1454 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
        else
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
    if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 3))))
#line 1436 "rtree.m"
      {
#line 1436 "rtree.m"
        return mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
      }
#line 1431 "rtree.m"
    else
#line 1431 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0))))
#line 1429 "rtree.m"
        {
#line 1429 "rtree.m"
          MR_Box mercury__rtree__V_10 = (MR_hl_field(MR_mktag(0), mercury__rtree__T_8, (MR_Integer) 0));
#line 1430 "rtree.m"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rtree__P_6, (MR_Integer) 1)));

#line 1430 "rtree.m"
          {
#line 1430 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__P_6), mercury__rtree__K_7, mercury__rtree__V_10, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
      else
#line 1431 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 2))))
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
          }
#line 1431 "rtree.m"
        else
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
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
    if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 3))))
#line 1436 "rtree.m"
      {
#line 1436 "rtree.m"
        mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
        return;
      }
#line 1431 "rtree.m"
    else
#line 1431 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0))))
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
#line 1430 "rtree.m"
            return;
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
      else
#line 1431 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 2))))
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
            return;
          }
#line 1431 "rtree.m"
        else
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
            return;
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
    if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 3))))
#line 1436 "rtree.m"
      {
#line 1436 "rtree.m"
        mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
        return;
      }
#line 1431 "rtree.m"
    else
#line 1431 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 0))))
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
#line 1430 "rtree.m"
            return;
          }
#line 1429 "rtree.m"
        }
#line 1431 "rtree.m"
      else
#line 1431 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T_8)) == (MR_mktag((MR_Integer) 2))))
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
            return;
          }
#line 1431 "rtree.m"
        else
#line 1436 "rtree.m"
          {
#line 1436 "rtree.m"
            mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_33, mercury__rtree__TypeInfo_for_V_34, mercury__rtree__TypeInfo_for_A_35, mercury__rtree__P_6, mercury__rtree__T_8, mercury__rtree__STATE_VARIABLE_Acc_0_29, mercury__rtree__STATE_VARIABLE_Acc_30);
#line 1436 "rtree.m"
            return;
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
                    return mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K3_40, mercury__rtree__T3_41, mercury__rtree__STATE_VARIABLE_Acc_47_47, mercury__rtree__STATE_VARIABLE_Acc_4);
                  }
#line 1415 "rtree.m"
              }
#line 1415 "rtree.m"
          }
#line 1415 "rtree.m"
      }
#line 1406 "rtree.m"
    else
#line 1406 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1406 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
                    return mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K2_25, mercury__rtree__T2_26, mercury__rtree__STATE_VARIABLE_Acc_31_31, mercury__rtree__STATE_VARIABLE_Acc_4);
                  }
#line 1411 "rtree.m"
              }
#line 1411 "rtree.m"
          }
#line 1406 "rtree.m"
        else
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
                return mercury__rtree__succeeded = mercury__rtree__fold_subtree_5_p_2(mercury__rtree__TypeInfo_for_K_49, mercury__rtree__TypeInfo_for_V_50, mercury__rtree__TypeInfo_for_A_51, mercury__rtree__P_1, mercury__rtree__K1_13, mercury__rtree__T1_14, mercury__rtree__STATE_VARIABLE_Acc_18_18, mercury__rtree__STATE_VARIABLE_Acc_4);
              }
#line 1408 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
#line 1419 "rtree.m"
          return;
        }
#line 1415 "rtree.m"
      }
#line 1406 "rtree.m"
    else
#line 1406 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1406 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
#line 1414 "rtree.m"
              return;
            }
#line 1411 "rtree.m"
          }
#line 1406 "rtree.m"
        else
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
#line 1410 "rtree.m"
              return;
            }
#line 1408 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
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
#line 1419 "rtree.m"
          return;
        }
#line 1415 "rtree.m"
      }
#line 1406 "rtree.m"
    else
#line 1406 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1406 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
#line 1414 "rtree.m"
              return;
            }
#line 1411 "rtree.m"
          }
#line 1406 "rtree.m"
        else
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
#line 1410 "rtree.m"
              return;
            }
#line 1408 "rtree.m"
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
#line 1382 "rtree.m"
                return;
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
#line 1384 "rtree.m"
            return;
          }
#line 1383 "rtree.m"
      }
#line 1386 "rtree.m"
    else
#line 1384 "rtree.m"
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
#line 1382 "rtree.m"
                return;
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
#line 1384 "rtree.m"
            return;
          }
#line 1383 "rtree.m"
      }
#line 1386 "rtree.m"
    else
#line 1384 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 1370 "rtree.m"
          return;
        }
#line 1365 "rtree.m"
      }
#line 1354 "rtree.m"
    else
#line 1354 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1354 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 1364 "rtree.m"
              return;
            }
#line 1360 "rtree.m"
          }
#line 1354 "rtree.m"
        else
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
#line 1359 "rtree.m"
              return;
            }
#line 1356 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 1370 "rtree.m"
          return;
        }
#line 1365 "rtree.m"
      }
#line 1354 "rtree.m"
    else
#line 1354 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 1354 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 1364 "rtree.m"
              return;
            }
#line 1360 "rtree.m"
          }
#line 1354 "rtree.m"
        else
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
#line 1359 "rtree.m"
              return;
            }
#line 1356 "rtree.m"
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
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 0;
#line 1493 "rtree.m"
                else
#line 1493 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 2;
#line 1493 "rtree.m"
              }
#line 1493 "rtree.m"
            else
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 1;
#line 1493 "rtree.m"
                else
#line 1493 "rtree.m"
                  mercury__rtree__R_40 = (MR_Integer) 2;
#line 1493 "rtree.m"
              }
#line 1261 "rtree.m"
            if ((mercury__rtree__R_40 == (MR_Integer) 0))
#line 1258 "rtree.m"
              {
#line 1259 "rtree.m"
                *mercury__rtree__V_21 = mercury__rtree__VM_12;
#line 1260 "rtree.m"
                *mercury__rtree__E_22 = mercury__rtree__EM_13;
#line 1258 "rtree.m"
              }
#line 1261 "rtree.m"
            else
#line 1261 "rtree.m"
              if ((mercury__rtree__R_40 == (MR_Integer) 1))
#line 1263 "rtree.m"
                {
#line 1263 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
#line 1263 "rtree.m"
                  return;
                }
#line 1261 "rtree.m"
              else
#line 1266 "rtree.m"
                {
#line 1266 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_12, mercury__rtree__EM_13, mercury__rtree__E1_14, mercury__rtree__T2_18, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
#line 1266 "rtree.m"
                  return;
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
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 0;
#line 1493 "rtree.m"
                else
#line 1493 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 2;
#line 1493 "rtree.m"
              }
#line 1493 "rtree.m"
            else
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
                if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 1;
#line 1493 "rtree.m"
                else
#line 1493 "rtree.m"
                  mercury__rtree__R_60 = (MR_Integer) 2;
#line 1493 "rtree.m"
              }
#line 1261 "rtree.m"
            if ((mercury__rtree__R_60 == (MR_Integer) 0))
#line 1258 "rtree.m"
              {
#line 1259 "rtree.m"
                *mercury__rtree__V_21 = mercury__rtree__V0_23;
#line 1260 "rtree.m"
                *mercury__rtree__E_22 = mercury__rtree__F0_24;
#line 1258 "rtree.m"
              }
#line 1261 "rtree.m"
            else
#line 1261 "rtree.m"
              if ((mercury__rtree__R_60 == (MR_Integer) 1))
#line 1263 "rtree.m"
                {
#line 1263 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_23, mercury__rtree__F0_24, mercury__rtree__E2_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
#line 1263 "rtree.m"
                  return;
                }
#line 1261 "rtree.m"
              else
#line 1266 "rtree.m"
                {
#line 1266 "rtree.m"
                  mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__V0_23, mercury__rtree__F0_24, mercury__rtree__E1_14, mercury__rtree__T2_18, mercury__rtree__T1_17, mercury__rtree__P_19, mercury__rtree__C_20, mercury__rtree__V_21, mercury__rtree__E_22);
#line 1266 "rtree.m"
                  return;
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
#line 1326 "rtree.m"
        return;
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
    if ((mercury__rtree__R_25 == (MR_Integer) 0))
#line 1294 "rtree.m"
      {
#line 1295 "rtree.m"
        *mercury__rtree__V_23 = mercury__rtree__VM_13;
#line 1296 "rtree.m"
        *mercury__rtree__E_24 = mercury__rtree__EM_14;
#line 1294 "rtree.m"
      }
#line 1297 "rtree.m"
    else
#line 1297 "rtree.m"
      if ((mercury__rtree__R_25 == (MR_Integer) 3))
#line 1307 "rtree.m"
        {
#line 1307 "rtree.m"
          mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E1_16, mercury__rtree__T2_20, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
#line 1307 "rtree.m"
          return;
        }
#line 1297 "rtree.m"
      else
#line 1297 "rtree.m"
        if ((mercury__rtree__R_25 == (MR_Integer) 1))
#line 1299 "rtree.m"
          {
#line 1299 "rtree.m"
            mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E1_16, mercury__rtree__E2_17, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
#line 1299 "rtree.m"
            return;
          }
#line 1297 "rtree.m"
        else
#line 1303 "rtree.m"
          {
#line 1303 "rtree.m"
            mercury__rtree__search_first_2_better_solution_three_11_p_0(mercury__rtree__TypeInfo_for_V_26, mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__VM_13, mercury__rtree__EM_14, mercury__rtree__E0_15, mercury__rtree__E2_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__P_21, mercury__rtree__C_22, mercury__rtree__V_23, mercury__rtree__E_24);
#line 1303 "rtree.m"
            return;
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
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 0;
#line 1493 "rtree.m"
        else
#line 1493 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 2;
#line 1493 "rtree.m"
      }
#line 1493 "rtree.m"
    else
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 1;
#line 1493 "rtree.m"
        else
#line 1493 "rtree.m"
          mercury__rtree__R_21 = (MR_Integer) 2;
#line 1493 "rtree.m"
      }
#line 1261 "rtree.m"
    if ((mercury__rtree__R_21 == (MR_Integer) 0))
#line 1258 "rtree.m"
      {
#line 1259 "rtree.m"
        *mercury__rtree__V_19 = mercury__rtree__VM_11;
#line 1260 "rtree.m"
        *mercury__rtree__E_20 = mercury__rtree__EM_12;
#line 1258 "rtree.m"
      }
#line 1261 "rtree.m"
    else
#line 1261 "rtree.m"
      if ((mercury__rtree__R_21 == (MR_Integer) 1))
#line 1263 "rtree.m"
        {
#line 1263 "rtree.m"
          mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E1_14, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
#line 1263 "rtree.m"
          return;
        }
#line 1261 "rtree.m"
      else
#line 1266 "rtree.m"
        {
#line 1266 "rtree.m"
          mercury__rtree__search_first_2_better_solution_two_9_p_0(mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__VM_11, mercury__rtree__EM_12, mercury__rtree__E0_13, mercury__rtree__T1_16, mercury__rtree__T0_15, mercury__rtree__P_17, mercury__rtree__C_18, mercury__rtree__V_19, mercury__rtree__E_20);
#line 1266 "rtree.m"
          return;
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
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_21, mercury__rtree__TypeInfo_for_E_19, mercury__rtree__T1_11, mercury__rtree__P_12, mercury__rtree__C_13, mercury__rtree__L_14, mercury__rtree__V_15, mercury__rtree__E_16);
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
            return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_25, mercury__rtree__E2_12, mercury__rtree__T1_14, mercury__rtree__T2_15, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__L_18, mercury__rtree__V_19, mercury__rtree__E_20);
          }
#line 1130 "rtree.m"
        else
#line 1131 "rtree.m"
          {
#line 1131 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_23, mercury__rtree__TypeInfo_for_K_24, mercury__rtree__TypeInfo_for_V_25, mercury__rtree__E1_11, mercury__rtree__T2_15, mercury__rtree__T1_14, mercury__rtree__P_16, mercury__rtree__C_17, mercury__rtree__L_18, mercury__rtree__V_19, mercury__rtree__E_20);
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
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_27, mercury__rtree__TypeInfo_for_K_28, mercury__rtree__TypeInfo_for_V_29, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__E3_15, mercury__rtree__T1_17, mercury__rtree__T2_18, mercury__rtree__T3_19, mercury__rtree__P_20, mercury__rtree__C_21, mercury__rtree__L_22, mercury__rtree__V_23, mercury__rtree__E_24);
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
    if ((mercury__rtree__R_27 == (MR_Integer) 0))
#line 1163 "rtree.m"
      {
#line 1163 "rtree.m"
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
      }
#line 1165 "rtree.m"
    else
#line 1165 "rtree.m"
      if ((mercury__rtree__R_27 == (MR_Integer) 3))
#line 1175 "rtree.m"
        {
#line 1175 "rtree.m"
          return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E2_16, mercury__rtree__T3_21, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T2_20, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
        }
#line 1165 "rtree.m"
      else
#line 1165 "rtree.m"
        if ((mercury__rtree__R_27 == (MR_Integer) 1))
#line 1167 "rtree.m"
          {
#line 1167 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E2_16, mercury__rtree__E3_17, mercury__rtree__T1_19, mercury__rtree__T0_18, mercury__rtree__T2_20, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
          }
#line 1165 "rtree.m"
        else
#line 1171 "rtree.m"
          {
#line 1171 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_four_12_p_0(mercury__rtree__TypeInfo_for_E_28, mercury__rtree__TypeInfo_for_K_29, mercury__rtree__TypeInfo_for_V_30, mercury__rtree__E0_14, mercury__rtree__E1_15, mercury__rtree__E3_17, mercury__rtree__T2_20, mercury__rtree__T0_18, mercury__rtree__T1_19, mercury__rtree__T3_21, mercury__rtree__P_22, mercury__rtree__C_23, mercury__rtree__L_24, mercury__rtree__V_25, mercury__rtree__E_26);
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
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 0;
#line 1493 "rtree.m"
        else
#line 1493 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 2;
#line 1493 "rtree.m"
      }
#line 1493 "rtree.m"
    else
#line 1493 "rtree.m"
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
#line 1493 "rtree.m"
        if (mercury__rtree__succeeded)
#line 1493 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 1;
#line 1493 "rtree.m"
        else
#line 1493 "rtree.m"
          mercury__rtree__R_23 = (MR_Integer) 2;
#line 1493 "rtree.m"
      }
#line 1145 "rtree.m"
    if ((mercury__rtree__R_23 == (MR_Integer) 0))
#line 1144 "rtree.m"
      {
#line 1144 "rtree.m"
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E1_13, mercury__rtree__E2_14, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
      }
#line 1145 "rtree.m"
    else
#line 1145 "rtree.m"
      if ((mercury__rtree__R_23 == (MR_Integer) 1))
#line 1147 "rtree.m"
        {
#line 1147 "rtree.m"
          return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E2_14, mercury__rtree__T1_16, mercury__rtree__T0_15, mercury__rtree__T2_17, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
        }
#line 1145 "rtree.m"
      else
#line 1150 "rtree.m"
        {
#line 1150 "rtree.m"
          return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_three_10_p_0(mercury__rtree__TypeInfo_for_E_24, mercury__rtree__TypeInfo_for_K_25, mercury__rtree__TypeInfo_for_V_26, mercury__rtree__E0_12, mercury__rtree__E1_13, mercury__rtree__T2_17, mercury__rtree__T0_15, mercury__rtree__T1_16, mercury__rtree__P_18, mercury__rtree__C_19, mercury__rtree__L_20, mercury__rtree__V_21, mercury__rtree__E_22);
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
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__E1_11, mercury__rtree__T0_12, mercury__rtree__T1_13, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
      }
#line 1130 "rtree.m"
    else
#line 1131 "rtree.m"
      {
#line 1131 "rtree.m"
        return mercury__rtree__succeeded = mercury__rtree__search_first_2_try_first_from_two_8_p_0(mercury__rtree__TypeInfo_for_E_20, mercury__rtree__TypeInfo_for_K_21, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__E0_10, mercury__rtree__T1_13, mercury__rtree__T0_12, mercury__rtree__P_14, mercury__rtree__C_15, mercury__rtree__L_16, mercury__rtree__V_17, mercury__rtree__E_18);
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
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_four_choices_13_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__E3_59, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                          }
#line 1070 "rtree.m"
                        else
#line 1071 "rtree.m"
                          {
#line 1071 "rtree.m"
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E2_58, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__E3_61, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                          }
#line 1077 "rtree.m"
                        else
#line 1078 "rtree.m"
                          {
#line 1078 "rtree.m"
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E1_57, mercury__rtree__T0_44, mercury__rtree__T1_46, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__E3_62, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                          }
#line 1085 "rtree.m"
                        else
#line 1086 "rtree.m"
                          {
#line 1086 "rtree.m"
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E2_64, mercury__rtree__T0_44, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_56, mercury__rtree__E3_63, mercury__rtree__T0_44, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__E3_66, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                          }
#line 1100 "rtree.m"
                        else
#line 1101 "rtree.m"
                          {
#line 1101 "rtree.m"
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E2_68, mercury__rtree__T1_46, mercury__rtree__T2_48, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_73, mercury__rtree__E3_67, mercury__rtree__T1_46, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E2_71, mercury__rtree__E3_70, mercury__rtree__T2_48, mercury__rtree__T3_50, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
        else
#line 1026 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1026 "rtree.m"
            {
#line 1026 "rtree.m"
              *mercury__rtree__V_5 = (MR_hl_field(MR_mktag(0), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 1027 "rtree.m"
              {
#line 1027 "rtree.m"
                return mercury__rtree__succeeded = mercury__rtree__maybe_limit_4_p_0(mercury__rtree__TypeInfo_for_V_77, mercury__rtree__TypeInfo_for_E_78, *mercury__rtree__V_5, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__E_6);
              }
#line 1026 "rtree.m"
            }
#line 1026 "rtree.m"
          else
#line 1026 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_three_choices_11_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__E2_37, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
                          }
#line 1045 "rtree.m"
                        else
#line 1046 "rtree.m"
                          {
#line 1046 "rtree.m"
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E1_36, mercury__rtree__T0_25, mercury__rtree__T1_27, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_35, mercury__rtree__E2_39, mercury__rtree__T0_25, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
                            return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E1_41, mercury__rtree__E2_40, mercury__rtree__T1_27, mercury__rtree__T2_29, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
            else
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
                        return mercury__rtree__succeeded = mercury__rtree__search_first_2_two_choices_9_p_0(mercury__rtree__TypeInfo_for_E_78, mercury__rtree__TypeInfo_for_K_76, mercury__rtree__TypeInfo_for_V_77, mercury__rtree__E0_21, mercury__rtree__E1_22, mercury__rtree__T0_13, mercury__rtree__T1_15, mercury__rtree__P_2, mercury__rtree__C_3, mercury__rtree__L_4, mercury__rtree__V_5, mercury__rtree__E_6);
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
#line 988 "rtree.m"
        return;
      }
#line 989 "rtree.m"
    else
#line 988 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 979 "rtree.m"
          return;
        }
#line 974 "rtree.m"
      }
#line 959 "rtree.m"
    else
#line 959 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 961 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Values_5 = mercury__rtree__STATE_VARIABLE_Values_0_4;
#line 959 "rtree.m"
        }
#line 959 "rtree.m"
      else
#line 959 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 973 "rtree.m"
              return;
            }
#line 969 "rtree.m"
          }
#line 959 "rtree.m"
        else
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
#line 968 "rtree.m"
              return;
            }
#line 965 "rtree.m"
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
    if (((MR_tag((MR_Word) mercury__rtree__T0_13)) == (MR_mktag((MR_Integer) 3))))
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
#line 15147 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 15149 "rtree.c"
        MR_Box mercury__rtree__conv1_SizeA_61;
#line 15151 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 15153 "rtree.c"
        MR_Box mercury__rtree__conv3_SizeB_62;
#line 15155 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 15157 "rtree.c"
        MR_Box mercury__rtree__conv5_EnlargedSizeA_63;
#line 15159 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 15161 "rtree.c"
        MR_Box mercury__rtree__conv7_EnlargedSizeB_64;

#line 847 "rtree.m"
        {
#line 847 "rtree.m"
          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_55, mercury__rtree__T0_13, &mercury__rtree__K3_44, &mercury__rtree__T3_45, &mercury__rtree__K4_46, &mercury__rtree__T4_47);
        }
#line 15169 "rtree.c"
        mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
#line 15171 "rtree.c"
        {
#line 15173 "rtree.c"
          mercury__rtree__conv1_SizeA_61 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K2_16);
        }
#line 15176 "rtree.c"
        mercury__rtree__SizeA_61 = MR_unbox_float(mercury__rtree__conv1_SizeA_61);
#line 15178 "rtree.c"
        mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 7)));
#line 15180 "rtree.c"
        {
#line 15182 "rtree.c"
          mercury__rtree__conv3_SizeB_62 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K3_44);
        }
#line 15185 "rtree.c"
        mercury__rtree__SizeB_62 = MR_unbox_float(mercury__rtree__conv3_SizeB_62);
#line 15187 "rtree.c"
        mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
#line 15189 "rtree.c"
        {
#line 15191 "rtree.c"
          mercury__rtree__conv5_EnlargedSizeA_63 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K2_16);
        }
#line 15194 "rtree.c"
        mercury__rtree__EnlargedSizeA_63 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_63);
#line 15196 "rtree.c"
        mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 9)));
#line 15198 "rtree.c"
        {
#line 15200 "rtree.c"
          mercury__rtree__conv7_EnlargedSizeB_64 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_18, mercury__rtree__K3_44);
        }
#line 15203 "rtree.c"
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
        if ((mercury__rtree__Result_48 == (MR_Integer) 0))
#line 850 "rtree.m"
          {
#line 850 "rtree.m"
            MR_Box mercury__rtree__K5_49;
#line 850 "rtree.m"
            MR_Word mercury__rtree__T5_50;
#line 15251 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15254 "rtree.c"
            {
#line 15256 "rtree.c"
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
        else
#line 855 "rtree.m"
          {
#line 855 "rtree.m"
            MR_Box mercury__rtree__K5_53;
#line 855 "rtree.m"
            MR_Word mercury__rtree__T5_54;
#line 15300 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15303 "rtree.c"
            {
#line 15305 "rtree.c"
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
#line 846 "rtree.m"
      }
#line 835 "rtree.m"
    else
#line 835 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T0_13)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 835 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T0_13)) == (MR_mktag((MR_Integer) 2))))
#line 841 "rtree.m"
          {
#line 841 "rtree.m"
            MR_Box mercury__rtree__NK0_51;
#line 841 "rtree.m"
            MR_Word mercury__rtree__NT0_52;
#line 15383 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15386 "rtree.c"
            {
#line 15388 "rtree.c"
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
        else
#line 836 "rtree.m"
          {
#line 836 "rtree.m"
            MR_Box mercury__rtree__NK0_28;
#line 836 "rtree.m"
            MR_Word mercury__rtree__NT0_29;
#line 15428 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15431 "rtree.c"
            {
#line 15433 "rtree.c"
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
    if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 3))))
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
#line 15528 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box);
#line 15530 "rtree.c"
        MR_Box mercury__rtree__conv1_SizeA_57;
#line 15532 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 15534 "rtree.c"
        MR_Box mercury__rtree__conv3_SizeB_58;
#line 15536 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 15538 "rtree.c"
        MR_Box mercury__rtree__conv5_EnlargedSizeA_59;
#line 15540 "rtree.c"
        MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 15542 "rtree.c"
        MR_Box mercury__rtree__conv7_EnlargedSizeB_60;

#line 812 "rtree.m"
        {
#line 812 "rtree.m"
          mercury__rtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_52_95_110_111_100_101_95_95_91_49_93_95_48_5_p_0(mercury__rtree__TypeClassInfo_for_region_51, mercury__rtree__T0_11, &mercury__rtree__K2_40, &mercury__rtree__T2_41, &mercury__rtree__K3_42, &mercury__rtree__T3_43);
        }
#line 15550 "rtree.c"
        mercury__rtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
#line 15552 "rtree.c"
        {
#line 15554 "rtree.c"
          mercury__rtree__conv1_SizeA_57 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K2_40);
        }
#line 15557 "rtree.c"
        mercury__rtree__SizeA_57 = MR_unbox_float(mercury__rtree__conv1_SizeA_57);
#line 15559 "rtree.c"
        mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 7)));
#line 15561 "rtree.c"
        {
#line 15563 "rtree.c"
          mercury__rtree__conv3_SizeB_58 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K3_42);
        }
#line 15566 "rtree.c"
        mercury__rtree__SizeB_58 = MR_unbox_float(mercury__rtree__conv3_SizeB_58);
#line 15568 "rtree.c"
        mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
#line 15570 "rtree.c"
        {
#line 15572 "rtree.c"
          mercury__rtree__conv5_EnlargedSizeA_59 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K2_40);
        }
#line 15575 "rtree.c"
        mercury__rtree__EnlargedSizeA_59 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_59);
#line 15577 "rtree.c"
        mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 9)));
#line 15579 "rtree.c"
        {
#line 15581 "rtree.c"
          mercury__rtree__conv7_EnlargedSizeB_60 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_51), mercury__rtree__K_14, mercury__rtree__K3_42);
        }
#line 15584 "rtree.c"
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
        if ((mercury__rtree__Result_44 == (MR_Integer) 0))
#line 815 "rtree.m"
          {
#line 815 "rtree.m"
            MR_Box mercury__rtree__K4_45;
#line 815 "rtree.m"
            MR_Word mercury__rtree__T4_46;
#line 15632 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15635 "rtree.c"
            {
#line 15637 "rtree.c"
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
        else
#line 820 "rtree.m"
          {
#line 820 "rtree.m"
            MR_Box mercury__rtree__K4_49;
#line 820 "rtree.m"
            MR_Word mercury__rtree__T4_50;
#line 15677 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_9)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15680 "rtree.c"
            {
#line 15682 "rtree.c"
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
#line 811 "rtree.m"
      }
#line 800 "rtree.m"
    else
#line 800 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 800 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__T0_11)) == (MR_mktag((MR_Integer) 2))))
#line 806 "rtree.m"
          {
#line 806 "rtree.m"
            MR_Box mercury__rtree__NK0_47;
#line 806 "rtree.m"
            MR_Word mercury__rtree__NT0_48;
#line 15752 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15755 "rtree.c"
            {
#line 15757 "rtree.c"
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
        else
#line 801 "rtree.m"
          {
#line 801 "rtree.m"
            MR_Box mercury__rtree__NK0_24;
#line 801 "rtree.m"
            MR_Word mercury__rtree__NT0_25;
#line 15793 "rtree.c"
            MR_Box MR_CALL (* mercury__rtree__func_11)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_51, (MR_Integer) 0)), (MR_Integer) 8)));

#line 15796 "rtree.c"
            {
#line 15798 "rtree.c"
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
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
        else
#line 752 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 752 "rtree.m"
            {
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeInfo_70_70;
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeCtorInfo_71_71 = (MR_Word) &mercury__rtree__rtree__type_ctor_info_rtree_2_2;
#line 752 "rtree.m"
              MR_Word mercury__rtree__TypeInfo_72_72;
#line 752 "rtree.m"
              MR_Box mercury__rtree__conv0_HeadVar__6_6;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__rtree__insert_tree_5_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__rtree__TypeClassInfo_for_region_67 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 15952 "rtree.c"

		;}
#undef MR_PROC_LABEL
	 mercury__rtree__TypeInfo_70_70  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 15959 "rtree.c"
              {
#line 15961 "rtree.c"
                mercury__rtree__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 15963 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 0) = ((MR_Box) (mercury__rtree__TypeCtorInfo_71_71));
#line 15965 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 1) = ((MR_Box) (mercury__rtree__TypeInfo_70_70));
#line 15967 "rtree.c"
                MR_hl_field(MR_mktag(0), mercury__rtree__TypeInfo_72_72, 2) = ((MR_Box) (mercury__rtree__TypeInfo_for_V_68));
#line 15969 "rtree.c"
              }
#line 752 "rtree.m"
              {
#line 752 "rtree.m"
                mercury__rtree__conv0_HeadVar__6_6 = mercury__require__func_error_1_f_0(mercury__rtree__TypeInfo_72_72, (MR_String) "insert_tree: leaf unexpected");
              }
#line 752 "rtree.m"
              mercury__rtree__HeadVar__6_6 = ((MR_Word) mercury__rtree__conv0_HeadVar__6_6);
#line 752 "rtree.m"
            }
#line 752 "rtree.m"
          else
#line 752 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
                    if ((mercury__rtree__Result_38 == (MR_Integer) 0))
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
                    else
#line 776 "rtree.m"
                      if ((mercury__rtree__Result_38 == (MR_Integer) 1))
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
                      else
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
#line 771 "rtree.m"
                  }
#line 767 "rtree.m"
              }
#line 752 "rtree.m"
            else
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
#line 16138 "rtree.c"
                    MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
#line 16140 "rtree.c"
                    MR_Box mercury__rtree__conv2_SizeA_77;
#line 16142 "rtree.c"
                    MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box);
#line 16144 "rtree.c"
                    MR_Box mercury__rtree__conv4_SizeB_78;
#line 16146 "rtree.c"
                    MR_Box MR_CALL (* mercury__rtree__func_5)(MR_Box, MR_Box, MR_Box);
#line 16148 "rtree.c"
                    MR_Box mercury__rtree__conv6_EnlargedSizeA_79;
#line 16150 "rtree.c"
                    MR_Box MR_CALL (* mercury__rtree__func_7)(MR_Box, MR_Box, MR_Box);
#line 16152 "rtree.c"
                    MR_Box mercury__rtree__conv8_EnlargedSizeB_80;

#line 16155 "rtree.c"
                    {
#line 16157 "rtree.c"
                      mercury__rtree__conv2_SizeA_77 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K0_13);
                    }
#line 16160 "rtree.c"
                    mercury__rtree__SizeA_77 = MR_unbox_float(mercury__rtree__conv2_SizeA_77);
#line 16162 "rtree.c"
                    mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 7)));
#line 16164 "rtree.c"
                    {
#line 16166 "rtree.c"
                      mercury__rtree__conv4_SizeB_78 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K1_15);
                    }
#line 16169 "rtree.c"
                    mercury__rtree__SizeB_78 = MR_unbox_float(mercury__rtree__conv4_SizeB_78);
#line 16171 "rtree.c"
                    mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
#line 16173 "rtree.c"
                    {
#line 16175 "rtree.c"
                      mercury__rtree__conv6_EnlargedSizeA_79 = mercury__rtree__func_5(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K0_13);
                    }
#line 16178 "rtree.c"
                    mercury__rtree__EnlargedSizeA_79 = MR_unbox_float(mercury__rtree__conv6_EnlargedSizeA_79);
#line 16180 "rtree.c"
                    mercury__rtree__func_7 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_67, (MR_Integer) 0)), (MR_Integer) 9)));
#line 16182 "rtree.c"
                    {
#line 16184 "rtree.c"
                      mercury__rtree__conv8_EnlargedSizeB_80 = mercury__rtree__func_7(((MR_Box) mercury__rtree__TypeClassInfo_for_region_67), mercury__rtree__K_2, mercury__rtree__K1_15);
                    }
#line 16187 "rtree.c"
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
                    if ((mercury__rtree__Result_22 == (MR_Integer) 0))
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
                    else
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
#line 758 "rtree.m"
                  }
#line 754 "rtree.m"
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
#line 16486 "rtree.c"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 6)));

#line 16489 "rtree.c"
    {
#line 16491 "rtree.c"
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
#line 16521 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_1)(MR_Box, MR_Box, MR_Box);
#line 16523 "rtree.c"
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
#line 16562 "rtree.c"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16564 "rtree.c"
                {
#line 16566 "rtree.c"
                  mercury__rtree__K12_33 = mercury__rtree__func_1(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K1_17, mercury__rtree__K2_19);
                }
#line 16569 "rtree.c"
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16571 "rtree.c"
                {
#line 16573 "rtree.c"
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
#line 16586 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_3)(MR_Box, MR_Box, MR_Box);
#line 16588 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 16590 "rtree.c"
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
#line 16621 "rtree.c"
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16623 "rtree.c"
                {
#line 16625 "rtree.c"
                  mercury__rtree__TK_36 = mercury__rtree__func_3(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__DK0_29, mercury__rtree__K1_17);
                }
#line 16628 "rtree.c"
                mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16630 "rtree.c"
                {
#line 16632 "rtree.c"
                  mercury__rtree__K23_37 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_42), mercury__rtree__K2_19, mercury__rtree__K3_21);
                }
#line 16635 "rtree.c"
                mercury__rtree__func_5 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16637 "rtree.c"
                {
#line 16639 "rtree.c"
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
#line 16704 "rtree.c"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 6)));

#line 16707 "rtree.c"
    {
#line 16709 "rtree.c"
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
#line 16737 "rtree.c"
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
#line 16772 "rtree.c"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16774 "rtree.c"
                {
#line 16776 "rtree.c"
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
#line 16787 "rtree.c"
                MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box, MR_Box);
#line 16789 "rtree.c"
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
#line 16816 "rtree.c"
                mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16818 "rtree.c"
                {
#line 16820 "rtree.c"
                  mercury__rtree__TK_31 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_36), mercury__rtree__DK0_25, mercury__rtree__K1_15);
                }
#line 16823 "rtree.c"
                mercury__rtree__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_36, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16825 "rtree.c"
                {
#line 16827 "rtree.c"
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
#line 16888 "rtree.c"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 6)));

#line 16891 "rtree.c"
    {
#line 16893 "rtree.c"
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
#line 16966 "rtree.c"
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
#line 16987 "rtree.c"
                mercury__rtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_31, (MR_Integer) 0)), (MR_Integer) 8)));
#line 16989 "rtree.c"
                {
#line 16991 "rtree.c"
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
    if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
                    return mercury__rtree__succeeded = mercury__rtree__try_deletion4_14_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K3_49, mercury__rtree__T3_50, mercury__rtree__K0_43, mercury__rtree__T0_44, mercury__rtree__K1_45, mercury__rtree__T1_46, mercury__rtree__K2_47, mercury__rtree__T2_48, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                  }
#line 660 "rtree.m"
              }
#line 653 "rtree.m"
          }
#line 638 "rtree.m"
      }
#line 617 "rtree.m"
    else
#line 617 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 617 "rtree.m"
        if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
                    return mercury__rtree__succeeded = mercury__rtree__try_deletion3_12_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K2_29, mercury__rtree__T2_30, mercury__rtree__K0_25, mercury__rtree__T0_26, mercury__rtree__K1_27, mercury__rtree__T1_28, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
                  }
#line 635 "rtree.m"
              }
#line 626 "rtree.m"
          }
#line 617 "rtree.m"
        else
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
                return mercury__rtree__succeeded = mercury__rtree__try_deletion2_10_p_0(mercury__rtree__TypeInfo_for_V_67, mercury__rtree__TypeClassInfo_for_region_66, mercury__rtree__K1_14, mercury__rtree__T1_15, mercury__rtree__K0_12, mercury__rtree__T0_13, mercury__rtree__K_2, mercury__rtree__V_3, mercury__rtree__Depth_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6, mercury__rtree__HeadVar__7_7);
              }
#line 618 "rtree.m"
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
#line 17372 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 17374 "rtree.c"
    MR_Box mercury__rtree__conv1_AreaA_11;
#line 17376 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 17378 "rtree.c"
    MR_Box mercury__rtree__conv3_AreaB_12;
#line 17380 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box);
#line 17382 "rtree.c"
    MR_Box mercury__rtree__conv5_AreaC_13;
#line 17384 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 17386 "rtree.c"
    MR_Box mercury__rtree__conv7_EnlargedAreaA_14;
#line 17388 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_8)(MR_Box, MR_Box, MR_Box);
#line 17390 "rtree.c"
    MR_Box mercury__rtree__conv9_EnlargedAreaB_15;
#line 17392 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_10)(MR_Box, MR_Box, MR_Box);
#line 17394 "rtree.c"
    MR_Box mercury__rtree__conv11_EnlargedAreaC_16;

#line 17397 "rtree.c"
    {
#line 17399 "rtree.c"
      mercury__rtree__conv1_AreaA_11 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KA_7);
    }
#line 17402 "rtree.c"
    mercury__rtree__AreaA_11 = MR_unbox_float(mercury__rtree__conv1_AreaA_11);
#line 17404 "rtree.c"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 17406 "rtree.c"
    {
#line 17408 "rtree.c"
      mercury__rtree__conv3_AreaB_12 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KB_8);
    }
#line 17411 "rtree.c"
    mercury__rtree__AreaB_12 = MR_unbox_float(mercury__rtree__conv3_AreaB_12);
#line 17413 "rtree.c"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 7)));
#line 17415 "rtree.c"
    {
#line 17417 "rtree.c"
      mercury__rtree__conv5_AreaC_13 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__KC_9);
    }
#line 17420 "rtree.c"
    mercury__rtree__AreaC_13 = MR_unbox_float(mercury__rtree__conv5_AreaC_13);
#line 17422 "rtree.c"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 17424 "rtree.c"
    {
#line 17426 "rtree.c"
      mercury__rtree__conv7_EnlargedAreaA_14 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KA_7);
    }
#line 17429 "rtree.c"
    mercury__rtree__EnlargedAreaA_14 = MR_unbox_float(mercury__rtree__conv7_EnlargedAreaA_14);
#line 17431 "rtree.c"
    mercury__rtree__func_8 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 17433 "rtree.c"
    {
#line 17435 "rtree.c"
      mercury__rtree__conv9_EnlargedAreaB_15 = mercury__rtree__func_8(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KB_8);
    }
#line 17438 "rtree.c"
    mercury__rtree__EnlargedAreaB_15 = MR_unbox_float(mercury__rtree__conv9_EnlargedAreaB_15);
#line 17440 "rtree.c"
    mercury__rtree__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_27, (MR_Integer) 0)), (MR_Integer) 9)));
#line 17442 "rtree.c"
    {
#line 17444 "rtree.c"
      mercury__rtree__conv11_EnlargedAreaC_16 = mercury__rtree__func_10(((MR_Box) mercury__rtree__TypeClassInfo_for_region_27), mercury__rtree__Key_6, mercury__rtree__KC_9);
    }
#line 17447 "rtree.c"
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
#line 17609 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 17611 "rtree.c"
    MR_Box mercury__rtree__conv1_SizeA_9;
#line 17613 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_2)(MR_Box, MR_Box);
#line 17615 "rtree.c"
    MR_Box mercury__rtree__conv3_SizeB_10;
#line 17617 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_4)(MR_Box, MR_Box, MR_Box);
#line 17619 "rtree.c"
    MR_Box mercury__rtree__conv5_EnlargedSizeA_11;
#line 17621 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_6)(MR_Box, MR_Box, MR_Box);
#line 17623 "rtree.c"
    MR_Box mercury__rtree__conv7_EnlargedSizeB_12;

#line 17626 "rtree.c"
    {
#line 17628 "rtree.c"
      mercury__rtree__conv1_SizeA_9 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KA_6);
    }
#line 17631 "rtree.c"
    mercury__rtree__SizeA_9 = MR_unbox_float(mercury__rtree__conv1_SizeA_9);
#line 17633 "rtree.c"
    mercury__rtree__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 7)));
#line 17635 "rtree.c"
    {
#line 17637 "rtree.c"
      mercury__rtree__conv3_SizeB_10 = mercury__rtree__func_2(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__KB_7);
    }
#line 17640 "rtree.c"
    mercury__rtree__SizeB_10 = MR_unbox_float(mercury__rtree__conv3_SizeB_10);
#line 17642 "rtree.c"
    mercury__rtree__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
#line 17644 "rtree.c"
    {
#line 17646 "rtree.c"
      mercury__rtree__conv5_EnlargedSizeA_11 = mercury__rtree__func_4(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KA_6);
    }
#line 17649 "rtree.c"
    mercury__rtree__EnlargedSizeA_11 = MR_unbox_float(mercury__rtree__conv5_EnlargedSizeA_11);
#line 17651 "rtree.c"
    mercury__rtree__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_15, (MR_Integer) 0)), (MR_Integer) 9)));
#line 17653 "rtree.c"
    {
#line 17655 "rtree.c"
      mercury__rtree__conv7_EnlargedSizeB_12 = mercury__rtree__func_6(((MR_Box) mercury__rtree__TypeClassInfo_for_region_15), mercury__rtree__Key_5, mercury__rtree__KB_7);
    }
#line 17658 "rtree.c"
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
    if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1444 "rtree.m"
      {
#line 1444 "rtree.m"
        *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1444 "rtree.m"
        mercury__rtree__succeeded = MR_TRUE;
#line 1444 "rtree.m"
      }
#line 1444 "rtree.m"
    else
#line 1444 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
      else
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
    if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1444 "rtree.m"
      *mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1444 "rtree.m"
    else
#line 1444 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
      else
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
    if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "rtree.m"
      {
#line 1395 "rtree.m"
        *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
        mercury__rtree__succeeded = MR_TRUE;
#line 1395 "rtree.m"
      }
#line 1395 "rtree.m"
    else
#line 1395 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
            return mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__HeadVar__1_1), mercury__rtree__K_10, mercury__rtree__V_11, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
      else
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            return mercury__rtree__succeeded = mercury__rtree__fold_2_4_p_2(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
          }
#line 1398 "rtree.m"
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
    if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
    else
#line 1395 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
#line 1397 "rtree.m"
            return;
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
      else
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            mercury__rtree__fold_2_4_p_1(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
#line 1399 "rtree.m"
            return;
          }
#line 1398 "rtree.m"
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
    if ((mercury__rtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_4 = mercury__rtree__STATE_VARIABLE_Acc_0_3;
#line 1395 "rtree.m"
    else
#line 1395 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
#line 1397 "rtree.m"
            return;
          }
#line 1396 "rtree.m"
        }
#line 1395 "rtree.m"
      else
#line 1398 "rtree.m"
        {
#line 1398 "rtree.m"
          MR_Word mercury__rtree__T_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__2_2, (MR_Integer) 0)));

#line 1399 "rtree.m"
          {
#line 1399 "rtree.m"
            mercury__rtree__fold_2_4_p_0(mercury__rtree__TypeInfo_for_K_22, mercury__rtree__TypeInfo_for_V_23, mercury__rtree__TypeInfo_for_A_24, mercury__rtree__HeadVar__1_1, mercury__rtree__T_17, mercury__rtree__STATE_VARIABLE_Acc_0_3, mercury__rtree__STATE_VARIABLE_Acc_4);
#line 1399 "rtree.m"
            return;
          }
#line 1398 "rtree.m"
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
    if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1335 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1335 "rtree.m"
    else
#line 1335 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 1338 "rtree.m"
                return;
              }
#line 1338 "rtree.m"
            }
#line 1339 "rtree.m"
          else
#line 1338 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1336 "rtree.m"
        }
#line 1335 "rtree.m"
      else
#line 1342 "rtree.m"
        {
#line 1342 "rtree.m"
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 1343 "rtree.m"
          {
#line 1343 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_1(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
#line 1343 "rtree.m"
            return;
          }
#line 1342 "rtree.m"
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
    if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1335 "rtree.m"
      *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1335 "rtree.m"
    else
#line 1335 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 1338 "rtree.m"
                return;
              }
#line 1338 "rtree.m"
            }
#line 1339 "rtree.m"
          else
#line 1338 "rtree.m"
            *mercury__rtree__STATE_VARIABLE_Acc_5 = mercury__rtree__STATE_VARIABLE_Acc_0_4;
#line 1336 "rtree.m"
        }
#line 1335 "rtree.m"
      else
#line 1342 "rtree.m"
        {
#line 1342 "rtree.m"
          MR_Word mercury__rtree__T_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__3_3, (MR_Integer) 0)));

#line 1343 "rtree.m"
          {
#line 1343 "rtree.m"
            mercury__rtree__search_general_fold_2_5_p_0(mercury__rtree__TypeInfo_for_K_26, mercury__rtree__TypeInfo_for_V_27, mercury__rtree__TypeInfo_for_A_28, mercury__rtree__T_21, mercury__rtree__KTest_1, mercury__rtree__VPred_2, mercury__rtree__STATE_VARIABLE_Acc_0_4, mercury__rtree__STATE_VARIABLE_Acc_5);
#line 1343 "rtree.m"
            return;
          }
#line 1342 "rtree.m"
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
            return mercury__rtree__succeeded = mercury__rtree__search_first_2_6_p_0(mercury__rtree__TypeInfo_for_K_20, mercury__rtree__TypeInfo_for_V_22, mercury__rtree__TypeInfo_for_L_21, mercury__rtree__T_16, mercury__rtree__P_1, mercury__rtree__C_2, mercury__rtree__L_4, mercury__rtree__HeadVar__5_5, mercury__rtree__HeadVar__6_6);
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
    if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "rtree.m"
      mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "rtree.m"
    else
#line 946 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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

#line 947 "rtree.m"
              {
#line 947 "rtree.m"
                mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 0) = mercury__rtree__V_10;
#line 947 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__4_4, 1) = ((MR_Box) (mercury__rtree__V_11_11));
#line 947 "rtree.m"
              }
#line 948 "rtree.m"
            }
#line 947 "rtree.m"
          else
#line 947 "rtree.m"
            mercury__rtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "rtree.m"
        }
#line 946 "rtree.m"
      else
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
    if ((mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "rtree.m"
      mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 908 "rtree.m"
    else
#line 908 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 909 "rtree.m"
        {
#line 909 "rtree.m"
          MR_Box mercury__rtree__K0_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 909 "rtree.m"
          MR_Box mercury__rtree__V0_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
#line 18589 "rtree.c"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 6)));

#line 18592 "rtree.c"
          {
#line 18594 "rtree.c"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__K_2, mercury__rtree__K0_5);
          }
#line 909 "rtree.m"
          if (mercury__rtree__succeeded)
#line 910 "rtree.m"
            {
#line 910 "rtree.m"
              MR_Word mercury__rtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 909 "rtree.m"
              {
#line 909 "rtree.m"
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V0_6;
#line 909 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_8_8));
#line 909 "rtree.m"
              }
#line 910 "rtree.m"
            }
#line 909 "rtree.m"
          else
#line 909 "rtree.m"
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 909 "rtree.m"
        }
#line 908 "rtree.m"
      else
#line 911 "rtree.m"
        {
#line 911 "rtree.m"
          MR_Word mercury__rtree__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "rtree.m"
          MR_Word mercury__rtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 920 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__T_9)) == (MR_mktag((MR_Integer) 3))))
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
          else
#line 920 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__T_9)) == (MR_mktag((MR_Integer) 0))))
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
            else
#line 920 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__T_9)) == (MR_mktag((MR_Integer) 2))))
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
              else
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
#line 911 "rtree.m"
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
    if ((mercury__rtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "rtree.m"
      mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "rtree.m"
    else
#line 867 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 868 "rtree.m"
        {
#line 868 "rtree.m"
          MR_Box mercury__rtree__K_5 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 0));
#line 868 "rtree.m"
          MR_Box mercury__rtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__1_1, (MR_Integer) 1));
#line 18811 "rtree.c"
          MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_13, (MR_Integer) 0)), (MR_Integer) 5)));

#line 18814 "rtree.c"
          {
#line 18816 "rtree.c"
            mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_13), mercury__rtree__QueryKey_2, mercury__rtree__K_5);
          }
#line 868 "rtree.m"
          if (mercury__rtree__succeeded)
#line 869 "rtree.m"
            {
#line 869 "rtree.m"
              MR_Word mercury__rtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 868 "rtree.m"
              {
#line 868 "rtree.m"
                mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 0) = mercury__rtree__V_6;
#line 868 "rtree.m"
                MR_hl_field(MR_mktag(1), mercury__rtree__HeadVar__3_3, 1) = ((MR_Box) (mercury__rtree__V_8_8));
#line 868 "rtree.m"
              }
#line 869 "rtree.m"
            }
#line 868 "rtree.m"
          else
#line 868 "rtree.m"
            mercury__rtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "rtree.m"
        }
#line 867 "rtree.m"
      else
#line 870 "rtree.m"
        {
#line 870 "rtree.m"
          MR_Word mercury__rtree__RTree_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rtree__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "rtree.m"
          MR_Word mercury__rtree__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 879 "rtree.m"
          if (((MR_tag((MR_Word) mercury__rtree__RTree_9)) == (MR_mktag((MR_Integer) 3))))
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
          else
#line 879 "rtree.m"
            if (((MR_tag((MR_Word) mercury__rtree__RTree_9)) == (MR_mktag((MR_Integer) 0))))
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
            else
#line 879 "rtree.m"
              if (((MR_tag((MR_Word) mercury__rtree__RTree_9)) == (MR_mktag((MR_Integer) 2))))
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
              else
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
#line 870 "rtree.m"
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
#line 19029 "rtree.c"
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
#line 19043 "rtree.c"
            mercury__rtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_55, (MR_Integer) 0)), (MR_Integer) 6)));
#line 19045 "rtree.c"
            {
#line 19047 "rtree.c"
              return mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_55), mercury__rtree__K_1, mercury__rtree__K0_7);
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
    if ((mercury__rtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
#line 288 "rtree.m"
      if (((MR_tag((MR_Word) mercury__rtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
      else
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
#line 19518 "rtree.c"
  {
#line 19520 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 19522 "rtree.c"
    MR_Float mercury__rtree__HeadVar__3_3;
#line 19524 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 9)));
#line 19526 "rtree.c"
    MR_Box mercury__rtree__conv1_HeadVar__3_3;

#line 19529 "rtree.c"
    {
#line 19531 "rtree.c"
      mercury__rtree__conv1_HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 19534 "rtree.c"
    mercury__rtree__HeadVar__3_3 = MR_unbox_float(mercury__rtree__conv1_HeadVar__3_3);
#line 19536 "rtree.c"
    return mercury__rtree__HeadVar__3_3;
#line 19538 "rtree.c"
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
#line 19554 "rtree.c"
  {
#line 19556 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 19558 "rtree.c"
    MR_Box mercury__rtree__HeadVar__3_3;
#line 19560 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_4, (MR_Integer) 0)), (MR_Integer) 8)));

#line 19563 "rtree.c"
    {
#line 19565 "rtree.c"
      mercury__rtree__HeadVar__3_3 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_4), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 19568 "rtree.c"
    return mercury__rtree__HeadVar__3_3;
#line 19570 "rtree.c"
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
#line 19584 "rtree.c"
  {
#line 19586 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 19588 "rtree.c"
    MR_Float mercury__rtree__HeadVar__2_2;
#line 19590 "rtree.c"
    MR_Box MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 7)));
#line 19592 "rtree.c"
    MR_Box mercury__rtree__conv1_HeadVar__2_2;

#line 19595 "rtree.c"
    {
#line 19597 "rtree.c"
      mercury__rtree__conv1_HeadVar__2_2 = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1);
    }
#line 19600 "rtree.c"
    mercury__rtree__HeadVar__2_2 = MR_unbox_float(mercury__rtree__conv1_HeadVar__2_2);
#line 19602 "rtree.c"
    return mercury__rtree__HeadVar__2_2;
#line 19604 "rtree.c"
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
#line 19620 "rtree.c"
  {
#line 19622 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 19624 "rtree.c"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 6)));

#line 19627 "rtree.c"
    {
#line 19629 "rtree.c"
      return mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 19632 "rtree.c"
    return mercury__rtree__succeeded;
#line 19634 "rtree.c"
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
#line 19650 "rtree.c"
  {
#line 19652 "rtree.c"
    MR_bool mercury__rtree__succeeded;
#line 19654 "rtree.c"
    MR_bool MR_CALL (* mercury__rtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__rtree__TypeClassInfo_for_region_3, (MR_Integer) 0)), (MR_Integer) 5)));

#line 19657 "rtree.c"
    {
#line 19659 "rtree.c"
      return mercury__rtree__succeeded = mercury__rtree__func_0(((MR_Box) mercury__rtree__TypeClassInfo_for_region_3), mercury__rtree__HeadVar__1_1, mercury__rtree__HeadVar__2_2);
    }
#line 19662 "rtree.c"
    return mercury__rtree__succeeded;
#line 19664 "rtree.c"
  }
#line 40 "rtree.m"
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
