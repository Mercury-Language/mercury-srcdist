/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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


/* :- module term. */
/* :- implementation. */

/*
INIT mercury__term__init
ENDINIT
*/

#include "term.mih"


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




#line 92 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1];

#line 95 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0;

#line 98 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1];

#line 101 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

#line 104 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1];

#line 107 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

#line 110 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

#line 113 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

#line 116 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

#line 119 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

#line 122 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

#line 125 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

#line 128 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

#line 131 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2];

#line 134 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

#line 137 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5];

#line 140 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5];

#line 143 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

#line 146 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

#line 149 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

#line 152 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

#line 155 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

#line 158 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

#line 161 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

#line 164 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

#line 167 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

#line 170 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

#line 173 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

#line 176 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 179 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

#line 182 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 185 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

#line 188 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 191 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

#line 194 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

#line 197 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 200 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

#line 203 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

#line 206 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

#line 209 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

#line 212 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

#line 215 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

#line 218 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

#line 221 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

#line 224 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

#line 227 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3];

#line 230 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0;

#line 233 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1];

#line 236 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1];

#line 239 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1];

#line 242 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1];

#line 245 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0;

#line 248 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4];

#line 251 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_0;

#line 254 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2];

#line 257 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_1;

#line 260 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1];

#line 263 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1];

#line 266 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_error_1[2];

#line 269 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2];

#line 272 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2];

#line 275 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1];

#line 278 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_0;

#line 281 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2;

#line 284 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1];

#line 287 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_1;

#line 290 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1];

#line 293 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1];

#line 296 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_result_2[2];

#line 299 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2];

#line 302 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2];

#line 305 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0;

#line 308 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

#line 311 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

#line 314 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

#line 317 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

#line 320 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 323 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 325 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 328 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 331 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 333 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 335 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 338 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 341 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 343 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 346 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 349 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 351 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 353 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 356 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 359 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 361 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 364 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 367 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 369 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 371 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 374 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 377 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 379 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 381 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 384 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 387 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 389 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 391 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 393 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 396 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 399 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 401 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 404 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 407 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 409 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 411 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 414 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 417 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 419 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 421 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 424 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 427 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 429 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 431 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 433 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 436 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 439 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 441 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 444 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 447 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 449 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 451 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 454 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 457 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 459 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 461 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 464 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 467 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 469 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 471 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 473 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 476 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 479 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 481 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 484 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 487 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 489 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 491 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 494 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 497 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 499 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 502 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 505 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 507 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 509 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 512 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 515 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 517 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 520 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 523 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 525 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 527 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 530 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 533 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 535 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 537 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 540 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
#line 543 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 545 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 547 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 549 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 552 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 555 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 557 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 559 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 561 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 564 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 567 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 569 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 571 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 573 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 575 "term.c"
  MR_Box mercury__term__wrapper_arg_5);

#line 578 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 581 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 583 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 585 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 588 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 591 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 593 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 595 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 597 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 600 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 603 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 605 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 607 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 610 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 613 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 615 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 617 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 619 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 622 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 625 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 627 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 630 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 633 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 635 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 637 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 640 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 643 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 645 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 647 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 650 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 653 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 655 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 657 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 659 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 662 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 665 "term.c"
  MR_Box mercury__term__closure_arg,
#line 667 "term.c"
  MR_Box mercury__term__wrapper_arg_1);

#line 670 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 673 "term.c"
  MR_Box mercury__term__closure_arg,
#line 675 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 677 "term.c"
  MR_Box * mercury__term__wrapper_arg_2);

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__term__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__term__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__term__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__term__Hi_9_9);

#line 318 "list.int"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term__V_15_15,
#line 318 "list.int"
  MR_Word mercury__term__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term__HeadVar__3_3);

#line 530 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 530 "list.int"
  MR_Word mercury__term__V_13_13,
#line 530 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 530 "list.int"
  MR_Word mercury__term__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 826 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 826 "term.m"
  MR_Word mercury__term__Context_4,
#line 826 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 826 "term.m"
  MR_Word * mercury__term__Term_6);

#line 587 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 587 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 587 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 587 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 587 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 587 "term.m"
  MR_Word mercury__term__Term_4,
#line 587 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 587 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 1406 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1406 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1406 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1406 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 1062 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 1062 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 1062 "term.m"
  MR_Word mercury__term__X_6,
#line 1062 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 1062 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 1062 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 1062 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14);

#line 817 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 817 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 817 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 817 "term.m"
  MR_Word * mercury__term__HeadVar__2_2);

#line 767 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 767 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 767 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 767 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 767 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 767 "term.m"
  MR_Word mercury__term__Univ_4,
#line 767 "term.m"
  MR_Word mercury__term__Context_5,
#line 767 "term.m"
  MR_Word * mercury__term__HeadVar__6_6);

#line 691 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 691 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 691 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 691 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 691 "term.m"
  MR_Word mercury__term__Functor_3,
#line 691 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 691 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 691 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 691 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 546 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 546 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 546 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 546 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 546 "term.m"
  MR_Word mercury__term__Context_3,
#line 546 "term.m"
  MR_Word * mercury__term__HeadVar__4_4);


static /* final */ const MR_Box mercury__term_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__term_scalar_common_5[6][1];




static /* final */ const MR_Box mercury__term_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_to_type_arg_context_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_5[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "univ"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "array"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "type_info"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "version_array"))
  },
};



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



#line 1258 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1263 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0 = {
  (MR_String) "atom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_const_0_0,
  NULL,
  NULL,
  NULL
};

#line 1278 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1283 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1 = {
  (MR_String) "integer",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_const_0_1,
  NULL,
  NULL,
  NULL
};

#line 1298 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1303 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term__term__field_types_const_0_2,
  NULL,
  NULL,
  NULL
};

#line 1318 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1323 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3 = {
  (MR_String) "float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__term__term__field_types_const_0_3,
  NULL,
  NULL,
  NULL
};

#line 1338 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1343 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4 = {
  (MR_String) "implementation_defined",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__field_types_const_0_4,
  NULL,
  NULL,
  NULL
};

#line 1358 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 1363 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 1368 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1373 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

#line 1379 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__term__term__du_stag_ordered_const_0_3
  }
};

#line 1403 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1412 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1421 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_const_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____const_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____const_0_0_10001)),
  (MR_String) "term",
  (MR_String) "const",
  {
    mercury__term__term__du_name_ordered_const_0
  },
  {
    mercury__term__term__du_ptag_ordered_const_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_const_0
};

#line 1442 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1448 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0 = {
  (MR_String) "context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1463 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1468 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1477 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1482 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1487 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "context",
  {
    mercury__term__term__du_name_ordered_context_0
  },
  {
    mercury__term__term__du_ptag_ordered_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_context_0
};

#line 1508 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1514 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1519 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1524 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1529 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_generic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__term____Unify____generic_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____generic_0_0_10001)),
  (MR_String) "term",
  (MR_String) "generic",
  {
    mercury__term__term__enum_name_ordered_generic_0
  },
  {
    mercury__term__term__enum_value_ordered_generic_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_generic_0
};

#line 1550 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1558 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1567 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____renaming_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_1_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1588 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1596 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1605 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____renaming_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_0_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1626 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1634 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1643 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____substitution_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_1_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1664 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1672 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1681 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____substitution_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_0_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1702 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1710 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1717 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0 = {
  (MR_String) "functor",
  (MR_Integer) 3,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_term_1_0,
  NULL,
  NULL,
  NULL
};

#line 1732 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1738 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1 = {
  (MR_String) "variable",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_term_1_1,
  NULL,
  NULL,
  NULL
};

#line 1753 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1758 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1763 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_1
  }
};

#line 1777 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1783 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1789 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {
    mercury__term__term__du_name_ordered_term_1
  },
  {
    mercury__term__term__du_ptag_ordered_term_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_1
};

#line 1810 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1831 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1838 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0 = {
  (MR_String) "arg_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_term_to_type_arg_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1853 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1858 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0
  }
};

#line 1867 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1872 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1] = {
  (MR_Integer) 0
};

#line 1877 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_to_type_arg_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_to_type_arg_context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_to_type_arg_context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term_to_type_arg_context",
  {
    mercury__term__term__du_name_ordered_term_to_type_arg_context_0
  },
  {
    mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_to_type_arg_context_0
};

#line 1898 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0
  }
};

#line 1906 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_to_type_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_to_type_context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_to_type_context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term_to_type_context",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1927 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1935 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_0 = {
  (MR_String) "type_error",
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_term_to_type_error_1_0,
  NULL,
  NULL,
  NULL
};

#line 1950 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1956 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_1 = {
  (MR_String) "mode_error",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_term_to_type_error_1_1,
  NULL,
  NULL,
  NULL
};

#line 1971 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 1976 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1
};

#line 1981 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_error_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_error_1_1
  }
};

#line 1995 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1,
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 2001 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2007 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_to_type_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_to_type_error_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_to_type_error_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term_to_type_error",
  {
    mercury__term__term__du_name_ordered_term_to_type_error_1
  },
  {
    mercury__term__term__du_ptag_ordered_term_to_type_error_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_to_type_error_1
};

#line 2028 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2033 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_term_to_type_result_2_0,
  NULL,
  NULL,
  NULL
};

#line 2048 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2056 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_to_type_error_1__pseudo_2
};

#line 2061 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_term_to_type_result_2_1,
  NULL,
  NULL,
  NULL
};

#line 2076 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 2081 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1
};

#line 2086 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_result_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_result_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_result_2_1
  }
};

#line 2100 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1,
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 2106 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2112 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_to_type_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_to_type_result_2_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_to_type_result_2_0_10001)),
  (MR_String) "term",
  (MR_String) "term_to_type_result",
  {
    mercury__term__term__du_name_ordered_term_to_type_result_2
  },
  {
    mercury__term__term__du_ptag_ordered_term_to_type_result_2
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_to_type_result_2
};

#line 2133 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2142 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_to_type_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____term_to_type_result_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_to_type_result_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term_to_type_result",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2163 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 2168 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2175 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {
    &mercury__term__term__notag_functor_desc_var_1
  },
  {
    &mercury__term__term__notag_functor_desc_var_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_1
};

#line 2196 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____var_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_0_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2217 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 2222 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2229 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_supply_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_supply_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_supply_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var_supply",
  {
    &mercury__term__term__notag_functor_desc_var_supply_1
  },
  {
    &mercury__term__term__notag_functor_desc_var_supply_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_supply_1
};

#line 2250 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 2261 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 2264 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2266 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2268 "term.c"
{
#line 2270 "term.c"
  {
#line 2272 "term.c"
    MR_bool mercury__term__succeeded;

#line 2275 "term.c"
    {
#line 2277 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2280 "term.c"
    return mercury__term__succeeded;
#line 2282 "term.c"
  }
#line 2284 "term.c"
}

#line 2287 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 2290 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2292 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2294 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2296 "term.c"
{
#line 2298 "term.c"
  {
#line 2300 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2303 "term.c"
    {
#line 2305 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2308 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2310 "term.c"
  }
#line 2312 "term.c"
}

#line 2315 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 2318 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2320 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2322 "term.c"
{
#line 2324 "term.c"
  {
#line 2326 "term.c"
    MR_bool mercury__term__succeeded;

#line 2329 "term.c"
    {
#line 2331 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2334 "term.c"
    return mercury__term__succeeded;
#line 2336 "term.c"
  }
#line 2338 "term.c"
}

#line 2341 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 2344 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2346 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2348 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2350 "term.c"
{
#line 2352 "term.c"
  {
#line 2354 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2357 "term.c"
    {
#line 2359 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2362 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2364 "term.c"
  }
#line 2366 "term.c"
}

#line 2369 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 2372 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2374 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2376 "term.c"
{
#line 2378 "term.c"
  {
#line 2380 "term.c"
    MR_bool mercury__term__succeeded;

#line 2383 "term.c"
    {
#line 2385 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 2388 "term.c"
    return mercury__term__succeeded;
#line 2390 "term.c"
  }
#line 2392 "term.c"
}

#line 2395 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 2398 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2400 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2402 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2404 "term.c"
{
#line 2406 "term.c"
  {
#line 2408 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2411 "term.c"
    {
#line 2413 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 2416 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2418 "term.c"
  }
#line 2420 "term.c"
}

#line 2423 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 2426 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2428 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2430 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2432 "term.c"
{
#line 2434 "term.c"
  {
#line 2436 "term.c"
    MR_bool mercury__term__succeeded;

#line 2439 "term.c"
    {
#line 2441 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2444 "term.c"
    return mercury__term__succeeded;
#line 2446 "term.c"
  }
#line 2448 "term.c"
}

#line 2451 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 2454 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2456 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2458 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2460 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2462 "term.c"
{
#line 2464 "term.c"
  {
#line 2466 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2469 "term.c"
    {
#line 2471 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2474 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2476 "term.c"
  }
#line 2478 "term.c"
}

#line 2481 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 2484 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2486 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2488 "term.c"
{
#line 2490 "term.c"
  {
#line 2492 "term.c"
    MR_bool mercury__term__succeeded;

#line 2495 "term.c"
    {
#line 2497 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2500 "term.c"
    return mercury__term__succeeded;
#line 2502 "term.c"
  }
#line 2504 "term.c"
}

#line 2507 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 2510 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2512 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2514 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2516 "term.c"
{
#line 2518 "term.c"
  {
#line 2520 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2523 "term.c"
    {
#line 2525 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2528 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2530 "term.c"
  }
#line 2532 "term.c"
}

#line 2535 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 2538 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2540 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2542 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2544 "term.c"
{
#line 2546 "term.c"
  {
#line 2548 "term.c"
    MR_bool mercury__term__succeeded;

#line 2551 "term.c"
    {
#line 2553 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2556 "term.c"
    return mercury__term__succeeded;
#line 2558 "term.c"
  }
#line 2560 "term.c"
}

#line 2563 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 2566 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2568 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2570 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2572 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2574 "term.c"
{
#line 2576 "term.c"
  {
#line 2578 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2581 "term.c"
    {
#line 2583 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2586 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2588 "term.c"
  }
#line 2590 "term.c"
}

#line 2593 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 2596 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2598 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2600 "term.c"
{
#line 2602 "term.c"
  {
#line 2604 "term.c"
    MR_bool mercury__term__succeeded;

#line 2607 "term.c"
    {
#line 2609 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2612 "term.c"
    return mercury__term__succeeded;
#line 2614 "term.c"
  }
#line 2616 "term.c"
}

#line 2619 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 2622 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2624 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2626 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2628 "term.c"
{
#line 2630 "term.c"
  {
#line 2632 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2635 "term.c"
    {
#line 2637 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2640 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2642 "term.c"
  }
#line 2644 "term.c"
}

#line 2647 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 2650 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2652 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2654 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2656 "term.c"
{
#line 2658 "term.c"
  {
#line 2660 "term.c"
    MR_bool mercury__term__succeeded;

#line 2663 "term.c"
    {
#line 2665 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2668 "term.c"
    return mercury__term__succeeded;
#line 2670 "term.c"
  }
#line 2672 "term.c"
}

#line 2675 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 2678 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2680 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2682 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2684 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2686 "term.c"
{
#line 2688 "term.c"
  {
#line 2690 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2693 "term.c"
    {
#line 2695 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2698 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2700 "term.c"
  }
#line 2702 "term.c"
}

#line 2705 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 2708 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2710 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2712 "term.c"
{
#line 2714 "term.c"
  {
#line 2716 "term.c"
    MR_bool mercury__term__succeeded;

#line 2719 "term.c"
    {
#line 2721 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2724 "term.c"
    return mercury__term__succeeded;
#line 2726 "term.c"
  }
#line 2728 "term.c"
}

#line 2731 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2734 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2736 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2738 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2740 "term.c"
{
#line 2742 "term.c"
  {
#line 2744 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2747 "term.c"
    {
#line 2749 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2752 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2754 "term.c"
  }
#line 2756 "term.c"
}

#line 2759 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 2762 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2764 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2766 "term.c"
{
#line 2768 "term.c"
  {
#line 2770 "term.c"
    MR_bool mercury__term__succeeded;

#line 2773 "term.c"
    {
#line 2775 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_arg_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2778 "term.c"
    return mercury__term__succeeded;
#line 2780 "term.c"
  }
#line 2782 "term.c"
}

#line 2785 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 2788 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2790 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2792 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2794 "term.c"
{
#line 2796 "term.c"
  {
#line 2798 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2801 "term.c"
    {
#line 2803 "term.c"
      mercury__term____Compare____term_to_type_arg_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2806 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2808 "term.c"
  }
#line 2810 "term.c"
}

#line 2813 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 2816 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2818 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2820 "term.c"
{
#line 2822 "term.c"
  {
#line 2824 "term.c"
    MR_bool mercury__term__succeeded;

#line 2827 "term.c"
    {
#line 2829 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2832 "term.c"
    return mercury__term__succeeded;
#line 2834 "term.c"
  }
#line 2836 "term.c"
}

#line 2839 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 2842 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2844 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2846 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2848 "term.c"
{
#line 2850 "term.c"
  {
#line 2852 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2855 "term.c"
    {
#line 2857 "term.c"
      mercury__term____Compare____term_to_type_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2860 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2862 "term.c"
  }
#line 2864 "term.c"
}

#line 2867 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 2870 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2872 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2874 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2876 "term.c"
{
#line 2878 "term.c"
  {
#line 2880 "term.c"
    MR_bool mercury__term__succeeded;

#line 2883 "term.c"
    {
#line 2885 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2888 "term.c"
    return mercury__term__succeeded;
#line 2890 "term.c"
  }
#line 2892 "term.c"
}

#line 2895 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
#line 2898 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2900 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2902 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2904 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2906 "term.c"
{
#line 2908 "term.c"
  {
#line 2910 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2913 "term.c"
    {
#line 2915 "term.c"
      mercury__term____Compare____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2918 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2920 "term.c"
  }
#line 2922 "term.c"
}

#line 2925 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 2928 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2930 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2932 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2934 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2936 "term.c"
{
#line 2938 "term.c"
  {
#line 2940 "term.c"
    MR_bool mercury__term__succeeded;

#line 2943 "term.c"
    {
#line 2945 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2948 "term.c"
    return mercury__term__succeeded;
#line 2950 "term.c"
  }
#line 2952 "term.c"
}

#line 2955 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 2958 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2960 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2962 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 2964 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 2966 "term.c"
  MR_Box mercury__term__wrapper_arg_5)
#line 2968 "term.c"
{
#line 2970 "term.c"
  {
#line 2972 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2975 "term.c"
    {
#line 2977 "term.c"
      mercury__term____Compare____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_4), ((MR_Word) mercury__term__wrapper_arg_5));
    }
#line 2980 "term.c"
    *mercury__term__wrapper_arg_3 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2982 "term.c"
  }
#line 2984 "term.c"
}

#line 2987 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 2990 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2992 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2994 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2996 "term.c"
{
#line 2998 "term.c"
  {
#line 3000 "term.c"
    MR_bool mercury__term__succeeded;

#line 3003 "term.c"
    {
#line 3005 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3008 "term.c"
    return mercury__term__succeeded;
#line 3010 "term.c"
  }
#line 3012 "term.c"
}

#line 3015 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 3018 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3020 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3022 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3024 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3026 "term.c"
{
#line 3028 "term.c"
  {
#line 3030 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3033 "term.c"
    {
#line 3035 "term.c"
      mercury__term____Compare____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3038 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3040 "term.c"
  }
#line 3042 "term.c"
}

#line 3045 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 3048 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3050 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3052 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3054 "term.c"
{
#line 3056 "term.c"
  {
#line 3058 "term.c"
    MR_bool mercury__term__succeeded;

#line 3061 "term.c"
    {
#line 3063 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3066 "term.c"
    return mercury__term__succeeded;
#line 3068 "term.c"
  }
#line 3070 "term.c"
}

#line 3073 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 3076 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3078 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3080 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3082 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3084 "term.c"
{
#line 3086 "term.c"
  {
#line 3088 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3091 "term.c"
    {
#line 3093 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3096 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3098 "term.c"
  }
#line 3100 "term.c"
}

#line 3103 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 3106 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3108 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 3110 "term.c"
{
#line 3112 "term.c"
  {
#line 3114 "term.c"
    MR_bool mercury__term__succeeded;

#line 3117 "term.c"
    {
#line 3119 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 3122 "term.c"
    return mercury__term__succeeded;
#line 3124 "term.c"
  }
#line 3126 "term.c"
}

#line 3129 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 3132 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 3134 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3136 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3138 "term.c"
{
#line 3140 "term.c"
  {
#line 3142 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3145 "term.c"
    {
#line 3147 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3150 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3152 "term.c"
  }
#line 3154 "term.c"
}

#line 3157 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 3160 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3162 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3164 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3166 "term.c"
{
#line 3168 "term.c"
  {
#line 3170 "term.c"
    MR_bool mercury__term__succeeded;

#line 3173 "term.c"
    {
#line 3175 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3178 "term.c"
    return mercury__term__succeeded;
#line 3180 "term.c"
  }
#line 3182 "term.c"
}

#line 3185 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 3188 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3190 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3192 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3194 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3196 "term.c"
{
#line 3198 "term.c"
  {
#line 3200 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3203 "term.c"
    {
#line 3205 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3208 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3210 "term.c"
  }
#line 3212 "term.c"
}

#line 3215 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 3218 "term.c"
  MR_Box mercury__term__closure_arg,
#line 3220 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 3222 "term.c"
{
#line 3224 "term.c"
  {
#line 3226 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 3228 "term.c"
    MR_Box mercury__term__closure;
#line 3230 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 3233 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3235 "term.c"
    {
#line 3237 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 3240 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3242 "term.c"
    return mercury__term__wrapper_arg_2;
#line 3244 "term.c"
  }
#line 3246 "term.c"
}

#line 3249 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 3252 "term.c"
  MR_Box mercury__term__closure_arg,
#line 3254 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3256 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 3258 "term.c"
{
#line 3260 "term.c"
  {
#line 3262 "term.c"
    MR_bool mercury__term__succeeded;
#line 3264 "term.c"
    MR_Box mercury__term__closure;
#line 3266 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 3269 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3271 "term.c"
    {
#line 3273 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 3276 "term.c"
    if (mercury__term__succeeded)
#line 3278 "term.c"
      {
#line 3280 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3282 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 3284 "term.c"
      }
#line 3286 "term.c"
    return mercury__term__succeeded;
#line 3288 "term.c"
  }
#line 3290 "term.c"
}

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__term__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__term__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__term__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__term__Hi_9_9)
#line 92 "version_array.opt"
{
#line 264 "version_array.opt"
  while (MR_TRUE)
#line 264 "version_array.opt"
    {
#line 264 "version_array.opt"
      /* tailcall optimized into a loop */
#line 264 "version_array.opt"
      {
#line 264 "version_array.opt"
        MR_bool mercury__term__succeeded = ((MR_Integer) 0 <= mercury__term__Hi_9_9);
#line 264 "version_array.opt"
        MR_Word mercury__term__HeadVar__5_5_10;

#line 264 "version_array.opt"
        if (mercury__term__succeeded)
#line 259 "version_array.opt"
          {
#line 259 "version_array.opt"
            MR_Word mercury__term__V_11_12;
#line 259 "version_array.opt"
            MR_Integer mercury__term__V_13_13;
#line 259 "version_array.opt"
            MR_Box mercury__term__V_12_14;

#line 261 "version_array.opt"
            {
#line 261 "version_array.opt"
              mercury__term__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__term__TypeInfo_for_T1_1_16, mercury__term__VA_7_7, mercury__term__Hi_9_9);
            }
#line 44 "list.opt"
            {
#line 44 "list.opt"
              mercury__term__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term__V_11_12, 0) = mercury__term__V_12_14;
#line 44 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__term__V_11_12, 1) = ((MR_Box) (mercury__term__Acc_8_8));
#line 44 "list.opt"
            }
#line 262 "version_array.opt"
            mercury__term__V_13_13 = (mercury__term__Hi_9_9 - (MR_Integer) 1);
#line 259 "version_array.opt"
            /* direct tailcall eliminated */
#line 259 "version_array.opt"
            {
#line 259 "version_array.opt"
              MR_Word mercury__term__Acc_8__tmp_copy_8 = mercury__term__V_11_12;
#line 259 "version_array.opt"
              MR_Integer mercury__term__Hi_9__tmp_copy_9 = mercury__term__V_13_13;

#line 259 "version_array.opt"
              mercury__term__Hi_9_9 = mercury__term__Hi_9__tmp_copy_9;
#line 259 "version_array.opt"
              mercury__term__Acc_8_8 = mercury__term__Acc_8__tmp_copy_8;
#line 259 "version_array.opt"
            }
#line 259 "version_array.opt"
            continue;
#line 259 "version_array.opt"
          }
#line 264 "version_array.opt"
        else
#line 265 "version_array.opt"
          mercury__term__HeadVar__5_5_10 = mercury__term__Acc_8_8;
#line 264 "version_array.opt"
        return mercury__term__HeadVar__5_5_10;
#line 264 "version_array.opt"
      }
#line 264 "version_array.opt"
      break;
#line 264 "version_array.opt"
    }
#line 92 "version_array.opt"
}

#line 318 "list.int"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 318 "list.int"
  MR_Word mercury__term__V_15_15,
#line 318 "list.int"
  MR_Word mercury__term__HeadVar__2_2,
#line 318 "list.int"
  MR_Word * mercury__term__HeadVar__3_3)
#line 318 "list.int"
{
#line 166 "list.opt"
  {
#line 166 "list.opt"
    MR_bool mercury__term__succeeded;

#line 166 "list.opt"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 166 "list.opt"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 166 "list.opt"
    else
#line 167 "list.opt"
      {
#line 167 "list.opt"
        MR_Word mercury__term__H0_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "list.opt"
        MR_Word mercury__term__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "list.opt"
        MR_Word mercury__term__H_8_8;
#line 167 "list.opt"
        MR_Word mercury__term__T_9_9;

#line 168 "list.opt"
        {
#line 168 "list.opt"
          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__V_15_15, mercury__term__H0_6_6, &mercury__term__H_8_8);
        }
#line 169 "list.opt"
        {
#line 169 "list.opt"
          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term__V_15_15, mercury__term__T0_7_7, &mercury__term__T_9_9);
        }
#line 167 "list.opt"
        {
#line 167 "list.opt"
          MR_Word base;
#line 167 "list.opt"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "list.opt"
          *mercury__term__HeadVar__3_3 = base;
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__H_8_8));
#line 167 "list.opt"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__T_9_9));
#line 167 "list.opt"
        }
#line 167 "list.opt"
      }
#line 166 "list.opt"
  }
#line 318 "list.int"
}

#line 530 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 530 "list.int"
  MR_Word mercury__term__V_13_13,
#line 530 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 530 "list.int"
  MR_Word mercury__term__HeadVar__2_2)
#line 530 "list.int"
{
#line 68 "list.opt"
  while (MR_TRUE)
#line 68 "list.opt"
    {
#line 68 "list.opt"
      /* tailcall optimized into a loop */
#line 68 "list.opt"
      {
#line 68 "list.opt"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 68 "list.opt"
        MR_Word mercury__term__V_10_10;
#line 68 "list.opt"
        MR_Word mercury__term__V_11_11;

#line 68 "list.opt"
        if (mercury__term__succeeded)
#line 68 "list.opt"
          {
#line 68 "list.opt"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "list.opt"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "list.opt"
            {
#line 68 "list.opt"
              MR_Integer mercury__term__V_14_14 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 68 "list.opt"
              MR_Integer mercury__term__V_15_15 = (MR_Integer) mercury__term__V_11_11;

#line 68 "list.opt"
              mercury__term__succeeded = (mercury__term__V_14_14 == mercury__term__V_15_15);
#line 68 "list.opt"
            }
#line 68 "list.opt"
            if (!(mercury__term__succeeded))
#line 70 "list.opt"
              {
#line 70 "list.opt"
                /* direct tailcall eliminated */
#line 70 "list.opt"
                {
#line 70 "list.opt"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__V_10_10;

#line 70 "list.opt"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 70 "list.opt"
                }
#line 70 "list.opt"
                continue;
#line 70 "list.opt"
              }
#line 68 "list.opt"
          }
#line 68 "list.opt"
        return mercury__term__succeeded;
#line 68 "list.opt"
      }
#line 68 "list.opt"
      break;
#line 68 "list.opt"
    }
#line 530 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__term__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 57 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 57 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 57 "term.m"
{
#line 57 "term.m"
  {
#line 57 "term.m"
    MR_bool mercury__term__succeeded;

#line 57 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "term.m"
  }
#line 57 "term.m"
}

#line 57 "term.m"
MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 57 "term.m"
{
#line 57 "term.m"
  {
#line 57 "term.m"
    return MR_TRUE;
#line 57 "term.m"
  }
#line 57 "term.m"
}

#line 826 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 826 "term.m"
  MR_Word mercury__term__Context_4,
#line 826 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 826 "term.m"
  MR_Word * mercury__term__Term_6)
#line 826 "term.m"
{
#line 828 "term.m"
  {
#line 828 "term.m"
    MR_bool mercury__term__succeeded;
#line 828 "term.m"
    MR_Word mercury__term__TypeCtor_7;
#line 828 "term.m"
    MR_Word mercury__term__ArgTypes_8;
#line 828 "term.m"
    MR_String mercury__term__TypeName_9;
#line 828 "term.m"
    MR_String mercury__term__ModuleName_10;
#line 828 "term.m"
    MR_Word mercury__term__ArgTerms_11;
#line 144 "type_desc.opt"
    MR_String mercury__term___ModuleName_5_32;
#line 144 "type_desc.opt"
    MR_Integer mercury__term___Arity_6_33;
#line 144 "type_desc.opt"
    MR_String mercury__term___ModuleName_5_36;
#line 144 "type_desc.opt"
    MR_Integer mercury__term___Arity_6_37;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__TypeInfo_5 ;
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
#line 3629 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_7  = TypeCtorDesc;
	 mercury__term__ArgTypes_8  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_7 ;
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
#line 3678 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_32  = TypeCtorModuleName;
	 mercury__term__TypeName_9  = TypeCtorName;
	 mercury__term___Arity_6_33  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_7 ;
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
#line 3728 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_36  = TypeCtorModuleName;
	 mercury__term__ModuleName_10  = TypeCtorName;
	 mercury__term___Arity_6_37  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 832 "term.m"
    {
#line 832 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term__Context_4, mercury__term__ArgTypes_8, &mercury__term__ArgTerms_11);
    }
#line 834 "term.m"
    mercury__term__succeeded = (strcmp(mercury__term__ModuleName_10, (MR_String) "builtin") == 0);
#line 836 "term.m"
    if (mercury__term__succeeded)
#line 835 "term.m"
      {
#line 835 "term.m"
        MR_Word mercury__term__V_15_15;

#line 835 "term.m"
        {
#line 835 "term.m"
          mercury__term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 835 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_15_15, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 835 "term.m"
        }
#line 835 "term.m"
        {
#line 835 "term.m"
          MR_Word base;
#line 835 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 835 "term.m"
          *mercury__term__Term_6 = base;
#line 835 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 835 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 835 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 835 "term.m"
        }
#line 835 "term.m"
      }
#line 836 "term.m"
    else
#line 837 "term.m"
      {
#line 837 "term.m"
        MR_Word mercury__term__Arg1_12;
#line 837 "term.m"
        MR_Word mercury__term__Arg2_13;
#line 837 "term.m"
        MR_Word mercury__term__V_16_16;
#line 837 "term.m"
        MR_Word mercury__term__V_17_17;
#line 837 "term.m"
        MR_Word mercury__term__V_18_18;
#line 837 "term.m"
        MR_Word mercury__term__V_19_19;
#line 837 "term.m"
        MR_Word mercury__term__V_21_21;
#line 837 "term.m"
        MR_Word mercury__term__V_22_22;
#line 837 "term.m"
        MR_Word mercury__term__V_23_23;

#line 837 "term.m"
        {
#line 837 "term.m"
          mercury__term__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 837 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__ModuleName_10));
#line 837 "term.m"
        }
#line 837 "term.m"
        mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "term.m"
        {
#line 837 "term.m"
          mercury__term__Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 837 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 0) = ((MR_Box) (mercury__term__V_16_16));
#line 837 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 1) = ((MR_Box) (mercury__term__V_17_17));
#line 837 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 2) = ((MR_Box) (mercury__term__Context_4));
#line 837 "term.m"
        }
#line 838 "term.m"
        {
#line 838 "term.m"
          mercury__term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 838 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_18_18, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 838 "term.m"
        }
#line 838 "term.m"
        {
#line 838 "term.m"
          mercury__term__Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 838 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 0) = ((MR_Box) (mercury__term__V_18_18));
#line 838 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 838 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 2) = ((MR_Box) (mercury__term__Context_4));
#line 838 "term.m"
        }
#line 839 "term.m"
        mercury__term__V_19_19 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 839 "term.m"
        mercury__term__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 839 "term.m"
        {
#line 839 "term.m"
          mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 0) = ((MR_Box) (mercury__term__Arg2_13));
#line 839 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 1) = ((MR_Box) (mercury__term__V_23_23));
#line 839 "term.m"
        }
#line 839 "term.m"
        {
#line 839 "term.m"
          mercury__term__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__Arg1_12));
#line 839 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 839 "term.m"
        }
#line 839 "term.m"
        {
#line 839 "term.m"
          MR_Word base;
#line 839 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 839 "term.m"
          *mercury__term__Term_6 = base;
#line 839 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_19_19));
#line 839 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_21_21));
#line 839 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 839 "term.m"
        }
#line 837 "term.m"
      }
#line 828 "term.m"
  }
#line 826 "term.m"
}

#line 587 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 587 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 587 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 587 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 587 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 587 "term.m"
  MR_Word mercury__term__Term_4,
#line 587 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 587 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 587 "term.m"
{
#line 593 "term.m"
  {
#line 593 "term.m"
    MR_bool mercury__term__succeeded;

#line 593 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 664 "term.m"
      {
#line 664 "term.m"
        MR_Word mercury__term__TypeCtorInfo_188_188;
#line 664 "term.m"
        MR_Word mercury__term__Arg_120;
#line 664 "term.m"
        MR_Word mercury__term__Value_122;
#line 664 "term.m"
        MR_Word mercury__term__Type_123;
#line 664 "term.m"
        MR_Word mercury__term__Univ_128;
#line 664 "term.m"
        MR_Word mercury__term__V_135_135;
#line 664 "term.m"
        MR_String mercury__term__V_136_136;
#line 664 "term.m"
        MR_Word mercury__term__V_137_137;
#line 664 "term.m"
        MR_Word mercury__term__V_138_138;
#line 664 "term.m"
        MR_Word mercury__term__V_139_139;
#line 664 "term.m"
        MR_String mercury__term__V_140_140;
#line 664 "term.m"
        MR_Word mercury__term__V_141_141;
#line 664 "term.m"
        MR_Word mercury__term__V_142_142;
#line 664 "term.m"
        MR_Word mercury__term__V_143_143;
#line 664 "term.m"
        MR_Word mercury__term__V_159_159;
#line 664 "term.m"
        MR_Word mercury__term__V_192_192;
#line 664 "term.m"
        MR_Word mercury__term__V_193_193;
#line 664 "term.m"
        MR_Word mercury__term__V_195_195;
#line 664 "term.m"
        MR_Word mercury__term__V_196_196;
#line 664 "term.m"
        MR_String mercury__term__V_197_197;
#line 668 "term.m"
        MR_Word mercury__term__V_121_121;
#line 669 "term.m"
        MR_Word mercury__term__V_124_124;
#line 672 "term.m"
        MR_Word mercury__term__V_191_191;
#line 671 "term.m"
        MR_Word mercury__term__V_194_194;

#line 664 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 664 "term.m"
        if (mercury__term__succeeded)
#line 664 "term.m"
          {
#line 664 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term.m"
            if (mercury__term__succeeded)
#line 664 "term.m"
              {
#line 668 "term.m"
                mercury__term__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 668 "term.m"
                mercury__term__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 668 "term.m"
                mercury__term__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 668 "term.m"
                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_135_135)) == (MR_mktag((MR_Integer) 0)));
#line 668 "term.m"
                if (mercury__term__succeeded)
#line 668 "term.m"
                  {
#line 668 "term.m"
                    mercury__term__V_136_136 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_135_135, (MR_Integer) 0)));
#line 668 "term.m"
                    mercury__term__succeeded = (strcmp(mercury__term__V_136_136, (MR_String) "univ") == 0);
#line 664 "term.m"
                    if (mercury__term__succeeded)
#line 664 "term.m"
                      {
#line 668 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_137_137)) == (MR_mktag((MR_Integer) 1)));
#line 668 "term.m"
                        if (mercury__term__succeeded)
#line 668 "term.m"
                          {
#line 668 "term.m"
                            mercury__term__Arg_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 0)));
#line 668 "term.m"
                            mercury__term__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 1)));
#line 668 "term.m"
                            mercury__term__succeeded = (mercury__term__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term.m"
                            if (mercury__term__succeeded)
#line 664 "term.m"
                              {
#line 669 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Arg_120)) == (MR_mktag((MR_Integer) 0)));
#line 669 "term.m"
                                if (mercury__term__succeeded)
#line 669 "term.m"
                                  {
#line 669 "term.m"
                                    mercury__term__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 0)));
#line 669 "term.m"
                                    mercury__term__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 1)));
#line 669 "term.m"
                                    mercury__term__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 2)));
#line 669 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_139_139)) == (MR_mktag((MR_Integer) 0)));
#line 669 "term.m"
                                    if (mercury__term__succeeded)
#line 669 "term.m"
                                      {
#line 669 "term.m"
                                        mercury__term__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_139_139, (MR_Integer) 0)));
#line 669 "term.m"
                                        mercury__term__succeeded = (strcmp(mercury__term__V_140_140, (MR_String) ":") == 0);
#line 664 "term.m"
                                        if (mercury__term__succeeded)
#line 664 "term.m"
                                          {
#line 669 "term.m"
                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_141_141)) == (MR_mktag((MR_Integer) 1)));
#line 669 "term.m"
                                            if (mercury__term__succeeded)
#line 669 "term.m"
                                              {
#line 669 "term.m"
                                                mercury__term__Value_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 0)));
#line 669 "term.m"
                                                mercury__term__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 1)));
#line 669 "term.m"
                                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_142_142)) == (MR_mktag((MR_Integer) 1)));
#line 669 "term.m"
                                                if (mercury__term__succeeded)
#line 669 "term.m"
                                                  {
#line 669 "term.m"
                                                    mercury__term__Type_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 0)));
#line 669 "term.m"
                                                    mercury__term__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 1)));
#line 669 "term.m"
                                                    mercury__term__succeeded = (mercury__term__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term.m"
                                                    if (mercury__term__succeeded)
#line 664 "term.m"
                                                      {
#line 672 "term.m"
                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Value_122)) == (MR_mktag((MR_Integer) 0)));
#line 672 "term.m"
                                                        if (mercury__term__succeeded)
#line 672 "term.m"
                                                          {
#line 672 "term.m"
                                                            mercury__term__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 0)));
#line 672 "term.m"
                                                            mercury__term__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 1)));
#line 672 "term.m"
                                                            mercury__term__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 2)));
#line 671 "term.m"
                                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Type_123)) == (MR_mktag((MR_Integer) 0)));
#line 671 "term.m"
                                                            if (mercury__term__succeeded)
#line 671 "term.m"
                                                              {
#line 671 "term.m"
                                                                mercury__term__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 0)));
#line 671 "term.m"
                                                                mercury__term__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 1)));
#line 671 "term.m"
                                                                mercury__term__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 2)));
#line 672 "term.m"
                                                                mercury__term__succeeded = (mercury__term__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term.m"
                                                                if (mercury__term__succeeded)
#line 664 "term.m"
                                                                  {
#line 679 "term.m"
                                                                    mercury__term__succeeded = (mercury__term__V_195_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "term.m"
                                                                    if (mercury__term__succeeded)
#line 664 "term.m"
                                                                      {
#line 679 "term.m"
                                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_196_196)) == (MR_mktag((MR_Integer) 0)));
#line 679 "term.m"
                                                                        if (mercury__term__succeeded)
#line 679 "term.m"
                                                                          {
#line 679 "term.m"
                                                                            mercury__term__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_196_196, (MR_Integer) 0)));
#line 674 "term.m"
                                                                            if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 1))))
#line 671 "term.m"
                                                                              {
#line 671 "term.m"
                                                                                MR_Word mercury__term__TypeCtorInfo_185_185;
#line 671 "term.m"
                                                                                MR_Integer mercury__term__Int_126;

#line 671 "term.m"
                                                                                mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "int") == 0);
#line 671 "term.m"
                                                                                if (mercury__term__succeeded)
#line 671 "term.m"
                                                                                  {
#line 672 "term.m"
                                                                                    mercury__term__Int_126 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_193_193, (MR_Integer) 0)));
#line 4127 "term.c"
                                                                                    mercury__term__TypeCtorInfo_185_185 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 673 "term.m"
                                                                                    {
#line 673 "term.m"
                                                                                      mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_185_185, ((MR_Box) (mercury__term__Int_126)));
                                                                                    }
#line 673 "term.m"
                                                                                    mercury__term__succeeded = MR_TRUE;
#line 671 "term.m"
                                                                                  }
#line 671 "term.m"
                                                                              }
#line 674 "term.m"
                                                                            else
#line 674 "term.m"
                                                                              if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 2))))
#line 675 "term.m"
                                                                                {
#line 675 "term.m"
                                                                                  MR_Word mercury__term__TypeCtorInfo_186_186;
#line 675 "term.m"
                                                                                  MR_String mercury__term__String_130;

#line 675 "term.m"
                                                                                  mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "string") == 0);
#line 675 "term.m"
                                                                                  if (mercury__term__succeeded)
#line 675 "term.m"
                                                                                    {
#line 676 "term.m"
                                                                                      mercury__term__String_130 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_193_193, (MR_Integer) 0)));
#line 4159 "term.c"
                                                                                      mercury__term__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 677 "term.m"
                                                                                      {
#line 677 "term.m"
                                                                                        mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_186_186, ((MR_Box) (mercury__term__String_130)));
                                                                                      }
#line 677 "term.m"
                                                                                      mercury__term__succeeded = MR_TRUE;
#line 675 "term.m"
                                                                                    }
#line 675 "term.m"
                                                                                }
#line 674 "term.m"
                                                                              else
#line 674 "term.m"
                                                                                if (((((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 679 "term.m"
                                                                                  {
#line 679 "term.m"
                                                                                    MR_Word mercury__term__TypeCtorInfo_187_187;
#line 679 "term.m"
                                                                                    MR_Float mercury__term__Float_133;

#line 679 "term.m"
                                                                                    mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "float") == 0);
#line 679 "term.m"
                                                                                    if (mercury__term__succeeded)
#line 679 "term.m"
                                                                                      {
#line 680 "term.m"
                                                                                        mercury__term__Float_133 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 1)));
#line 4191 "term.c"
                                                                                        mercury__term__TypeCtorInfo_187_187 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 681 "term.m"
                                                                                        {
#line 681 "term.m"
                                                                                          mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_187_187, MR_box_float(mercury__term__Float_133));
                                                                                        }
#line 681 "term.m"
                                                                                        mercury__term__succeeded = MR_TRUE;
#line 679 "term.m"
                                                                                      }
#line 679 "term.m"
                                                                                  }
#line 674 "term.m"
                                                                                else
#line 674 "term.m"
                                                                                  mercury__term__succeeded = MR_FALSE;
#line 664 "term.m"
                                                                            if (mercury__term__succeeded)
#line 664 "term.m"
                                                                              {
#line 4212 "term.c"
                                                                                mercury__term__TypeCtorInfo_188_188 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 685 "term.m"
                                                                                {
#line 685 "term.m"
                                                                                  mercury__term__V_159_159 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_188_188, ((MR_Box) (mercury__term__Univ_128)));
                                                                                }
#line 685 "term.m"
                                                                                {
#line 685 "term.m"
                                                                                  MR_Word base;
#line 685 "term.m"
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 685 "term.m"
                                                                                  *mercury__term__HeadVar__7_7 = base;
#line 685 "term.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_159_159));
#line 685 "term.m"
                                                                                }
#line 685 "term.m"
                                                                                mercury__term__succeeded = MR_TRUE;
#line 664 "term.m"
                                                                              }
#line 679 "term.m"
                                                                          }
#line 664 "term.m"
                                                                      }
#line 664 "term.m"
                                                                  }
#line 671 "term.m"
                                                              }
#line 672 "term.m"
                                                          }
#line 664 "term.m"
                                                      }
#line 669 "term.m"
                                                  }
#line 669 "term.m"
                                              }
#line 664 "term.m"
                                          }
#line 669 "term.m"
                                      }
#line 669 "term.m"
                                  }
#line 664 "term.m"
                              }
#line 668 "term.m"
                          }
#line 664 "term.m"
                      }
#line 668 "term.m"
                  }
#line 664 "term.m"
              }
#line 664 "term.m"
          }
#line 664 "term.m"
      }
#line 593 "term.m"
    else
#line 593 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 614 "term.m"
        {
#line 614 "term.m"
          MR_Word mercury__term__TypeInfo_171_171;
#line 614 "term.m"
          MR_Word mercury__term__TypeCtorInfo_172_172;
#line 614 "term.m"
          MR_Word mercury__term__TypeInfo_173_173;
#line 614 "term.m"
          MR_Word mercury__term__ElemType_51;
#line 614 "term.m"
          MR_Word mercury__term__ArgList_56;
#line 614 "term.m"
          MR_Word mercury__term__TermContext_57;
#line 614 "term.m"
          MR_Word mercury__term__ListType_59;
#line 614 "term.m"
          MR_Word mercury__term__ArgContext_60;
#line 614 "term.m"
          MR_Word mercury__term__NewContext_61;
#line 614 "term.m"
          MR_Word mercury__term__ArgResult_62;
#line 614 "term.m"
          MR_Word mercury__term__V_68_68;
#line 614 "term.m"
          MR_Word mercury__term__V_69_69;
#line 614 "term.m"
          MR_String mercury__term__V_70_70;
#line 614 "term.m"
          MR_Word mercury__term__V_71_71;
#line 614 "term.m"
          MR_Word mercury__term__V_72_72;
#line 614 "term.m"
          MR_Integer mercury__term__V_77_77;
#line 625 "term.m"
          MR_Box mercury__term__Elem_58;
#line 626 "term.m"
          MR_Word mercury__term__V_73_73;

#line 613 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 614 "term.m"
          if (mercury__term__succeeded)
#line 614 "term.m"
            {
#line 613 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 613 "term.m"
              if (mercury__term__succeeded)
#line 613 "term.m"
                {
#line 613 "term.m"
                  mercury__term__ElemType_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 613 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 613 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "term.m"
                  if (mercury__term__succeeded)
#line 614 "term.m"
                    {
#line 619 "term.m"
                      mercury__term__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 619 "term.m"
                      mercury__term__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 619 "term.m"
                      mercury__term__TermContext_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 619 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 619 "term.m"
                      if (mercury__term__succeeded)
#line 619 "term.m"
                        {
#line 619 "term.m"
                          mercury__term__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_69_69, (MR_Integer) 0)));
#line 619 "term.m"
                          mercury__term__succeeded = (strcmp(mercury__term__V_70_70, (MR_String) "array") == 0);
#line 614 "term.m"
                          if (mercury__term__succeeded)
#line 614 "term.m"
                            {
#line 619 "term.m"
                              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 619 "term.m"
                              if (mercury__term__succeeded)
#line 619 "term.m"
                                {
#line 619 "term.m"
                                  mercury__term__ArgList_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 0)));
#line 619 "term.m"
                                  mercury__term__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 1)));
#line 619 "term.m"
                                  mercury__term__succeeded = (mercury__term__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "term.m"
                                  if (mercury__term__succeeded)
#line 614 "term.m"
                                    {
#line 625 "term.m"
                                      {
#line 625 "term.m"
                                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_171_171, mercury__term__ElemType_51);
                                      }
#line 4377 "term.c"
                                      mercury__term__TypeCtorInfo_172_172 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4379 "term.c"
                                      {
#line 4381 "term.c"
                                        mercury__term__TypeInfo_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4383 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4385 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 1) = ((MR_Box) (mercury__term__TypeInfo_171_171));
#line 4387 "term.c"
                                      }
#line 626 "term.m"
                                      {
#line 626 "term.m"
                                        mercury__term__ListType_59 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_173_173);
                                      }
#line 627 "term.m"
                                      mercury__term__V_77_77 = (MR_Integer) 1;
#line 627 "term.m"
                                      {
#line 627 "term.m"
                                        mercury__term__ArgContext_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 627 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 1) = ((MR_Box) (mercury__term__V_77_77));
#line 627 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 2) = ((MR_Box) (mercury__term__TermContext_57));
#line 627 "term.m"
                                      }
#line 628 "term.m"
                                      {
#line 628 "term.m"
                                        mercury__term__NewContext_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 0) = ((MR_Box) (mercury__term__ArgContext_60));
#line 628 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 628 "term.m"
                                      }
#line 629 "term.m"
                                      {
#line 629 "term.m"
                                        mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_56, mercury__term__ListType_59, mercury__term__NewContext_61, &mercury__term__ArgResult_62);
                                      }
#line 637 "term.m"
                                      if (((MR_tag((MR_Word) mercury__term__ArgResult_62)) == (MR_mktag((MR_Integer) 1))))
#line 639 "term.m"
                                        *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_62;
#line 637 "term.m"
                                      else
#line 631 "term.m"
                                        {
#line 631 "term.m"
                                          MR_Word mercury__term__TypeInfo_174_174;
#line 631 "term.m"
                                          MR_Word mercury__term__TypeInfo_175_175;
#line 631 "term.m"
                                          MR_Word mercury__term__TypeCtorInfo_176_176;
#line 631 "term.m"
                                          MR_Word mercury__term__TypeInfo_177_177;
#line 631 "term.m"
                                          MR_Word mercury__term__ListUniv_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_62, (MR_Integer) 0)));
#line 631 "term.m"
                                          MR_Word mercury__term__List_65;
#line 631 "term.m"
                                          MR_ArrayPtr mercury__term__Array_66;
#line 631 "term.m"
                                          MR_Word mercury__term__V_80_80;
#line 632 "term.m"
                                          MR_Box mercury__term__Elem2_64;
#line 634 "term.m"
                                          MR_Box mercury__term__conv0_List_65;
#line 635 "term.m"
                                          MR_ArrayPtr mercury__term__conv1_Array_66;

#line 632 "term.m"
                                          {
#line 632 "term.m"
                                            mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_174_174, mercury__term__ElemType_51);
                                          }
#line 4459 "term.c"
                                          {
#line 4461 "term.c"
                                            mercury__term__TypeInfo_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4463 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4465 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4467 "term.c"
                                          }
#line 634 "term.m"
                                          {
#line 634 "term.m"
                                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_175_175, mercury__term__ListUniv_63, &mercury__term__conv0_List_65);
                                          }
#line 634 "term.m"
                                          mercury__term__List_65 = ((MR_Word) mercury__term__conv0_List_65);
#line 635 "term.m"
                                          {
#line 635 "term.m"
                                            mercury__term__conv1_Array_66 = mercury__array__array_1_f_0(mercury__term__TypeInfo_174_174, mercury__term__List_65);
                                          }
#line 635 "term.m"
                                          mercury__term__Array_66 = (MR_ArrayPtr) mercury__term__conv1_Array_66;
#line 4483 "term.c"
                                          mercury__term__TypeCtorInfo_176_176 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 4485 "term.c"
                                          {
#line 4487 "term.c"
                                            mercury__term__TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4489 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_176_176));
#line 4491 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4493 "term.c"
                                          }
#line 636 "term.m"
                                          {
#line 636 "term.m"
                                            mercury__term__V_80_80 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_177_177, ((MR_Box) (mercury__term__Array_66)));
                                          }
#line 636 "term.m"
                                          {
#line 636 "term.m"
                                            MR_Word base;
#line 636 "term.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 636 "term.m"
                                            *mercury__term__HeadVar__7_7 = base;
#line 636 "term.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_80_80));
#line 636 "term.m"
                                          }
#line 631 "term.m"
                                        }
#line 637 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 614 "term.m"
                                    }
#line 619 "term.m"
                                }
#line 614 "term.m"
                            }
#line 619 "term.m"
                        }
#line 614 "term.m"
                    }
#line 613 "term.m"
                }
#line 614 "term.m"
            }
#line 614 "term.m"
        }
#line 593 "term.m"
      else
#line 593 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 609 "term.m"
          {
#line 609 "term.m"
            MR_Word mercury__term__TypeCtorInfo_170_170;
#line 609 "term.m"
            MR_Word mercury__term__Univ_45;
#line 609 "term.m"
            MR_String mercury__term__String_46;
#line 609 "term.m"
            MR_Word mercury__term__V_48_48;
#line 609 "term.m"
            MR_Word mercury__term__V_49_49;
#line 609 "term.m"
            MR_Box mercury__term__V_50_50;
#line 611 "term.m"
            MR_Word mercury__term__V_47_47;

#line 608 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 609 "term.m"
            if (mercury__term__succeeded)
#line 609 "term.m"
              {
#line 608 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "term.m"
                if (mercury__term__succeeded)
#line 609 "term.m"
                  {
#line 611 "term.m"
                    mercury__term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 611 "term.m"
                    mercury__term__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 611 "term.m"
                    mercury__term__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 611 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_48_48)) == (MR_mktag((MR_Integer) 2)));
#line 611 "term.m"
                    if (mercury__term__succeeded)
#line 611 "term.m"
                      {
#line 611 "term.m"
                        mercury__term__String_46 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_48_48, (MR_Integer) 0)));
#line 611 "term.m"
                        mercury__term__succeeded = (mercury__term__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "term.m"
                        if (mercury__term__succeeded)
#line 609 "term.m"
                          {
#line 612 "term.m"
                            {
#line 612 "term.m"
                              mercury__term__succeeded = mercury__bitmap__from_string_1_f_0(mercury__term__String_46, &mercury__term__V_50_50);
                            }
#line 609 "term.m"
                            if (mercury__term__succeeded)
#line 609 "term.m"
                              {
#line 4594 "term.c"
                                mercury__term__TypeCtorInfo_170_170 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 612 "term.m"
                                {
#line 612 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_170_170, ((MR_Box) (mercury__term__V_50_50)), &mercury__term__Univ_45);
                                }
#line 609 "term.m"
                                {
#line 609 "term.m"
                                  MR_Word base;
#line 609 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 609 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 609 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_45));
#line 609 "term.m"
                                }
#line 609 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 609 "term.m"
                              }
#line 609 "term.m"
                          }
#line 611 "term.m"
                      }
#line 609 "term.m"
                  }
#line 609 "term.m"
              }
#line 609 "term.m"
          }
#line 593 "term.m"
        else
#line 593 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 593 "term.m"
            if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 598 "term.m"
              {
#line 598 "term.m"
                MR_Word mercury__term__TypeCtorInfo_167_167;
#line 598 "term.m"
                MR_Word mercury__term__Univ_21;
#line 598 "term.m"
                MR_Integer mercury__term__Int_22;
#line 598 "term.m"
                MR_Word mercury__term__V_24_24;
#line 598 "term.m"
                MR_Word mercury__term__V_25_25;
#line 599 "term.m"
                MR_Word mercury__term__V_23_23;

#line 597 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "term.m"
                if (mercury__term__succeeded)
#line 598 "term.m"
                  {
#line 599 "term.m"
                    mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 599 "term.m"
                    mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 599 "term.m"
                    mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 599 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 599 "term.m"
                    if (mercury__term__succeeded)
#line 599 "term.m"
                      {
#line 599 "term.m"
                        mercury__term__Int_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_24_24, (MR_Integer) 0)));
#line 599 "term.m"
                        mercury__term__succeeded = (mercury__term__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "term.m"
                        if (mercury__term__succeeded)
#line 598 "term.m"
                          {
#line 4674 "term.c"
                            mercury__term__TypeCtorInfo_167_167 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 600 "term.m"
                            {
#line 600 "term.m"
                              mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_167_167, ((MR_Box) (mercury__term__Int_22)), &mercury__term__Univ_21);
                            }
#line 598 "term.m"
                            {
#line 598 "term.m"
                              MR_Word base;
#line 598 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "term.m"
                              *mercury__term__HeadVar__7_7 = base;
#line 598 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_21));
#line 598 "term.m"
                            }
#line 598 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 598 "term.m"
                          }
#line 599 "term.m"
                      }
#line 598 "term.m"
                  }
#line 598 "term.m"
              }
#line 593 "term.m"
            else
#line 593 "term.m"
              if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 605 "term.m"
                {
#line 605 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_169_169;
#line 605 "term.m"
                  MR_Word mercury__term__Univ_37;
#line 605 "term.m"
                  MR_Float mercury__term__Float_38;
#line 605 "term.m"
                  MR_Word mercury__term__V_40_40;
#line 605 "term.m"
                  MR_Word mercury__term__V_41_41;
#line 606 "term.m"
                  MR_Word mercury__term__V_39_39;

#line 605 "term.m"
                  mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "term.m"
                  if (mercury__term__succeeded)
#line 605 "term.m"
                    {
#line 606 "term.m"
                      mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 606 "term.m"
                      mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 606 "term.m"
                      mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 606 "term.m"
                      mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 606 "term.m"
                      if (mercury__term__succeeded)
#line 606 "term.m"
                        {
#line 606 "term.m"
                          mercury__term__Float_38 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 1)));
#line 606 "term.m"
                          mercury__term__succeeded = (mercury__term__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "term.m"
                          if (mercury__term__succeeded)
#line 605 "term.m"
                            {
#line 4748 "term.c"
                              mercury__term__TypeCtorInfo_169_169 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 607 "term.m"
                              {
#line 607 "term.m"
                                mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_169_169, MR_box_float(mercury__term__Float_38), &mercury__term__Univ_37);
                              }
#line 605 "term.m"
                              {
#line 605 "term.m"
                                MR_Word base;
#line 605 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 605 "term.m"
                                *mercury__term__HeadVar__7_7 = base;
#line 605 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_37));
#line 605 "term.m"
                              }
#line 605 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 605 "term.m"
                            }
#line 606 "term.m"
                        }
#line 605 "term.m"
                    }
#line 605 "term.m"
                }
#line 593 "term.m"
              else
#line 593 "term.m"
                if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 602 "term.m"
                  {
#line 602 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_168_168;
#line 602 "term.m"
                    MR_Word mercury__term__Univ_29;
#line 602 "term.m"
                    MR_String mercury__term__String_30;
#line 602 "term.m"
                    MR_Word mercury__term__V_32_32;
#line 602 "term.m"
                    MR_Word mercury__term__V_33_33;
#line 603 "term.m"
                    MR_Word mercury__term__V_31_31;

#line 601 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "term.m"
                    if (mercury__term__succeeded)
#line 602 "term.m"
                      {
#line 603 "term.m"
                        mercury__term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 603 "term.m"
                        mercury__term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 603 "term.m"
                        mercury__term__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 603 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 603 "term.m"
                        if (mercury__term__succeeded)
#line 603 "term.m"
                          {
#line 603 "term.m"
                            mercury__term__String_30 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_32_32, (MR_Integer) 0)));
#line 603 "term.m"
                            mercury__term__succeeded = (mercury__term__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "term.m"
                            if (mercury__term__succeeded)
#line 602 "term.m"
                              {
#line 4822 "term.c"
                                mercury__term__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 604 "term.m"
                                {
#line 604 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_168_168, ((MR_Box) (mercury__term__String_30)), &mercury__term__Univ_29);
                                }
#line 602 "term.m"
                                {
#line 602 "term.m"
                                  MR_Word base;
#line 602 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 602 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 602 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_29));
#line 602 "term.m"
                                }
#line 602 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 602 "term.m"
                              }
#line 603 "term.m"
                          }
#line 602 "term.m"
                      }
#line 602 "term.m"
                  }
#line 593 "term.m"
                else
#line 593 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 593 "term.m"
                    {
#line 593 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_166_166;
#line 593 "term.m"
                      MR_Word mercury__term__Univ_11;
#line 593 "term.m"
                      MR_String mercury__term__FunctorName_12;
#line 593 "term.m"
                      MR_Char mercury__term__Char_14;
#line 593 "term.m"
                      MR_Word mercury__term__V_15_15;
#line 593 "term.m"
                      MR_Word mercury__term__V_16_16;
#line 593 "term.m"
                      MR_String mercury__term__V_17_17;
#line 594 "term.m"
                      MR_Word mercury__term__V_13_13;

#line 593 "term.m"
                      mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "term.m"
                      if (mercury__term__succeeded)
#line 593 "term.m"
                        {
#line 594 "term.m"
                          mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 594 "term.m"
                          mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 594 "term.m"
                          mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 594 "term.m"
                          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 594 "term.m"
                          if (mercury__term__succeeded)
#line 594 "term.m"
                            {
#line 594 "term.m"
                              mercury__term__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_15_15, (MR_Integer) 0)));
#line 594 "term.m"
                              mercury__term__succeeded = (mercury__term__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "term.m"
                              if (mercury__term__succeeded)
#line 593 "term.m"
                                {
#line 595 "term.m"
                                  mercury__term__V_17_17 = (MR_String) "";
#line 595 "term.m"
                                  {
#line 595 "term.m"
                                    mercury__term__succeeded = mercury__string__first_char_3_p_1(mercury__term__FunctorName_12, &mercury__term__Char_14, mercury__term__V_17_17);
                                  }
#line 593 "term.m"
                                  if (mercury__term__succeeded)
#line 593 "term.m"
                                    {
#line 4911 "term.c"
                                      mercury__term__TypeCtorInfo_166_166 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 596 "term.m"
                                      {
#line 596 "term.m"
                                        mercury__univ__type_to_univ_2_p_0(mercury__term__TypeCtorInfo_166_166, ((MR_Box) (MR_Word) (mercury__term__Char_14)), &mercury__term__Univ_11);
                                      }
#line 593 "term.m"
                                      {
#line 593 "term.m"
                                        MR_Word base;
#line 593 "term.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 593 "term.m"
                                        *mercury__term__HeadVar__7_7 = base;
#line 593 "term.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_11));
#line 593 "term.m"
                                      }
#line 593 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 593 "term.m"
                                    }
#line 593 "term.m"
                                }
#line 594 "term.m"
                            }
#line 593 "term.m"
                        }
#line 593 "term.m"
                    }
#line 593 "term.m"
                  else
#line 593 "term.m"
                    mercury__term__succeeded = MR_FALSE;
#line 593 "term.m"
          else
#line 593 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 642 "term.m"
              {
#line 642 "term.m"
                MR_Word mercury__term__TypeInfo_178_178;
#line 642 "term.m"
                MR_Word mercury__term__TypeCtorInfo_179_179;
#line 642 "term.m"
                MR_Word mercury__term__TypeInfo_180_180;
#line 642 "term.m"
                MR_Word mercury__term__ElemType_81;
#line 642 "term.m"
                MR_Word mercury__term__ArgList_86;
#line 642 "term.m"
                MR_Word mercury__term__TermContext_87;
#line 642 "term.m"
                MR_Word mercury__term__ListType_89;
#line 642 "term.m"
                MR_Word mercury__term__ArgContext_90;
#line 642 "term.m"
                MR_Word mercury__term__NewContext_91;
#line 642 "term.m"
                MR_Word mercury__term__ArgResult_92;
#line 642 "term.m"
                MR_Word mercury__term__V_98_98;
#line 642 "term.m"
                MR_Word mercury__term__V_99_99;
#line 642 "term.m"
                MR_String mercury__term__V_100_100;
#line 642 "term.m"
                MR_Word mercury__term__V_101_101;
#line 642 "term.m"
                MR_Word mercury__term__V_102_102;
#line 642 "term.m"
                MR_Integer mercury__term__V_107_107;
#line 646 "term.m"
                MR_Box mercury__term__Elem_88;
#line 647 "term.m"
                MR_Word mercury__term__V_103_103;

#line 641 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 642 "term.m"
                if (mercury__term__succeeded)
#line 642 "term.m"
                  {
#line 641 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 641 "term.m"
                    if (mercury__term__succeeded)
#line 641 "term.m"
                      {
#line 641 "term.m"
                        mercury__term__ElemType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 641 "term.m"
                        mercury__term__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 641 "term.m"
                        mercury__term__succeeded = (mercury__term__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "term.m"
                        if (mercury__term__succeeded)
#line 642 "term.m"
                          {
#line 645 "term.m"
                            mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 645 "term.m"
                            mercury__term__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 645 "term.m"
                            mercury__term__TermContext_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 645 "term.m"
                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_99_99)) == (MR_mktag((MR_Integer) 0)));
#line 645 "term.m"
                            if (mercury__term__succeeded)
#line 645 "term.m"
                              {
#line 645 "term.m"
                                mercury__term__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_99_99, (MR_Integer) 0)));
#line 645 "term.m"
                                mercury__term__succeeded = (strcmp(mercury__term__V_100_100, (MR_String) "version_array") == 0);
#line 642 "term.m"
                                if (mercury__term__succeeded)
#line 642 "term.m"
                                  {
#line 645 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 645 "term.m"
                                    if (mercury__term__succeeded)
#line 645 "term.m"
                                      {
#line 645 "term.m"
                                        mercury__term__ArgList_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 0)));
#line 645 "term.m"
                                        mercury__term__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 1)));
#line 645 "term.m"
                                        mercury__term__succeeded = (mercury__term__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "term.m"
                                        if (mercury__term__succeeded)
#line 642 "term.m"
                                          {
#line 646 "term.m"
                                            {
#line 646 "term.m"
                                              mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_178_178, mercury__term__ElemType_81);
                                            }
#line 5052 "term.c"
                                            mercury__term__TypeCtorInfo_179_179 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 5054 "term.c"
                                            {
#line 5056 "term.c"
                                              mercury__term__TypeInfo_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5058 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 5060 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 1) = ((MR_Box) (mercury__term__TypeInfo_178_178));
#line 5062 "term.c"
                                            }
#line 647 "term.m"
                                            {
#line 647 "term.m"
                                              mercury__term__ListType_89 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_180_180);
                                            }
#line 648 "term.m"
                                            mercury__term__V_107_107 = (MR_Integer) 1;
#line 648 "term.m"
                                            {
#line 648 "term.m"
                                              mercury__term__ArgContext_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 648 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 0) = ((MR_Box) (mercury__term__V_99_99));
#line 648 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 1) = ((MR_Box) (mercury__term__V_107_107));
#line 648 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 2) = ((MR_Box) (mercury__term__TermContext_87));
#line 648 "term.m"
                                            }
#line 649 "term.m"
                                            {
#line 649 "term.m"
                                              mercury__term__NewContext_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 0) = ((MR_Box) (mercury__term__ArgContext_90));
#line 649 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 649 "term.m"
                                            }
#line 650 "term.m"
                                            {
#line 650 "term.m"
                                              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_86, mercury__term__ListType_89, mercury__term__NewContext_91, &mercury__term__ArgResult_92);
                                            }
#line 658 "term.m"
                                            if (((MR_tag((MR_Word) mercury__term__ArgResult_92)) == (MR_mktag((MR_Integer) 1))))
#line 660 "term.m"
                                              *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_92;
#line 658 "term.m"
                                            else
#line 652 "term.m"
                                              {
#line 652 "term.m"
                                                MR_Word mercury__term__TypeInfo_181_181;
#line 652 "term.m"
                                                MR_Word mercury__term__TypeInfo_182_182;
#line 652 "term.m"
                                                MR_Word mercury__term__TypeCtorInfo_183_183;
#line 652 "term.m"
                                                MR_Word mercury__term__TypeInfo_184_184;
#line 652 "term.m"
                                                MR_Word mercury__term__ListUniv_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_92, (MR_Integer) 0)));
#line 652 "term.m"
                                                MR_Word mercury__term__List_95;
#line 652 "term.m"
                                                MR_Box mercury__term__Array_96;
#line 652 "term.m"
                                                MR_Word mercury__term__V_110_110;
#line 653 "term.m"
                                                MR_Box mercury__term__Elem2_94;
#line 655 "term.m"
                                                MR_Box mercury__term__conv2_List_95;

#line 653 "term.m"
                                                {
#line 653 "term.m"
                                                  mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_181_181, mercury__term__ElemType_81);
                                                }
#line 5132 "term.c"
                                                {
#line 5134 "term.c"
                                                  mercury__term__TypeInfo_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5136 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 5138 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 5140 "term.c"
                                                }
#line 655 "term.m"
                                                {
#line 655 "term.m"
                                                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_182_182, mercury__term__ListUniv_93, &mercury__term__conv2_List_95);
                                                }
#line 655 "term.m"
                                                mercury__term__List_95 = ((MR_Word) mercury__term__conv2_List_95);
#line 656 "term.m"
                                                {
#line 656 "term.m"
                                                  mercury__term__Array_96 = mercury__version_array__version_array_1_f_0(mercury__term__TypeInfo_181_181, mercury__term__List_95);
                                                }
#line 5154 "term.c"
                                                mercury__term__TypeCtorInfo_183_183 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 5156 "term.c"
                                                {
#line 5158 "term.c"
                                                  mercury__term__TypeInfo_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5160 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_183_183));
#line 5162 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 5164 "term.c"
                                                }
#line 657 "term.m"
                                                {
#line 657 "term.m"
                                                  mercury__term__V_110_110 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_184_184, ((MR_Box) (mercury__term__Array_96)));
                                                }
#line 657 "term.m"
                                                {
#line 657 "term.m"
                                                  MR_Word base;
#line 657 "term.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 657 "term.m"
                                                  *mercury__term__HeadVar__7_7 = base;
#line 657 "term.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_110_110));
#line 657 "term.m"
                                                }
#line 652 "term.m"
                                              }
#line 658 "term.m"
                                            mercury__term__succeeded = MR_TRUE;
#line 642 "term.m"
                                          }
#line 645 "term.m"
                                      }
#line 642 "term.m"
                                  }
#line 645 "term.m"
                              }
#line 642 "term.m"
                          }
#line 641 "term.m"
                      }
#line 642 "term.m"
                  }
#line 642 "term.m"
              }
#line 593 "term.m"
            else
#line 593 "term.m"
              mercury__term__succeeded = MR_FALSE;
#line 593 "term.m"
    return mercury__term__succeeded;
#line 593 "term.m"
  }
#line 587 "term.m"
}

#line 456 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
#line 456 "term.m"
{
#line 1428 "term.m"
  {
#line 1428 "term.m"
    MR_bool mercury__term__succeeded;

#line 1428 "term.m"
  }
#line 456 "term.m"
}

#line 1291 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 1291 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1291 "term.m"
  MR_Integer mercury__term__X_4,
#line 1291 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 1291 "term.m"
{
#line 1303 "term.m"
  {
#line 1303 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 1303 "term.m"
    return MR_TRUE;
#line 1303 "term.m"
  }
#line 1291 "term.m"
}

#line 1290 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 1290 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1290 "term.m"
  MR_Word mercury__term__X_4)
#line 1290 "term.m"
{
#line 1297 "term.m"
  {
#line 1297 "term.m"
    MR_bool mercury__term__succeeded;
#line 1297 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 1297 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1297 "term.m"
  }
#line 1290 "term.m"
}

#line 507 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 507 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 507 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 507 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 507 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 507 "term.m"
{
#line 507 "term.m"
  {
#line 507 "term.m"
    MR_bool mercury__term__succeeded;
#line 507 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 507 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 507 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 507 "term.m"
    if (mercury__term__succeeded)
#line 5300 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 507 "term.m"
    else
#line 507 "term.m"
      {
#line 507 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 507 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 66 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 69 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 74 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 507 "term.m"
      }
#line 507 "term.m"
  }
#line 507 "term.m"
}

#line 507 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 507 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 507 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 507 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 507 "term.m"
{
#line 507 "term.m"
  {
#line 507 "term.m"
    MR_bool mercury__term__succeeded;
#line 507 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 507 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 507 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 507 "term.m"
    if (mercury__term__succeeded)
#line 507 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 507 "term.m"
    else
#line 507 "term.m"
      {
#line 507 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 507 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5375 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 507 "term.m"
      }
#line 507 "term.m"
    return mercury__term__succeeded;
#line 507 "term.m"
  }
#line 507 "term.m"
}

#line 510 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 510 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 510 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 510 "term.m"
{
#line 510 "term.m"
  {
#line 510 "term.m"
    MR_bool mercury__term__succeeded;
#line 510 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 510 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 510 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 510 "term.m"
    if (mercury__term__succeeded)
#line 5412 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 510 "term.m"
    else
#line 510 "term.m"
      {
#line 510 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 510 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 66 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 69 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 74 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 510 "term.m"
      }
#line 510 "term.m"
  }
#line 510 "term.m"
}

#line 510 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 510 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 510 "term.m"
{
#line 510 "term.m"
  {
#line 510 "term.m"
    MR_bool mercury__term__succeeded;
#line 510 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 510 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 510 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 510 "term.m"
    if (mercury__term__succeeded)
#line 510 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
    else
#line 510 "term.m"
      {
#line 510 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 510 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5487 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 510 "term.m"
      }
#line 510 "term.m"
    return mercury__term__succeeded;
#line 510 "term.m"
  }
#line 510 "term.m"
}

#line 61 "term.m"
void MR_CALL 
mercury__term____Compare____var_0_0(
#line 61 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 61 "term.m"
{
#line 61 "term.m"
  {
#line 61 "term.m"
    MR_bool mercury__term__succeeded;
#line 61 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[0];
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 61 "term.m"
    {
#line 61 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 61 "term.m"
      return;
    }
#line 61 "term.m"
  }
#line 61 "term.m"
}

#line 61 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 61 "term.m"
{
#line 61 "term.m"
  {
#line 61 "term.m"
    MR_bool mercury__term__succeeded;
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;
#line 510 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 510 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 510 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 510 "term.m"
    if (mercury__term__succeeded)
#line 510 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
    else
#line 510 "term.m"
      {
#line 510 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 510 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 5569 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 510 "term.m"
      }
#line 61 "term.m"
    return mercury__term__succeeded;
#line 61 "term.m"
  }
#line 61 "term.m"
}

#line 70 "term.m"
void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0(
#line 70 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 70 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_15,
#line 70 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 70 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 70 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 70 "term.m"
{
#line 70 "term.m"
  {
#line 70 "term.m"
    MR_bool mercury__term__succeeded;
#line 70 "term.m"
    MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 70 "term.m"
    MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 70 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 70 "term.m"
    if (mercury__term__succeeded)
#line 5608 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "term.m"
    else
#line 70 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 70 "term.m"
        {
#line 70 "term.m"
          MR_Word mercury__term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 70 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 70 "term.m"
            {
#line 70 "term.m"
              MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

#line 70 "term.m"
              {
#line 70 "term.m"
                mercury__term____Compare____term_to_type_error_1_0(mercury__term__TypeInfo_for_U_15, mercury__term__HeadVar__1_1, mercury__term__V_18_18, mercury__term__V_11_11);
#line 70 "term.m"
                return;
              }
#line 70 "term.m"
            }
#line 70 "term.m"
          else
#line 5637 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 70 "term.m"
        }
#line 70 "term.m"
      else
#line 70 "term.m"
        {
#line 70 "term.m"
          MR_Box mercury__term__V_19_19 = (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0));

#line 70 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5650 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 70 "term.m"
          else
#line 70 "term.m"
            {
#line 70 "term.m"
              MR_Box mercury__term__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0));

#line 70 "term.m"
              {
#line 70 "term.m"
                mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__HeadVar__1_1, mercury__term__V_19_19, mercury__term__V_5_5);
#line 70 "term.m"
                return;
              }
#line 70 "term.m"
            }
#line 70 "term.m"
        }
#line 70 "term.m"
  }
#line 70 "term.m"
}

#line 70 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0(
#line 70 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 70 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_10,
#line 70 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 70 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 70 "term.m"
{
#line 70 "term.m"
  {
#line 70 "term.m"
    MR_bool mercury__term__succeeded;
#line 70 "term.m"
    MR_Integer mercury__term__CastX_7 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 70 "term.m"
    MR_Integer mercury__term__CastY_8 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 70 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_7 == mercury__term__CastY_8);
#line 70 "term.m"
    if (mercury__term__succeeded)
#line 70 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 70 "term.m"
    else
#line 70 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 70 "term.m"
        {
#line 70 "term.m"
          MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "term.m"
          MR_Word mercury__term__V_6_6;

#line 70 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 70 "term.m"
          if (mercury__term__succeeded)
#line 70 "term.m"
            {
#line 70 "term.m"
              mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 5722 "term.c"
              {
#line 5724 "term.c"
                return mercury__term__succeeded = mercury__term____Unify____term_to_type_error_1_0(mercury__term__TypeInfo_for_U_10, mercury__term__V_5_5, mercury__term__V_6_6);
              }
#line 70 "term.m"
            }
#line 70 "term.m"
        }
#line 70 "term.m"
      else
#line 70 "term.m"
        {
#line 70 "term.m"
          MR_Box mercury__term__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0));
#line 70 "term.m"
          MR_Box mercury__term__V_4_4;

#line 70 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 70 "term.m"
          if (mercury__term__succeeded)
#line 70 "term.m"
            {
#line 70 "term.m"
              mercury__term__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0));
#line 5748 "term.c"
              {
#line 5750 "term.c"
                return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_3_3, mercury__term__V_4_4);
              }
#line 70 "term.m"
            }
#line 70 "term.m"
        }
#line 70 "term.m"
    return mercury__term__succeeded;
#line 70 "term.m"
  }
#line 70 "term.m"
}

#line 74 "term.m"
void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0(
#line 74 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 74 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 74 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 74 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 74 "term.m"
{
#line 74 "term.m"
  {
#line 74 "term.m"
    MR_bool mercury__term__succeeded;
#line 74 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 74 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 74 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 74 "term.m"
    {
#line 74 "term.m"
      mercury__term____Compare____term_to_type_result_2_0(mercury__term__TypeInfo_for_T_6, mercury__term__TypeCtorInfo_7_7, mercury__term__HeadVar__1_1, mercury__term__Cast_HeadVar1_4, mercury__term__Cast_HeadVar2_5);
#line 74 "term.m"
      return;
    }
#line 74 "term.m"
  }
#line 74 "term.m"
}

#line 74 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0(
#line 74 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 74 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 74 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 74 "term.m"
{
#line 74 "term.m"
  {
#line 74 "term.m"
    MR_bool mercury__term__succeeded;
#line 74 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 74 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 74 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 74 "term.m"
    {
#line 74 "term.m"
      return mercury__term__succeeded = mercury__term____Unify____term_to_type_result_2_0(mercury__term__TypeInfo_for_T_5, mercury__term__TypeCtorInfo_6_6, mercury__term__Cast_HeadVar1_3, mercury__term__Cast_HeadVar2_4);
    }
#line 74 "term.m"
    return mercury__term__succeeded;
#line 74 "term.m"
  }
#line 74 "term.m"
}

#line 93 "term.m"
void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0(
#line 93 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 93 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 93 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 93 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 93 "term.m"
{
#line 93 "term.m"
  {
#line 93 "term.m"
    MR_bool mercury__term__succeeded;
#line 93 "term.m"
    MR_Integer mercury__term__CastX_32 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 93 "term.m"
    MR_Integer mercury__term__CastY_33 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 93 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_32 == mercury__term__CastY_33);
#line 93 "term.m"
    if (mercury__term__succeeded)
#line 5860 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "term.m"
    else
#line 93 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 93 "term.m"
        {
#line 93 "term.m"
          MR_Word mercury__term__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "term.m"
          MR_Word mercury__term__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 93 "term.m"
            {
#line 93 "term.m"
              MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "term.m"
              MR_Word mercury__term__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "term.m"
              MR_Word mercury__term__V_31_31;
#line 93 "term.m"
              MR_Integer mercury__term__V_49_49 = (MR_Integer) mercury__term__V_44_44;
#line 93 "term.m"
              MR_Integer mercury__term__V_50_50 = (MR_Integer) mercury__term__V_29_29;

#line 66 "private_builtin.opt"
              mercury__term__succeeded = (mercury__term__V_49_49 < mercury__term__V_50_50);
#line 69 "private_builtin.opt"
              if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
                mercury__term__V_31_31 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_49_49 == mercury__term__V_50_50);
#line 74 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                    mercury__term__V_31_31 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    mercury__term__V_31_31 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 5910 "term.c"
              mercury__term__succeeded = (mercury__term__V_31_31 == (MR_Integer) 0);
#line 93 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_31_31;
#line 93 "term.m"
              else
#line 93 "term.m"
                {
#line 93 "term.m"
                  MR_Word mercury__term__TypeInfo_37_37 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 93 "term.m"
                  {
#line 93 "term.m"
                    mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_37_37, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__V_43_43)), ((MR_Box) (mercury__term__V_30_30)));
#line 93 "term.m"
                    return;
                  }
#line 93 "term.m"
                }
#line 93 "term.m"
            }
#line 93 "term.m"
          else
#line 5938 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "term.m"
        }
#line 93 "term.m"
      else
#line 93 "term.m"
        {
#line 93 "term.m"
          MR_Word mercury__term__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "term.m"
          MR_Word mercury__term__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "term.m"
          MR_Word mercury__term__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "term.m"
          MR_Word mercury__term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5957 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "term.m"
          else
#line 93 "term.m"
            {
#line 93 "term.m"
              MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "term.m"
              MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "term.m"
              MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "term.m"
              MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "term.m"
              MR_Word mercury__term__V_12_12;

#line 93 "term.m"
              {
#line 93 "term.m"
                mercury__term____Compare____term_1_0(mercury__term__TypeInfo_for_T_34, &mercury__term__V_12_12, mercury__term__V_48_48, mercury__term__V_8_8);
              }
#line 5979 "term.c"
              mercury__term__succeeded = (mercury__term__V_12_12 == (MR_Integer) 0);
#line 93 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_12_12;
#line 93 "term.m"
              else
#line 93 "term.m"
                {
#line 93 "term.m"
                  MR_Word mercury__term__V_13_13;

#line 93 "term.m"
                  {
#line 93 "term.m"
                    mercury__type_desc____Compare____type_desc_0_0(&mercury__term__V_13_13, mercury__term__V_47_47, mercury__term__V_9_9);
                  }
#line 5999 "term.c"
                  mercury__term__succeeded = (mercury__term__V_13_13 == (MR_Integer) 0);
#line 93 "term.m"
                  mercury__term__succeeded = !(mercury__term__succeeded);
#line 93 "term.m"
                  if (mercury__term__succeeded)
#line 93 "term.m"
                    *mercury__term__HeadVar__1_1 = mercury__term__V_13_13;
#line 93 "term.m"
                  else
#line 93 "term.m"
                    {
#line 93 "term.m"
                      MR_Word mercury__term__V_14_14;

#line 93 "term.m"
                      {
#line 93 "term.m"
                        mercury__term____Compare____context_0_0(&mercury__term__V_14_14, mercury__term__V_46_46, mercury__term__V_10_10);
                      }
#line 6019 "term.c"
                      mercury__term__succeeded = (mercury__term__V_14_14 == (MR_Integer) 0);
#line 93 "term.m"
                      mercury__term__succeeded = !(mercury__term__succeeded);
#line 93 "term.m"
                      if (mercury__term__succeeded)
#line 93 "term.m"
                        *mercury__term__HeadVar__1_1 = mercury__term__V_14_14;
#line 93 "term.m"
                      else
#line 93 "term.m"
                        {
#line 93 "term.m"
                          MR_Word mercury__term__TypeInfo_42_42 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 93 "term.m"
                          {
#line 93 "term.m"
                            mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_42_42, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__V_45_45)), ((MR_Box) (mercury__term__V_11_11)));
#line 93 "term.m"
                            return;
                          }
#line 93 "term.m"
                        }
#line 93 "term.m"
                    }
#line 93 "term.m"
                }
#line 93 "term.m"
            }
#line 93 "term.m"
        }
#line 93 "term.m"
  }
#line 93 "term.m"
}

#line 93 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0(
#line 93 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 93 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 93 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 93 "term.m"
{
#line 93 "term.m"
  {
#line 93 "term.m"
    MR_bool mercury__term__succeeded;
#line 93 "term.m"
    MR_Integer mercury__term__CastX_15 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 93 "term.m"
    MR_Integer mercury__term__CastY_16 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 93 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_15 == mercury__term__CastY_16);
#line 93 "term.m"
    if (mercury__term__succeeded)
#line 93 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 93 "term.m"
    else
#line 93 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 93 "term.m"
        {
#line 93 "term.m"
          MR_Word mercury__term__TypeInfo_18_18;
#line 93 "term.m"
          MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "term.m"
          MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "term.m"
          MR_Word mercury__term__V_13_13;
#line 93 "term.m"
          MR_Word mercury__term__V_14_14;
#line 510 "term.m"
          MR_Integer mercury__term__CastX_23;
#line 510 "term.m"
          MR_Integer mercury__term__CastY_24;

#line 93 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 93 "term.m"
          if (mercury__term__succeeded)
#line 93 "term.m"
            {
#line 93 "term.m"
              mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "term.m"
              mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 510 "term.m"
              mercury__term__CastX_23 = (MR_Integer) mercury__term__V_11_11;
#line 510 "term.m"
              mercury__term__CastY_24 = (MR_Integer) mercury__term__V_13_13;
#line 510 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_23 == mercury__term__CastY_24);
#line 510 "term.m"
              if (mercury__term__succeeded)
#line 510 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
              else
#line 510 "term.m"
                {
#line 510 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;
#line 510 "term.m"
                  MR_Integer mercury__term__V_22_22 = (MR_Integer) mercury__term__V_13_13;

#line 6132 "term.c"
                  mercury__term__succeeded = (mercury__term__V_21_21 == mercury__term__V_22_22);
#line 510 "term.m"
                }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 6140 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 6142 "term.c"
                  {
#line 6144 "term.c"
                    return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_18_18, ((MR_Box) (mercury__term__V_12_12)), ((MR_Box) (mercury__term__V_14_14)));
                  }
#line 93 "term.m"
                }
#line 93 "term.m"
            }
#line 93 "term.m"
        }
#line 93 "term.m"
      else
#line 93 "term.m"
        {
#line 93 "term.m"
          MR_Word mercury__term__TypeInfo_20_20;
#line 93 "term.m"
          MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "term.m"
          MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "term.m"
          MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "term.m"
          MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "term.m"
          MR_Word mercury__term__V_7_7;
#line 93 "term.m"
          MR_Word mercury__term__V_8_8;
#line 93 "term.m"
          MR_Word mercury__term__V_9_9;
#line 93 "term.m"
          MR_Word mercury__term__V_10_10;

#line 93 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 93 "term.m"
          if (mercury__term__succeeded)
#line 93 "term.m"
            {
#line 93 "term.m"
              mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "term.m"
              mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "term.m"
              mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "term.m"
              mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 3)));
#line 6190 "term.c"
              {
#line 6192 "term.c"
                mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeInfo_for_T_17, mercury__term__V_3_3, mercury__term__V_7_7);
              }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 6199 "term.c"
                  {
#line 6201 "term.c"
                    mercury__term__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term__V_4_4, mercury__term__V_8_8);
                  }
#line 93 "term.m"
                  if (mercury__term__succeeded)
#line 93 "term.m"
                    {
#line 6208 "term.c"
                      {
#line 6210 "term.c"
                        mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_9_9);
                      }
#line 93 "term.m"
                      if (mercury__term__succeeded)
#line 93 "term.m"
                        {
#line 6217 "term.c"
                          mercury__term__TypeInfo_20_20 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 6219 "term.c"
                          {
#line 6221 "term.c"
                            return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_20_20, ((MR_Box) (mercury__term__V_6_6)), ((MR_Box) (mercury__term__V_10_10)));
                          }
#line 93 "term.m"
                        }
#line 93 "term.m"
                    }
#line 93 "term.m"
                }
#line 93 "term.m"
            }
#line 93 "term.m"
        }
#line 93 "term.m"
    return mercury__term__succeeded;
#line 93 "term.m"
  }
#line 93 "term.m"
}

#line 105 "term.m"
void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0(
#line 105 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 105 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 105 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 105 "term.m"
{
#line 105 "term.m"
  {
#line 105 "term.m"
    MR_bool mercury__term__succeeded;
#line 105 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 105 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 105 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 105 "term.m"
    {
#line 105 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 105 "term.m"
      return;
    }
#line 105 "term.m"
  }
#line 105 "term.m"
}

#line 105 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0(
#line 105 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 105 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 105 "term.m"
{
#line 105 "term.m"
  {
#line 105 "term.m"
    MR_bool mercury__term__succeeded;
#line 105 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 105 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 105 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 105 "term.m"
    {
#line 105 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 105 "term.m"
    return mercury__term__succeeded;
#line 105 "term.m"
  }
#line 105 "term.m"
}

#line 107 "term.m"
void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0(
#line 107 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 107 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 107 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 107 "term.m"
{
#line 107 "term.m"
  {
#line 107 "term.m"
    MR_bool mercury__term__succeeded;
#line 107 "term.m"
    MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 107 "term.m"
    MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 107 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 107 "term.m"
    if (mercury__term__succeeded)
#line 6331 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "term.m"
    else
#line 107 "term.m"
      {
#line 107 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "term.m"
        MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "term.m"
        MR_Integer mercury__term__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "term.m"
        MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "term.m"
        MR_Word mercury__term__V_10_10;

#line 107 "term.m"
        {
#line 107 "term.m"
          mercury__term____Compare____const_0_0(&mercury__term__V_10_10, mercury__term__V_4_4, mercury__term__V_7_7);
        }
#line 6357 "term.c"
        mercury__term__succeeded = (mercury__term__V_10_10 == (MR_Integer) 0);
#line 107 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 107 "term.m"
        if (mercury__term__succeeded)
#line 107 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_10_10;
#line 107 "term.m"
        else
#line 107 "term.m"
          {
#line 107 "term.m"
            MR_Word mercury__term__V_11_11;

#line 66 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_5_5 < mercury__term__V_8_8);
#line 69 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
              mercury__term__V_11_11 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_8_8);
#line 74 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                  mercury__term__V_11_11 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__term__V_11_11 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 6394 "term.c"
            mercury__term__succeeded = (mercury__term__V_11_11 == (MR_Integer) 0);
#line 107 "term.m"
            mercury__term__succeeded = !(mercury__term__succeeded);
#line 107 "term.m"
            if (mercury__term__succeeded)
#line 107 "term.m"
              *mercury__term__HeadVar__1_1 = mercury__term__V_11_11;
#line 107 "term.m"
            else
#line 107 "term.m"
              {
#line 107 "term.m"
                mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_6_6, mercury__term__V_9_9);
#line 107 "term.m"
                return;
              }
#line 107 "term.m"
          }
#line 107 "term.m"
      }
#line 107 "term.m"
  }
#line 107 "term.m"
}

#line 107 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0(
#line 107 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 107 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 107 "term.m"
{
#line 107 "term.m"
  {
#line 107 "term.m"
    MR_bool mercury__term__succeeded;
#line 107 "term.m"
    MR_Integer mercury__term__CastX_9 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 107 "term.m"
    MR_Integer mercury__term__CastY_10 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 107 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_9 == mercury__term__CastY_10);
#line 107 "term.m"
    if (mercury__term__succeeded)
#line 107 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 107 "term.m"
    else
#line 107 "term.m"
      {
#line 107 "term.m"
        MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "term.m"
        MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "term.m"
        MR_Integer mercury__term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));

#line 6461 "term.c"
        {
#line 6463 "term.c"
          mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
        }
#line 107 "term.m"
        if (mercury__term__succeeded)
#line 107 "term.m"
          {
#line 6470 "term.c"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_7_7);
#line 107 "term.m"
            if (mercury__term__succeeded)
#line 6474 "term.c"
              {
#line 6476 "term.c"
                return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_8_8);
              }
#line 107 "term.m"
          }
#line 107 "term.m"
      }
#line 107 "term.m"
    return mercury__term__succeeded;
#line 107 "term.m"
  }
#line 107 "term.m"
}

#line 32 "term.m"
void MR_CALL 
mercury__term____Compare____term_1_0(
#line 32 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_29,
#line 32 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 32 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 32 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 32 "term.m"
{
#line 32 "term.m"
  {
#line 32 "term.m"
    MR_bool mercury__term__succeeded;
#line 32 "term.m"
    MR_Integer mercury__term__CastX_27 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 32 "term.m"
    MR_Integer mercury__term__CastY_28 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 32 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_27 == mercury__term__CastY_28);
#line 32 "term.m"
    if (mercury__term__succeeded)
#line 6516 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "term.m"
    else
#line 32 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 32 "term.m"
        {
#line 32 "term.m"
          MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 32 "term.m"
          MR_Word mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term.m"
          MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 32 "term.m"
            {
#line 32 "term.m"
              MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term.m"
              MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term.m"
              MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
#line 32 "term.m"
              MR_Word mercury__term__V_10_10;

#line 32 "term.m"
              {
#line 32 "term.m"
                mercury__term____Compare____const_0_0(&mercury__term__V_10_10, mercury__term__V_41_41, mercury__term__V_7_7);
              }
#line 6549 "term.c"
              mercury__term__succeeded = (mercury__term__V_10_10 == (MR_Integer) 0);
#line 32 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 32 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_10_10;
#line 32 "term.m"
              else
#line 32 "term.m"
                {
#line 32 "term.m"
                  MR_Word mercury__term__V_11_11;
#line 32 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 32 "term.m"
                  MR_Word mercury__term__TypeInfo_35_35;

#line 6568 "term.c"
                  {
#line 6570 "term.c"
                    mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6572 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 6574 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 6576 "term.c"
                  }
#line 32 "term.m"
                  {
#line 32 "term.m"
                    mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                  }
#line 6583 "term.c"
                  mercury__term__succeeded = (mercury__term__V_11_11 == (MR_Integer) 0);
#line 32 "term.m"
                  mercury__term__succeeded = !(mercury__term__succeeded);
#line 32 "term.m"
                  if (mercury__term__succeeded)
#line 32 "term.m"
                    *mercury__term__HeadVar__1_1 = mercury__term__V_11_11;
#line 32 "term.m"
                  else
#line 32 "term.m"
                    {
#line 32 "term.m"
                      mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_39_39, mercury__term__V_9_9);
#line 32 "term.m"
                      return;
                    }
#line 32 "term.m"
                }
#line 32 "term.m"
            }
#line 32 "term.m"
          else
#line 6606 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "term.m"
        }
#line 32 "term.m"
      else
#line 32 "term.m"
        {
#line 32 "term.m"
          MR_Word mercury__term__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term.m"
          MR_Word mercury__term__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6621 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "term.m"
          else
#line 32 "term.m"
            {
#line 32 "term.m"
              MR_Word mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "term.m"
              MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 32 "term.m"
              MR_Word mercury__term__V_26_26;
#line 32 "term.m"
              MR_Integer mercury__term__V_44_44 = (MR_Integer) mercury__term__V_43_43;
#line 32 "term.m"
              MR_Integer mercury__term__V_45_45 = (MR_Integer) mercury__term__V_24_24;

#line 66 "private_builtin.opt"
              mercury__term__succeeded = (mercury__term__V_44_44 < mercury__term__V_45_45);
#line 69 "private_builtin.opt"
              if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
                mercury__term__V_26_26 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
              else
#line 74 "private_builtin.opt"
                {
#line 71 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_44_44 == mercury__term__V_45_45);
#line 74 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                    mercury__term__V_26_26 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                  else
#line 75 "private_builtin.opt"
                    mercury__term__V_26_26 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                }
#line 6660 "term.c"
              mercury__term__succeeded = (mercury__term__V_26_26 == (MR_Integer) 0);
#line 32 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 32 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_26_26;
#line 32 "term.m"
              else
#line 32 "term.m"
                {
#line 32 "term.m"
                  mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_42_42, mercury__term__V_25_25);
#line 32 "term.m"
                  return;
                }
#line 32 "term.m"
            }
#line 32 "term.m"
        }
#line 32 "term.m"
  }
#line 32 "term.m"
}

#line 32 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
#line 32 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 32 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 32 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 32 "term.m"
{
#line 32 "term.m"
  {
#line 32 "term.m"
    MR_bool mercury__term__succeeded;
#line 32 "term.m"
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 32 "term.m"
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 32 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
#line 32 "term.m"
    if (mercury__term__succeeded)
#line 32 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 32 "term.m"
    else
#line 32 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 32 "term.m"
        {
#line 32 "term.m"
          MR_Word mercury__term__TypeCtorInfo_16_16;
#line 32 "term.m"
          MR_Word mercury__term__TypeInfo_17_17;
#line 32 "term.m"
          MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term.m"
          MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term.m"
          MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 32 "term.m"
          MR_Word mercury__term__V_6_6;
#line 32 "term.m"
          MR_Word mercury__term__V_7_7;
#line 32 "term.m"
          MR_Word mercury__term__V_8_8;

#line 32 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 32 "term.m"
          if (mercury__term__succeeded)
#line 32 "term.m"
            {
#line 32 "term.m"
              mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term.m"
              mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 32 "term.m"
              mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 6747 "term.c"
              {
#line 6749 "term.c"
                mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
              }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 32 "term.m"
                {
#line 6756 "term.c"
                  mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6758 "term.c"
                  {
#line 6760 "term.c"
                    mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6762 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 6764 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 6766 "term.c"
                  }
#line 6768 "term.c"
                  {
#line 6770 "term.c"
                    mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                  }
#line 32 "term.m"
                  if (mercury__term__succeeded)
#line 6775 "term.c"
                    {
#line 6777 "term.c"
                      return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_8_8);
                    }
#line 32 "term.m"
                }
#line 32 "term.m"
            }
#line 32 "term.m"
        }
#line 32 "term.m"
      else
#line 32 "term.m"
        {
#line 32 "term.m"
          MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "term.m"
          MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 32 "term.m"
          MR_Word mercury__term__V_11_11;
#line 32 "term.m"
          MR_Word mercury__term__V_12_12;
#line 510 "term.m"
          MR_Integer mercury__term__CastX_22;
#line 510 "term.m"
          MR_Integer mercury__term__CastY_23;

#line 32 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "term.m"
          if (mercury__term__succeeded)
#line 32 "term.m"
            {
#line 32 "term.m"
              mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 32 "term.m"
              mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 510 "term.m"
              mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 510 "term.m"
              mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 510 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 510 "term.m"
              if (mercury__term__succeeded)
#line 510 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
              else
#line 510 "term.m"
                {
#line 510 "term.m"
                  MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 510 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 6832 "term.c"
                  mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 510 "term.m"
                }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 6838 "term.c"
                {
#line 6840 "term.c"
                  return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_10_10, mercury__term__V_12_12);
                }
#line 32 "term.m"
            }
#line 32 "term.m"
        }
#line 32 "term.m"
    return mercury__term__succeeded;
#line 32 "term.m"
  }
#line 32 "term.m"
}

#line 60 "term.m"
void MR_CALL 
mercury__term____Compare____term_0_0(
#line 60 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 60 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 60 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 60 "term.m"
{
#line 60 "term.m"
  {
#line 60 "term.m"
    MR_bool mercury__term__succeeded;
#line 60 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[1];
#line 60 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 60 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 60 "term.m"
    {
#line 60 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 60 "term.m"
      return;
    }
#line 60 "term.m"
  }
#line 60 "term.m"
}

#line 60 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_0_0(
#line 60 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 60 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 60 "term.m"
{
#line 60 "term.m"
  {
#line 60 "term.m"
    MR_bool mercury__term__succeeded;
#line 60 "term.m"
    MR_Word mercury__term__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 60 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 60 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 60 "term.m"
    {
#line 60 "term.m"
      return mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeCtorInfo_5_5, mercury__term__Cast_HeadVar1_3, mercury__term__Cast_HeadVar2_4);
    }
#line 60 "term.m"
    return mercury__term__succeeded;
#line 60 "term.m"
  }
#line 60 "term.m"
}

#line 178 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_1_0(
#line 178 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 178 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 178 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 178 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 178 "term.m"
{
#line 178 "term.m"
  {
#line 178 "term.m"
    MR_bool mercury__term__succeeded;
#line 178 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 178 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 178 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9;
#line 178 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 178 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 178 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 6950 "term.c"
    {
#line 6952 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6954 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 6956 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6958 "term.c"
    }
#line 6960 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6962 "term.c"
    {
#line 6964 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6966 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 6968 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6970 "term.c"
    }
#line 178 "term.m"
    {
#line 178 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_10_10, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 178 "term.m"
      return;
    }
#line 178 "term.m"
  }
#line 178 "term.m"
}

#line 178 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
#line 178 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 178 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 178 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 178 "term.m"
{
#line 178 "term.m"
  {
#line 178 "term.m"
    MR_bool mercury__term__succeeded;
#line 178 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 178 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 178 "term.m"
    MR_Word mercury__term__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 178 "term.m"
    MR_Word mercury__term__TypeInfo_9_9;
#line 178 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 178 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 7012 "term.c"
    {
#line 7014 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7016 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 7018 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7020 "term.c"
    }
#line 7022 "term.c"
    {
#line 7024 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7026 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 7028 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7030 "term.c"
    }
#line 178 "term.m"
    {
#line 178 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_9_9, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 178 "term.m"
    return mercury__term__succeeded;
#line 178 "term.m"
  }
#line 178 "term.m"
}

#line 179 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_0_0(
#line 179 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 179 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 179 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 179 "term.m"
{
#line 179 "term.m"
  {
#line 179 "term.m"
    MR_bool mercury__term__succeeded;
#line 179 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 179 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 179 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 179 "term.m"
    {
#line 179 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 179 "term.m"
      return;
    }
#line 179 "term.m"
  }
#line 179 "term.m"
}

#line 179 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
#line 179 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 179 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 179 "term.m"
{
#line 179 "term.m"
  {
#line 179 "term.m"
    MR_bool mercury__term__succeeded;
#line 179 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 179 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 179 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 179 "term.m"
    {
#line 179 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 179 "term.m"
    return mercury__term__succeeded;
#line 179 "term.m"
  }
#line 179 "term.m"
}

#line 175 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_1_0(
#line 175 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 175 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 175 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 175 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 175 "term.m"
{
#line 175 "term.m"
  {
#line 175 "term.m"
    MR_bool mercury__term__succeeded;
#line 175 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 175 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 7136 "term.c"
    {
#line 7138 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7140 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 7142 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 7144 "term.c"
    }
#line 175 "term.m"
    {
#line 175 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_8_8, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 175 "term.m"
      return;
    }
#line 175 "term.m"
  }
#line 175 "term.m"
}

#line 175 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
#line 175 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 175 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 175 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 175 "term.m"
{
#line 175 "term.m"
  {
#line 175 "term.m"
    MR_bool mercury__term__succeeded;
#line 175 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 175 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 7182 "term.c"
    {
#line 7184 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7186 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 7188 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7190 "term.c"
    }
#line 175 "term.m"
    {
#line 175 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_7_7, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 175 "term.m"
    return mercury__term__succeeded;
#line 175 "term.m"
  }
#line 175 "term.m"
}

#line 176 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_0_0(
#line 176 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 176 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 176 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 176 "term.m"
{
#line 176 "term.m"
  {
#line 176 "term.m"
    MR_bool mercury__term__succeeded;
#line 176 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 176 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 176 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 176 "term.m"
    {
#line 176 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 176 "term.m"
      return;
    }
#line 176 "term.m"
  }
#line 176 "term.m"
}

#line 176 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
#line 176 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 176 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 176 "term.m"
{
#line 176 "term.m"
  {
#line 176 "term.m"
    MR_bool mercury__term__succeeded;
#line 176 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 176 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 176 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 176 "term.m"
    {
#line 176 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 176 "term.m"
    return mercury__term__succeeded;
#line 176 "term.m"
  }
#line 176 "term.m"
}

#line 57 "term.m"
void MR_CALL 
mercury__term____Compare____generic_0_0(
#line 57 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 57 "term.m"
{
#line 57 "term.m"
  {
#line 57 "term.m"
    MR_bool mercury__term__succeeded;

#line 57 "term.m"
    {
#line 57 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__term__HeadVar__1_1);
#line 57 "term.m"
      return;
    }
#line 57 "term.m"
  }
#line 57 "term.m"
}

#line 57 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____generic_0_0(void)
#line 57 "term.m"
{
#line 57 "term.m"
  {
#line 57 "term.m"
    MR_bool mercury__term__succeeded;

#line 57 "term.m"
    {
#line 57 "term.m"
      return mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 57 "term.m"
    return mercury__term__succeeded;
#line 57 "term.m"
  }
#line 57 "term.m"
}

#line 50 "term.m"
void MR_CALL 
mercury__term____Compare____context_0_0(
#line 50 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 50 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 50 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 50 "term.m"
{
#line 50 "term.m"
  {
#line 50 "term.m"
    MR_bool mercury__term__succeeded;
#line 50 "term.m"
    MR_Integer mercury__term__CastX_9 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 50 "term.m"
    MR_Integer mercury__term__CastY_10 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 50 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_9 == mercury__term__CastY_10);
#line 50 "term.m"
    if (mercury__term__succeeded)
#line 7340 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "term.m"
    else
#line 50 "term.m"
      {
#line 50 "term.m"
        MR_String mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "term.m"
        MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 50 "term.m"
        MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 50 "term.m"
        MR_Integer mercury__term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 50 "term.m"
        MR_Word mercury__term__V_8_8;
#line 50 "term.m"
        MR_Integer mercury__term__Res_7_16;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_4_4 ;
	S2 =  mercury__term__V_6_6 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7374 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_16  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__Res_7_16 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
          mercury__term__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__Res_7_16 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 109 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 7403 "term.c"
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
#line 50 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 50 "term.m"
        if (mercury__term__succeeded)
#line 50 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
#line 50 "term.m"
        else
#line 69 "private_builtin.opt"
          {
#line 66 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_5_5 < mercury__term__V_7_7);
#line 69 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_7_7);
#line 74 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 69 "private_builtin.opt"
          }
#line 50 "term.m"
      }
#line 50 "term.m"
  }
#line 50 "term.m"
}

#line 50 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
#line 50 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 50 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 50 "term.m"
{
#line 50 "term.m"
  {
#line 50 "term.m"
    MR_bool mercury__term__succeeded;
#line 50 "term.m"
    MR_Integer mercury__term__CastX_7 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 50 "term.m"
    MR_Integer mercury__term__CastY_8 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 50 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_7 == mercury__term__CastY_8);
#line 50 "term.m"
    if (mercury__term__succeeded)
#line 50 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 50 "term.m"
    else
#line 50 "term.m"
      {
#line 50 "term.m"
        MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 50 "term.m"
        MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 50 "term.m"
        MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 50 "term.m"
        MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 7483 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 50 "term.m"
        if (mercury__term__succeeded)
#line 7487 "term.c"
          mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_6_6);
#line 50 "term.m"
      }
#line 50 "term.m"
    return mercury__term__succeeded;
#line 50 "term.m"
  }
#line 50 "term.m"
}

#line 43 "term.m"
void MR_CALL 
mercury__term____Compare____const_0_0(
#line 43 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 43 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 43 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 43 "term.m"
{
#line 43 "term.m"
  {
#line 43 "term.m"
    MR_bool mercury__term__succeeded;
#line 43 "term.m"
    MR_Integer mercury__term__CastX_54 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 43 "term.m"
    MR_Integer mercury__term__CastY_55 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 43 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_54 == mercury__term__CastY_55);
#line 43 "term.m"
    if (mercury__term__succeeded)
#line 7522 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "term.m"
    else
#line 43 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 43 "term.m"
        {
#line 43 "term.m"
          MR_String mercury__term__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 43 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 43 "term.m"
            {
#line 43 "term.m"
              MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "term.m"
              MR_Integer mercury__term__Res_7_69;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_61_61 ;
	S2 =  mercury__term__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7557 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_69  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term__succeeded = (mercury__term__Res_7_69 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__Res_7_69 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 109 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 43 "term.m"
            }
#line 43 "term.m"
          else
#line 43 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7592 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
            else
#line 43 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7598 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7604 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 7608 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
        }
#line 43 "term.m"
      else
#line 43 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 43 "term.m"
          {
#line 43 "term.m"
            MR_Integer mercury__term__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 43 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7623 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
            else
#line 43 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 43 "term.m"
                {
#line 43 "term.m"
                  MR_Integer mercury__term__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_64_64 < mercury__term__V_17_17);
#line 69 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_64_64 == mercury__term__V_17_17);
#line 74 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 43 "term.m"
                }
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7662 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7668 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                  else
#line 7672 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
          }
#line 43 "term.m"
        else
#line 43 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 43 "term.m"
            {
#line 43 "term.m"
              MR_String mercury__term__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 43 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7687 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7693 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 43 "term.m"
                    {
#line 43 "term.m"
                      MR_String mercury__term__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "term.m"
                      MR_Integer mercury__term__Res_7_85;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_65_65 ;
	S2 =  mercury__term__V_29_29 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7721 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_85  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__Res_7_85 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__Res_7_85 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 109 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 43 "term.m"
                    }
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7756 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                    else
#line 7760 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
            }
#line 43 "term.m"
          else
#line 43 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 43 "term.m"
              {
#line 43 "term.m"
                MR_Float mercury__term__V_62_62 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7775 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7781 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7787 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                    else
#line 43 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 43 "term.m"
                        {
#line 43 "term.m"
                          MR_Float mercury__term__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));

#line 118 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_62_62 < mercury__term__V_41_41);
#line 121 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 120 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                          else
#line 126 "private_builtin.opt"
                            {
#line 123 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_62_62 > mercury__term__V_41_41);
#line 126 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 125 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                              else
#line 127 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                            }
#line 43 "term.m"
                        }
#line 43 "term.m"
                      else
#line 7824 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
              }
#line 43 "term.m"
            else
#line 43 "term.m"
              {
#line 43 "term.m"
                MR_String mercury__term__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 7837 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7843 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7849 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                    else
#line 43 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7855 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                      else
#line 43 "term.m"
                        {
#line 43 "term.m"
                          MR_String mercury__term__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "term.m"
                          MR_Integer mercury__term__Res_7_77;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_63_63 ;
	S2 =  mercury__term__V_53_53 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7881 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_77  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__Res_7_77 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                          else
#line 110 "private_builtin.opt"
                            {
#line 107 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__Res_7_77 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 109 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                              else
#line 111 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                            }
#line 43 "term.m"
                        }
#line 43 "term.m"
              }
#line 43 "term.m"
  }
#line 43 "term.m"
}

#line 43 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
#line 43 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 43 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 43 "term.m"
{
#line 43 "term.m"
  {
#line 43 "term.m"
    MR_bool mercury__term__succeeded;
#line 43 "term.m"
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 43 "term.m"
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 43 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
#line 43 "term.m"
    if (mercury__term__succeeded)
#line 43 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 43 "term.m"
    else
#line 43 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 43 "term.m"
        {
#line 43 "term.m"
          MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "term.m"
          MR_String mercury__term__V_4_4;

#line 43 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 43 "term.m"
          if (mercury__term__succeeded)
#line 43 "term.m"
            {
#line 43 "term.m"
              mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 7962 "term.c"
              mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_4_4) == 0);
#line 43 "term.m"
            }
#line 43 "term.m"
        }
#line 43 "term.m"
      else
#line 43 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 43 "term.m"
          {
#line 43 "term.m"
            MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "term.m"
            MR_Integer mercury__term__V_6_6;

#line 43 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 43 "term.m"
            if (mercury__term__succeeded)
#line 43 "term.m"
              {
#line 43 "term.m"
                mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 7987 "term.c"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_6_6);
#line 43 "term.m"
              }
#line 43 "term.m"
          }
#line 43 "term.m"
        else
#line 43 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 43 "term.m"
            {
#line 43 "term.m"
              MR_String mercury__term__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "term.m"
              MR_String mercury__term__V_8_8;

#line 43 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 43 "term.m"
              if (mercury__term__succeeded)
#line 43 "term.m"
                {
#line 43 "term.m"
                  mercury__term__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 8012 "term.c"
                  mercury__term__succeeded = (strcmp(mercury__term__V_7_7, mercury__term__V_8_8) == 0);
#line 43 "term.m"
                }
#line 43 "term.m"
            }
#line 43 "term.m"
          else
#line 43 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 43 "term.m"
              {
#line 43 "term.m"
                MR_Float mercury__term__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "term.m"
                MR_Float mercury__term__V_10_10;

#line 43 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 43 "term.m"
                if (mercury__term__succeeded)
#line 43 "term.m"
                  {
#line 43 "term.m"
                    mercury__term__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 8037 "term.c"
                    mercury__term__succeeded = (mercury__term__V_9_9 == mercury__term__V_10_10);
#line 43 "term.m"
                  }
#line 43 "term.m"
              }
#line 43 "term.m"
            else
#line 43 "term.m"
              {
#line 43 "term.m"
                MR_String mercury__term__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "term.m"
                MR_String mercury__term__V_12_12;

#line 43 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 43 "term.m"
                if (mercury__term__succeeded)
#line 43 "term.m"
                  {
#line 43 "term.m"
                    mercury__term__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 8060 "term.c"
                    mercury__term__succeeded = (strcmp(mercury__term__V_11_11, mercury__term__V_12_12) == 0);
#line 43 "term.m"
                  }
#line 43 "term.m"
              }
#line 43 "term.m"
    return mercury__term__succeeded;
#line 43 "term.m"
  }
#line 43 "term.m"
}

#line 1419 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 1419 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 1419 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 1419 "term.m"
{
#line 1421 "term.m"
  while (MR_TRUE)
#line 1421 "term.m"
    {
#line 1421 "term.m"
      /* tailcall optimized into a loop */
#line 1421 "term.m"
      {
#line 1421 "term.m"
        MR_bool mercury__term__succeeded;

#line 1421 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1421 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1421 "term.m"
        else
#line 1422 "term.m"
          {
#line 1422 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1422 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1422 "term.m"
            MR_Word mercury__term__ArgTerms_6;
#line 1416 "term.m"
            MR_Word mercury__term__V_5_5;
#line 1416 "term.m"
            MR_Word mercury__term__V_7_7;

#line 1416 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 1416 "term.m"
            if (mercury__term__succeeded)
#line 1416 "term.m"
              {
#line 1416 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 1416 "term.m"
                mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 1416 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 1417 "term.m"
                {
#line 1417 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__ArgTerms_6);
                }
#line 1422 "term.m"
                if (mercury__term__succeeded)
#line 1424 "term.m"
                  {
#line 1424 "term.m"
                    /* direct tailcall eliminated */
#line 1424 "term.m"
                    {
#line 1424 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 1424 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1424 "term.m"
                    }
#line 1424 "term.m"
                    continue;
#line 1424 "term.m"
                  }
#line 1416 "term.m"
              }
#line 1422 "term.m"
          }
#line 1421 "term.m"
        return mercury__term__succeeded;
#line 1421 "term.m"
      }
#line 1421 "term.m"
      break;
#line 1421 "term.m"
    }
#line 1419 "term.m"
}

#line 1406 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1406 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1406 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1406 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 1406 "term.m"
{
#line 1409 "term.m"
  while (MR_TRUE)
#line 1409 "term.m"
    {
#line 1409 "term.m"
      /* tailcall optimized into a loop */
#line 1409 "term.m"
      {
#line 1409 "term.m"
        MR_bool mercury__term__succeeded;

#line 1409 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1409 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1409 "term.m"
        else
#line 1410 "term.m"
          {
#line 1410 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1410 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1411 "term.m"
            {
#line 1411 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 1410 "term.m"
            if (mercury__term__succeeded)
#line 1412 "term.m"
              {
#line 1412 "term.m"
                /* direct tailcall eliminated */
#line 1412 "term.m"
                {
#line 1412 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1412 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1412 "term.m"
                }
#line 1412 "term.m"
                continue;
#line 1412 "term.m"
              }
#line 1410 "term.m"
          }
#line 1409 "term.m"
        return mercury__term__succeeded;
#line 1409 "term.m"
      }
#line 1409 "term.m"
      break;
#line 1409 "term.m"
    }
#line 1406 "term.m"
}

#line 1180 "term.m"
void MR_CALL 
mercury__term__build_subst_4_p_0(
#line 1180 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 1180 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1180 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1180 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1180 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1180 "term.m"
{
#line 1183 "term.m"
  while (MR_TRUE)
#line 1183 "term.m"
    {
#line 1183 "term.m"
      /* tailcall optimized into a loop */
#line 1183 "term.m"
      {
#line 1183 "term.m"
        MR_bool mercury__term__succeeded;

#line 1183 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "term.m"
          if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1183 "term.m"
            *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1183 "term.m"
          else
#line 1184 "term.m"
            {
#line 1185 "term.m"
              {
#line 1185 "term.m"
                mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1185 "term.m"
                return;
              }
#line 1184 "term.m"
            }
#line 1183 "term.m"
        else
#line 1183 "term.m"
          {
#line 1183 "term.m"
            MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1183 "term.m"
            MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1183 "term.m"
            if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "term.m"
              {
#line 1187 "term.m"
                {
#line 1187 "term.m"
                  mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1187 "term.m"
                  return;
                }
#line 1186 "term.m"
              }
#line 1183 "term.m"
            else
#line 1188 "term.m"
              {
#line 1188 "term.m"
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1188 "term.m"
                MR_Word mercury__term__TypeInfo_35_35;
#line 1188 "term.m"
                MR_Word mercury__term__TypeCtorInfo_36_36;
#line 1188 "term.m"
                MR_Word mercury__term__TypeInfo_37_37;
#line 1188 "term.m"
                MR_Word mercury__term__Term_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1188 "term.m"
                MR_Word mercury__term__Terms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1188 "term.m"
                MR_Word mercury__term__STATE_VARIABLE_Subst_31_31;
#line 119 "map.opt"
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

#line 8323 "term.c"
                {
#line 8325 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8327 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 8329 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 8331 "term.c"
                }
#line 8333 "term.c"
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 8335 "term.c"
                {
#line 8337 "term.c"
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8339 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
#line 8341 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 8343 "term.c"
                }
#line 119 "map.opt"
                {
#line 119 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
#line 119 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_31_31;
#line 1190 "term.m"
                /* direct tailcall eliminated */
#line 1190 "term.m"
                {
#line 1190 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_38_38;
#line 1190 "term.m"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Terms_27;
#line 1190 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_31_31;

#line 1190 "term.m"
                  mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1190 "term.m"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1190 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1190 "term.m"
                }
#line 1190 "term.m"
                continue;
#line 1188 "term.m"
              }
#line 1183 "term.m"
          }
#line 1183 "term.m"
      }
#line 1183 "term.m"
      break;
#line 1183 "term.m"
    }
#line 1180 "term.m"
}

#line 1062 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 1062 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 1062 "term.m"
  MR_Word mercury__term__X_6,
#line 1062 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 1062 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 1062 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 1062 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14)
#line 1062 "term.m"
{
#line 1069 "term.m"
  while (MR_TRUE)
#line 1069 "term.m"
    {
#line 1069 "term.m"
      /* tailcall optimized into a loop */
#line 1069 "term.m"
      {
#line 1069 "term.m"
        MR_bool mercury__term__succeeded;
#line 1069 "term.m"
        MR_Word mercury__term__TermBoundToX_10;
#line 1066 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1066 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 1066 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1066 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_TermBoundToX_10;

#line 8426 "term.c"
        {
#line 8428 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8430 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 8432 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8434 "term.c"
        }
#line 8436 "term.c"
        {
#line 8438 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8440 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 8442 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8444 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_21_21, mercury__term__TypeInfo_23_23, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, mercury__term__X_6, &mercury__term__conv0_TermBoundToX_10);
        }
#line 41 "map.opt"
        if (mercury__term__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term__TermBoundToX_10 = ((MR_Word) mercury__term__conv0_TermBoundToX_10);
#line 41 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1069 "term.m"
        if (mercury__term__succeeded)
#line 1067 "term.m"
          {
#line 1067 "term.m"
            MR_Word mercury__term__NewX_11;
#line 1067 "term.m"
            MR_Word mercury__term__V_12_12;

#line 1067 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__TermBoundToX_10)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "term.m"
            if (mercury__term__succeeded)
#line 1067 "term.m"
              {
#line 1067 "term.m"
                mercury__term__NewX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 0)));
#line 1067 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 1)));
#line 1068 "term.m"
                /* direct tailcall eliminated */
#line 1068 "term.m"
                {
#line 1068 "term.m"
                  MR_Word mercury__term__X__tmp_copy_6 = mercury__term__NewX_11;

#line 1068 "term.m"
                  mercury__term__X_6 = mercury__term__X__tmp_copy_6;
#line 1068 "term.m"
                }
#line 1068 "term.m"
                continue;
#line 1067 "term.m"
              }
#line 1067 "term.m"
          }
#line 1069 "term.m"
        else
#line 1072 "term.m"
          {
#line 510 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__X_6;
#line 510 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundY_7;

#line 510 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 510 "term.m"
            if (mercury__term__succeeded)
#line 510 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
            else
#line 510 "term.m"
              {
#line 510 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__X_6;
#line 510 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundY_7;

#line 8521 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 510 "term.m"
              }
#line 1072 "term.m"
            if (mercury__term__succeeded)
#line 1072 "term.m"
              {
#line 1072 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_14 = mercury__term__STATE_VARIABLE_Subst_0_13;
#line 1072 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1072 "term.m"
              }
#line 1072 "term.m"
            else
#line 1073 "term.m"
              {
#line 1073 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 1073 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 1073 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 1073 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 1073 "term.m"
                MR_Word mercury__term__V_16_16;
#line 1073 "term.m"
                MR_Word mercury__term__V_18_18;
#line 1073 "term.m"
                MR_String mercury__term__V_39_39;
#line 1073 "term.m"
                MR_Integer mercury__term__V_40_40;
#line 1074 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_14;

#line 1073 "term.m"
                {
#line 1073 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__X_6, mercury__term__DontBindVars_8);
                }
#line 1073 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 1073 "term.m"
                if (mercury__term__succeeded)
#line 1073 "term.m"
                  {
#line 903 "term.m"
                    mercury__term__V_39_39 = (MR_String) "";
#line 903 "term.m"
                    mercury__term__V_40_40 = (MR_Integer) 0;
#line 8573 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8575 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 903 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 1074 "term.m"
                    {
#line 1074 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundY_7));
#line 1074 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 1074 "term.m"
                    }
#line 8589 "term.c"
                    {
#line 8591 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8593 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 8595 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8597 "term.c"
                    }
#line 8599 "term.c"
                    {
#line 8601 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8603 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 8605 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8607 "term.c"
                    }
#line 1074 "term.m"
                    {
#line 1074 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__X_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, &mercury__term__conv1_STATE_VARIABLE_Subst_14);
                    }
#line 1074 "term.m"
                    *mercury__term__STATE_VARIABLE_Subst_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_14;
#line 1074 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 1073 "term.m"
                  }
#line 1073 "term.m"
              }
#line 1072 "term.m"
          }
#line 1069 "term.m"
        return mercury__term__succeeded;
#line 1069 "term.m"
      }
#line 1069 "term.m"
      break;
#line 1069 "term.m"
    }
#line 1062 "term.m"
}

#line 868 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 868 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 868 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 868 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 868 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 868 "term.m"
{
#line 871 "term.m"
  while (MR_TRUE)
#line 871 "term.m"
    {
#line 871 "term.m"
      /* tailcall optimized into a loop */
#line 871 "term.m"
      {
#line 871 "term.m"
        MR_bool mercury__term__succeeded;

#line 871 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 871 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 871 "term.m"
        else
#line 872 "term.m"
          {
#line 872 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 872 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 872 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 873 "term.m"
            {
#line 873 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 857 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 858 "term.m"
              {
#line 858 "term.m"
                MR_Word mercury__term__ArgTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 858 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 858 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 859 "term.m"
                /* direct tailcall eliminated */
#line 859 "term.m"
                {
#line 859 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__ArgTerms_22;
#line 859 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 859 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 859 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 859 "term.m"
                }
#line 859 "term.m"
                continue;
#line 858 "term.m"
              }
#line 857 "term.m"
            else
#line 855 "term.m"
              {
#line 855 "term.m"
                MR_Word mercury__term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 855 "term.m"
                MR_Word mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 856 "term.m"
                {
#line 856 "term.m"
                  MR_Word base;
#line 856 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 856 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_19));
#line 856 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 856 "term.m"
                }
#line 855 "term.m"
              }
#line 872 "term.m"
          }
#line 871 "term.m"
      }
#line 871 "term.m"
      break;
#line 871 "term.m"
    }
#line 868 "term.m"
}

#line 817 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 817 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 817 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 817 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 817 "term.m"
{
#line 819 "term.m"
  {
#line 819 "term.m"
    MR_bool mercury__term__succeeded;

#line 819 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 819 "term.m"
    else
#line 820 "term.m"
      {
#line 820 "term.m"
        MR_Word mercury__term__Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 820 "term.m"
        MR_Word mercury__term__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 820 "term.m"
        MR_Word mercury__term__Term_5;
#line 820 "term.m"
        MR_Word mercury__term__Terms_6;

#line 821 "term.m"
        {
#line 821 "term.m"
          mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Value_3, &mercury__term__Term_5);
        }
#line 822 "term.m"
        {
#line 822 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Values_4, &mercury__term__Terms_6);
        }
#line 820 "term.m"
        {
#line 820 "term.m"
          MR_Word base;
#line 820 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 820 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_5));
#line 820 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_6));
#line 820 "term.m"
        }
#line 820 "term.m"
      }
#line 819 "term.m"
  }
#line 817 "term.m"
}

#line 767 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 767 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 767 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 767 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 767 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 767 "term.m"
  MR_Word mercury__term__Univ_4,
#line 767 "term.m"
  MR_Word mercury__term__Context_5,
#line 767 "term.m"
  MR_Word * mercury__term__HeadVar__6_6)
#line 767 "term.m"
{
#line 772 "term.m"
  {
#line 772 "term.m"
    MR_bool mercury__term__succeeded;

#line 772 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 788 "term.m"
      {
#line 788 "term.m"
        MR_Word mercury__term__TypeCtorInfo_96_96;
#line 788 "term.m"
        MR_Word mercury__term__TypeInfo_97_97;
#line 788 "term.m"
        MR_Word mercury__term__NestedUniv_39;
#line 788 "term.m"
        MR_Word mercury__term__ValueTerm_40;
#line 788 "term.m"
        MR_Word mercury__term__TypeTerm_41;
#line 788 "term.m"
        MR_Box mercury__term__NestedUnivValue_42;
#line 788 "term.m"
        MR_Word mercury__term__V_43_43;
#line 788 "term.m"
        MR_String mercury__term__V_44_44;
#line 788 "term.m"
        MR_Word mercury__term__V_45_45;
#line 788 "term.m"
        MR_Word mercury__term__V_46_46;
#line 788 "term.m"
        MR_Word mercury__term__V_47_47;
#line 788 "term.m"
        MR_String mercury__term__V_48_48;
#line 788 "term.m"
        MR_Word mercury__term__V_49_49;
#line 788 "term.m"
        MR_Word mercury__term__V_50_50;
#line 788 "term.m"
        MR_Word mercury__term__V_51_51;
#line 788 "term.m"
        MR_Word mercury__term__V_52_52;
#line 788 "term.m"
        MR_Word mercury__term__V_53_53;
#line 789 "term.m"
        MR_Box mercury__term__conv0_NestedUniv_39;

#line 788 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 788 "term.m"
        if (mercury__term__succeeded)
#line 788 "term.m"
          {
#line 788 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "term.m"
            if (mercury__term__succeeded)
#line 788 "term.m"
              {
#line 8886 "term.c"
                mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 789 "term.m"
                {
#line 789 "term.m"
                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_96_96, mercury__term__Univ_4, &mercury__term__conv0_NestedUniv_39);
                }
#line 789 "term.m"
                mercury__term__NestedUniv_39 = ((MR_Word) mercury__term__conv0_NestedUniv_39);
#line 790 "term.m"
                mercury__term__V_44_44 = (MR_String) "univ";
#line 791 "term.m"
                mercury__term__V_48_48 = (MR_String) ":";
#line 791 "term.m"
                mercury__term__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "term.m"
                mercury__term__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "term.m"
                mercury__term__V_43_43 = (MR_Word) &mercury__term_scalar_common_5[1];
#line 791 "term.m"
                mercury__term__V_47_47 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 792 "term.m"
                {
#line 792 "term.m"
                  mercury__term__V_53_53 = mercury__univ__univ_type_1_f_0(mercury__term__NestedUniv_39);
                }
#line 792 "term.m"
                {
#line 792 "term.m"
                  mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__V_53_53, &mercury__term__TypeTerm_41);
                }
#line 791 "term.m"
                {
#line 791 "term.m"
                  mercury__term__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 0) = ((MR_Box) (mercury__term__TypeTerm_41));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 1) = ((MR_Box) (mercury__term__V_51_51));
#line 791 "term.m"
                }
#line 793 "term.m"
                {
#line 793 "term.m"
                  mercury__term__NestedUnivValue_42 = mercury__univ__univ_value_1_f_0(&mercury__term__TypeInfo_97_97, mercury__term__NestedUniv_39);
                }
#line 794 "term.m"
                {
#line 794 "term.m"
                  mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_97_97, mercury__term__TypeInfo_for_T_90, mercury__term__NestedUnivValue_42, &mercury__term__ValueTerm_40);
                }
#line 791 "term.m"
                {
#line 791 "term.m"
                  mercury__term__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 0) = ((MR_Box) (mercury__term__ValueTerm_40));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 1) = ((MR_Box) (mercury__term__V_50_50));
#line 791 "term.m"
                }
#line 791 "term.m"
                {
#line 791 "term.m"
                  mercury__term__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 791 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 0) = ((MR_Box) (mercury__term__V_47_47));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 1) = ((MR_Box) (mercury__term__V_49_49));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 2) = ((MR_Box) (mercury__term__Context_5));
#line 791 "term.m"
                }
#line 791 "term.m"
                {
#line 791 "term.m"
                  mercury__term__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 0) = ((MR_Box) (mercury__term__V_46_46));
#line 791 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 1) = ((MR_Box) (mercury__term__V_52_52));
#line 791 "term.m"
                }
#line 790 "term.m"
                {
#line 790 "term.m"
                  MR_Word base;
#line 790 "term.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 790 "term.m"
                  *mercury__term__HeadVar__6_6 = base;
#line 790 "term.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_43_43));
#line 790 "term.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_45_45));
#line 790 "term.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 790 "term.m"
                }
#line 790 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 788 "term.m"
              }
#line 788 "term.m"
          }
#line 788 "term.m"
      }
#line 772 "term.m"
    else
#line 772 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 800 "term.m"
        {
#line 800 "term.m"
          MR_Word mercury__term__TypeInfo_99_99;
#line 800 "term.m"
          MR_Word mercury__term__TypeCtorInfo_100_100;
#line 800 "term.m"
          MR_Word mercury__term__TypeInfo_101_101;
#line 800 "term.m"
          MR_Word mercury__term__TypeCtorInfo_102_102;
#line 800 "term.m"
          MR_Word mercury__term__TypeInfo_103_103;
#line 800 "term.m"
          MR_Word mercury__term__ElemType_60;
#line 800 "term.m"
          MR_Word mercury__term__ArgsTerm_64;
#line 800 "term.m"
          MR_Word mercury__term__List_66;
#line 800 "term.m"
          MR_ArrayPtr mercury__term__Array_67;
#line 800 "term.m"
          MR_Word mercury__term__V_68_68;
#line 800 "term.m"
          MR_Word mercury__term__V_69_69;
#line 800 "term.m"
          MR_String mercury__term__V_70_70;
#line 800 "term.m"
          MR_Word mercury__term__V_71_71;
#line 800 "term.m"
          MR_Word mercury__term__V_72_72;
#line 802 "term.m"
          MR_Box mercury__term__Elem_65;
#line 804 "term.m"
          MR_Box mercury__term__conv1_Array_67;

#line 800 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 800 "term.m"
          if (mercury__term__succeeded)
#line 800 "term.m"
            {
#line 800 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 800 "term.m"
              if (mercury__term__succeeded)
#line 800 "term.m"
                {
#line 800 "term.m"
                  mercury__term__ElemType_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 800 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 800 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "term.m"
                  if (mercury__term__succeeded)
#line 800 "term.m"
                    {
#line 801 "term.m"
                      mercury__term__V_70_70 = (MR_String) "array";
#line 801 "term.m"
                      mercury__term__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 801 "term.m"
                      mercury__term__V_69_69 = (MR_Word) &mercury__term_scalar_common_5[3];
#line 802 "term.m"
                      {
#line 802 "term.m"
                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_99_99, mercury__term__ElemType_60);
                      }
#line 9065 "term.c"
                      mercury__term__TypeCtorInfo_100_100 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9067 "term.c"
                      mercury__term__TypeCtorInfo_102_102 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 9069 "term.c"
                      {
#line 9071 "term.c"
                        mercury__term__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9073 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_100_100));
#line 9075 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 9077 "term.c"
                      }
#line 9079 "term.c"
                      {
#line 9081 "term.c"
                        mercury__term__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9083 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_102_102));
#line 9085 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 9087 "term.c"
                      }
#line 804 "term.m"
                      {
#line 804 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_103_103, mercury__term__Univ_4, &mercury__term__conv1_Array_67);
                      }
#line 804 "term.m"
                      mercury__term__Array_67 = ((MR_ArrayPtr) mercury__term__conv1_Array_67);
#line 805 "term.m"
                      {
#line 805 "term.m"
                        mercury__array__to_list_2_p_0(mercury__term__TypeInfo_99_99, (MR_ArrayPtr) mercury__term__Array_67, &mercury__term__List_66);
                      }
#line 806 "term.m"
                      {
#line 806 "term.m"
                        mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_101_101, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_66)), &mercury__term__ArgsTerm_64);
                      }
#line 801 "term.m"
                      {
#line 801 "term.m"
                        mercury__term__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 0) = ((MR_Box) (mercury__term__ArgsTerm_64));
#line 801 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 1) = ((MR_Box) (mercury__term__V_72_72));
#line 801 "term.m"
                      }
#line 801 "term.m"
                      {
#line 801 "term.m"
                        MR_Word base;
#line 801 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 801 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 801 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 801 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_71_71));
#line 801 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 801 "term.m"
                      }
#line 801 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 800 "term.m"
                    }
#line 800 "term.m"
                }
#line 800 "term.m"
            }
#line 800 "term.m"
        }
#line 772 "term.m"
      else
#line 772 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 796 "term.m"
          {
#line 796 "term.m"
            MR_Word mercury__term__TypeCtorInfo_98_98;
#line 796 "term.m"
            MR_String mercury__term__BitmapStr_56;
#line 796 "term.m"
            MR_Box mercury__term__Bitmap_57;
#line 796 "term.m"
            MR_Word mercury__term__V_58_58;
#line 796 "term.m"
            MR_Word mercury__term__V_59_59;
#line 797 "term.m"
            MR_Box mercury__term__conv2_Bitmap_57;

#line 795 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 796 "term.m"
            if (mercury__term__succeeded)
#line 796 "term.m"
              {
#line 795 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "term.m"
                if (mercury__term__succeeded)
#line 796 "term.m"
                  {
#line 796 "term.m"
                    mercury__term__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9175 "term.c"
                    mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 797 "term.m"
                    {
#line 797 "term.m"
                      mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_98_98, mercury__term__Univ_4, &mercury__term__conv2_Bitmap_57);
                    }
#line 797 "term.m"
                    mercury__term__Bitmap_57 = ((MR_Box) mercury__term__conv2_Bitmap_57);
#line 798 "term.m"
                    {
#line 798 "term.m"
                      mercury__term__BitmapStr_56 = mercury__bitmap__to_string_1_f_0(mercury__term__Bitmap_57);
                    }
#line 796 "term.m"
                    {
#line 796 "term.m"
                      mercury__term__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "term.m"
                      MR_hl_field(MR_mktag(2), mercury__term__V_58_58, 0) = ((MR_Box) (mercury__term__BitmapStr_56));
#line 796 "term.m"
                    }
#line 796 "term.m"
                    {
#line 796 "term.m"
                      MR_Word base;
#line 796 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "term.m"
                      *mercury__term__HeadVar__6_6 = base;
#line 796 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_58_58));
#line 796 "term.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_59_59));
#line 796 "term.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 796 "term.m"
                    }
#line 796 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 796 "term.m"
                  }
#line 796 "term.m"
              }
#line 796 "term.m"
          }
#line 772 "term.m"
        else
#line 772 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 772 "term.m"
            {
#line 777 "term.m"
              mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "term.m"
              if (mercury__term__succeeded)
#line 772 "term.m"
                {
#line 772 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 772 "term.m"
                    {
#line 772 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 772 "term.m"
                      MR_Integer mercury__term__Int_9;
#line 772 "term.m"
                      MR_Word mercury__term__V_10_10;
#line 772 "term.m"
                      MR_Word mercury__term__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "term.m"
                      MR_Box mercury__term__conv3_Int_9;

#line 773 "term.m"
                      {
#line 773 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_91_91, mercury__term__Univ_4, &mercury__term__conv3_Int_9);
                      }
#line 773 "term.m"
                      mercury__term__Int_9 = ((MR_Integer) mercury__term__conv3_Int_9);
#line 772 "term.m"
                      {
#line 772 "term.m"
                        mercury__term__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_10_10, 0) = ((MR_Box) (mercury__term__Int_9));
#line 772 "term.m"
                      }
#line 772 "term.m"
                      {
#line 772 "term.m"
                        MR_Word base;
#line 772 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 772 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_10_10));
#line 772 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_11_11));
#line 772 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 772 "term.m"
                      }
#line 772 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 772 "term.m"
                    }
#line 772 "term.m"
                  else
#line 772 "term.m"
                    if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 775 "term.m"
                      {
#line 775 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 775 "term.m"
                        MR_Float mercury__term__Float_14;
#line 775 "term.m"
                        MR_Word mercury__term__V_15_15;
#line 775 "term.m"
                        MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "term.m"
                        MR_Box mercury__term__conv4_Float_14;

#line 776 "term.m"
                        {
#line 776 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_92_92, mercury__term__Univ_4, &mercury__term__conv4_Float_14);
                        }
#line 776 "term.m"
                        mercury__term__Float_14 = MR_unbox_float(mercury__term__conv4_Float_14);
#line 775 "term.m"
                        {
#line 775 "term.m"
                          mercury__term__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 775 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 1) = MR_box_float(mercury__term__Float_14);
#line 775 "term.m"
                        }
#line 775 "term.m"
                        {
#line 775 "term.m"
                          MR_Word base;
#line 775 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 775 "term.m"
                          *mercury__term__HeadVar__6_6 = base;
#line 775 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 775 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_16_16));
#line 775 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 775 "term.m"
                        }
#line 775 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 775 "term.m"
                      }
#line 772 "term.m"
                    else
#line 772 "term.m"
                      if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 782 "term.m"
                        {
#line 782 "term.m"
                          MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 782 "term.m"
                          MR_String mercury__term__String_25;
#line 782 "term.m"
                          MR_Word mercury__term__V_26_26;
#line 782 "term.m"
                          MR_Word mercury__term__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "term.m"
                          MR_Box mercury__term__conv5_String_25;

#line 783 "term.m"
                          {
#line 783 "term.m"
                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_94_94, mercury__term__Univ_4, &mercury__term__conv5_String_25);
                          }
#line 783 "term.m"
                          mercury__term__String_25 = ((MR_String) mercury__term__conv5_String_25);
#line 782 "term.m"
                          {
#line 782 "term.m"
                            mercury__term__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "term.m"
                            MR_hl_field(MR_mktag(2), mercury__term__V_26_26, 0) = ((MR_Box) (mercury__term__String_25));
#line 782 "term.m"
                          }
#line 782 "term.m"
                          {
#line 782 "term.m"
                            MR_Word base;
#line 782 "term.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 782 "term.m"
                            *mercury__term__HeadVar__6_6 = base;
#line 782 "term.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_26_26));
#line 782 "term.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_27_27));
#line 782 "term.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 782 "term.m"
                          }
#line 782 "term.m"
                          mercury__term__succeeded = MR_TRUE;
#line 782 "term.m"
                        }
#line 772 "term.m"
                      else
#line 772 "term.m"
                        if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 778 "term.m"
                          {
#line 778 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 778 "term.m"
                            MR_String mercury__term__CharName_19;
#line 778 "term.m"
                            MR_Char mercury__term__Character_20;
#line 778 "term.m"
                            MR_Word mercury__term__V_21_21;
#line 778 "term.m"
                            MR_Word mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "term.m"
                            MR_Box mercury__term__conv6_Character_20;

#line 779 "term.m"
                            {
#line 779 "term.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_93_93, mercury__term__Univ_4, &mercury__term__conv6_Character_20);
                            }
#line 779 "term.m"
                            mercury__term__Character_20 = ((MR_Char) (MR_Word) mercury__term__conv6_Character_20);
#line 780 "term.m"
                            {
#line 780 "term.m"
                              mercury__string__char_to_string_2_p_0(mercury__term__Character_20, &mercury__term__CharName_19);
                            }
#line 778 "term.m"
                            {
#line 778 "term.m"
                              mercury__term__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 778 "term.m"
                              MR_hl_field(MR_mktag(0), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__CharName_19));
#line 778 "term.m"
                            }
#line 778 "term.m"
                            {
#line 778 "term.m"
                              MR_Word base;
#line 778 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 778 "term.m"
                              *mercury__term__HeadVar__6_6 = base;
#line 778 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_21_21));
#line 778 "term.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 778 "term.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 778 "term.m"
                            }
#line 778 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 778 "term.m"
                          }
#line 772 "term.m"
                        else
#line 772 "term.m"
                          mercury__term__succeeded = MR_FALSE;
#line 772 "term.m"
                }
#line 772 "term.m"
            }
#line 772 "term.m"
          else
#line 772 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 785 "term.m"
              {
#line 785 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95;
#line 785 "term.m"
                MR_Word mercury__term__Term_30;
#line 785 "term.m"
                MR_Word mercury__term__TypeInfo_31;
#line 785 "term.m"
                MR_Word mercury__term__V_32_32;
#line 785 "term.m"
                MR_String mercury__term__V_33_33;
#line 785 "term.m"
                MR_Word mercury__term__V_34_34;
#line 785 "term.m"
                MR_Word mercury__term__V_35_35;
#line 786 "term.m"
                MR_Box mercury__term__conv7_TypeInfo_31;

#line 784 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "type_desc") == 0);
#line 785 "term.m"
                if (mercury__term__succeeded)
#line 785 "term.m"
                  {
#line 784 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "term.m"
                    if (mercury__term__succeeded)
#line 785 "term.m"
                      {
#line 785 "term.m"
                        mercury__term__V_33_33 = (MR_String) "type_info";
#line 785 "term.m"
                        mercury__term__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9495 "term.c"
                        mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 785 "term.m"
                        mercury__term__V_32_32 = (MR_Word) &mercury__term_scalar_common_5[4];
#line 786 "term.m"
                        {
#line 786 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_95_95, mercury__term__Univ_4, &mercury__term__conv7_TypeInfo_31);
                        }
#line 786 "term.m"
                        mercury__term__TypeInfo_31 = ((MR_Word) mercury__term__conv7_TypeInfo_31);
#line 787 "term.m"
                        {
#line 787 "term.m"
                          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__TypeInfo_31, &mercury__term__Term_30);
                        }
#line 785 "term.m"
                        {
#line 785 "term.m"
                          mercury__term__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 0) = ((MR_Box) (mercury__term__Term_30));
#line 785 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 1) = ((MR_Box) (mercury__term__V_35_35));
#line 785 "term.m"
                        }
#line 785 "term.m"
                        {
#line 785 "term.m"
                          MR_Word base;
#line 785 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 785 "term.m"
                          *mercury__term__HeadVar__6_6 = base;
#line 785 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_32_32));
#line 785 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_34_34));
#line 785 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 785 "term.m"
                        }
#line 785 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 785 "term.m"
                      }
#line 785 "term.m"
                  }
#line 785 "term.m"
              }
#line 772 "term.m"
            else
#line 772 "term.m"
              if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 809 "term.m"
                {
#line 809 "term.m"
                  MR_Word mercury__term__TypeInfo_104_104;
#line 809 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_105_105;
#line 809 "term.m"
                  MR_Word mercury__term__TypeInfo_106_106;
#line 809 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_107_107;
#line 809 "term.m"
                  MR_Word mercury__term__TypeInfo_108_108;
#line 809 "term.m"
                  MR_Word mercury__term__ElemType_75;
#line 809 "term.m"
                  MR_Word mercury__term__ArgsTerm_79;
#line 809 "term.m"
                  MR_Word mercury__term__List_81;
#line 809 "term.m"
                  MR_Box mercury__term__Array_82;
#line 809 "term.m"
                  MR_Word mercury__term__V_83_83;
#line 809 "term.m"
                  MR_Word mercury__term__V_84_84;
#line 809 "term.m"
                  MR_String mercury__term__V_85_85;
#line 809 "term.m"
                  MR_Word mercury__term__V_86_86;
#line 809 "term.m"
                  MR_Word mercury__term__V_87_87;
#line 811 "term.m"
                  MR_Box mercury__term__Elem_80;
#line 813 "term.m"
                  MR_Box mercury__term__conv8_Array_82;

#line 808 "term.m"
                  mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 809 "term.m"
                  if (mercury__term__succeeded)
#line 809 "term.m"
                    {
#line 808 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 808 "term.m"
                      if (mercury__term__succeeded)
#line 808 "term.m"
                        {
#line 808 "term.m"
                          mercury__term__ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 808 "term.m"
                          mercury__term__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 808 "term.m"
                          mercury__term__succeeded = (mercury__term__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "term.m"
                          if (mercury__term__succeeded)
#line 809 "term.m"
                            {
#line 810 "term.m"
                              mercury__term__V_85_85 = (MR_String) "version_array";
#line 810 "term.m"
                              mercury__term__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "term.m"
                              mercury__term__V_84_84 = (MR_Word) &mercury__term_scalar_common_5[5];
#line 811 "term.m"
                              {
#line 811 "term.m"
                                mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_104_104, mercury__term__ElemType_75);
                              }
#line 9617 "term.c"
                              mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9619 "term.c"
                              mercury__term__TypeCtorInfo_107_107 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9621 "term.c"
                              {
#line 9623 "term.c"
                                mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9625 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9627 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9629 "term.c"
                              }
#line 9631 "term.c"
                              {
#line 9633 "term.c"
                                mercury__term__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9635 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_107_107));
#line 9637 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9639 "term.c"
                              }
#line 813 "term.m"
                              {
#line 813 "term.m"
                                mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_108_108, mercury__term__Univ_4, &mercury__term__conv8_Array_82);
                              }
#line 813 "term.m"
                              mercury__term__Array_82 = ((MR_Box) mercury__term__conv8_Array_82);
#line 814 "term.m"
                              {
#line 814 "term.m"
                                mercury__term__List_81 = mercury__version_array__to_list_1_f_0(mercury__term__TypeInfo_104_104, mercury__term__Array_82);
                              }
#line 815 "term.m"
                              {
#line 815 "term.m"
                                mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_106_106, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_81)), &mercury__term__ArgsTerm_79);
                              }
#line 810 "term.m"
                              {
#line 810 "term.m"
                                mercury__term__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 0) = ((MR_Box) (mercury__term__ArgsTerm_79));
#line 810 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 1) = ((MR_Box) (mercury__term__V_87_87));
#line 810 "term.m"
                              }
#line 810 "term.m"
                              {
#line 810 "term.m"
                                MR_Word base;
#line 810 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 810 "term.m"
                                *mercury__term__HeadVar__6_6 = base;
#line 810 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_84_84));
#line 810 "term.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_86_86));
#line 810 "term.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 810 "term.m"
                              }
#line 810 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 809 "term.m"
                            }
#line 808 "term.m"
                        }
#line 809 "term.m"
                    }
#line 809 "term.m"
                }
#line 772 "term.m"
              else
#line 772 "term.m"
                mercury__term__succeeded = MR_FALSE;
#line 772 "term.m"
    return mercury__term__succeeded;
#line 772 "term.m"
  }
#line 767 "term.m"
}

#line 691 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 691 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 691 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 691 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 691 "term.m"
  MR_Word mercury__term__Functor_3,
#line 691 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 691 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 691 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 691 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 691 "term.m"
{
#line 696 "term.m"
  {
#line 696 "term.m"
    MR_bool mercury__term__succeeded;

#line 696 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "term.m"
      {
#line 696 "term.m"
        MR_Word mercury__term__V_12_12;

#line 696 "term.m"
        mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "term.m"
        if (mercury__term__succeeded)
#line 696 "term.m"
          {
#line 696 "term.m"
            mercury__term__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "term.m"
            *mercury__term__HeadVar__7_7 = (MR_Word) &mercury__term_scalar_common_5[0];
#line 696 "term.m"
            mercury__term__succeeded = MR_TRUE;
#line 696 "term.m"
          }
#line 696 "term.m"
      }
#line 696 "term.m"
    else
#line 698 "term.m"
      {
#line 698 "term.m"
        MR_Word mercury__term__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 698 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 698 "term.m"
        MR_Word mercury__term__Type_15;
#line 698 "term.m"
        MR_Word mercury__term__Types_16;
#line 698 "term.m"
        MR_Word mercury__term__ArgContext_22;
#line 698 "term.m"
        MR_Word mercury__term__NewContext_23;
#line 698 "term.m"
        MR_Word mercury__term__ArgResult_24;

#line 697 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 697 "term.m"
        if (mercury__term__succeeded)
#line 697 "term.m"
          {
#line 697 "term.m"
            mercury__term__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 697 "term.m"
            mercury__term__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 699 "term.m"
            {
#line 699 "term.m"
              mercury__term__ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 699 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 0) = ((MR_Box) (mercury__term__Functor_3));
#line 699 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 1) = ((MR_Box) (mercury__term__ArgNum_4));
#line 699 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 2) = ((MR_Box) (mercury__term__TermContext_6));
#line 699 "term.m"
            }
#line 700 "term.m"
            {
#line 700 "term.m"
              mercury__term__NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 0) = ((MR_Box) (mercury__term__ArgContext_22));
#line 700 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 1) = ((MR_Box) (mercury__term__PrevContext_5));
#line 700 "term.m"
            }
#line 701 "term.m"
            {
#line 701 "term.m"
              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerm_13, mercury__term__Type_15, mercury__term__NewContext_23, &mercury__term__ArgResult_24);
            }
#line 713 "term.m"
            if (((MR_tag((MR_Word) mercury__term__ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 715 "term.m"
              {
#line 715 "term.m"
                *mercury__term__HeadVar__7_7 = (MR_Word) mercury__term__ArgResult_24;
#line 715 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 715 "term.m"
              }
#line 713 "term.m"
            else
#line 703 "term.m"
              {
#line 703 "term.m"
                MR_Word mercury__term__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_24, (MR_Integer) 0)));
#line 703 "term.m"
                MR_Word mercury__term__RestResult_26;
#line 703 "term.m"
                MR_Integer mercury__term__V_29_29 = (mercury__term__ArgNum_4 + (MR_Integer) 1);

#line 704 "term.m"
                {
#line 704 "term.m"
                  mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerms_14, mercury__term__Types_16, mercury__term__Functor_3, mercury__term__V_29_29, mercury__term__PrevContext_5, mercury__term__TermContext_6, &mercury__term__RestResult_26);
                }
#line 703 "term.m"
                if (mercury__term__succeeded)
#line 703 "term.m"
                  {
#line 709 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__RestResult_26)) == (MR_mktag((MR_Integer) 1))))
#line 711 "term.m"
                      *mercury__term__HeadVar__7_7 = mercury__term__RestResult_26;
#line 709 "term.m"
                    else
#line 707 "term.m"
                      {
#line 707 "term.m"
                        MR_Word mercury__term__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__RestResult_26, (MR_Integer) 0)));
#line 707 "term.m"
                        MR_Word mercury__term__V_31_31;

#line 708 "term.m"
                        {
#line 708 "term.m"
                          mercury__term__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 0) = ((MR_Box) (mercury__term__Arg_25));
#line 708 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 1) = ((MR_Box) (mercury__term__Rest_27));
#line 708 "term.m"
                        }
#line 708 "term.m"
                        {
#line 708 "term.m"
                          MR_Word base;
#line 708 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 708 "term.m"
                          *mercury__term__HeadVar__7_7 = base;
#line 708 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_31_31));
#line 708 "term.m"
                        }
#line 707 "term.m"
                      }
#line 709 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 703 "term.m"
                  }
#line 703 "term.m"
              }
#line 697 "term.m"
          }
#line 698 "term.m"
      }
#line 696 "term.m"
    return mercury__term__succeeded;
#line 696 "term.m"
  }
#line 691 "term.m"
}

#line 546 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 546 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 546 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 546 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 546 "term.m"
  MR_Word mercury__term__Context_3,
#line 546 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 546 "term.m"
{
#line 550 "term.m"
  {
#line 550 "term.m"
    MR_bool mercury__term__succeeded;

#line 550 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 552 "term.m"
      {
#line 552 "term.m"
        MR_Word mercury__term__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "term.m"
        MR_Word mercury__term__TermContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 562 "term.m"
        MR_Word mercury__term__SpecialCaseResult_19;
#line 555 "term.m"
        MR_Word mercury__term__TypeCtor_17;
#line 555 "term.m"
        MR_Word mercury__term__TypeArgs_18;
#line 555 "term.m"
        MR_String mercury__term__V_29_29;
#line 555 "term.m"
        MR_String mercury__term__V_30_30;
#line 144 "type_desc.opt"
        MR_String mercury__term___Name_5_40;
#line 144 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_41;
#line 144 "type_desc.opt"
        MR_String mercury__term___ModuleName_5_44;
#line 144 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_45;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__HeadVar__2_2 ;
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
#line 9966 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_17  = TypeCtorDesc;
	 mercury__term__TypeArgs_18  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_17 ;
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
#line 10015 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_29_29  = TypeCtorModuleName;
	 mercury__term___Name_5_40  = TypeCtorName;
	 mercury__term___Arity_6_41  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_17 ;
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
#line 10065 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_44  = TypeCtorModuleName;
	 mercury__term__V_30_30  = TypeCtorName;
	 mercury__term___Arity_6_45  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 556 "term.m"
        {
#line 556 "term.m"
          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__V_29_29, mercury__term__V_30_30, mercury__term__TypeArgs_18, mercury__term__HeadVar__1_1, mercury__term__Context_3, &mercury__term__SpecialCaseResult_19);
        }
#line 562 "term.m"
        if (mercury__term__succeeded)
#line 561 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__SpecialCaseResult_19;
#line 562 "term.m"
        else
#line 580 "term.m"
          {
#line 580 "term.m"
            MR_Integer mercury__term__FunctorNumber_22;
#line 580 "term.m"
            MR_Word mercury__term__ArgsResult_24;
#line 563 "term.m"
            MR_Word mercury__term__TypeCtorInfo_35_35;
#line 563 "term.m"
            MR_Word mercury__term__TypeInfo_36_36;
#line 563 "term.m"
            MR_String mercury__term__FunctorName_20;
#line 563 "term.m"
            MR_Integer mercury__term__Arity_21;
#line 563 "term.m"
            MR_Word mercury__term__ArgTypes_23;
#line 563 "term.m"
            MR_Integer mercury__term__V_31_31;
#line 563 "term.m"
            MR_Integer mercury__term__V_5_48;
#line 563 "term.m"
            MR_Integer mercury__term__N_11_54;

#line 563 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 563 "term.m"
            if (mercury__term__succeeded)
#line 563 "term.m"
              {
#line 563 "term.m"
                mercury__term__FunctorName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__Functor_14, (MR_Integer) 0)));
#line 10116 "term.c"
                mercury__term__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 77 "list.opt"
                mercury__term__V_5_48 = (MR_Integer) 0;
#line 10120 "term.c"
                {
#line 10122 "term.c"
                  mercury__term__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10124 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_35_35));
#line 10126 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_34));
#line 10128 "term.c"
                }
#line 78 "list.opt"
                {
#line 78 "list.opt"
                  mercury__list__length_2_3_p_0(mercury__term__TypeInfo_36_36, (MR_Word) mercury__term__ArgTerms_15, mercury__term__V_5_48, &mercury__term__Arity_21);
                }
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term__HeadVar__2_2 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 10152 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__N_11_54  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 563 "term.m"
                if (mercury__term__succeeded)
#line 563 "term.m"
                  {
#line 208 "construct.opt"
                    {
#line 208 "construct.opt"
                      mercury__term__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__term__HeadVar__2_2, mercury__term__FunctorName_20, mercury__term__Arity_21, mercury__term__N_11_54, &mercury__term__FunctorNumber_22, &mercury__term__ArgTypes_23);
                    }
#line 563 "term.m"
                    if (mercury__term__succeeded)
#line 563 "term.m"
                      {
#line 566 "term.m"
                        mercury__term__V_31_31 = (MR_Integer) 1;
#line 566 "term.m"
                        {
#line 566 "term.m"
                          mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__ArgTerms_15, mercury__term__ArgTypes_23, mercury__term__Functor_14, mercury__term__V_31_31, mercury__term__Context_3, mercury__term__TermContext_16, &mercury__term__ArgsResult_24);
                        }
#line 563 "term.m"
                      }
#line 563 "term.m"
                  }
#line 563 "term.m"
              }
#line 580 "term.m"
            if (mercury__term__succeeded)
#line 576 "term.m"
              if (((MR_tag((MR_Word) mercury__term__ArgsResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 578 "term.m"
                *mercury__term__HeadVar__4_4 = (MR_Word) mercury__term__ArgsResult_24;
#line 576 "term.m"
              else
#line 570 "term.m"
                {
#line 570 "term.m"
                  MR_Word mercury__term__ArgValues_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgsResult_24, (MR_Integer) 0)));
#line 573 "term.m"
                  MR_Word mercury__term__Value_26;

#line 571 "term.m"
                  {
#line 571 "term.m"
                    mercury__term__succeeded = mercury__construct__construct_3_f_0(mercury__term__HeadVar__2_2, mercury__term__FunctorNumber_22, mercury__term__ArgValues_25, &mercury__term__Value_26);
                  }
#line 573 "term.m"
                  if (mercury__term__succeeded)
#line 572 "term.m"
                    {
#line 572 "term.m"
                      MR_Word base;
#line 572 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 572 "term.m"
                      *mercury__term__HeadVar__4_4 = base;
#line 572 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Value_26));
#line 572 "term.m"
                    }
#line 573 "term.m"
                  else
#line 574 "term.m"
                    {
#line 574 "term.m"
                      {
#line 574 "term.m"
                        mercury__require__error_1_p_0((MR_String) "term_to_type: construct/3 failed");
#line 574 "term.m"
                        return;
                      }
#line 574 "term.m"
                    }
#line 570 "term.m"
                }
#line 580 "term.m"
            else
#line 583 "term.m"
              {
#line 583 "term.m"
                MR_Word mercury__term__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0;
#line 583 "term.m"
                MR_Word mercury__term__RevContext_28;
#line 583 "term.m"
                MR_Word mercury__term__V_33_33;

#line 583 "term.m"
                {
#line 583 "term.m"
                  mercury__list__reverse_2_p_0(mercury__term__TypeCtorInfo_37_37, mercury__term__Context_3, &mercury__term__RevContext_28);
                }
#line 584 "term.m"
                {
#line 584 "term.m"
                  mercury__term__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 584 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 0) = ((MR_Box) (mercury__term__HeadVar__1_1));
#line 584 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 1) = ((MR_Box) (mercury__term__HeadVar__2_2));
#line 584 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 2) = ((MR_Box) (mercury__term__TermContext_16));
#line 584 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 3) = ((MR_Box) (mercury__term__RevContext_28));
#line 584 "term.m"
                }
#line 584 "term.m"
                {
#line 584 "term.m"
                  MR_Word base;
#line 584 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "term.m"
                  *mercury__term__HeadVar__4_4 = base;
#line 584 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_33_33));
#line 584 "term.m"
                }
#line 583 "term.m"
              }
#line 580 "term.m"
          }
#line 552 "term.m"
      }
#line 550 "term.m"
    else
#line 550 "term.m"
      {
#line 550 "term.m"
        MR_Word mercury__term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 550 "term.m"
        MR_Word mercury__term__V_9_9;
#line 550 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 551 "term.m"
        {
#line 551 "term.m"
          mercury__term__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 0) = ((MR_Box) (mercury__term__Var_5));
#line 551 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 1) = ((MR_Box) (mercury__term__Context_3));
#line 551 "term.m"
        }
#line 551 "term.m"
        {
#line 551 "term.m"
          MR_Word base;
#line 551 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 551 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 551 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_9_9));
#line 551 "term.m"
        }
#line 550 "term.m"
      }
#line 550 "term.m"
  }
#line 546 "term.m"
}

#line 489 "term.m"
MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
#line 489 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 489 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 489 "term.m"
{
#line 1307 "term.m"
  {
#line 1307 "term.m"
    MR_bool mercury__term__succeeded;
#line 1307 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1307 "term.m"
    return mercury__term__V_3;
#line 1307 "term.m"
  }
#line 489 "term.m"
}

#line 487 "term.m"
MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
#line 487 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 487 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 487 "term.m"
{
#line 1305 "term.m"
  {
#line 1305 "term.m"
    MR_bool mercury__term__succeeded;
#line 1305 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 1305 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1305 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 1305 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1305 "term.m"
  }
#line 487 "term.m"
}

#line 471 "term.m"
void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
#line 471 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 471 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 471 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 471 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 471 "term.m"
{
#line 1449 "term.m"
  {
#line 1449 "term.m"
    MR_bool mercury__term__succeeded;

#line 1449 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1449 "term.m"
  }
#line 471 "term.m"
}

#line 470 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
#line 470 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 470 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 470 "term.m"
  MR_Word mercury__term__VS1_3)
#line 470 "term.m"
{
#line 1449 "term.m"
  {
#line 1449 "term.m"
    MR_bool mercury__term__succeeded;
#line 1449 "term.m"
    MR_Word mercury__term__VS2_4 = mercury__term__VS1_3;

#line 1449 "term.m"
    return mercury__term__VS2_4;
#line 1449 "term.m"
  }
#line 470 "term.m"
}

#line 466 "term.m"
void MR_CALL 
mercury__term__coerce_var_2_p_0(
#line 466 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 466 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 466 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 466 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 466 "term.m"
{
#line 1444 "term.m"
  {
#line 1444 "term.m"
    MR_bool mercury__term__succeeded;

#line 1444 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1444 "term.m"
  }
#line 466 "term.m"
}

#line 465 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
#line 465 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 465 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 465 "term.m"
  MR_Word mercury__term__V1_3)
#line 465 "term.m"
{
#line 1444 "term.m"
  {
#line 1444 "term.m"
    MR_bool mercury__term__succeeded;
#line 1444 "term.m"
    MR_Word mercury__term__V2_4 = mercury__term__V1_3;

#line 1444 "term.m"
    return mercury__term__V2_4;
#line 1444 "term.m"
  }
#line 465 "term.m"
}

#line 461 "term.m"
void MR_CALL 
mercury__term__coerce_2_p_0(
#line 461 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 461 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 461 "term.m"
  MR_Word mercury__term__A_3,
#line 461 "term.m"
  MR_Word * mercury__term__B_4)
#line 461 "term.m"
{
#line 1439 "term.m"
  {
#line 1439 "term.m"
    MR_bool mercury__term__succeeded;

#line 1439 "term.m"
    *mercury__term__B_4 = mercury__term__A_3;
#line 1439 "term.m"
  }
#line 461 "term.m"
}

#line 460 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
#line 460 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 460 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 460 "term.m"
  MR_Word mercury__term__T1_3)
#line 460 "term.m"
{
#line 1439 "term.m"
  {
#line 1439 "term.m"
    MR_bool mercury__term__succeeded;
#line 1439 "term.m"
    MR_Word mercury__term__T2_4 = mercury__term__T1_3;

#line 1439 "term.m"
    return mercury__term__T2_4;
#line 1439 "term.m"
  }
#line 460 "term.m"
}

#line 456 "term.m"
void MR_CALL 
mercury__term__generic_term_1_p_0(
#line 456 "term.m"
  MR_Word mercury__term__HeadVar__1_2)
#line 456 "term.m"
{
#line 1428 "term.m"
  {
#line 1428 "term.m"
    MR_bool mercury__term__succeeded;

#line 1428 "term.m"
    {
#line 1428 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1428 "term.m"
      return;
    }
#line 1428 "term.m"
  }
#line 456 "term.m"
}

#line 447 "term.m"
void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
#line 447 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 447 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 447 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 447 "term.m"
{
#line 1394 "term.m"
  {
#line 1394 "term.m"
    MR_bool mercury__term__succeeded;

#line 1394 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1394 "term.m"
    else
#line 1395 "term.m"
      {
#line 1395 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1395 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1395 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1395 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1395 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 1395 "term.m"
        {
#line 1395 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1395 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1395 "term.m"
        }
#line 1396 "term.m"
        {
#line 1396 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1395 "term.m"
        {
#line 1395 "term.m"
          MR_Word base;
#line 1395 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1395 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1395 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1395 "term.m"
        }
#line 1395 "term.m"
      }
#line 1394 "term.m"
  }
#line 447 "term.m"
}

#line 446 "term.m"
MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
#line 446 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 446 "term.m"
  MR_Word mercury__term__Vs_3)
#line 446 "term.m"
{
#line 1392 "term.m"
  {
#line 1392 "term.m"
    MR_bool mercury__term__succeeded;
#line 1392 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1392 "term.m"
    {
#line 1392 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1392 "term.m"
    return mercury__term__Ts_4;
#line 1392 "term.m"
  }
#line 446 "term.m"
}

#line 441 "term.m"
MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
#line 441 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 441 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 441 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 441 "term.m"
{
#line 1387 "term.m"
  {
#line 1387 "term.m"
    MR_bool mercury__term__succeeded;

#line 1387 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "term.m"
      {
#line 1387 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1387 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1387 "term.m"
      }
#line 1387 "term.m"
    else
#line 1388 "term.m"
      {
#line 1388 "term.m"
        MR_Word mercury__term__Var_3;
#line 1388 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1388 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1388 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1388 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1388 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1388 "term.m"
        if (mercury__term__succeeded)
#line 1388 "term.m"
          {
#line 1388 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1388 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1389 "term.m"
            {
#line 1389 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1388 "term.m"
            if (mercury__term__succeeded)
#line 1388 "term.m"
              {
#line 1388 "term.m"
                {
#line 1388 "term.m"
                  MR_Word base;
#line 1388 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1388 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1388 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1388 "term.m"
                }
#line 1388 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1388 "term.m"
              }
#line 1388 "term.m"
          }
#line 1388 "term.m"
      }
#line 1387 "term.m"
    return mercury__term__succeeded;
#line 1387 "term.m"
  }
#line 441 "term.m"
}

#line 437 "term.m"
MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
#line 437 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 437 "term.m"
  MR_Word mercury__term__Ts_3)
#line 437 "term.m"
{
#line 1383 "term.m"
  {
#line 1383 "term.m"
    MR_bool mercury__term__succeeded;
#line 1383 "term.m"
    MR_Word mercury__term__Vs_4;
#line 1383 "term.m"
    MR_Word mercury__term__Vs0_5;

#line 1381 "term.m"
    {
#line 1381 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Ts_3, &mercury__term__Vs0_5);
    }
#line 1383 "term.m"
    if (mercury__term__succeeded)
#line 1382 "term.m"
      mercury__term__Vs_4 = mercury__term__Vs0_5;
#line 1383 "term.m"
    else
#line 1384 "term.m"
      {
#line 1384 "term.m"
        {
#line 1384 "term.m"
          mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
        }
#line 1384 "term.m"
      }
#line 1383 "term.m"
    return mercury__term__Vs_4;
#line 1383 "term.m"
  }
#line 437 "term.m"
}

#line 432 "term.m"
void MR_CALL 
mercury__term__context_init_3_p_0(
#line 432 "term.m"
  MR_String mercury__term__File_4,
#line 432 "term.m"
  MR_Integer mercury__term__LineNumber_5,
#line 432 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 432 "term.m"
{
#line 904 "term.m"
  {
#line 904 "term.m"
    MR_bool mercury__term__succeeded;

#line 904 "term.m"
    {
#line 904 "term.m"
      MR_Word base;
#line 904 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 904 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 904 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 904 "term.m"
    }
#line 904 "term.m"
  }
#line 432 "term.m"
}

#line 431 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
#line 431 "term.m"
  MR_String mercury__term__S_4,
#line 431 "term.m"
  MR_Integer mercury__term__N_5)
#line 431 "term.m"
{
#line 904 "term.m"
  {
#line 904 "term.m"
    MR_bool mercury__term__succeeded;
#line 904 "term.m"
    MR_Word mercury__term__C_6;

#line 904 "term.m"
    {
#line 904 "term.m"
      mercury__term__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 0) = ((MR_Box) (mercury__term__S_4));
#line 904 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 1) = ((MR_Box) (mercury__term__N_5));
#line 904 "term.m"
    }
#line 904 "term.m"
    return mercury__term__C_6;
#line 904 "term.m"
  }
#line 431 "term.m"
}

#line 430 "term.m"
void MR_CALL 
mercury__term__context_init_1_p_0(
#line 430 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 430 "term.m"
{
#line 903 "term.m"
  {
#line 903 "term.m"
    MR_bool mercury__term__succeeded;

#line 903 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 903 "term.m"
  }
#line 430 "term.m"
}

#line 429 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 429 "term.m"
{
#line 903 "term.m"
  {
#line 903 "term.m"
    MR_bool mercury__term__succeeded;
#line 903 "term.m"
    MR_Word mercury__term__C_2 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 903 "term.m"
    return mercury__term__C_2;
#line 903 "term.m"
  }
#line 429 "term.m"
}

#line 424 "term.m"
void MR_CALL 
mercury__term__context_file_2_p_0(
#line 424 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 424 "term.m"
  MR_String * mercury__term__FileName_3)
#line 424 "term.m"
{
#line 902 "term.m"
  {
#line 902 "term.m"
    MR_bool mercury__term__succeeded;
#line 902 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 902 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "term.m"
  }
#line 424 "term.m"
}

#line 423 "term.m"
MR_String MR_CALL 
mercury__term__context_file_1_f_0(
#line 423 "term.m"
  MR_Word mercury__term__C_3)
#line 423 "term.m"
{
#line 902 "term.m"
  {
#line 902 "term.m"
    MR_bool mercury__term__succeeded;
#line 902 "term.m"
    MR_String mercury__term__S_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));
#line 902 "term.m"
    MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));

#line 902 "term.m"
    return mercury__term__S_4;
#line 902 "term.m"
  }
#line 423 "term.m"
}

#line 419 "term.m"
void MR_CALL 
mercury__term__context_line_2_p_0(
#line 419 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 419 "term.m"
  MR_Integer * mercury__term__LineNumber_4)
#line 419 "term.m"
{
#line 901 "term.m"
  {
#line 901 "term.m"
    MR_bool mercury__term__succeeded;
#line 901 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 901 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 901 "term.m"
  }
#line 419 "term.m"
}

#line 418 "term.m"
MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
#line 418 "term.m"
  MR_Word mercury__term__C_3)
#line 418 "term.m"
{
#line 901 "term.m"
  {
#line 901 "term.m"
    MR_bool mercury__term__succeeded;
#line 901 "term.m"
    MR_Integer mercury__term__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));
#line 901 "term.m"
    MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));

#line 901 "term.m"
    return mercury__term__N_4;
#line 901 "term.m"
  }
#line 418 "term.m"
}

#line 412 "term.m"
void MR_CALL 
mercury__term__var_to_int_2_p_0(
#line 412 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 412 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 412 "term.m"
  MR_Integer * mercury__term__Var_3)
#line 412 "term.m"
{
#line 1297 "term.m"
  {
#line 1297 "term.m"
    MR_bool mercury__term__succeeded;

#line 1297 "term.m"
    *mercury__term__Var_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 1297 "term.m"
  }
#line 412 "term.m"
}

#line 411 "term.m"
MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
#line 411 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 411 "term.m"
  MR_Word mercury__term__V_3)
#line 411 "term.m"
{
#line 1297 "term.m"
  {
#line 1297 "term.m"
    MR_bool mercury__term__succeeded;
#line 1297 "term.m"
    MR_Integer mercury__term__N_4 = (MR_Integer) mercury__term__V_3;

#line 1297 "term.m"
    return mercury__term__N_4;
#line 1297 "term.m"
  }
#line 411 "term.m"
}

#line 399 "term.m"
MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
#line 399 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 399 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 399 "term.m"
{
#line 1285 "term.m"
  {
#line 1285 "term.m"
    MR_bool mercury__term__succeeded;
#line 1285 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1285 "term.m"
    return mercury__term__V_3;
#line 1285 "term.m"
  }
#line 399 "term.m"
}

#line 393 "term.m"
void MR_CALL 
mercury__term__create_var_3_p_0(
#line 393 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 393 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 393 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 393 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 393 "term.m"
{
#line 1279 "term.m"
  {
#line 1279 "term.m"
    MR_bool mercury__term__succeeded;
#line 1279 "term.m"
    MR_Integer mercury__term__V_4;
#line 1279 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 1281 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 1279 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 1279 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 1279 "term.m"
  }
#line 393 "term.m"
}

#line 388 "term.m"
MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
#line 388 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 388 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 388 "term.m"
{
#line 1277 "term.m"
  {
#line 1277 "term.m"
    MR_bool mercury__term__succeeded;
#line 1277 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1277 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 1277 "term.m"
    return mercury__term__succeeded;
#line 1277 "term.m"
  }
#line 388 "term.m"
}

#line 387 "term.m"
void MR_CALL 
mercury__term__init_var_supply_1_p_0(
#line 387 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 387 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 387 "term.m"
{
#line 1277 "term.m"
  {
#line 1277 "term.m"
    MR_bool mercury__term__succeeded;

#line 1277 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1277 "term.m"
  }
#line 387 "term.m"
}

#line 385 "term.m"
MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
#line 385 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3)
#line 385 "term.m"
{
#line 1277 "term.m"
  {
#line 1277 "term.m"
    MR_bool mercury__term__succeeded;
#line 1277 "term.m"
    MR_Word mercury__term__VS_2 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 1277 "term.m"
    return mercury__term__VS_2;
#line 1277 "term.m"
  }
#line 385 "term.m"
}

#line 374 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
#line 374 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 374 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 374 "term.m"
{
#line 1416 "term.m"
  {
#line 1416 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1416 "term.m"
    MR_Word mercury__term__ArgTerms_3;
#line 1416 "term.m"
    MR_Word mercury__term__V_2_2;
#line 1416 "term.m"
    MR_Word mercury__term__V_4_4;

#line 1416 "term.m"
    if (mercury__term__succeeded)
#line 1416 "term.m"
      {
#line 1416 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1416 "term.m"
        mercury__term__ArgTerms_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1416 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1417 "term.m"
        {
#line 1417 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_3);
        }
#line 1416 "term.m"
      }
#line 1416 "term.m"
    return mercury__term__succeeded;
#line 1416 "term.m"
  }
#line 374 "term.m"
}

#line 370 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
#line 370 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 370 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 370 "term.m"
  MR_Word mercury__term__Bindings_2)
#line 370 "term.m"
{
#line 1400 "term.m"
  while (MR_TRUE)
#line 1400 "term.m"
    {
#line 1400 "term.m"
      /* tailcall optimized into a loop */
#line 1400 "term.m"
      {
#line 1400 "term.m"
        MR_bool mercury__term__succeeded;

#line 1400 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1403 "term.m"
          {
#line 1403 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1403 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1403 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1404 "term.m"
            {
#line 1404 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 1403 "term.m"
          }
#line 1400 "term.m"
        else
#line 1400 "term.m"
          {
#line 1400 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1400 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 1400 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1400 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 1400 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1400 "term.m"
            MR_Word mercury__term__Binding_6;
#line 1400 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 11256 "term.c"
            {
#line 11258 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11260 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 11262 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 11264 "term.c"
            }
#line 11266 "term.c"
            {
#line 11268 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11270 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 11272 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 11274 "term.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__TypeInfo_13_13, mercury__term__TypeInfo_15_15, (MR_Word) mercury__term__Bindings_2, mercury__term__V_3, &mercury__term__conv0_Binding_6);
            }
#line 41 "map.opt"
            if (mercury__term__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__term__Binding_6 = ((MR_Word) mercury__term__conv0_Binding_6);
#line 41 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 1400 "term.m"
            if (mercury__term__succeeded)
#line 1402 "term.m"
              {
#line 1402 "term.m"
                /* direct tailcall eliminated */
#line 1402 "term.m"
                {
#line 1402 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 1402 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1402 "term.m"
                }
#line 1402 "term.m"
                continue;
#line 1402 "term.m"
              }
#line 1400 "term.m"
          }
#line 1400 "term.m"
        return mercury__term__succeeded;
#line 1400 "term.m"
      }
#line 1400 "term.m"
      break;
#line 1400 "term.m"
    }
#line 370 "term.m"
}

#line 364 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
#line 364 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 364 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 364 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 364 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 364 "term.m"
{
#line 1373 "term.m"
  {
#line 1373 "term.m"
    MR_bool mercury__term__succeeded;

#line 1373 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "term.m"
    else
#line 1374 "term.m"
      {
#line 1374 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1374 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1374 "term.m"
        MR_Word mercury__term__Var_8;
#line 1374 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1366 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1364 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1364 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 11366 "term.c"
        {
#line 11368 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11370 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 11372 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 11374 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__TypeInfo_10_16, mercury__term__TypeInfo_10_16, (MR_Word) mercury__term__HeadVar__1_1, mercury__term__Var0_6, &mercury__term__conv0_NewVar_14);
        }
#line 41 "map.opt"
        if (mercury__term__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term__NewVar_14 = ((MR_Word) mercury__term__conv0_NewVar_14);
#line 41 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1366 "term.m"
        if (mercury__term__succeeded)
#line 1365 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1366 "term.m"
        else
#line 1367 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1376 "term.m"
        {
#line 1376 "term.m"
          mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1374 "term.m"
        {
#line 1374 "term.m"
          MR_Word base;
#line 1374 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1374 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1374 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1374 "term.m"
        }
#line 1374 "term.m"
      }
#line 1373 "term.m"
  }
#line 364 "term.m"
}

#line 362 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
#line 362 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 362 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 362 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 362 "term.m"
{
#line 1371 "term.m"
  {
#line 1371 "term.m"
    MR_bool mercury__term__succeeded;
#line 1371 "term.m"
    MR_Word mercury__term__Vars_6;

#line 1371 "term.m"
    {
#line 1371 "term.m"
      mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, &mercury__term__Vars_6);
    }
#line 1371 "term.m"
    return mercury__term__Vars_6;
#line 1371 "term.m"
  }
#line 362 "term.m"
}

#line 357 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
#line 357 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 357 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 357 "term.m"
  MR_Word mercury__term__Var0_5,
#line 357 "term.m"
  MR_Word * mercury__term__Var_6)
#line 357 "term.m"
{
#line 1366 "term.m"
  {
#line 1366 "term.m"
    MR_bool mercury__term__succeeded;
#line 1366 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1364 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1364 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 11481 "term.c"
    {
#line 11483 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11485 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 11487 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 11489 "term.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__TypeInfo_10_10, mercury__term__TypeInfo_10_10, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_7);
    }
#line 41 "map.opt"
    if (mercury__term__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__term__NewVar_7 = ((MR_Word) mercury__term__conv0_NewVar_7);
#line 41 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 1366 "term.m"
    if (mercury__term__succeeded)
#line 1365 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1366 "term.m"
    else
#line 1367 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1366 "term.m"
  }
#line 357 "term.m"
}

#line 355 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
#line 355 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 355 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 355 "term.m"
  MR_Word mercury__term__Var0_5)
#line 355 "term.m"
{
#line 1366 "term.m"
  {
#line 1366 "term.m"
    MR_bool mercury__term__succeeded;
#line 1366 "term.m"
    MR_Word mercury__term__Var_6;
#line 1366 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1364 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1364 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 11545 "term.c"
    {
#line 11547 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11549 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 11551 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 11553 "term.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_11);
    }
#line 41 "map.opt"
    if (mercury__term__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
#line 41 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 1366 "term.m"
    if (mercury__term__succeeded)
#line 1365 "term.m"
      mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1366 "term.m"
    else
#line 1367 "term.m"
      mercury__term__Var_6 = mercury__term__Var0_5;
#line 1366 "term.m"
    return mercury__term__Var_6;
#line 1366 "term.m"
  }
#line 355 "term.m"
}

#line 350 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
#line 350 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 350 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 350 "term.m"
  MR_Word mercury__term__Renaming_2,
#line 350 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 350 "term.m"
{
#line 1355 "term.m"
  {
#line 1355 "term.m"
    MR_bool mercury__term__succeeded;

#line 1355 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1355 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1355 "term.m"
    else
#line 1356 "term.m"
      {
#line 1356 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1356 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1356 "term.m"
        MR_Word mercury__term__Term_8;
#line 1356 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1357 "term.m"
        {
#line 1357 "term.m"
          mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__Renaming_2, &mercury__term__Term_8);
        }
#line 1358 "term.m"
        {
#line 1358 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__Renaming_2, &mercury__term__Terms_9);
        }
#line 1356 "term.m"
        {
#line 1356 "term.m"
          MR_Word base;
#line 1356 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1356 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1356 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1356 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1356 "term.m"
        }
#line 1356 "term.m"
      }
#line 1355 "term.m"
  }
#line 350 "term.m"
}

#line 348 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
#line 348 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 348 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 348 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 348 "term.m"
{
#line 1353 "term.m"
  {
#line 1353 "term.m"
    MR_bool mercury__term__succeeded;
#line 1353 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1353 "term.m"
    {
#line 1353 "term.m"
      mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Terms0_4, mercury__term__Renaming_5, &mercury__term__Terms_6);
    }
#line 1353 "term.m"
    return mercury__term__Terms_6;
#line 1353 "term.m"
  }
#line 348 "term.m"
}

#line 343 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
#line 343 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 343 "term.m"
  MR_Word mercury__term__Term0_4,
#line 343 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 343 "term.m"
  MR_Word * mercury__term__Term_6)
#line 343 "term.m"
{
#line 1346 "term.m"
  {
#line 1346 "term.m"
    MR_bool mercury__term__succeeded;

#line 1346 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1343 "term.m"
      {
#line 1343 "term.m"
        MR_Word mercury__term__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1343 "term.m"
        MR_Word mercury__term__ArgTerms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1343 "term.m"
        MR_Word mercury__term__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));
#line 1343 "term.m"
        MR_Word mercury__term__ArgTerms_10;

#line 1344 "term.m"
        {
#line 1344 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms0_8, mercury__term__Renaming_5, &mercury__term__ArgTerms_10);
        }
#line 1345 "term.m"
        {
#line 1345 "term.m"
          MR_Word base;
#line 1345 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "term.m"
          *mercury__term__Term_6 = base;
#line 1345 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_7));
#line 1345 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_10));
#line 1345 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_9));
#line 1345 "term.m"
        }
#line 1343 "term.m"
      }
#line 1346 "term.m"
    else
#line 1347 "term.m"
      {
#line 1347 "term.m"
        MR_Word mercury__term__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1347 "term.m"
        MR_Word mercury__term__Var_12;
#line 1347 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1366 "term.m"
        MR_Word mercury__term__NewVar_18;
#line 1364 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1364 "term.m"
        MR_Word mercury__term__TypeInfo_10_20;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_18;

#line 11754 "term.c"
        {
#line 11756 "term.c"
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11758 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
#line 11760 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 11762 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_10_20, mercury__term__TypeInfo_10_20, (MR_Word) mercury__term__Renaming_5, mercury__term__Var0_11, &mercury__term__conv0_NewVar_18);
        }
#line 41 "map.opt"
        if (mercury__term__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term__NewVar_18 = ((MR_Word) mercury__term__conv0_NewVar_18);
#line 41 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1366 "term.m"
        if (mercury__term__succeeded)
#line 1365 "term.m"
          mercury__term__Var_12 = mercury__term__NewVar_18;
#line 1366 "term.m"
        else
#line 1367 "term.m"
          mercury__term__Var_12 = mercury__term__Var0_11;
#line 1349 "term.m"
        {
#line 1349 "term.m"
          MR_Word base;
#line 1349 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "term.m"
          *mercury__term__Term_6 = base;
#line 1349 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_12));
#line 1349 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_13));
#line 1349 "term.m"
        }
#line 1347 "term.m"
      }
#line 1346 "term.m"
  }
#line 343 "term.m"
}

#line 342 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
#line 342 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 342 "term.m"
  MR_Word mercury__term__Term0_4,
#line 342 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 342 "term.m"
{
#line 1339 "term.m"
  {
#line 1339 "term.m"
    MR_bool mercury__term__succeeded;
#line 1339 "term.m"
    MR_Word mercury__term__Term_6;

#line 1339 "term.m"
    {
#line 1339 "term.m"
      mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term0_4, mercury__term__Renaming_5, &mercury__term__Term_6);
    }
#line 1339 "term.m"
    return mercury__term__Term_6;
#line 1339 "term.m"
  }
#line 342 "term.m"
}

#line 336 "term.m"
void MR_CALL 
mercury__term__relabel_variables_4_p_0(
#line 336 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 336 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 336 "term.m"
  MR_Word mercury__term__OldVar_2,
#line 336 "term.m"
  MR_Word mercury__term__NewVar_3,
#line 336 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 336 "term.m"
{
#line 1331 "term.m"
  {
#line 1331 "term.m"
    MR_bool mercury__term__succeeded;

#line 1331 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1331 "term.m"
    else
#line 1332 "term.m"
      {
#line 1332 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1332 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1332 "term.m"
        MR_Word mercury__term__Term_11;
#line 1332 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1333 "term.m"
        {
#line 1333 "term.m"
          mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Term_11);
        }
#line 1334 "term.m"
        {
#line 1334 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Terms_12);
        }
#line 1332 "term.m"
        {
#line 1332 "term.m"
          MR_Word base;
#line 1332 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1332 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1332 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1332 "term.m"
        }
#line 1332 "term.m"
      }
#line 1331 "term.m"
  }
#line 336 "term.m"
}

#line 335 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
#line 335 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 335 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 335 "term.m"
  MR_Word mercury__term__OldVar_6,
#line 335 "term.m"
  MR_Word mercury__term__NewVar_7)
#line 335 "term.m"
{
#line 1329 "term.m"
  {
#line 1329 "term.m"
    MR_bool mercury__term__succeeded;
#line 1329 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1329 "term.m"
    {
#line 1329 "term.m"
      mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms0_5, mercury__term__OldVar_6, mercury__term__NewVar_7, &mercury__term__Terms_8);
    }
#line 1329 "term.m"
    return mercury__term__Terms_8;
#line 1329 "term.m"
  }
#line 335 "term.m"
}

#line 329 "term.m"
void MR_CALL 
mercury__term__relabel_variable_4_p_0(
#line 329 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 329 "term.m"
  MR_Word mercury__term__Term0_5,
#line 329 "term.m"
  MR_Word mercury__term__OldVar_6,
#line 329 "term.m"
  MR_Word mercury__term__NewVar_7,
#line 329 "term.m"
  MR_Word * mercury__term__Term_8)
#line 329 "term.m"
{
#line 1319 "term.m"
  {
#line 1319 "term.m"
    MR_bool mercury__term__succeeded;

#line 1319 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1316 "term.m"
      {
#line 1316 "term.m"
        MR_Word mercury__term__Const_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1316 "term.m"
        MR_Word mercury__term__ArgTerms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1316 "term.m"
        MR_Word mercury__term__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1316 "term.m"
        MR_Word mercury__term__ArgTerms_12;

#line 1317 "term.m"
        {
#line 1317 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms0_10, mercury__term__OldVar_6, mercury__term__NewVar_7, &mercury__term__ArgTerms_12);
        }
#line 1318 "term.m"
        {
#line 1318 "term.m"
          MR_Word base;
#line 1318 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1318 "term.m"
          *mercury__term__Term_8 = base;
#line 1318 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Const_9));
#line 1318 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
#line 1318 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_11));
#line 1318 "term.m"
        }
#line 1316 "term.m"
      }
#line 1319 "term.m"
    else
#line 1320 "term.m"
      {
#line 1320 "term.m"
        MR_Word mercury__term__Var0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1320 "term.m"
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 510 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_13;
#line 510 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__OldVar_6;

#line 510 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 510 "term.m"
        if (mercury__term__succeeded)
#line 510 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
        else
#line 510 "term.m"
          {
#line 510 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_13;
#line 510 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__OldVar_6;

#line 12022 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 510 "term.m"
          }
#line 1323 "term.m"
        if (mercury__term__succeeded)
#line 1322 "term.m"
          {
#line 1322 "term.m"
            MR_Word base;
#line 1322 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "term.m"
            *mercury__term__Term_8 = base;
#line 1322 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__NewVar_7));
#line 1322 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_14));
#line 1322 "term.m"
          }
#line 1323 "term.m"
        else
#line 1324 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_5;
#line 1320 "term.m"
      }
#line 1319 "term.m"
  }
#line 329 "term.m"
}

#line 328 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
#line 328 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 328 "term.m"
  MR_Word mercury__term__Term0_5,
#line 328 "term.m"
  MR_Word mercury__term__OldVar_6,
#line 328 "term.m"
  MR_Word mercury__term__NewVar_7)
#line 328 "term.m"
{
#line 1312 "term.m"
  {
#line 1312 "term.m"
    MR_bool mercury__term__succeeded;
#line 1312 "term.m"
    MR_Word mercury__term__Term_8;

#line 1312 "term.m"
    {
#line 1312 "term.m"
      mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Term0_5, mercury__term__OldVar_6, mercury__term__NewVar_7, &mercury__term__Term_8);
    }
#line 1312 "term.m"
    return mercury__term__Term_8;
#line 1312 "term.m"
  }
#line 328 "term.m"
}

#line 320 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
#line 320 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 320 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 320 "term.m"
  MR_Word mercury__term__Var_6,
#line 320 "term.m"
  MR_Word mercury__term__Subst_7)
#line 320 "term.m"
{
#line 1101 "term.m"
  while (MR_TRUE)
#line 1101 "term.m"
    {
#line 1101 "term.m"
      /* tailcall optimized into a loop */
#line 1101 "term.m"
      {
#line 1101 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1101 "term.m"
        MR_Word mercury__term__Term_4;
#line 1101 "term.m"
        MR_Word mercury__term__Terms_5;

#line 1101 "term.m"
        if (mercury__term__succeeded)
#line 1101 "term.m"
          {
#line 1101 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1101 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1102 "term.m"
            {
#line 1102 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Var_6, mercury__term__Subst_7);
            }
#line 1104 "term.m"
            if (mercury__term__succeeded)
#line 1103 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1104 "term.m"
            else
#line 1105 "term.m"
              {
#line 1105 "term.m"
                /* direct tailcall eliminated */
#line 1105 "term.m"
                {
#line 1105 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1105 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1105 "term.m"
                }
#line 1105 "term.m"
                continue;
#line 1105 "term.m"
              }
#line 1101 "term.m"
          }
#line 1101 "term.m"
        return mercury__term__succeeded;
#line 1101 "term.m"
      }
#line 1101 "term.m"
      break;
#line 1101 "term.m"
    }
#line 320 "term.m"
}

#line 316 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
#line 316 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 316 "term.m"
  MR_Word mercury__term__Term_4,
#line 316 "term.m"
  MR_Word mercury__term__Var_5,
#line 316 "term.m"
  MR_Word mercury__term__Subst_6)
#line 316 "term.m"
{
#line 1096 "term.m"
  while (MR_TRUE)
#line 1096 "term.m"
    {
#line 1096 "term.m"
      /* tailcall optimized into a loop */
#line 1096 "term.m"
      {
#line 1096 "term.m"
        MR_bool mercury__term__succeeded;

#line 1096 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 1097 "term.m"
          {
#line 1097 "term.m"
            MR_Word mercury__term__ArgTerms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 1097 "term.m"
            MR_Word mercury__term___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 1097 "term.m"
            MR_Word mercury__term___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 1098 "term.m"
            {
#line 1098 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms_11, mercury__term__Var_5, mercury__term__Subst_6);
            }
#line 1097 "term.m"
          }
#line 1096 "term.m"
        else
#line 1089 "term.m"
          {
#line 1089 "term.m"
            MR_Word mercury__term__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 1089 "term.m"
            MR_Word mercury__term___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));
#line 510 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_7;
#line 510 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Var_5;

#line 510 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 510 "term.m"
            if (mercury__term__succeeded)
#line 510 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
            else
#line 510 "term.m"
              {
#line 510 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_7;
#line 510 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Var_5;

#line 12232 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 510 "term.m"
              }
#line 1092 "term.m"
            if (mercury__term__succeeded)
#line 1091 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1092 "term.m"
            else
#line 1093 "term.m"
              {
#line 1093 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1093 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 1093 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1093 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 1093 "term.m"
                MR_Word mercury__term__TermBoundToX_9;
#line 41 "map.opt"
                MR_Box mercury__term__conv0_TermBoundToX_9;

#line 12257 "term.c"
                {
#line 12259 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12261 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12263 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12265 "term.c"
                }
#line 12267 "term.c"
                {
#line 12269 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12271 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 12273 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12275 "term.c"
                }
#line 41 "map.opt"
                {
#line 41 "map.opt"
                  mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_6, mercury__term__X_7, &mercury__term__conv0_TermBoundToX_9);
                }
#line 41 "map.opt"
                if (mercury__term__succeeded)
#line 41 "map.opt"
                  {
#line 41 "map.opt"
                    mercury__term__TermBoundToX_9 = ((MR_Word) mercury__term__conv0_TermBoundToX_9);
#line 41 "map.opt"
                    mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
                  }
#line 1093 "term.m"
                if (mercury__term__succeeded)
#line 1094 "term.m"
                  {
#line 1094 "term.m"
                    /* direct tailcall eliminated */
#line 1094 "term.m"
                    {
#line 1094 "term.m"
                      MR_Word mercury__term__Term__tmp_copy_4 = mercury__term__TermBoundToX_9;

#line 1094 "term.m"
                      mercury__term__Term_4 = mercury__term__Term__tmp_copy_4;
#line 1094 "term.m"
                    }
#line 1094 "term.m"
                    continue;
#line 1094 "term.m"
                  }
#line 1093 "term.m"
              }
#line 1089 "term.m"
          }
#line 1096 "term.m"
        return mercury__term__succeeded;
#line 1096 "term.m"
      }
#line 1096 "term.m"
      break;
#line 1096 "term.m"
    }
#line 316 "term.m"
}

#line 309 "term.m"
void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
#line 309 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 309 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 309 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 309 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 309 "term.m"
{
#line 1267 "term.m"
  {
#line 1267 "term.m"
    MR_bool mercury__term__succeeded;

#line 1267 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1267 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1267 "term.m"
    else
#line 1268 "term.m"
      {
#line 1268 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1268 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1268 "term.m"
        MR_Word mercury__term__Term_8;
#line 1268 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1269 "term.m"
        {
#line 1269 "term.m"
          mercury__term__apply_renaming_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1270 "term.m"
        {
#line 1270 "term.m"
          mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1268 "term.m"
        {
#line 1268 "term.m"
          MR_Word base;
#line 1268 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1268 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1268 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1268 "term.m"
        }
#line 1268 "term.m"
      }
#line 1267 "term.m"
  }
#line 309 "term.m"
}

#line 308 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
#line 308 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 308 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 308 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 308 "term.m"
{
#line 1265 "term.m"
  {
#line 1265 "term.m"
    MR_bool mercury__term__succeeded;
#line 1265 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1265 "term.m"
    {
#line 1265 "term.m"
      mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Terms0_4, mercury__term__Renaming_5, &mercury__term__Terms_6);
    }
#line 1265 "term.m"
    return mercury__term__Terms_6;
#line 1265 "term.m"
  }
#line 308 "term.m"
}

#line 304 "term.m"
void MR_CALL 
mercury__term__apply_renaming_3_p_0(
#line 304 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 304 "term.m"
  MR_Word mercury__term__Term0_4,
#line 304 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 304 "term.m"
  MR_Word * mercury__term__Term_6)
#line 304 "term.m"
{
#line 1258 "term.m"
  {
#line 1258 "term.m"
    MR_bool mercury__term__succeeded;

#line 1258 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1259 "term.m"
      {
#line 1259 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1259 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1259 "term.m"
        MR_Word mercury__term__ArgTerms_12;
#line 1259 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));

#line 1260 "term.m"
        {
#line 1260 "term.m"
          mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms0_11, mercury__term__Renaming_5, &mercury__term__ArgTerms_12);
        }
#line 1261 "term.m"
        {
#line 1261 "term.m"
          MR_Word base;
#line 1261 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "term.m"
          *mercury__term__Term_6 = base;
#line 1261 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1261 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
#line 1261 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1261 "term.m"
        }
#line 1259 "term.m"
      }
#line 1258 "term.m"
    else
#line 1252 "term.m"
      {
#line 1252 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1252 "term.m"
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1255 "term.m"
        MR_Word mercury__term__ReplacementVar_9;
#line 1253 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1253 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_ReplacementVar_9;

#line 12493 "term.c"
        {
#line 12495 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12497 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12499 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12501 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_16_16, (MR_Word) mercury__term__Renaming_5, mercury__term__Var_7, &mercury__term__conv0_ReplacementVar_9);
        }
#line 41 "map.opt"
        if (mercury__term__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term__ReplacementVar_9 = ((MR_Word) mercury__term__conv0_ReplacementVar_9);
#line 41 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1255 "term.m"
        if (mercury__term__succeeded)
#line 1254 "term.m"
          {
#line 1254 "term.m"
            MR_Word base;
#line 1254 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "term.m"
            *mercury__term__Term_6 = base;
#line 1254 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_9));
#line 1254 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
#line 1254 "term.m"
          }
#line 1255 "term.m"
        else
#line 1256 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1252 "term.m"
      }
#line 1258 "term.m"
  }
#line 304 "term.m"
}

#line 303 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
#line 303 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 303 "term.m"
  MR_Word mercury__term__Term0_4,
#line 303 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 303 "term.m"
{
#line 1248 "term.m"
  {
#line 1248 "term.m"
    MR_bool mercury__term__succeeded;
#line 1248 "term.m"
    MR_Word mercury__term__Term_6;

#line 1248 "term.m"
    {
#line 1248 "term.m"
      mercury__term__apply_renaming_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term0_4, mercury__term__Renaming_5, &mercury__term__Term_6);
    }
#line 1248 "term.m"
    return mercury__term__Term_6;
#line 1248 "term.m"
  }
#line 303 "term.m"
}

#line 296 "term.m"
void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
#line 296 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 296 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 296 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 296 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 296 "term.m"
{
#line 1242 "term.m"
  {
#line 1242 "term.m"
    MR_bool mercury__term__succeeded;

#line 1242 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1242 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1242 "term.m"
    else
#line 1243 "term.m"
      {
#line 1243 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1243 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1243 "term.m"
        MR_Word mercury__term__Term_8;
#line 1243 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1244 "term.m"
        {
#line 1244 "term.m"
          mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1245 "term.m"
        {
#line 1245 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1243 "term.m"
        {
#line 1243 "term.m"
          MR_Word base;
#line 1243 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1243 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1243 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1243 "term.m"
        }
#line 1243 "term.m"
      }
#line 1242 "term.m"
  }
#line 296 "term.m"
}

#line 294 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
#line 294 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 294 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 294 "term.m"
  MR_Word mercury__term__Subst_5)
#line 294 "term.m"
{
#line 1240 "term.m"
  {
#line 1240 "term.m"
    MR_bool mercury__term__succeeded;
#line 1240 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1240 "term.m"
    {
#line 1240 "term.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Terms0_4, mercury__term__Subst_5, &mercury__term__Terms_6);
    }
#line 1240 "term.m"
    return mercury__term__Terms_6;
#line 1240 "term.m"
  }
#line 294 "term.m"
}

#line 289 "term.m"
void MR_CALL 
mercury__term__apply_substitution_3_p_0(
#line 289 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 289 "term.m"
  MR_Word mercury__term__Term0_4,
#line 289 "term.m"
  MR_Word mercury__term__Subst_5,
#line 289 "term.m"
  MR_Word * mercury__term__Term_6)
#line 289 "term.m"
{
#line 1233 "term.m"
  {
#line 1233 "term.m"
    MR_bool mercury__term__succeeded;

#line 1233 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "term.m"
      {
#line 1234 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1234 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1234 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));
#line 1234 "term.m"
        MR_Word mercury__term__ArgTerms_13;

#line 1235 "term.m"
        {
#line 1235 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms0_11, mercury__term__Subst_5, &mercury__term__ArgTerms_13);
        }
#line 1236 "term.m"
        {
#line 1236 "term.m"
          MR_Word base;
#line 1236 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "term.m"
          *mercury__term__Term_6 = base;
#line 1236 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1236 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1236 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1236 "term.m"
        }
#line 1234 "term.m"
      }
#line 1233 "term.m"
    else
#line 1227 "term.m"
      {
#line 1227 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1227 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1230 "term.m"
        MR_Word mercury__term__ReplacementTerm_9;
#line 1228 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1228 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1228 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1228 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 12746 "term.c"
        {
#line 12748 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12750 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12752 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12754 "term.c"
        }
#line 12756 "term.c"
        {
#line 12758 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12760 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 12762 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12764 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_5, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
        }
#line 41 "map.opt"
        if (mercury__term__succeeded)
#line 41 "map.opt"
          {
#line 41 "map.opt"
            mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
#line 41 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
          }
#line 1230 "term.m"
        if (mercury__term__succeeded)
#line 1229 "term.m"
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
#line 1230 "term.m"
        else
#line 1231 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1227 "term.m"
      }
#line 1233 "term.m"
  }
#line 289 "term.m"
}

#line 288 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
#line 288 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 288 "term.m"
  MR_Word mercury__term__Term0_4,
#line 288 "term.m"
  MR_Word mercury__term__Subst_5)
#line 288 "term.m"
{
#line 1223 "term.m"
  {
#line 1223 "term.m"
    MR_bool mercury__term__succeeded;
#line 1223 "term.m"
    MR_Word mercury__term__Term_6;

#line 1223 "term.m"
    {
#line 1223 "term.m"
      mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term0_4, mercury__term__Subst_5, &mercury__term__Term_6);
    }
#line 1223 "term.m"
    return mercury__term__Term_6;
#line 1223 "term.m"
  }
#line 288 "term.m"
}

#line 281 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
#line 281 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 281 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 281 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 281 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 281 "term.m"
{
#line 1215 "term.m"
  {
#line 1215 "term.m"
    MR_bool mercury__term__succeeded;

#line 1215 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1215 "term.m"
    else
#line 1216 "term.m"
      {
#line 1216 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1216 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1216 "term.m"
        MR_Word mercury__term__Term_8;
#line 1216 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1217 "term.m"
        {
#line 1217 "term.m"
          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1218 "term.m"
        {
#line 1218 "term.m"
          mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1216 "term.m"
        {
#line 1216 "term.m"
          MR_Word base;
#line 1216 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1216 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1216 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1216 "term.m"
        }
#line 1216 "term.m"
      }
#line 1215 "term.m"
  }
#line 281 "term.m"
}

#line 279 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
#line 279 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 279 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 279 "term.m"
  MR_Word mercury__term__Subst_5)
#line 279 "term.m"
{
#line 1213 "term.m"
  {
#line 1213 "term.m"
    MR_bool mercury__term__succeeded;
#line 1213 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1213 "term.m"
    {
#line 1213 "term.m"
      mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Terms0_4, mercury__term__Subst_5, &mercury__term__Terms_6);
    }
#line 1213 "term.m"
    return mercury__term__Terms_6;
#line 1213 "term.m"
  }
#line 279 "term.m"
}

#line 274 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
#line 274 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 274 "term.m"
  MR_Word mercury__term__Term0_4,
#line 274 "term.m"
  MR_Word mercury__term__Subst_5,
#line 274 "term.m"
  MR_Word * mercury__term__Term_6)
#line 274 "term.m"
{
#line 1206 "term.m"
  while (MR_TRUE)
#line 1206 "term.m"
    {
#line 1206 "term.m"
      /* tailcall optimized into a loop */
#line 1206 "term.m"
      {
#line 1206 "term.m"
        MR_bool mercury__term__succeeded;

#line 1206 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1207 "term.m"
          {
#line 1207 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1207 "term.m"
            MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1207 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));
#line 1207 "term.m"
            MR_Word mercury__term__ArgTerms_13;

#line 1208 "term.m"
            {
#line 1208 "term.m"
              mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms0_11, mercury__term__Subst_5, &mercury__term__ArgTerms_13);
            }
#line 1209 "term.m"
            {
#line 1209 "term.m"
              MR_Word base;
#line 1209 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "term.m"
              *mercury__term__Term_6 = base;
#line 1209 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1209 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1209 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1209 "term.m"
            }
#line 1207 "term.m"
          }
#line 1206 "term.m"
        else
#line 1199 "term.m"
          {
#line 1199 "term.m"
            MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1199 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1203 "term.m"
            MR_Word mercury__term__ReplacementTerm_9;
#line 1200 "term.m"
            MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1200 "term.m"
            MR_Word mercury__term__TypeInfo_16_16;
#line 1200 "term.m"
            MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1200 "term.m"
            MR_Word mercury__term__TypeInfo_18_18;
#line 41 "map.opt"
            MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 13003 "term.c"
            {
#line 13005 "term.c"
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13007 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 13009 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 13011 "term.c"
            }
#line 13013 "term.c"
            {
#line 13015 "term.c"
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13017 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 13019 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 13021 "term.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_5, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
            }
#line 41 "map.opt"
            if (mercury__term__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
#line 41 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 1203 "term.m"
            if (mercury__term__succeeded)
#line 1202 "term.m"
              {
#line 1202 "term.m"
                /* direct tailcall eliminated */
#line 1202 "term.m"
                {
#line 1202 "term.m"
                  MR_Word mercury__term__Term0__tmp_copy_4 = mercury__term__ReplacementTerm_9;

#line 1202 "term.m"
                  mercury__term__Term0_4 = mercury__term__Term0__tmp_copy_4;
#line 1202 "term.m"
                }
#line 1202 "term.m"
                continue;
#line 1202 "term.m"
              }
#line 1203 "term.m"
            else
#line 1204 "term.m"
              *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1199 "term.m"
          }
#line 1206 "term.m"
      }
#line 1206 "term.m"
      break;
#line 1206 "term.m"
    }
#line 274 "term.m"
}

#line 273 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
#line 273 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 273 "term.m"
  MR_Word mercury__term__Term0_4,
#line 273 "term.m"
  MR_Word mercury__term__Subst_5)
#line 273 "term.m"
{
#line 1195 "term.m"
  {
#line 1195 "term.m"
    MR_bool mercury__term__succeeded;
#line 1195 "term.m"
    MR_Word mercury__term__Term_6;

#line 1195 "term.m"
    {
#line 1195 "term.m"
      mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term0_4, mercury__term__Subst_5, &mercury__term__Term_6);
    }
#line 1195 "term.m"
    return mercury__term__Term_6;
#line 1195 "term.m"
  }
#line 273 "term.m"
}

#line 265 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
#line 265 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 265 "term.m"
  MR_Word mercury__term__Vars_5,
#line 265 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 265 "term.m"
  MR_Word mercury__term__Terms0_7,
#line 265 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 265 "term.m"
{
#line 1175 "term.m"
  {
#line 1175 "term.m"
    MR_bool mercury__term__succeeded;
#line 1175 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1177 "term.m"
    {
#line 1177 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1178 "term.m"
    {
#line 1178 "term.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Terms0_7, mercury__term__Subst_10, mercury__term__Terms_8);
#line 1178 "term.m"
      return;
    }
#line 1175 "term.m"
  }
#line 265 "term.m"
}

#line 263 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
#line 263 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 263 "term.m"
  MR_Word mercury__term__Vars_5,
#line 263 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 263 "term.m"
  MR_Word mercury__term__Terms0_7)
#line 263 "term.m"
{
#line 1175 "term.m"
  {
#line 1175 "term.m"
    MR_bool mercury__term__succeeded;
#line 1175 "term.m"
    MR_Word mercury__term__Terms_8;
#line 1175 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1177 "term.m"
    {
#line 1177 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1178 "term.m"
    {
#line 1178 "term.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms0_7, mercury__term__Subst_15, &mercury__term__Terms_8);
    }
#line 1175 "term.m"
    return mercury__term__Terms_8;
#line 1175 "term.m"
  }
#line 263 "term.m"
}

#line 258 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
#line 258 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 258 "term.m"
  MR_Word mercury__term__Vars_5,
#line 258 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 258 "term.m"
  MR_Word mercury__term__Term0_7,
#line 258 "term.m"
  MR_Word * mercury__term__Term_8)
#line 258 "term.m"
{
#line 1167 "term.m"
  {
#line 1167 "term.m"
    MR_bool mercury__term__succeeded;
#line 1167 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1167 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1169 "term.m"
    {
#line 1169 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1170 "term.m"
    {
#line 1170 "term.m"
      mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Term0_7, mercury__term__Subst_10, mercury__term__Term_8);
#line 1170 "term.m"
      return;
    }
#line 1167 "term.m"
  }
#line 258 "term.m"
}

#line 256 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
#line 256 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 256 "term.m"
  MR_Word mercury__term__Vars_5,
#line 256 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 256 "term.m"
  MR_Word mercury__term__Term0_7)
#line 256 "term.m"
{
#line 1167 "term.m"
  {
#line 1167 "term.m"
    MR_bool mercury__term__succeeded;
#line 1167 "term.m"
    MR_Word mercury__term__Term_8;
#line 1167 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1167 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1169 "term.m"
    {
#line 1169 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1170 "term.m"
    {
#line 1170 "term.m"
      mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Term0_7, mercury__term__Subst_15, &mercury__term__Term_8);
    }
#line 1167 "term.m"
    return mercury__term__Term_8;
#line 1167 "term.m"
  }
#line 256 "term.m"
}

#line 246 "term.m"
void MR_CALL 
mercury__term__substitute_list_4_p_0(
#line 246 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 246 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 246 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 246 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 246 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 246 "term.m"
{
#line 1157 "term.m"
  {
#line 1157 "term.m"
    MR_bool mercury__term__succeeded;

#line 1157 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1157 "term.m"
    else
#line 1158 "term.m"
      {
#line 1158 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1158 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1158 "term.m"
        MR_Word mercury__term__Term_11;
#line 1158 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1159 "term.m"
        {
#line 1159 "term.m"
          mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Term_11);
        }
#line 1160 "term.m"
        {
#line 1160 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Terms_12);
        }
#line 1158 "term.m"
        {
#line 1158 "term.m"
          MR_Word base;
#line 1158 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1158 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1158 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1158 "term.m"
        }
#line 1158 "term.m"
      }
#line 1157 "term.m"
  }
#line 246 "term.m"
}

#line 245 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
#line 245 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 245 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 245 "term.m"
  MR_Word mercury__term__Var_6,
#line 245 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 245 "term.m"
{
#line 1155 "term.m"
  {
#line 1155 "term.m"
    MR_bool mercury__term__succeeded;
#line 1155 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1155 "term.m"
    {
#line 1155 "term.m"
      mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms0_5, mercury__term__Var_6, mercury__term__ReplacementTerm_7, &mercury__term__Terms_8);
    }
#line 1155 "term.m"
    return mercury__term__Terms_8;
#line 1155 "term.m"
  }
#line 245 "term.m"
}

#line 240 "term.m"
void MR_CALL 
mercury__term__substitute_4_p_0(
#line 240 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 240 "term.m"
  MR_Word mercury__term__Term0_5,
#line 240 "term.m"
  MR_Word mercury__term__Var_6,
#line 240 "term.m"
  MR_Word mercury__term__ReplacementTerm_7,
#line 240 "term.m"
  MR_Word * mercury__term__Term_8)
#line 240 "term.m"
{
#line 1148 "term.m"
  {
#line 1148 "term.m"
    MR_bool mercury__term__succeeded;

#line 1148 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1149 "term.m"
      {
#line 1149 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1149 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1149 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1149 "term.m"
        MR_Word mercury__term__ArgTerms_14;

#line 1150 "term.m"
        {
#line 1150 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms0_12, mercury__term__Var_6, mercury__term__ReplacementTerm_7, &mercury__term__ArgTerms_14);
        }
#line 1151 "term.m"
        {
#line 1151 "term.m"
          MR_Word base;
#line 1151 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "term.m"
          *mercury__term__Term_8 = base;
#line 1151 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1151 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_14));
#line 1151 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1151 "term.m"
        }
#line 1149 "term.m"
      }
#line 1148 "term.m"
    else
#line 1142 "term.m"
      {
#line 1142 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1142 "term.m"
        MR_Word mercury__term___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 510 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 510 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_6;

#line 510 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 510 "term.m"
        if (mercury__term__succeeded)
#line 510 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
        else
#line 510 "term.m"
          {
#line 510 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 510 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_6;

#line 13450 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 510 "term.m"
          }
#line 1145 "term.m"
        if (mercury__term__succeeded)
#line 1144 "term.m"
          *mercury__term__Term_8 = mercury__term__ReplacementTerm_7;
#line 1145 "term.m"
        else
#line 1146 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_5;
#line 1142 "term.m"
      }
#line 1148 "term.m"
  }
#line 240 "term.m"
}

#line 239 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
#line 239 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 239 "term.m"
  MR_Word mercury__term__Term0_5,
#line 239 "term.m"
  MR_Word mercury__term__Var_6,
#line 239 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 239 "term.m"
{
#line 1138 "term.m"
  {
#line 1138 "term.m"
    MR_bool mercury__term__succeeded;
#line 1138 "term.m"
    MR_Word mercury__term__Term_8;

#line 1138 "term.m"
    {
#line 1138 "term.m"
      mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Term0_5, mercury__term__Var_6, mercury__term__ReplacementTerm_7, &mercury__term__Term_8);
    }
#line 1138 "term.m"
    return mercury__term__Term_8;
#line 1138 "term.m"
  }
#line 239 "term.m"
}

#line 231 "term.m"
void MR_CALL 
mercury__term__rename_list_4_p_0(
#line 231 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 231 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 231 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 231 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 231 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 231 "term.m"
{
#line 1130 "term.m"
  {
#line 1130 "term.m"
    MR_bool mercury__term__succeeded;

#line 1130 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1130 "term.m"
    else
#line 1131 "term.m"
      {
#line 1131 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1131 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1131 "term.m"
        MR_Word mercury__term__Term_11;
#line 1131 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1132 "term.m"
        {
#line 1132 "term.m"
          mercury__term__rename_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Term_11);
        }
#line 1133 "term.m"
        {
#line 1133 "term.m"
          mercury__term__rename_list_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Terms_12);
        }
#line 1131 "term.m"
        {
#line 1131 "term.m"
          MR_Word base;
#line 1131 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1131 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1131 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1131 "term.m"
        }
#line 1131 "term.m"
      }
#line 1130 "term.m"
  }
#line 231 "term.m"
}

#line 230 "term.m"
MR_Word MR_CALL 
mercury__term__rename_list_3_f_0(
#line 230 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 230 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 230 "term.m"
  MR_Word mercury__term__Var_6,
#line 230 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 230 "term.m"
{
#line 1128 "term.m"
  {
#line 1128 "term.m"
    MR_bool mercury__term__succeeded;
#line 1128 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1128 "term.m"
    {
#line 1128 "term.m"
      mercury__term__rename_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms0_5, mercury__term__Var_6, mercury__term__ReplacementVar_7, &mercury__term__Terms_8);
    }
#line 1128 "term.m"
    return mercury__term__Terms_8;
#line 1128 "term.m"
  }
#line 230 "term.m"
}

#line 223 "term.m"
void MR_CALL 
mercury__term__rename_4_p_0(
#line 223 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 223 "term.m"
  MR_Word mercury__term__Term0_5,
#line 223 "term.m"
  MR_Word mercury__term__Var_6,
#line 223 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 223 "term.m"
  MR_Word * mercury__term__Term_8)
#line 223 "term.m"
{
#line 1121 "term.m"
  {
#line 1121 "term.m"
    MR_bool mercury__term__succeeded;

#line 1121 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1122 "term.m"
      {
#line 1122 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1122 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1122 "term.m"
        MR_Word mercury__term__ArgTerms_13;
#line 1122 "term.m"
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));

#line 1123 "term.m"
        {
#line 1123 "term.m"
          mercury__term__rename_list_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms0_12, mercury__term__Var_6, mercury__term__ReplacementVar_7, &mercury__term__ArgTerms_13);
        }
#line 1124 "term.m"
        {
#line 1124 "term.m"
          MR_Word base;
#line 1124 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "term.m"
          *mercury__term__Term_8 = base;
#line 1124 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1124 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1124 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_14));
#line 1124 "term.m"
        }
#line 1122 "term.m"
      }
#line 1121 "term.m"
    else
#line 1115 "term.m"
      {
#line 1115 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1115 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 510 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 510 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_6;

#line 510 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 510 "term.m"
        if (mercury__term__succeeded)
#line 510 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
        else
#line 510 "term.m"
          {
#line 510 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 510 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_6;

#line 13685 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 510 "term.m"
          }
#line 1118 "term.m"
        if (mercury__term__succeeded)
#line 1117 "term.m"
          {
#line 1117 "term.m"
            MR_Word base;
#line 1117 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "term.m"
            *mercury__term__Term_8 = base;
#line 1117 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_7));
#line 1117 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1117 "term.m"
          }
#line 1118 "term.m"
        else
#line 1119 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_5;
#line 1115 "term.m"
      }
#line 1121 "term.m"
  }
#line 223 "term.m"
}

#line 222 "term.m"
MR_Word MR_CALL 
mercury__term__rename_3_f_0(
#line 222 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 222 "term.m"
  MR_Word mercury__term__Term0_5,
#line 222 "term.m"
  MR_Word mercury__term__Var_6,
#line 222 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 222 "term.m"
{
#line 1111 "term.m"
  {
#line 1111 "term.m"
    MR_bool mercury__term__succeeded;
#line 1111 "term.m"
    MR_Word mercury__term__Term_8;

#line 1111 "term.m"
    {
#line 1111 "term.m"
      mercury__term__rename_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Term0_5, mercury__term__Var_6, mercury__term__ReplacementVar_7, &mercury__term__Term_8);
    }
#line 1111 "term.m"
    return mercury__term__Term_8;
#line 1111 "term.m"
  }
#line 222 "term.m"
}

#line 214 "term.m"
MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
#line 214 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 214 "term.m"
  MR_Word mercury__term__Terms1_4,
#line 214 "term.m"
  MR_Word mercury__term__Terms2_5,
#line 214 "term.m"
  MR_Word * mercury__term__Subst_6)
#line 214 "term.m"
{
#line 1078 "term.m"
  {
#line 1078 "term.m"
    MR_bool mercury__term__succeeded;
#line 1078 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 1078 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 1078 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 866 "term.m"
    {
#line 866 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 48 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "term.m"
    {
#line 1083 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 1078 "term.m"
    return mercury__term__succeeded;
#line 1078 "term.m"
  }
#line 214 "term.m"
}

#line 207 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
#line 207 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_20,
#line 207 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 207 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 207 "term.m"
  MR_Word mercury__term__DontBindVars_3,
#line 207 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_4,
#line 207 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_5)
#line 207 "term.m"
{
#line 1056 "term.m"
  while (MR_TRUE)
#line 1056 "term.m"
    {
#line 1056 "term.m"
      /* tailcall optimized into a loop */
#line 1056 "term.m"
      {
#line 1056 "term.m"
        MR_bool mercury__term__succeeded;

#line 1056 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1056 "term.m"
          {
#line 1056 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "term.m"
            if (mercury__term__succeeded)
#line 1056 "term.m"
              {
#line 1056 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_5 = mercury__term__STATE_VARIABLE_Subst_0_4;
#line 1056 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1056 "term.m"
              }
#line 1056 "term.m"
          }
#line 1056 "term.m"
        else
#line 1058 "term.m"
          {
#line 1058 "term.m"
            MR_Word mercury__term__TermX_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1058 "term.m"
            MR_Word mercury__term__TermXs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1058 "term.m"
            MR_Word mercury__term__TermY_12;
#line 1058 "term.m"
            MR_Word mercury__term__TermYs_13;
#line 1058 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_18_18;

#line 1057 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1057 "term.m"
            if (mercury__term__succeeded)
#line 1057 "term.m"
              {
#line 1057 "term.m"
                mercury__term__TermY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1057 "term.m"
                mercury__term__TermYs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1059 "term.m"
                {
#line 1059 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__TermX_10, mercury__term__TermY_12, mercury__term__DontBindVars_3, mercury__term__STATE_VARIABLE_Subst_0_4, &mercury__term__STATE_VARIABLE_Subst_18_18);
                }
#line 1058 "term.m"
                if (mercury__term__succeeded)
#line 1060 "term.m"
                  {
#line 1060 "term.m"
                    /* direct tailcall eliminated */
#line 1060 "term.m"
                    {
#line 1060 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_11;
#line 1060 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_13;
#line 1060 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Subst_18_18;

#line 1060 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_4 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 1060 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1060 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1060 "term.m"
                    }
#line 1060 "term.m"
                    continue;
#line 1060 "term.m"
                  }
#line 1057 "term.m"
              }
#line 1058 "term.m"
          }
#line 1056 "term.m"
        return mercury__term__succeeded;
#line 1056 "term.m"
      }
#line 1056 "term.m"
      break;
#line 1056 "term.m"
    }
#line 207 "term.m"
}

#line 201 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
#line 201 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_56,
#line 201 "term.m"
  MR_Word mercury__term__TermX_6,
#line 201 "term.m"
  MR_Word mercury__term__TermY_7,
#line 201 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 201 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_34,
#line 201 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_35)
#line 201 "term.m"
{
#line 1026 "term.m"
  while (MR_TRUE)
#line 1026 "term.m"
    {
#line 1026 "term.m"
      /* tailcall optimized into a loop */
#line 1026 "term.m"
      {
#line 1026 "term.m"
        MR_bool mercury__term__succeeded;

#line 1026 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_6)) == (MR_mktag((MR_Integer) 0))))
#line 1026 "term.m"
          {
#line 1026 "term.m"
            MR_Word mercury__term__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 1)));
#line 1026 "term.m"
            MR_Word mercury__term__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 0)));
#line 1037 "term.m"
            MR_Word mercury__term__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 2)));

#line 1026 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 1047 "term.m"
              {
#line 1047 "term.m"
                MR_Word mercury__term__TypeCtorInfo_105_105;
#line 1047 "term.m"
                MR_Word mercury__term__TypeInfo_106_106;
#line 1047 "term.m"
                MR_Word mercury__term__NameY_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 1047 "term.m"
                MR_Integer mercury__term__ArityX_32;
#line 1047 "term.m"
                MR_Integer mercury__term__ArityY_33;
#line 1047 "term.m"
                MR_Word mercury__term__ArgTermsY_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 1048 "term.m"
                MR_Word mercury__term___CY_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));

#line 1049 "term.m"
                {
#line 1049 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_111_111, mercury__term__NameY_30);
                }
#line 1047 "term.m"
                if (mercury__term__succeeded)
#line 1047 "term.m"
                  {
#line 13976 "term.c"
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 13978 "term.c"
                    {
#line 13980 "term.c"
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13982 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 13984 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 13986 "term.c"
                    }
#line 1050 "term.m"
                    {
#line 1050 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__V_110_110, &mercury__term__ArityX_32);
                    }
#line 1051 "term.m"
                    {
#line 1051 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__ArgTermsY_54, &mercury__term__ArityY_33);
                    }
#line 1052 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_32 == mercury__term__ArityY_33);
#line 1047 "term.m"
                    if (mercury__term__succeeded)
#line 1053 "term.m"
                      {
#line 1053 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__ArgTermsY_54, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 1047 "term.m"
                  }
#line 1047 "term.m"
              }
#line 1026 "term.m"
            else
#line 1037 "term.m"
              {
#line 1037 "term.m"
                MR_Word mercury__term__Y_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 1038 "term.m"
                MR_Word mercury__term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));
#line 1041 "term.m"
                MR_Word mercury__term__TermBoundToY_51;
#line 1039 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1039 "term.m"
                MR_Word mercury__term__TypeInfo_96_96;
#line 1039 "term.m"
                MR_Word mercury__term__TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1039 "term.m"
                MR_Word mercury__term__TypeInfo_98_98;
#line 1039 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_51;

#line 14032 "term.c"
                {
#line 14034 "term.c"
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14036 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
#line 14038 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14040 "term.c"
                }
#line 14042 "term.c"
                {
#line 14044 "term.c"
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14046 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
#line 14048 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14050 "term.c"
                }
#line 1039 "term.m"
                {
#line 1039 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_96_96, mercury__term__TypeInfo_98_98, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_52, &mercury__term__conv0_TermBoundToY_51);
                }
#line 1039 "term.m"
                if (mercury__term__succeeded)
#line 1039 "term.m"
                  {
#line 1039 "term.m"
                    mercury__term__TermBoundToY_51 = ((MR_Word) mercury__term__conv0_TermBoundToY_51);
#line 1039 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 1039 "term.m"
                  }
#line 1041 "term.m"
                if (mercury__term__succeeded)
#line 1040 "term.m"
                  {
#line 1040 "term.m"
                    /* direct tailcall eliminated */
#line 1040 "term.m"
                    {
#line 1040 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_51;

#line 1040 "term.m"
                      mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 1040 "term.m"
                    }
#line 1040 "term.m"
                    continue;
#line 1040 "term.m"
                  }
#line 1041 "term.m"
                else
#line 1042 "term.m"
                  {
#line 1042 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_101_101;
#line 1042 "term.m"
                    MR_Word mercury__term__TypeInfo_102_102;
#line 1042 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_103_103;
#line 1042 "term.m"
                    MR_Word mercury__term__TypeInfo_104_104;
#line 1044 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_35;

#line 1042 "term.m"
                    {
#line 1042 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__Y_52, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 1042 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 1042 "term.m"
                    if (mercury__term__succeeded)
#line 1042 "term.m"
                      {
#line 1043 "term.m"
                        {
#line 1043 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_52, mercury__term__DontBindVars_8);
                        }
#line 1043 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 1042 "term.m"
                        if (mercury__term__succeeded)
#line 1042 "term.m"
                          {
#line 14123 "term.c"
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14125 "term.c"
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14127 "term.c"
                            {
#line 14129 "term.c"
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14131 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
#line 14133 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14135 "term.c"
                            }
#line 14137 "term.c"
                            {
#line 14139 "term.c"
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14141 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
#line 14143 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14145 "term.c"
                            }
#line 1044 "term.m"
                            {
#line 1044 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_102_102, mercury__term__TypeInfo_104_104, mercury__term__Y_52, ((MR_Box) (mercury__term__TermX_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv1_STATE_VARIABLE_Subst_35);
                            }
#line 1044 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_35;
#line 1044 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 1042 "term.m"
                          }
#line 1042 "term.m"
                      }
#line 1042 "term.m"
                  }
#line 1037 "term.m"
              }
#line 1026 "term.m"
          }
#line 1026 "term.m"
        else
#line 1026 "term.m"
          {
#line 1026 "term.m"
            MR_Word mercury__term__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 0)));
#line 983 "term.m"
            MR_Word mercury__term__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 1)));

#line 1026 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "term.m"
              {
#line 1027 "term.m"
                MR_Word mercury__term__ArgTermsY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 1028 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 1028 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));
#line 1031 "term.m"
                MR_Word mercury__term__TermBoundToX_48;
#line 1029 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1029 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 1029 "term.m"
                MR_Word mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1029 "term.m"
                MR_Word mercury__term__TypeInfo_88_88;
#line 1029 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_48;

#line 14198 "term.c"
                {
#line 14200 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14202 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 14204 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14206 "term.c"
                }
#line 14208 "term.c"
                {
#line 14210 "term.c"
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14212 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 14214 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14216 "term.c"
                }
#line 1029 "term.m"
                {
#line 1029 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_86_86, mercury__term__TypeInfo_88_88, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv2_TermBoundToX_48);
                }
#line 1029 "term.m"
                if (mercury__term__succeeded)
#line 1029 "term.m"
                  {
#line 1029 "term.m"
                    mercury__term__TermBoundToX_48 = ((MR_Word) mercury__term__conv2_TermBoundToX_48);
#line 1029 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 1029 "term.m"
                  }
#line 1031 "term.m"
                if (mercury__term__succeeded)
#line 1030 "term.m"
                  {
#line 1030 "term.m"
                    /* direct tailcall eliminated */
#line 1030 "term.m"
                    {
#line 1030 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_48;

#line 1030 "term.m"
                      mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 1030 "term.m"
                    }
#line 1030 "term.m"
                    continue;
#line 1030 "term.m"
                  }
#line 1031 "term.m"
                else
#line 1032 "term.m"
                  {
#line 1032 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_91_91;
#line 1032 "term.m"
                    MR_Word mercury__term__TypeInfo_92_92;
#line 1032 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_93_93;
#line 1032 "term.m"
                    MR_Word mercury__term__TypeInfo_94_94;
#line 1034 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_35;

#line 1032 "term.m"
                    {
#line 1032 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__ArgTermsY_22, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 1032 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 1032 "term.m"
                    if (mercury__term__succeeded)
#line 1032 "term.m"
                      {
#line 1033 "term.m"
                        {
#line 1033 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                        }
#line 1033 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 1032 "term.m"
                        if (mercury__term__succeeded)
#line 1032 "term.m"
                          {
#line 14289 "term.c"
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14291 "term.c"
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14293 "term.c"
                            {
#line 14295 "term.c"
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14297 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
#line 14299 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14301 "term.c"
                            }
#line 14303 "term.c"
                            {
#line 14305 "term.c"
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14307 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
#line 14309 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14311 "term.c"
                            }
#line 1034 "term.m"
                            {
#line 1034 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_92_92, mercury__term__TypeInfo_94_94, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv3_STATE_VARIABLE_Subst_35);
                            }
#line 1034 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_35;
#line 1034 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 1032 "term.m"
                          }
#line 1032 "term.m"
                      }
#line 1032 "term.m"
                  }
#line 1027 "term.m"
              }
#line 1026 "term.m"
            else
#line 983 "term.m"
              {
#line 983 "term.m"
                MR_Word mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 984 "term.m"
                MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));

#line 985 "term.m"
                {
#line 985 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__DontBindVars_8);
                }
#line 987 "term.m"
                if (mercury__term__succeeded)
#line 986 "term.m"
                  {
#line 986 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                  }
#line 987 "term.m"
                else
#line 989 "term.m"
                  {
#line 987 "term.m"
                    {
#line 987 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                    }
#line 989 "term.m"
                    if (mercury__term__succeeded)
#line 988 "term.m"
                      {
#line 988 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_113_113, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 989 "term.m"
                    else
#line 1006 "term.m"
                      {
#line 1006 "term.m"
                        MR_Word mercury__term__TypeInfo_62_62;
#line 1006 "term.m"
                        MR_Word mercury__term__TypeInfo_64_64;
#line 1006 "term.m"
                        MR_Word mercury__term__TermBoundToX_14;
#line 989 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 989 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 989 "term.m"
                        MR_Box mercury__term__conv4_TermBoundToX_14;

#line 14384 "term.c"
                        {
#line 14386 "term.c"
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14388 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
#line 14390 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14392 "term.c"
                        }
#line 14394 "term.c"
                        {
#line 14396 "term.c"
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14398 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 14400 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14402 "term.c"
                        }
#line 989 "term.m"
                        {
#line 989 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv4_TermBoundToX_14);
                        }
#line 989 "term.m"
                        if (mercury__term__succeeded)
#line 989 "term.m"
                          {
#line 989 "term.m"
                            mercury__term__TermBoundToX_14 = ((MR_Word) mercury__term__conv4_TermBoundToX_14);
#line 989 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 989 "term.m"
                          }
#line 1006 "term.m"
                        if (mercury__term__succeeded)
#line 995 "term.m"
                          {
#line 995 "term.m"
                            MR_Word mercury__term__TermBoundToY_15;
#line 990 "term.m"
                            MR_Box mercury__term__conv5_TermBoundToY_15;

#line 990 "term.m"
                            {
#line 990 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv5_TermBoundToY_15);
                            }
#line 990 "term.m"
                            if (mercury__term__succeeded)
#line 990 "term.m"
                              {
#line 990 "term.m"
                                mercury__term__TermBoundToY_15 = ((MR_Word) mercury__term__conv5_TermBoundToY_15);
#line 990 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 990 "term.m"
                              }
#line 995 "term.m"
                            if (mercury__term__succeeded)
#line 993 "term.m"
                              {
#line 993 "term.m"
                                /* direct tailcall eliminated */
#line 993 "term.m"
                                {
#line 993 "term.m"
                                  MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_14;
#line 993 "term.m"
                                  MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_15;

#line 993 "term.m"
                                  mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 993 "term.m"
                                  mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 993 "term.m"
                                }
#line 993 "term.m"
                                continue;
#line 993 "term.m"
                              }
#line 995 "term.m"
                            else
#line 998 "term.m"
                              {
#line 998 "term.m"
                                MR_Word mercury__term__SubstTermBoundToX_16;
#line 999 "term.m"
                                MR_Word mercury__term__V_107_107;
#line 999 "term.m"
                                MR_Word mercury__term__V_17_17;

#line 997 "term.m"
                                {
#line 997 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TermBoundToX_14, mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__SubstTermBoundToX_16);
                                }
#line 999 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_16)) == (MR_mktag((MR_Integer) 1)));
#line 999 "term.m"
                                if (mercury__term__succeeded)
#line 999 "term.m"
                                  {
#line 999 "term.m"
                                    mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 0)));
#line 999 "term.m"
                                    mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 1)));
#line 999 "term.m"
                                    {
#line 999 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_107_107);
                                    }
#line 999 "term.m"
                                  }
#line 1001 "term.m"
                                if (mercury__term__succeeded)
#line 1001 "term.m"
                                  {
#line 1001 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 1001 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 1001 "term.m"
                                  }
#line 1001 "term.m"
                                else
#line 1002 "term.m"
                                  {
#line 1003 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_35;

#line 1002 "term.m"
                                    {
#line 1002 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToX_16, mercury__term__Y_12, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 1002 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 1002 "term.m"
                                    if (mercury__term__succeeded)
#line 1002 "term.m"
                                      {
#line 1003 "term.m"
                                        {
#line 1003 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, mercury__term__Y_12, ((MR_Box) (mercury__term__SubstTermBoundToX_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv6_STATE_VARIABLE_Subst_35);
                                        }
#line 1003 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_35;
#line 1003 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 1002 "term.m"
                                      }
#line 1002 "term.m"
                                  }
#line 998 "term.m"
                              }
#line 995 "term.m"
                          }
#line 1006 "term.m"
                        else
#line 1017 "term.m"
                          {
#line 1017 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 1017 "term.m"
                            MR_Word mercury__term__TypeInfo_76_76;
#line 1017 "term.m"
                            MR_Word mercury__term__TermBoundToY_47;
#line 1007 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1007 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1007 "term.m"
                            MR_Box mercury__term__conv7_TermBoundToY_47;

#line 14561 "term.c"
                            {
#line 14563 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14565 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 14567 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14569 "term.c"
                            }
#line 14571 "term.c"
                            {
#line 14573 "term.c"
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14575 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 14577 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14579 "term.c"
                            }
#line 1007 "term.m"
                            {
#line 1007 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv7_TermBoundToY_47);
                            }
#line 1007 "term.m"
                            if (mercury__term__succeeded)
#line 1007 "term.m"
                              {
#line 1007 "term.m"
                                mercury__term__TermBoundToY_47 = ((MR_Word) mercury__term__conv7_TermBoundToY_47);
#line 1007 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 1007 "term.m"
                              }
#line 1017 "term.m"
                            if (mercury__term__succeeded)
#line 1010 "term.m"
                              {
#line 1010 "term.m"
                                MR_Word mercury__term__SubstTermBoundToY_18;
#line 1011 "term.m"
                                MR_Word mercury__term__V_108_108;
#line 1011 "term.m"
                                MR_Word mercury__term__V_19_19;

#line 1009 "term.m"
                                {
#line 1009 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TermBoundToY_47, mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__SubstTermBoundToY_18);
                                }
#line 1011 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_18)) == (MR_mktag((MR_Integer) 1)));
#line 1011 "term.m"
                                if (mercury__term__succeeded)
#line 1011 "term.m"
                                  {
#line 1011 "term.m"
                                    mercury__term__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 0)));
#line 1011 "term.m"
                                    mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 1)));
#line 1011 "term.m"
                                    {
#line 1011 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__V_108_108);
                                    }
#line 1011 "term.m"
                                  }
#line 1013 "term.m"
                                if (mercury__term__succeeded)
#line 1013 "term.m"
                                  {
#line 1013 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 1013 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 1013 "term.m"
                                  }
#line 1013 "term.m"
                                else
#line 1014 "term.m"
                                  {
#line 1015 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_35;

#line 1014 "term.m"
                                    {
#line 1014 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToY_18, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 1014 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 1014 "term.m"
                                    if (mercury__term__succeeded)
#line 1014 "term.m"
                                      {
#line 1015 "term.m"
                                        {
#line 1015 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, mercury__term__V_113_113, ((MR_Box) (mercury__term__SubstTermBoundToY_18)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv8_STATE_VARIABLE_Subst_35);
                                        }
#line 1015 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_35;
#line 1015 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 1014 "term.m"
                                      }
#line 1014 "term.m"
                                  }
#line 1010 "term.m"
                              }
#line 1017 "term.m"
                            else
#line 1021 "term.m"
                              {
#line 1019 "term.m"
                                {
#line 1019 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12);
                                }
#line 1021 "term.m"
                                if (mercury__term__succeeded)
#line 1021 "term.m"
                                  *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 1021 "term.m"
                                else
#line 1022 "term.m"
                                  {
#line 1022 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1022 "term.m"
                                    MR_Word mercury__term__TypeInfo_82_82;
#line 1022 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_83_83;
#line 1022 "term.m"
                                    MR_Word mercury__term__TypeInfo_84_84;
#line 1022 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_35;

#line 14700 "term.c"
                                    {
#line 14702 "term.c"
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14704 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 14706 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14708 "term.c"
                                    }
#line 14710 "term.c"
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14712 "term.c"
                                    {
#line 14714 "term.c"
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14716 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 14718 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 14720 "term.c"
                                    }
#line 1022 "term.m"
                                    {
#line 1022 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_82_82, mercury__term__TypeInfo_84_84, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv9_STATE_VARIABLE_Subst_35);
                                    }
#line 1022 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_35;
#line 1022 "term.m"
                                  }
#line 1021 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 1021 "term.m"
                              }
#line 1017 "term.m"
                          }
#line 1006 "term.m"
                      }
#line 989 "term.m"
                  }
#line 983 "term.m"
              }
#line 1026 "term.m"
          }
#line 1026 "term.m"
        return mercury__term__succeeded;
#line 1026 "term.m"
      }
#line 1026 "term.m"
      break;
#line 1026 "term.m"
    }
#line 201 "term.m"
}

#line 192 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
#line 192 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 192 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 192 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 192 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 192 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 192 "term.m"
{
#line 974 "term.m"
  while (MR_TRUE)
#line 974 "term.m"
    {
#line 974 "term.m"
      /* tailcall optimized into a loop */
#line 974 "term.m"
      {
#line 974 "term.m"
        MR_bool mercury__term__succeeded;

#line 974 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 974 "term.m"
          {
#line 974 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "term.m"
            if (mercury__term__succeeded)
#line 974 "term.m"
              {
#line 974 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 974 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 974 "term.m"
              }
#line 974 "term.m"
          }
#line 974 "term.m"
        else
#line 975 "term.m"
          {
#line 975 "term.m"
            MR_Word mercury__term__TermX_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 975 "term.m"
            MR_Word mercury__term__TermXs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 975 "term.m"
            MR_Word mercury__term__TermY_10;
#line 975 "term.m"
            MR_Word mercury__term__TermYs_11;
#line 975 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;

#line 975 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 975 "term.m"
            if (mercury__term__succeeded)
#line 975 "term.m"
              {
#line 975 "term.m"
                mercury__term__TermY_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 975 "term.m"
                mercury__term__TermYs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 976 "term.m"
                {
#line 976 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TermX_8, mercury__term__TermY_10, mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__STATE_VARIABLE_Subst_15_15);
                }
#line 975 "term.m"
                if (mercury__term__succeeded)
#line 977 "term.m"
                  {
#line 977 "term.m"
                    /* direct tailcall eliminated */
#line 977 "term.m"
                    {
#line 977 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_9;
#line 977 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_11;
#line 977 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 977 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 977 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 977 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 977 "term.m"
                    }
#line 977 "term.m"
                    continue;
#line 977 "term.m"
                  }
#line 975 "term.m"
              }
#line 975 "term.m"
          }
#line 974 "term.m"
        return mercury__term__succeeded;
#line 974 "term.m"
      }
#line 974 "term.m"
      break;
#line 974 "term.m"
    }
#line 192 "term.m"
}

#line 186 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
#line 186 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_50,
#line 186 "term.m"
  MR_Word mercury__term__TermX_5,
#line 186 "term.m"
  MR_Word mercury__term__TermY_6,
#line 186 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_30,
#line 186 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_31)
#line 186 "term.m"
{
#line 948 "term.m"
  while (MR_TRUE)
#line 948 "term.m"
    {
#line 948 "term.m"
      /* tailcall optimized into a loop */
#line 948 "term.m"
      {
#line 948 "term.m"
        MR_bool mercury__term__succeeded;

#line 948 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_5)) == (MR_mktag((MR_Integer) 0))))
#line 948 "term.m"
          {
#line 948 "term.m"
            MR_Word mercury__term__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 1)));
#line 948 "term.m"
            MR_Word mercury__term__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 0)));
#line 958 "term.m"
            MR_Word mercury__term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 2)));

#line 948 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 967 "term.m"
              {
#line 967 "term.m"
                MR_Word mercury__term__NameY_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 967 "term.m"
                MR_Word mercury__term__ArgTermsY_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 968 "term.m"
                MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));

#line 969 "term.m"
                {
#line 969 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_95_95, mercury__term__NameY_28);
                }
#line 967 "term.m"
                if (mercury__term__succeeded)
#line 971 "term.m"
                  {
#line 971 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__ArgTermsY_48, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__STATE_VARIABLE_Subst_31);
                  }
#line 967 "term.m"
              }
#line 948 "term.m"
            else
#line 958 "term.m"
              {
#line 958 "term.m"
                MR_Word mercury__term__Y_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 959 "term.m"
                MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 962 "term.m"
                MR_Word mercury__term__TermBoundToY_45;
#line 960 "term.m"
                MR_Word mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 960 "term.m"
                MR_Word mercury__term__TypeInfo_84_84;
#line 960 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 960 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 960 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_45;

#line 14955 "term.c"
                {
#line 14957 "term.c"
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14959 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 14961 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 14963 "term.c"
                }
#line 14965 "term.c"
                {
#line 14967 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14969 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 14971 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 14973 "term.c"
                }
#line 960 "term.m"
                {
#line 960 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_84_84, mercury__term__TypeInfo_86_86, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_46, &mercury__term__conv0_TermBoundToY_45);
                }
#line 960 "term.m"
                if (mercury__term__succeeded)
#line 960 "term.m"
                  {
#line 960 "term.m"
                    mercury__term__TermBoundToY_45 = ((MR_Word) mercury__term__conv0_TermBoundToY_45);
#line 960 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 960 "term.m"
                  }
#line 962 "term.m"
                if (mercury__term__succeeded)
#line 961 "term.m"
                  {
#line 961 "term.m"
                    /* direct tailcall eliminated */
#line 961 "term.m"
                    {
#line 961 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_45;

#line 961 "term.m"
                      mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 961 "term.m"
                    }
#line 961 "term.m"
                    continue;
#line 961 "term.m"
                  }
#line 962 "term.m"
                else
#line 963 "term.m"
                  {
#line 963 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_87_87;
#line 963 "term.m"
                    MR_Word mercury__term__TypeInfo_88_88;
#line 963 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_89_89;
#line 963 "term.m"
                    MR_Word mercury__term__TypeInfo_90_90;
#line 964 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_31;

#line 963 "term.m"
                    {
#line 963 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__Y_46, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 963 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 963 "term.m"
                    if (mercury__term__succeeded)
#line 963 "term.m"
                      {
#line 15035 "term.c"
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 15037 "term.c"
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15039 "term.c"
                        {
#line 15041 "term.c"
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15043 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 15045 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15047 "term.c"
                        }
#line 15049 "term.c"
                        {
#line 15051 "term.c"
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15053 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
#line 15055 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15057 "term.c"
                        }
#line 964 "term.m"
                        {
#line 964 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_88_88, mercury__term__TypeInfo_90_90, mercury__term__Y_46, ((MR_Box) (mercury__term__TermX_5)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv1_STATE_VARIABLE_Subst_31);
                        }
#line 964 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_31;
#line 964 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 963 "term.m"
                      }
#line 963 "term.m"
                  }
#line 958 "term.m"
              }
#line 948 "term.m"
          }
#line 948 "term.m"
        else
#line 948 "term.m"
          {
#line 948 "term.m"
            MR_Word mercury__term__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 0)));
#line 910 "term.m"
            MR_Word mercury__term__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 1)));

#line 948 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 949 "term.m"
              {
#line 949 "term.m"
                MR_Word mercury__term__ArgTermsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 950 "term.m"
                MR_Word mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 950 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));
#line 953 "term.m"
                MR_Word mercury__term__TermBoundToX_42;
#line 951 "term.m"
                MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 951 "term.m"
                MR_Word mercury__term__TypeInfo_76_76;
#line 951 "term.m"
                MR_Word mercury__term__TypeCtorInfo_77_77 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 951 "term.m"
                MR_Word mercury__term__TypeInfo_78_78;
#line 951 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_42;

#line 15108 "term.c"
                {
#line 15110 "term.c"
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15112 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 15114 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15116 "term.c"
                }
#line 15118 "term.c"
                {
#line 15120 "term.c"
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15122 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
#line 15124 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15126 "term.c"
                }
#line 951 "term.m"
                {
#line 951 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_76_76, mercury__term__TypeInfo_78_78, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv2_TermBoundToX_42);
                }
#line 951 "term.m"
                if (mercury__term__succeeded)
#line 951 "term.m"
                  {
#line 951 "term.m"
                    mercury__term__TermBoundToX_42 = ((MR_Word) mercury__term__conv2_TermBoundToX_42);
#line 951 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 951 "term.m"
                  }
#line 953 "term.m"
                if (mercury__term__succeeded)
#line 952 "term.m"
                  {
#line 952 "term.m"
                    /* direct tailcall eliminated */
#line 952 "term.m"
                    {
#line 952 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_42;

#line 952 "term.m"
                      mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 952 "term.m"
                    }
#line 952 "term.m"
                    continue;
#line 952 "term.m"
                  }
#line 953 "term.m"
                else
#line 954 "term.m"
                  {
#line 954 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_79_79;
#line 954 "term.m"
                    MR_Word mercury__term__TypeInfo_80_80;
#line 954 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_81_81;
#line 954 "term.m"
                    MR_Word mercury__term__TypeInfo_82_82;
#line 955 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_31;

#line 954 "term.m"
                    {
#line 954 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__ArgTermsY_20, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 954 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 954 "term.m"
                    if (mercury__term__succeeded)
#line 954 "term.m"
                      {
#line 15188 "term.c"
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 15190 "term.c"
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15192 "term.c"
                        {
#line 15194 "term.c"
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15196 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
#line 15198 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15200 "term.c"
                        }
#line 15202 "term.c"
                        {
#line 15204 "term.c"
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15206 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 15208 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15210 "term.c"
                        }
#line 955 "term.m"
                        {
#line 955 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_80_80, mercury__term__TypeInfo_82_82, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv3_STATE_VARIABLE_Subst_31);
                        }
#line 955 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_31;
#line 955 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 954 "term.m"
                      }
#line 954 "term.m"
                  }
#line 949 "term.m"
              }
#line 948 "term.m"
            else
#line 910 "term.m"
              {
#line 910 "term.m"
                MR_Word mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 911 "term.m"
                MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 928 "term.m"
                MR_Word mercury__term__TypeInfo_52_52;
#line 928 "term.m"
                MR_Word mercury__term__TypeInfo_54_54;
#line 928 "term.m"
                MR_Word mercury__term__TermBoundToX_12;
#line 912 "term.m"
                MR_Word mercury__term__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 912 "term.m"
                MR_Word mercury__term__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 912 "term.m"
                MR_Box mercury__term__conv4_TermBoundToX_12;

#line 15248 "term.c"
                {
#line 15250 "term.c"
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15252 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
#line 15254 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15256 "term.c"
                }
#line 15258 "term.c"
                {
#line 15260 "term.c"
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15262 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
#line 15264 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15266 "term.c"
                }
#line 912 "term.m"
                {
#line 912 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv4_TermBoundToX_12);
                }
#line 912 "term.m"
                if (mercury__term__succeeded)
#line 912 "term.m"
                  {
#line 912 "term.m"
                    mercury__term__TermBoundToX_12 = ((MR_Word) mercury__term__conv4_TermBoundToX_12);
#line 912 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 912 "term.m"
                  }
#line 928 "term.m"
                if (mercury__term__succeeded)
#line 917 "term.m"
                  {
#line 917 "term.m"
                    MR_Word mercury__term__TermBoundToY_13;
#line 913 "term.m"
                    MR_Box mercury__term__conv5_TermBoundToY_13;

#line 913 "term.m"
                    {
#line 913 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv5_TermBoundToY_13);
                    }
#line 913 "term.m"
                    if (mercury__term__succeeded)
#line 913 "term.m"
                      {
#line 913 "term.m"
                        mercury__term__TermBoundToY_13 = ((MR_Word) mercury__term__conv5_TermBoundToY_13);
#line 913 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 913 "term.m"
                      }
#line 917 "term.m"
                    if (mercury__term__succeeded)
#line 916 "term.m"
                      {
#line 916 "term.m"
                        /* direct tailcall eliminated */
#line 916 "term.m"
                        {
#line 916 "term.m"
                          MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_12;
#line 916 "term.m"
                          MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_13;

#line 916 "term.m"
                          mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 916 "term.m"
                          mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 916 "term.m"
                        }
#line 916 "term.m"
                        continue;
#line 916 "term.m"
                      }
#line 917 "term.m"
                    else
#line 920 "term.m"
                      {
#line 920 "term.m"
                        MR_Word mercury__term__SubstTermBoundToX_14;
#line 921 "term.m"
                        MR_Word mercury__term__V_91_91;
#line 921 "term.m"
                        MR_Word mercury__term__V_15_15;

#line 919 "term.m"
                        {
#line 919 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TermBoundToX_12, mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__SubstTermBoundToX_14);
                        }
#line 921 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_14)) == (MR_mktag((MR_Integer) 1)));
#line 921 "term.m"
                        if (mercury__term__succeeded)
#line 921 "term.m"
                          {
#line 921 "term.m"
                            mercury__term__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 0)));
#line 921 "term.m"
                            mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 1)));
#line 921 "term.m"
                            {
#line 921 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__Y_10, mercury__term__V_91_91);
                            }
#line 921 "term.m"
                          }
#line 923 "term.m"
                        if (mercury__term__succeeded)
#line 923 "term.m"
                          {
#line 923 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 923 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 923 "term.m"
                          }
#line 923 "term.m"
                        else
#line 924 "term.m"
                          {
#line 925 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_31;

#line 924 "term.m"
                            {
#line 924 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToX_14, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 924 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 924 "term.m"
                            if (mercury__term__succeeded)
#line 924 "term.m"
                              {
#line 925 "term.m"
                                {
#line 925 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, mercury__term__Y_10, ((MR_Box) (mercury__term__SubstTermBoundToX_14)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv6_STATE_VARIABLE_Subst_31);
                                }
#line 925 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_31;
#line 925 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 924 "term.m"
                              }
#line 924 "term.m"
                          }
#line 920 "term.m"
                      }
#line 917 "term.m"
                  }
#line 928 "term.m"
                else
#line 939 "term.m"
                  {
#line 939 "term.m"
                    MR_Word mercury__term__TypeInfo_64_64;
#line 939 "term.m"
                    MR_Word mercury__term__TypeInfo_66_66;
#line 939 "term.m"
                    MR_Word mercury__term__TermBoundToY_41;
#line 929 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 929 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 929 "term.m"
                    MR_Box mercury__term__conv7_TermBoundToY_41;

#line 15425 "term.c"
                    {
#line 15427 "term.c"
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15429 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 15431 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15433 "term.c"
                    }
#line 15435 "term.c"
                    {
#line 15437 "term.c"
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15439 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
#line 15441 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15443 "term.c"
                    }
#line 929 "term.m"
                    {
#line 929 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv7_TermBoundToY_41);
                    }
#line 929 "term.m"
                    if (mercury__term__succeeded)
#line 929 "term.m"
                      {
#line 929 "term.m"
                        mercury__term__TermBoundToY_41 = ((MR_Word) mercury__term__conv7_TermBoundToY_41);
#line 929 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 929 "term.m"
                      }
#line 939 "term.m"
                    if (mercury__term__succeeded)
#line 932 "term.m"
                      {
#line 932 "term.m"
                        MR_Word mercury__term__SubstTermBoundToY_16;
#line 933 "term.m"
                        MR_Word mercury__term__V_92_92;
#line 933 "term.m"
                        MR_Word mercury__term__V_17_17;

#line 931 "term.m"
                        {
#line 931 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TermBoundToY_41, mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__SubstTermBoundToY_16);
                        }
#line 933 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_16)) == (MR_mktag((MR_Integer) 1)));
#line 933 "term.m"
                        if (mercury__term__succeeded)
#line 933 "term.m"
                          {
#line 933 "term.m"
                            mercury__term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 0)));
#line 933 "term.m"
                            mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 1)));
#line 933 "term.m"
                            {
#line 933 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__V_92_92);
                            }
#line 933 "term.m"
                          }
#line 935 "term.m"
                        if (mercury__term__succeeded)
#line 935 "term.m"
                          {
#line 935 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 935 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 935 "term.m"
                          }
#line 935 "term.m"
                        else
#line 936 "term.m"
                          {
#line 937 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_31;

#line 936 "term.m"
                            {
#line 936 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToY_16, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 936 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 936 "term.m"
                            if (mercury__term__succeeded)
#line 936 "term.m"
                              {
#line 937 "term.m"
                                {
#line 937 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, mercury__term__V_97_97, ((MR_Box) (mercury__term__SubstTermBoundToY_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv8_STATE_VARIABLE_Subst_31);
                                }
#line 937 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_31;
#line 937 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 936 "term.m"
                              }
#line 936 "term.m"
                          }
#line 932 "term.m"
                      }
#line 939 "term.m"
                    else
#line 943 "term.m"
                      {
#line 941 "term.m"
                        {
#line 941 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__Y_10);
                        }
#line 943 "term.m"
                        if (mercury__term__succeeded)
#line 943 "term.m"
                          *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 943 "term.m"
                        else
#line 944 "term.m"
                          {
#line 944 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 944 "term.m"
                            MR_Word mercury__term__TypeInfo_72_72;
#line 944 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73;
#line 944 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 944 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_31;

#line 15564 "term.c"
                            {
#line 15566 "term.c"
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15568 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
#line 15570 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15572 "term.c"
                            }
#line 15574 "term.c"
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15576 "term.c"
                            {
#line 15578 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15580 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 15582 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 15584 "term.c"
                            }
#line 944 "term.m"
                            {
#line 944 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_72_72, mercury__term__TypeInfo_74_74, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv9_STATE_VARIABLE_Subst_31);
                            }
#line 944 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_31;
#line 944 "term.m"
                          }
#line 943 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 943 "term.m"
                      }
#line 939 "term.m"
                  }
#line 910 "term.m"
              }
#line 948 "term.m"
          }
#line 948 "term.m"
        return mercury__term__succeeded;
#line 948 "term.m"
      }
#line 948 "term.m"
      break;
#line 948 "term.m"
    }
#line 186 "term.m"
}

#line 173 "term.m"
void MR_CALL 
mercury__term__contains_var_list_2_p_1(
#line 173 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 173 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 173 "term.m"
  MR_Word * mercury__term__Var_2,
#line 173 "term.m"
  MR_Cont mercury__term__cont,
#line 173 "term.m"
  void * mercury__term__cont_env_ptr)
#line 173 "term.m"
{
#line 882 "term.m"
  while (MR_TRUE)
#line 882 "term.m"
    {
#line 882 "term.m"
      /* tailcall optimized into a loop */
#line 882 "term.m"
      {
#line 882 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 882 "term.m"
        MR_Word mercury__term__V_10_10;
#line 882 "term.m"
        MR_Word mercury__term__V_11_11;

#line 882 "term.m"
        if (mercury__term__succeeded)
#line 882 "term.m"
          {
#line 882 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 882 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 879 "term.m"
              {
#line 879 "term.m"
                MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 879 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 879 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 880 "term.m"
                {
#line 880 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 879 "term.m"
              }
#line 878 "term.m"
            else
#line 878 "term.m"
              {
#line 878 "term.m"
                MR_Word mercury__term__V_13_13;

#line 878 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 878 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 878 "term.m"
                {
#line 878 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 878 "term.m"
              }
#line 885 "term.m"
            {
#line 885 "term.m"
              /* direct tailcall eliminated */
#line 885 "term.m"
              {
#line 885 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 885 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 885 "term.m"
              }
#line 885 "term.m"
              continue;
#line 885 "term.m"
            }
#line 882 "term.m"
          }
#line 882 "term.m"
      }
#line 882 "term.m"
      break;
#line 882 "term.m"
    }
#line 173 "term.m"
}

#line 172 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
#line 172 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 172 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 172 "term.m"
  MR_Word mercury__term__Var_2)
#line 172 "term.m"
{
#line 882 "term.m"
  while (MR_TRUE)
#line 882 "term.m"
    {
#line 882 "term.m"
      /* tailcall optimized into a loop */
#line 882 "term.m"
      {
#line 882 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 882 "term.m"
        MR_Word mercury__term__V_10_10;
#line 882 "term.m"
        MR_Word mercury__term__V_11_11;

#line 882 "term.m"
        if (mercury__term__succeeded)
#line 882 "term.m"
          {
#line 882 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 882 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "term.m"
            {
#line 883 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 882 "term.m"
            if (!(mercury__term__succeeded))
#line 885 "term.m"
              {
#line 885 "term.m"
                /* direct tailcall eliminated */
#line 885 "term.m"
                {
#line 885 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 885 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 885 "term.m"
                }
#line 885 "term.m"
                continue;
#line 885 "term.m"
              }
#line 882 "term.m"
          }
#line 882 "term.m"
        return mercury__term__succeeded;
#line 882 "term.m"
      }
#line 882 "term.m"
      break;
#line 882 "term.m"
    }
#line 172 "term.m"
}

#line 164 "term.m"
void MR_CALL 
mercury__term__contains_var_2_p_1(
#line 164 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 164 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 164 "term.m"
  MR_Word * mercury__term__Var_2,
#line 164 "term.m"
  MR_Cont mercury__term__cont,
#line 164 "term.m"
  void * mercury__term__cont_env_ptr)
#line 164 "term.m"
{
#line 878 "term.m"
  {
#line 878 "term.m"
    MR_bool mercury__term__succeeded;

#line 878 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 879 "term.m"
      {
#line 879 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 880 "term.m"
        {
#line 880 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 880 "term.m"
          return;
        }
#line 879 "term.m"
      }
#line 878 "term.m"
    else
#line 878 "term.m"
      {
#line 878 "term.m"
        MR_Word mercury__term__V_4_4;

#line 878 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 878 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 878 "term.m"
        {
#line 878 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 878 "term.m"
          return;
        }
#line 878 "term.m"
      }
#line 878 "term.m"
  }
#line 164 "term.m"
}

#line 163 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
#line 163 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 163 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 163 "term.m"
  MR_Word mercury__term__Var_2)
#line 163 "term.m"
{
#line 878 "term.m"
  {
#line 878 "term.m"
    MR_bool mercury__term__succeeded;

#line 878 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 879 "term.m"
      {
#line 879 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 879 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 879 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 880 "term.m"
        {
#line 880 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2);
        }
#line 879 "term.m"
      }
#line 878 "term.m"
    else
#line 878 "term.m"
      {
#line 878 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 878 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 510 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 510 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 510 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 510 "term.m"
        if (mercury__term__succeeded)
#line 510 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 510 "term.m"
        else
#line 510 "term.m"
          {
#line 510 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 510 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 15916 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 510 "term.m"
          }
#line 878 "term.m"
      }
#line 878 "term.m"
    return mercury__term__succeeded;
#line 878 "term.m"
  }
#line 163 "term.m"
}

#line 155 "term.m"
void MR_CALL 
mercury__term__vars_list_2_p_0(
#line 155 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 155 "term.m"
  MR_Word mercury__term__Terms_3,
#line 155 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 155 "term.m"
{
#line 865 "term.m"
  {
#line 865 "term.m"
    MR_bool mercury__term__succeeded;
#line 865 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 866 "term.m"
    {
#line 866 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 866 "term.m"
      return;
    }
#line 865 "term.m"
  }
#line 155 "term.m"
}

#line 154 "term.m"
MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
#line 154 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 154 "term.m"
  MR_Word mercury__term__Terms_3)
#line 154 "term.m"
{
#line 865 "term.m"
  {
#line 865 "term.m"
    MR_bool mercury__term__succeeded;
#line 865 "term.m"
    MR_Word mercury__term__Vars_4;
#line 865 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 866 "term.m"
    {
#line 866 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Terms_3, mercury__term__V_8_8, &mercury__term__Vars_4);
    }
#line 865 "term.m"
    return mercury__term__Vars_4;
#line 865 "term.m"
  }
#line 154 "term.m"
}

#line 147 "term.m"
void MR_CALL 
mercury__term__vars_2_3_p_0(
#line 147 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 147 "term.m"
  MR_Word mercury__term__Term_4,
#line 147 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_11,
#line 147 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_12)
#line 147 "term.m"
{
#line 857 "term.m"
  {
#line 857 "term.m"
    MR_bool mercury__term__succeeded;

#line 857 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 858 "term.m"
      {
#line 858 "term.m"
        MR_Word mercury__term__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 858 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 858 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 859 "term.m"
        {
#line 859 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms_9, mercury__term__STATE_VARIABLE_Vars_0_11, mercury__term__STATE_VARIABLE_Vars_12);
#line 859 "term.m"
          return;
        }
#line 858 "term.m"
      }
#line 857 "term.m"
    else
#line 855 "term.m"
      {
#line 855 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 855 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 856 "term.m"
        {
#line 856 "term.m"
          MR_Word base;
#line 856 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_12 = base;
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_6));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_11));
#line 856 "term.m"
        }
#line 855 "term.m"
      }
#line 857 "term.m"
  }
#line 147 "term.m"
}

#line 146 "term.m"
MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
#line 146 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 146 "term.m"
  MR_Word mercury__term__Term_4,
#line 146 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 146 "term.m"
{
#line 857 "term.m"
  {
#line 857 "term.m"
    MR_bool mercury__term__succeeded;
#line 857 "term.m"
    MR_Word mercury__term__Vars_6;

#line 857 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 858 "term.m"
      {
#line 858 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 858 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 858 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 859 "term.m"
        {
#line 859 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__ArgTerms_15, mercury__term__Vars0_5, &mercury__term__Vars_6);
        }
#line 858 "term.m"
      }
#line 857 "term.m"
    else
#line 855 "term.m"
      {
#line 855 "term.m"
        MR_Word mercury__term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 855 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 856 "term.m"
        {
#line 856 "term.m"
          mercury__term__Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 0) = ((MR_Box) (mercury__term__Var_12));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 1) = ((MR_Box) (mercury__term__Vars0_5));
#line 856 "term.m"
        }
#line 855 "term.m"
      }
#line 857 "term.m"
    return mercury__term__Vars_6;
#line 857 "term.m"
  }
#line 146 "term.m"
}

#line 142 "term.m"
void MR_CALL 
mercury__term__vars_2_p_0(
#line 142 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 142 "term.m"
  MR_Word mercury__term__Term_3,
#line 142 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 142 "term.m"
{
#line 847 "term.m"
  {
#line 847 "term.m"
    MR_bool mercury__term__succeeded;
#line 847 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 857 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 858 "term.m"
      {
#line 858 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 858 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 858 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 859 "term.m"
        {
#line 859 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__ArgTerms_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 859 "term.m"
          return;
        }
#line 858 "term.m"
      }
#line 857 "term.m"
    else
#line 855 "term.m"
      {
#line 855 "term.m"
        MR_Word mercury__term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 855 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 856 "term.m"
        {
#line 856 "term.m"
          MR_Word base;
#line 856 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "term.m"
          *mercury__term__Vars_4 = base;
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_11));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 856 "term.m"
        }
#line 855 "term.m"
      }
#line 847 "term.m"
  }
#line 142 "term.m"
}

#line 141 "term.m"
MR_Word MR_CALL 
mercury__term__vars_1_f_0(
#line 141 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 141 "term.m"
  MR_Word mercury__term__Term_3)
#line 141 "term.m"
{
#line 847 "term.m"
  {
#line 847 "term.m"
    MR_bool mercury__term__succeeded;
#line 847 "term.m"
    MR_Word mercury__term__Vars_4;
#line 847 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 857 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 858 "term.m"
      {
#line 858 "term.m"
        MR_Word mercury__term__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 858 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 858 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 859 "term.m"
        {
#line 859 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_16, mercury__term__V_8_8, &mercury__term__Vars_4);
        }
#line 858 "term.m"
      }
#line 857 "term.m"
    else
#line 855 "term.m"
      {
#line 855 "term.m"
        MR_Word mercury__term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 855 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 856 "term.m"
        {
#line 856 "term.m"
          mercury__term__Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 0) = ((MR_Box) (mercury__term__Var_13));
#line 856 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 856 "term.m"
        }
#line 855 "term.m"
      }
#line 847 "term.m"
    return mercury__term__Vars_4;
#line 847 "term.m"
  }
#line 141 "term.m"
}

#line 132 "term.m"
void MR_CALL 
mercury__term__univ_to_term_2_p_0(
#line 132 "term.m"
  MR_Word mercury__term__TypeInfo_28_28,
#line 132 "term.m"
  MR_Word mercury__term__Univ_3,
#line 132 "term.m"
  MR_Word * mercury__term__Term_4)
#line 132 "term.m"
{
#line 744 "term.m"
  {
#line 744 "term.m"
    MR_bool mercury__term__succeeded;
#line 744 "term.m"
    MR_Word mercury__term__TypeInfo_6_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 744 "term.m"
    MR_Word mercury__term__Context_5 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 744 "term.m"
    MR_Word mercury__term__Type_6;
#line 12 "univ.opt"
    MR_Box mercury__term__V_4_34 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 58 "type_desc.opt"
    MR_Box mercury__term__V_36_36;
#line 67 "construct.opt"
    MR_Integer mercury__term__V_7_7;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_6_35 ;
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
#line 16307 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Type_6  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 67 "construct.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo =  mercury__term__Type_6 ;
		{
#line 67 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}
#line 16331 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__V_7_7  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 752 "term.m"
    if (mercury__term__succeeded)
#line 749 "term.m"
      {
#line 749 "term.m"
        MR_Word mercury__term__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 749 "term.m"
        MR_String mercury__term__FunctorString_8;
#line 749 "term.m"
        MR_Word mercury__term__FunctorArgs_10;
#line 749 "term.m"
        MR_Word mercury__term__TermArgs_11;
#line 749 "term.m"
        MR_Box mercury__term__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 749 "term.m"
        MR_Word mercury__term__V_20_20;
#line 748 "term.m"
        MR_Integer mercury__term___FunctorArity_9;

#line 748 "term.m"
        {
#line 748 "term.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__term__TypeInfo_29_29, mercury__term__V_18_18, (MR_Integer) 1, &mercury__term__FunctorString_8, &mercury__term___FunctorArity_9, &mercury__term__FunctorArgs_10);
        }
#line 750 "term.m"
        {
#line 750 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_28_28, mercury__term__FunctorArgs_10, &mercury__term__TermArgs_11);
        }
#line 751 "term.m"
        {
#line 751 "term.m"
          mercury__term__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 751 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_20_20, 0) = ((MR_Box) (mercury__term__FunctorString_8));
#line 751 "term.m"
        }
#line 751 "term.m"
        {
#line 751 "term.m"
          MR_Word base;
#line 751 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "term.m"
          *mercury__term__Term_4 = base;
#line 751 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_20_20));
#line 751 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__TermArgs_11));
#line 751 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 751 "term.m"
        }
#line 749 "term.m"
      }
#line 752 "term.m"
    else
#line 761 "term.m"
      {
#line 761 "term.m"
        MR_Word mercury__term__SpecialCaseTerm_16;
#line 754 "term.m"
        MR_Word mercury__term__TypeCtor_12;
#line 754 "term.m"
        MR_Word mercury__term__TypeArgs_13;
#line 754 "term.m"
        MR_String mercury__term__TypeName_14;
#line 754 "term.m"
        MR_String mercury__term__ModuleName_15;
#line 144 "type_desc.opt"
        MR_String mercury__term___ModuleName_5_41;
#line 144 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_42;
#line 144 "type_desc.opt"
        MR_String mercury__term___Name_5_45;
#line 144 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_46;

#line 78 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__Type_6 ;
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
#line 16442 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_12  = TypeCtorDesc;
	 mercury__term__TypeArgs_13  = ArgTypes;
#line 78 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_12 ;
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
#line 16491 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_41  = TypeCtorModuleName;
	 mercury__term__TypeName_14  = TypeCtorName;
	 mercury__term___Arity_6_42  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 144 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_12 ;
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
#line 16541 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__ModuleName_15  = TypeCtorModuleName;
	 mercury__term___Name_5_45  = TypeCtorName;
	 mercury__term___Arity_6_46  = TypeCtorArity;
#line 144 "type_desc.opt"
}
#line 757 "term.m"
        {
#line 757 "term.m"
          mercury__term__succeeded = mercury__term__univ_to_term_special_case_6_p_0(mercury__term__TypeInfo_28_28, mercury__term__ModuleName_15, mercury__term__TypeName_14, mercury__term__TypeArgs_13, mercury__term__Univ_3, mercury__term__Context_5, &mercury__term__SpecialCaseTerm_16);
        }
#line 761 "term.m"
        if (mercury__term__succeeded)
#line 760 "term.m"
          *mercury__term__Term_4 = mercury__term__SpecialCaseTerm_16;
#line 761 "term.m"
        else
#line 762 "term.m"
          {
#line 762 "term.m"
            MR_Word mercury__term__TypeInfo_6_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 762 "term.m"
            MR_String mercury__term__Message_17;
#line 762 "term.m"
            MR_String mercury__term__V_22_22;
#line 762 "term.m"
            MR_String mercury__term__V_23_23;
#line 762 "term.m"
            MR_Word mercury__term__V_24_24;
#line 12 "univ.opt"
            MR_Box mercury__term__V_4_49 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 58 "type_desc.opt"
            MR_Box mercury__term__V_51_51;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_6_50 ;
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
#line 16604 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_24_24  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 762 "term.m"
            {
#line 762 "term.m"
              mercury__term__V_23_23 = mercury__type_desc__type_name_1_f_0(mercury__term__V_24_24);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__term__V_23_23, (MR_String) "\'", &mercury__term__V_22_22);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "unknown type \140", mercury__term__V_22_22, &mercury__term__Message_17);
            }
#line 763 "term.m"
            {
#line 763 "term.m"
              mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.univ_to_term\'/2", mercury__term__Message_17);
#line 763 "term.m"
              return;
            }
#line 762 "term.m"
          }
#line 761 "term.m"
      }
#line 744 "term.m"
  }
#line 132 "term.m"
}

#line 131 "term.m"
MR_Word MR_CALL 
mercury__term__univ_to_term_1_f_0(
#line 131 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 131 "term.m"
  MR_Word mercury__term__Univ_3)
#line 131 "term.m"
{
#line 742 "term.m"
  {
#line 742 "term.m"
    MR_bool mercury__term__succeeded;
#line 742 "term.m"
    MR_Word mercury__term__Term_4;

#line 742 "term.m"
    {
#line 742 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__Univ_3, &mercury__term__Term_4);
    }
#line 742 "term.m"
    return mercury__term__Term_4;
#line 742 "term.m"
  }
#line 131 "term.m"
}

#line 126 "term.m"
void MR_CALL 
mercury__term__type_to_term_2_p_0(
#line 126 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 126 "term.m"
  MR_Word mercury__term__TypeInfo_7_7,
#line 126 "term.m"
  MR_Box mercury__term__Val_3,
#line 126 "term.m"
  MR_Word * mercury__term__Term_4)
#line 126 "term.m"
{
#line 737 "term.m"
  {
#line 737 "term.m"
    MR_bool mercury__term__succeeded;
#line 737 "term.m"
    MR_Word mercury__term__Univ_5;

#line 738 "term.m"
    {
#line 738 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_6, mercury__term__Val_3, &mercury__term__Univ_5);
    }
#line 739 "term.m"
    {
#line 739 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_7_7, mercury__term__Univ_5, mercury__term__Term_4);
#line 739 "term.m"
      return;
    }
#line 737 "term.m"
  }
#line 126 "term.m"
}

#line 125 "term.m"
MR_Word MR_CALL 
mercury__term__type_to_term_1_f_0(
#line 125 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 125 "term.m"
  MR_Word mercury__term__TypeInfo_6_6,
#line 125 "term.m"
  MR_Box mercury__term__Var_3)
#line 125 "term.m"
{
#line 737 "term.m"
  {
#line 737 "term.m"
    MR_bool mercury__term__succeeded;
#line 737 "term.m"
    MR_Word mercury__term__Term_4;
#line 737 "term.m"
    MR_Word mercury__term__Univ_9;

#line 738 "term.m"
    {
#line 738 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_5, mercury__term__Var_3, &mercury__term__Univ_9);
    }
#line 739 "term.m"
    {
#line 739 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_6_6, mercury__term__Univ_9, &mercury__term__Term_4);
    }
#line 737 "term.m"
    return mercury__term__Term_4;
#line 737 "term.m"
  }
#line 125 "term.m"
}

#line 121 "term.m"
void MR_CALL 
mercury__term__det_term_to_type_2_p_0(
#line 121 "term.m"
  MR_Word mercury__term__TypeInfo_19_19,
#line 121 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_20,
#line 121 "term.m"
  MR_Word mercury__term__Term_3,
#line 121 "term.m"
  MR_Box * mercury__term__X_4)
#line 121 "term.m"
{
#line 724 "term.m"
  {
#line 724 "term.m"
    MR_bool mercury__term__succeeded;
#line 724 "term.m"
    MR_Box mercury__term__XPrime_5;
#line 522 "term.m"
    MR_Word mercury__term__V_23_23;

#line 523 "term.m"
    {
#line 523 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_19_19, mercury__term__TypeInfo_for_T_20, mercury__term__Term_3, &mercury__term__V_23_23);
    }
#line 523 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 523 "term.m"
    if (mercury__term__succeeded)
#line 523 "term.m"
      {
#line 523 "term.m"
        mercury__term__XPrime_5 = (MR_hl_field(MR_mktag(0), mercury__term__V_23_23, (MR_Integer) 0));
#line 723 "term.m"
        *mercury__term__X_4 = mercury__term__XPrime_5;
#line 523 "term.m"
      }
#line 523 "term.m"
    else
#line 726 "term.m"
      {
#line 1416 "term.m"
        MR_Word mercury__term__ArgTerms_25;
#line 1416 "term.m"
        MR_Word mercury__term__V_24_24;
#line 1416 "term.m"
        MR_Word mercury__term__V_26_26;

#line 1416 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1416 "term.m"
        if (mercury__term__succeeded)
#line 1416 "term.m"
          {
#line 1416 "term.m"
            mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1416 "term.m"
            mercury__term__ArgTerms_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 1416 "term.m"
            mercury__term__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1417 "term.m"
            {
#line 1417 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_19_19, mercury__term__ArgTerms_25);
            }
#line 1416 "term.m"
          }
#line 724 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 726 "term.m"
        if (mercury__term__succeeded)
#line 725 "term.m"
          {
#line 725 "term.m"
            {
#line 725 "term.m"
              mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.det_term_to_type\'/2", (MR_String) "the term is not ground");
#line 725 "term.m"
              return;
            }
#line 725 "term.m"
          }
#line 726 "term.m"
        else
#line 728 "term.m"
          {
#line 728 "term.m"
            MR_String mercury__term__Message_6;
#line 728 "term.m"
            MR_String mercury__term__V_11_11;
#line 728 "term.m"
            MR_String mercury__term__V_13_13;
#line 728 "term.m"
            MR_String mercury__term__V_14_14;
#line 728 "term.m"
            MR_Word mercury__term__V_15_15;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_for_T_20 ;
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
#line 16869 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_15_15  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 728 "term.m"
            {
#line 728 "term.m"
              mercury__term__V_14_14 = mercury__type_desc__type_name_1_f_0(mercury__term__V_15_15);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__term__V_14_14, (MR_String) "\'", &mercury__term__V_13_13);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) " for type \140", mercury__term__V_13_13, &mercury__term__V_11_11);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "type error:\nthe term is not a valid term", mercury__term__V_11_11, &mercury__term__Message_6);
            }
#line 729 "term.m"
            {
#line 729 "term.m"
              mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.det_term_to_type\'/2", mercury__term__Message_6);
#line 729 "term.m"
              return;
            }
#line 728 "term.m"
          }
#line 726 "term.m"
      }
#line 724 "term.m"
  }
#line 121 "term.m"
}

#line 120 "term.m"
MR_Box MR_CALL 
mercury__term__det_term_to_type_1_f_0(
#line 120 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 120 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 120 "term.m"
  MR_Word mercury__term__Term_3)
#line 120 "term.m"
{
#line 719 "term.m"
  {
#line 719 "term.m"
    MR_bool mercury__term__succeeded;
#line 719 "term.m"
    MR_Box mercury__term__X_4;

#line 719 "term.m"
    {
#line 719 "term.m"
      mercury__term__det_term_to_type_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__TypeInfo_for_T_6, mercury__term__Term_3, &mercury__term__X_4);
    }
#line 719 "term.m"
    return mercury__term__X_4;
#line 719 "term.m"
  }
#line 120 "term.m"
}

#line 116 "term.m"
MR_bool MR_CALL 
mercury__term__term_to_type_2_p_0(
#line 116 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 116 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 116 "term.m"
  MR_Word mercury__term__Term_3,
#line 116 "term.m"
  MR_Box * mercury__term__Val_4)
#line 116 "term.m"
{
#line 522 "term.m"
  {
#line 522 "term.m"
    MR_bool mercury__term__succeeded;
#line 522 "term.m"
    MR_Word mercury__term__V_5_5;

#line 523 "term.m"
    {
#line 523 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_6, mercury__term__TypeInfo_for_T_7, mercury__term__Term_3, &mercury__term__V_5_5);
    }
#line 523 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 523 "term.m"
    if (mercury__term__succeeded)
#line 523 "term.m"
      *mercury__term__Val_4 = (MR_hl_field(MR_mktag(0), mercury__term__V_5_5, (MR_Integer) 0));
#line 522 "term.m"
    return mercury__term__succeeded;
#line 522 "term.m"
  }
#line 116 "term.m"
}

#line 91 "term.m"
void MR_CALL 
mercury__term__try_term_to_type_2_p_0(
#line 91 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_11,
#line 91 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_12,
#line 91 "term.m"
  MR_Word mercury__term__Term_3,
#line 91 "term.m"
  MR_Word * mercury__term__Result_4)
#line 91 "term.m"
{
#line 528 "term.m"
  {
#line 528 "term.m"
    MR_bool mercury__term__succeeded;
#line 528 "term.m"
    MR_Word mercury__term__UnivResult_6;
#line 528 "term.m"
    MR_Word mercury__term__V_10_10;
#line 528 "term.m"
    MR_Word mercury__term__V_17_17;
#line 58 "type_desc.opt"
    MR_Box mercury__term__ValTypedVar_5;

#line 58 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_for_T_12 ;
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
#line 17032 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_10_10  = TypeInfo;
#line 58 "type_desc.opt"
}
#line 544 "term.m"
    mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "term.m"
    {
#line 544 "term.m"
      mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_U_11, mercury__term__Term_3, mercury__term__V_10_10, mercury__term__V_17_17, &mercury__term__UnivResult_6);
    }
#line 535 "term.m"
    if (((MR_tag((MR_Word) mercury__term__UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
#line 537 "term.m"
      *mercury__term__Result_4 = mercury__term__UnivResult_6;
#line 535 "term.m"
    else
#line 531 "term.m"
      {
#line 531 "term.m"
        MR_Word mercury__term__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__UnivResult_6, (MR_Integer) 0)));
#line 531 "term.m"
        MR_Box mercury__term__Val_8;

#line 532 "term.m"
        {
#line 532 "term.m"
          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Univ_7, &mercury__term__Val_8);
        }
#line 534 "term.m"
        {
#line 534 "term.m"
          MR_Word base;
#line 534 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 534 "term.m"
          *mercury__term__Result_4 = base;
#line 534 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__term__Val_8;
#line 534 "term.m"
        }
#line 531 "term.m"
      }
#line 528 "term.m"
  }
#line 91 "term.m"
}

#line 90 "term.m"
MR_Word MR_CALL 
mercury__term__try_term_to_type_1_f_0(
#line 90 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 90 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 90 "term.m"
  MR_Word mercury__term__Term_3)
#line 90 "term.m"
{
#line 526 "term.m"
  {
#line 526 "term.m"
    MR_bool mercury__term__succeeded;
#line 526 "term.m"
    MR_Word mercury__term__Result_4;

#line 526 "term.m"
    {
#line 526 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_5, mercury__term__TypeInfo_for_T_6, mercury__term__Term_3, &mercury__term__Result_4);
    }
#line 526 "term.m"
    return mercury__term__Result_4;
#line 526 "term.m"
  }
#line 90 "term.m"
}

#line 63 "term.m"
MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
#line 63 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 63 "term.m"
  MR_Word mercury__term__Term_3)
#line 63 "term.m"
{
#line 517 "term.m"
  {
#line 517 "term.m"
    MR_bool mercury__term__succeeded;
#line 517 "term.m"
    MR_Word mercury__term__Context_4;

#line 517 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 516 "term.m"
      {
#line 516 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 516 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 516 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 516 "term.m"
      }
#line 517 "term.m"
    else
#line 517 "term.m"
      {
#line 517 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 517 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 517 "term.m"
      }
#line 517 "term.m"
    return mercury__term__Context_4;
#line 517 "term.m"
  }
#line 63 "term.m"
}

void mercury__term__init(void)
{
}

void mercury__term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_const_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_context_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_generic_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_to_type_arg_context_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_to_type_context_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_to_type_error_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_to_type_result_2);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_to_type_result_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_supply_1);
}

void mercury__term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term. */
