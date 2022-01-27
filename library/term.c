/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 86 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1];

#line 89 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0;

#line 92 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1];

#line 95 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

#line 98 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1];

#line 101 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

#line 104 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

#line 107 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

#line 110 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

#line 113 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

#line 116 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

#line 119 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

#line 122 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

#line 125 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2];

#line 128 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

#line 131 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5];

#line 134 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5];

#line 137 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

#line 140 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

#line 143 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

#line 146 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

#line 149 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

#line 152 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

#line 155 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

#line 158 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

#line 161 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

#line 164 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

#line 167 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

#line 170 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

#line 173 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 176 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

#line 179 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

#line 182 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

#line 185 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 188 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

#line 191 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

#line 194 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

#line 197 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

#line 200 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

#line 203 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

#line 206 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

#line 209 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

#line 212 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

#line 215 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3];

#line 218 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0;

#line 221 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1];

#line 224 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1];

#line 227 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1];

#line 230 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1];

#line 233 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0;

#line 236 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4];

#line 239 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_0;

#line 242 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2];

#line 245 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_1;

#line 248 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1];

#line 251 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1];

#line 254 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_error_1[2];

#line 257 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2];

#line 260 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2];

#line 263 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1];

#line 266 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_0;

#line 269 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2;

#line 272 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1];

#line 275 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_1;

#line 278 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1];

#line 281 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1];

#line 284 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_result_2[2];

#line 287 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2];

#line 290 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2];

#line 293 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0;

#line 296 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

#line 299 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

#line 302 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

#line 305 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

#line 308 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 311 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 313 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 316 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 319 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 321 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 323 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 326 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 329 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 331 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 334 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 337 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 339 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 341 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 344 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 347 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 349 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 352 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 355 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 357 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 359 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 362 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 365 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 367 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 369 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 372 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 375 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 377 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 379 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 381 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 384 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 387 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 389 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 392 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 395 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 397 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 399 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 402 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 405 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 407 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 409 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 412 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 415 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 417 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 419 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 421 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 424 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 427 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 429 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 432 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 435 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 437 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 439 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 442 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 445 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 447 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 450 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 453 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 455 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 457 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 460 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 463 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 465 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 468 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 471 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 473 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 475 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 478 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 481 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 483 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 485 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 488 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
#line 491 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 493 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 495 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 497 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 500 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 503 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 505 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 507 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 509 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 512 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 515 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 517 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 519 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 521 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 523 "term.c"
  MR_Box mercury__term__wrapper_arg_5);

#line 526 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 529 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 531 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 533 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 536 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 539 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 541 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 543 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 545 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 548 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 551 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 553 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 555 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 558 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 561 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 563 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 565 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 567 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 570 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 573 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 575 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 578 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 581 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 583 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 585 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 588 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 591 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 593 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 595 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 598 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 601 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 603 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 605 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 607 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 610 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 613 "term.c"
  MR_Box mercury__term__closure_arg,
#line 615 "term.c"
  MR_Box mercury__term__wrapper_arg_1);

#line 618 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 621 "term.c"
  MR_Box mercury__term__closure_arg,
#line 623 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 625 "term.c"
  MR_Box * mercury__term__wrapper_arg_2);

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
#line 92 "version_array.opt"
  MR_Word mercury__term__TypeInfo_for_T1_1_16,
#line 92 "version_array.opt"
  MR_Box mercury__term__VA_7_7,
#line 92 "version_array.opt"
  MR_Word mercury__term__Acc_8_8,
#line 92 "version_array.opt"
  MR_Integer mercury__term__Hi_9_9);

#line 314 "list.int"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 314 "list.int"
  MR_Word mercury__term__V_15_15,
#line 314 "list.int"
  MR_Word mercury__term__HeadVar__2_2,
#line 314 "list.int"
  MR_Word * mercury__term__HeadVar__3_3);

#line 526 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 526 "list.int"
  MR_Word mercury__term__V_13_13,
#line 526 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 526 "list.int"
  MR_Word mercury__term__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 783 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 783 "term.m"
  MR_Word mercury__term__Context_4,
#line 783 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 783 "term.m"
  MR_Word * mercury__term__Term_6);

#line 551 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 551 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 551 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 551 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 551 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 551 "term.m"
  MR_Word mercury__term__Term_4,
#line 551 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 551 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 1198 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1198 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1198 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1198 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 984 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 984 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 984 "term.m"
  MR_Word mercury__term__Var_6,
#line 984 "term.m"
  MR_Word mercury__term__BoundVar_7,
#line 984 "term.m"
  MR_Word mercury__term__BoundVars_8,
#line 984 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_13,
#line 984 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_14);

#line 774 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 774 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 774 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 774 "term.m"
  MR_Word * mercury__term__HeadVar__2_2);

#line 724 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 724 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 724 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 724 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 724 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 724 "term.m"
  MR_Word mercury__term__Univ_4,
#line 724 "term.m"
  MR_Word mercury__term__Context_5,
#line 724 "term.m"
  MR_Word * mercury__term__HeadVar__6_6);

#line 655 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 655 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 655 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 655 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 655 "term.m"
  MR_Word mercury__term__Functor_3,
#line 655 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 655 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 655 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 655 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 510 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 510 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 510 "term.m"
  MR_Word mercury__term__Context_3,
#line 510 "term.m"
  MR_Word * mercury__term__HeadVar__4_4);


static /* final */ const MR_Box mercury__term_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__term_scalar_common_2[2][3];

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

static /* final */ const MR_Box mercury__term_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[1]))
  },
  /* row 1 */
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
    ((MR_Box) (&mercury__term_scalar_common_2[1])),
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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



#line 1200 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1205 "term.c"
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

#line 1220 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1225 "term.c"
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

#line 1240 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1245 "term.c"
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

#line 1260 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1265 "term.c"
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

#line 1280 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1285 "term.c"
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

#line 1300 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 1305 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 1310 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1315 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

#line 1321 "term.c"
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

#line 1345 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1354 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1363 "term.c"
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

#line 1384 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1390 "term.c"
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

#line 1405 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1410 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1419 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1424 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1429 "term.c"
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

#line 1450 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1456 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1461 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1466 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1471 "term.c"
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

#line 1492 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1500 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1508 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1517 "term.c"
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

#line 1538 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1546 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1554 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1563 "term.c"
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

#line 1584 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1592 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1599 "term.c"
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

#line 1614 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1620 "term.c"
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

#line 1635 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1640 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1645 "term.c"
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

#line 1659 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1665 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1671 "term.c"
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

#line 1692 "term.c"
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

#line 1713 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1720 "term.c"
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

#line 1735 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1740 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0
  }
};

#line 1749 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1754 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1] = {
  (MR_Integer) 0
};

#line 1759 "term.c"
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

#line 1780 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0
  }
};

#line 1788 "term.c"
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

#line 1809 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1817 "term.c"
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

#line 1832 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1838 "term.c"
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

#line 1853 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 1858 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1
};

#line 1863 "term.c"
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

#line 1877 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1,
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 1883 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1889 "term.c"
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

#line 1910 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1915 "term.c"
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

#line 1930 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1938 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_to_type_error_1__pseudo_2
};

#line 1943 "term.c"
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

#line 1958 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 1963 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1
};

#line 1968 "term.c"
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

#line 1982 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1,
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 1988 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1994 "term.c"
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

#line 2015 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2024 "term.c"
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

#line 2045 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 2050 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2057 "term.c"
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

#line 2078 "term.c"
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

#line 2099 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 2104 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2111 "term.c"
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

#line 2132 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 2143 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 2146 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2148 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2150 "term.c"
{
#line 2152 "term.c"
  {
#line 2154 "term.c"
    MR_bool mercury__term__succeeded;

#line 2157 "term.c"
    {
#line 2159 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2162 "term.c"
    return mercury__term__succeeded;
#line 2164 "term.c"
  }
#line 2166 "term.c"
}

#line 2169 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 2172 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2174 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2176 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2178 "term.c"
{
#line 2180 "term.c"
  {
#line 2182 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2185 "term.c"
    {
#line 2187 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2190 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2192 "term.c"
  }
#line 2194 "term.c"
}

#line 2197 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 2200 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2202 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2204 "term.c"
{
#line 2206 "term.c"
  {
#line 2208 "term.c"
    MR_bool mercury__term__succeeded;

#line 2211 "term.c"
    {
#line 2213 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2216 "term.c"
    return mercury__term__succeeded;
#line 2218 "term.c"
  }
#line 2220 "term.c"
}

#line 2223 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 2226 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2228 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2230 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2232 "term.c"
{
#line 2234 "term.c"
  {
#line 2236 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2239 "term.c"
    {
#line 2241 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2244 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2246 "term.c"
  }
#line 2248 "term.c"
}

#line 2251 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 2254 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2256 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2258 "term.c"
{
#line 2260 "term.c"
  {
#line 2262 "term.c"
    MR_bool mercury__term__succeeded;

#line 2265 "term.c"
    {
#line 2267 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 2270 "term.c"
    return mercury__term__succeeded;
#line 2272 "term.c"
  }
#line 2274 "term.c"
}

#line 2277 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 2280 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2282 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2284 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2286 "term.c"
{
#line 2288 "term.c"
  {
#line 2290 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2293 "term.c"
    {
#line 2295 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 2298 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2300 "term.c"
  }
#line 2302 "term.c"
}

#line 2305 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 2308 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2310 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2312 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2314 "term.c"
{
#line 2316 "term.c"
  {
#line 2318 "term.c"
    MR_bool mercury__term__succeeded;

#line 2321 "term.c"
    {
#line 2323 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2326 "term.c"
    return mercury__term__succeeded;
#line 2328 "term.c"
  }
#line 2330 "term.c"
}

#line 2333 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 2336 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2338 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2340 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2342 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2344 "term.c"
{
#line 2346 "term.c"
  {
#line 2348 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2351 "term.c"
    {
#line 2353 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2356 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2358 "term.c"
  }
#line 2360 "term.c"
}

#line 2363 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 2366 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2368 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2370 "term.c"
{
#line 2372 "term.c"
  {
#line 2374 "term.c"
    MR_bool mercury__term__succeeded;

#line 2377 "term.c"
    {
#line 2379 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2382 "term.c"
    return mercury__term__succeeded;
#line 2384 "term.c"
  }
#line 2386 "term.c"
}

#line 2389 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 2392 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2394 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2396 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2398 "term.c"
{
#line 2400 "term.c"
  {
#line 2402 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2405 "term.c"
    {
#line 2407 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2410 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2412 "term.c"
  }
#line 2414 "term.c"
}

#line 2417 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 2420 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2422 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2424 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2426 "term.c"
{
#line 2428 "term.c"
  {
#line 2430 "term.c"
    MR_bool mercury__term__succeeded;

#line 2433 "term.c"
    {
#line 2435 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2438 "term.c"
    return mercury__term__succeeded;
#line 2440 "term.c"
  }
#line 2442 "term.c"
}

#line 2445 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 2448 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2450 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2452 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2454 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2456 "term.c"
{
#line 2458 "term.c"
  {
#line 2460 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2463 "term.c"
    {
#line 2465 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2468 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2470 "term.c"
  }
#line 2472 "term.c"
}

#line 2475 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 2478 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2480 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2482 "term.c"
{
#line 2484 "term.c"
  {
#line 2486 "term.c"
    MR_bool mercury__term__succeeded;

#line 2489 "term.c"
    {
#line 2491 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2494 "term.c"
    return mercury__term__succeeded;
#line 2496 "term.c"
  }
#line 2498 "term.c"
}

#line 2501 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2504 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2506 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2508 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2510 "term.c"
{
#line 2512 "term.c"
  {
#line 2514 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2517 "term.c"
    {
#line 2519 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2522 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2524 "term.c"
  }
#line 2526 "term.c"
}

#line 2529 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 2532 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2534 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2536 "term.c"
{
#line 2538 "term.c"
  {
#line 2540 "term.c"
    MR_bool mercury__term__succeeded;

#line 2543 "term.c"
    {
#line 2545 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_arg_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2548 "term.c"
    return mercury__term__succeeded;
#line 2550 "term.c"
  }
#line 2552 "term.c"
}

#line 2555 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 2558 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2560 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2562 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2564 "term.c"
{
#line 2566 "term.c"
  {
#line 2568 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2571 "term.c"
    {
#line 2573 "term.c"
      mercury__term____Compare____term_to_type_arg_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2576 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2578 "term.c"
  }
#line 2580 "term.c"
}

#line 2583 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 2586 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2588 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2590 "term.c"
{
#line 2592 "term.c"
  {
#line 2594 "term.c"
    MR_bool mercury__term__succeeded;

#line 2597 "term.c"
    {
#line 2599 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2602 "term.c"
    return mercury__term__succeeded;
#line 2604 "term.c"
  }
#line 2606 "term.c"
}

#line 2609 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 2612 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2614 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2616 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2618 "term.c"
{
#line 2620 "term.c"
  {
#line 2622 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2625 "term.c"
    {
#line 2627 "term.c"
      mercury__term____Compare____term_to_type_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2630 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2632 "term.c"
  }
#line 2634 "term.c"
}

#line 2637 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 2640 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2642 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2644 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2646 "term.c"
{
#line 2648 "term.c"
  {
#line 2650 "term.c"
    MR_bool mercury__term__succeeded;

#line 2653 "term.c"
    {
#line 2655 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2658 "term.c"
    return mercury__term__succeeded;
#line 2660 "term.c"
  }
#line 2662 "term.c"
}

#line 2665 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
#line 2668 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2670 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2672 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2674 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2676 "term.c"
{
#line 2678 "term.c"
  {
#line 2680 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2683 "term.c"
    {
#line 2685 "term.c"
      mercury__term____Compare____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2688 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2690 "term.c"
  }
#line 2692 "term.c"
}

#line 2695 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 2698 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2700 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2702 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2704 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2706 "term.c"
{
#line 2708 "term.c"
  {
#line 2710 "term.c"
    MR_bool mercury__term__succeeded;

#line 2713 "term.c"
    {
#line 2715 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2718 "term.c"
    return mercury__term__succeeded;
#line 2720 "term.c"
  }
#line 2722 "term.c"
}

#line 2725 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 2728 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2730 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2732 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 2734 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 2736 "term.c"
  MR_Box mercury__term__wrapper_arg_5)
#line 2738 "term.c"
{
#line 2740 "term.c"
  {
#line 2742 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2745 "term.c"
    {
#line 2747 "term.c"
      mercury__term____Compare____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_4), ((MR_Word) mercury__term__wrapper_arg_5));
    }
#line 2750 "term.c"
    *mercury__term__wrapper_arg_3 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2752 "term.c"
  }
#line 2754 "term.c"
}

#line 2757 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 2760 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2762 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2764 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2766 "term.c"
{
#line 2768 "term.c"
  {
#line 2770 "term.c"
    MR_bool mercury__term__succeeded;

#line 2773 "term.c"
    {
#line 2775 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2778 "term.c"
    return mercury__term__succeeded;
#line 2780 "term.c"
  }
#line 2782 "term.c"
}

#line 2785 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 2788 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2790 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2792 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2794 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2796 "term.c"
{
#line 2798 "term.c"
  {
#line 2800 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2803 "term.c"
    {
#line 2805 "term.c"
      mercury__term____Compare____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2808 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2810 "term.c"
  }
#line 2812 "term.c"
}

#line 2815 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 2818 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2820 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2822 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2824 "term.c"
{
#line 2826 "term.c"
  {
#line 2828 "term.c"
    MR_bool mercury__term__succeeded;

#line 2831 "term.c"
    {
#line 2833 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2836 "term.c"
    return mercury__term__succeeded;
#line 2838 "term.c"
  }
#line 2840 "term.c"
}

#line 2843 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 2846 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2848 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2850 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2852 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2854 "term.c"
{
#line 2856 "term.c"
  {
#line 2858 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2861 "term.c"
    {
#line 2863 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2866 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2868 "term.c"
  }
#line 2870 "term.c"
}

#line 2873 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 2876 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2878 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2880 "term.c"
{
#line 2882 "term.c"
  {
#line 2884 "term.c"
    MR_bool mercury__term__succeeded;

#line 2887 "term.c"
    {
#line 2889 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2892 "term.c"
    return mercury__term__succeeded;
#line 2894 "term.c"
  }
#line 2896 "term.c"
}

#line 2899 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 2902 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2904 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2906 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2908 "term.c"
{
#line 2910 "term.c"
  {
#line 2912 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2915 "term.c"
    {
#line 2917 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2920 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2922 "term.c"
  }
#line 2924 "term.c"
}

#line 2927 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 2930 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2932 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2934 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2936 "term.c"
{
#line 2938 "term.c"
  {
#line 2940 "term.c"
    MR_bool mercury__term__succeeded;

#line 2943 "term.c"
    {
#line 2945 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2948 "term.c"
    return mercury__term__succeeded;
#line 2950 "term.c"
  }
#line 2952 "term.c"
}

#line 2955 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 2958 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2960 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2962 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2964 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2966 "term.c"
{
#line 2968 "term.c"
  {
#line 2970 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2973 "term.c"
    {
#line 2975 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2978 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2980 "term.c"
  }
#line 2982 "term.c"
}

#line 2985 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 2988 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2990 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 2992 "term.c"
{
#line 2994 "term.c"
  {
#line 2996 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 2998 "term.c"
    MR_Box mercury__term__closure;
#line 3000 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 3003 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3005 "term.c"
    {
#line 3007 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 3010 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3012 "term.c"
    return mercury__term__wrapper_arg_2;
#line 3014 "term.c"
  }
#line 3016 "term.c"
}

#line 3019 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 3022 "term.c"
  MR_Box mercury__term__closure_arg,
#line 3024 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3026 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 3028 "term.c"
{
#line 3030 "term.c"
  {
#line 3032 "term.c"
    MR_bool mercury__term__succeeded;
#line 3034 "term.c"
    MR_Box mercury__term__closure;
#line 3036 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 3039 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3041 "term.c"
    {
#line 3043 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 3046 "term.c"
    if (mercury__term__succeeded)
#line 3048 "term.c"
      {
#line 3050 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3052 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 3054 "term.c"
      }
#line 3056 "term.c"
    return mercury__term__succeeded;
#line 3058 "term.c"
  }
#line 3060 "term.c"
}

#line 92 "version_array.opt"
static MR_Word MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
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
#line 266 "version_array.opt"
  while (MR_TRUE)
#line 266 "version_array.opt"
    {
#line 266 "version_array.opt"
      /* tailcall optimized into a loop */
#line 266 "version_array.opt"
      {
#line 266 "version_array.opt"
        MR_bool mercury__term__succeeded = ((MR_Integer) 0 <= mercury__term__Hi_9_9);
#line 266 "version_array.opt"
        MR_Word mercury__term__HeadVar__5_5_10;

#line 266 "version_array.opt"
        if (mercury__term__succeeded)
#line 261 "version_array.opt"
          {
#line 261 "version_array.opt"
            MR_Word mercury__term__V_11_12;
#line 261 "version_array.opt"
            MR_Integer mercury__term__V_13_13;
#line 261 "version_array.opt"
            MR_Box mercury__term__V_12_14;

#line 263 "version_array.opt"
            {
#line 263 "version_array.opt"
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
#line 264 "version_array.opt"
            mercury__term__V_13_13 = (mercury__term__Hi_9_9 - (MR_Integer) 1);
#line 261 "version_array.opt"
            /* direct tailcall eliminated */
#line 261 "version_array.opt"
            {
#line 261 "version_array.opt"
              MR_Word mercury__term__Acc_8__tmp_copy_8 = mercury__term__V_11_12;
#line 261 "version_array.opt"
              MR_Integer mercury__term__Hi_9__tmp_copy_9 = mercury__term__V_13_13;

#line 261 "version_array.opt"
              mercury__term__Hi_9_9 = mercury__term__Hi_9__tmp_copy_9;
#line 261 "version_array.opt"
              mercury__term__Acc_8_8 = mercury__term__Acc_8__tmp_copy_8;
#line 261 "version_array.opt"
            }
#line 261 "version_array.opt"
            continue;
#line 261 "version_array.opt"
          }
#line 266 "version_array.opt"
        else
#line 267 "version_array.opt"
          mercury__term__HeadVar__5_5_10 = mercury__term__Acc_8_8;
#line 266 "version_array.opt"
        return mercury__term__HeadVar__5_5_10;
#line 266 "version_array.opt"
      }
#line 266 "version_array.opt"
      break;
#line 266 "version_array.opt"
    }
#line 92 "version_array.opt"
}

#line 314 "list.int"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(
#line 314 "list.int"
  MR_Word mercury__term__V_15_15,
#line 314 "list.int"
  MR_Word mercury__term__HeadVar__2_2,
#line 314 "list.int"
  MR_Word * mercury__term__HeadVar__3_3)
#line 314 "list.int"
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
          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term__V_15_15, mercury__term__T0_7_7, &mercury__term__T_9_9);
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
#line 314 "list.int"
}

#line 526 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 526 "list.int"
  MR_Word mercury__term__V_13_13,
#line 526 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 526 "list.int"
  MR_Word mercury__term__HeadVar__2_2)
#line 526 "list.int"
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
#line 526 "list.int"
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

#line 783 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 783 "term.m"
  MR_Word mercury__term__Context_4,
#line 783 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 783 "term.m"
  MR_Word * mercury__term__Term_6)
#line 783 "term.m"
{
#line 785 "term.m"
  {
#line 785 "term.m"
    MR_bool mercury__term__succeeded;
#line 785 "term.m"
    MR_Word mercury__term__TypeCtor_7;
#line 785 "term.m"
    MR_Word mercury__term__ArgTypes_8;
#line 785 "term.m"
    MR_String mercury__term__TypeName_9;
#line 785 "term.m"
    MR_String mercury__term__ModuleName_10;
#line 785 "term.m"
    MR_Word mercury__term__ArgTerms_11;
#line 142 "type_desc.opt"
    MR_String mercury__term___ModuleName_5_32;
#line 142 "type_desc.opt"
    MR_Integer mercury__term___Arity_6_33;
#line 142 "type_desc.opt"
    MR_String mercury__term___ModuleName_5_36;
#line 142 "type_desc.opt"
    MR_Integer mercury__term___Arity_6_37;

#line 76 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__TypeInfo_5 ;
		{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 3399 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_7  = TypeCtorDesc;
	 mercury__term__ArgTypes_8  = ArgTypes;
#line 76 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_7 ;
		{
#line 142 "type_desc.opt"
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
#line 3448 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_32  = TypeCtorModuleName;
	 mercury__term__TypeName_9  = TypeCtorName;
	 mercury__term___Arity_6_33  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_7 ;
		{
#line 142 "type_desc.opt"
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
#line 3498 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_36  = TypeCtorModuleName;
	 mercury__term__ModuleName_10  = TypeCtorName;
	 mercury__term___Arity_6_37  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 789 "term.m"
    {
#line 789 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term__Context_4, mercury__term__ArgTypes_8, &mercury__term__ArgTerms_11);
    }
#line 791 "term.m"
    mercury__term__succeeded = (strcmp(mercury__term__ModuleName_10, (MR_String) "builtin") == 0);
#line 793 "term.m"
    if (mercury__term__succeeded)
#line 792 "term.m"
      {
#line 792 "term.m"
        MR_Word mercury__term__V_15_15;

#line 792 "term.m"
        {
#line 792 "term.m"
          mercury__term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_15_15, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 792 "term.m"
        }
#line 792 "term.m"
        {
#line 792 "term.m"
          MR_Word base;
#line 792 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 792 "term.m"
          *mercury__term__Term_6 = base;
#line 792 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 792 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 792 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 792 "term.m"
        }
#line 792 "term.m"
      }
#line 793 "term.m"
    else
#line 794 "term.m"
      {
#line 794 "term.m"
        MR_Word mercury__term__Arg1_12;
#line 794 "term.m"
        MR_Word mercury__term__Arg2_13;
#line 794 "term.m"
        MR_Word mercury__term__V_16_16;
#line 794 "term.m"
        MR_Word mercury__term__V_17_17;
#line 794 "term.m"
        MR_Word mercury__term__V_18_18;
#line 794 "term.m"
        MR_Word mercury__term__V_19_19;
#line 794 "term.m"
        MR_Word mercury__term__V_21_21;
#line 794 "term.m"
        MR_Word mercury__term__V_22_22;
#line 794 "term.m"
        MR_Word mercury__term__V_23_23;

#line 794 "term.m"
        {
#line 794 "term.m"
          mercury__term__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 794 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__ModuleName_10));
#line 794 "term.m"
        }
#line 794 "term.m"
        mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "term.m"
        {
#line 794 "term.m"
          mercury__term__Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 794 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 0) = ((MR_Box) (mercury__term__V_16_16));
#line 794 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 1) = ((MR_Box) (mercury__term__V_17_17));
#line 794 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 2) = ((MR_Box) (mercury__term__Context_4));
#line 794 "term.m"
        }
#line 795 "term.m"
        {
#line 795 "term.m"
          mercury__term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 795 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_18_18, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 795 "term.m"
        }
#line 795 "term.m"
        {
#line 795 "term.m"
          mercury__term__Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 795 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 0) = ((MR_Box) (mercury__term__V_18_18));
#line 795 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 795 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 2) = ((MR_Box) (mercury__term__Context_4));
#line 795 "term.m"
        }
#line 796 "term.m"
        mercury__term__V_19_19 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 796 "term.m"
        mercury__term__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 796 "term.m"
        {
#line 796 "term.m"
          mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 0) = ((MR_Box) (mercury__term__Arg2_13));
#line 796 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 1) = ((MR_Box) (mercury__term__V_23_23));
#line 796 "term.m"
        }
#line 796 "term.m"
        {
#line 796 "term.m"
          mercury__term__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__Arg1_12));
#line 796 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 796 "term.m"
        }
#line 796 "term.m"
        {
#line 796 "term.m"
          MR_Word base;
#line 796 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 796 "term.m"
          *mercury__term__Term_6 = base;
#line 796 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_19_19));
#line 796 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_21_21));
#line 796 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 796 "term.m"
        }
#line 794 "term.m"
      }
#line 785 "term.m"
  }
#line 783 "term.m"
}

#line 551 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 551 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 551 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 551 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 551 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 551 "term.m"
  MR_Word mercury__term__Term_4,
#line 551 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 551 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 551 "term.m"
{
#line 557 "term.m"
  {
#line 557 "term.m"
    MR_bool mercury__term__succeeded;

#line 557 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 628 "term.m"
      {
#line 628 "term.m"
        MR_Word mercury__term__TypeCtorInfo_188_188;
#line 628 "term.m"
        MR_Word mercury__term__Arg_120;
#line 628 "term.m"
        MR_Word mercury__term__Value_122;
#line 628 "term.m"
        MR_Word mercury__term__Type_123;
#line 628 "term.m"
        MR_Word mercury__term__Univ_128;
#line 628 "term.m"
        MR_Word mercury__term__V_135_135;
#line 628 "term.m"
        MR_String mercury__term__V_136_136;
#line 628 "term.m"
        MR_Word mercury__term__V_137_137;
#line 628 "term.m"
        MR_Word mercury__term__V_138_138;
#line 628 "term.m"
        MR_Word mercury__term__V_139_139;
#line 628 "term.m"
        MR_String mercury__term__V_140_140;
#line 628 "term.m"
        MR_Word mercury__term__V_141_141;
#line 628 "term.m"
        MR_Word mercury__term__V_142_142;
#line 628 "term.m"
        MR_Word mercury__term__V_143_143;
#line 628 "term.m"
        MR_Word mercury__term__V_159_159;
#line 628 "term.m"
        MR_Word mercury__term__V_192_192;
#line 628 "term.m"
        MR_Word mercury__term__V_193_193;
#line 628 "term.m"
        MR_Word mercury__term__V_195_195;
#line 628 "term.m"
        MR_Word mercury__term__V_196_196;
#line 628 "term.m"
        MR_String mercury__term__V_197_197;
#line 632 "term.m"
        MR_Word mercury__term__V_121_121;
#line 633 "term.m"
        MR_Word mercury__term__V_124_124;
#line 636 "term.m"
        MR_Word mercury__term__V_191_191;
#line 635 "term.m"
        MR_Word mercury__term__V_194_194;

#line 628 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 628 "term.m"
        if (mercury__term__succeeded)
#line 628 "term.m"
          {
#line 628 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "term.m"
            if (mercury__term__succeeded)
#line 628 "term.m"
              {
#line 632 "term.m"
                mercury__term__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 632 "term.m"
                mercury__term__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 632 "term.m"
                mercury__term__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 632 "term.m"
                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_135_135)) == (MR_mktag((MR_Integer) 0)));
#line 632 "term.m"
                if (mercury__term__succeeded)
#line 632 "term.m"
                  {
#line 632 "term.m"
                    mercury__term__V_136_136 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_135_135, (MR_Integer) 0)));
#line 632 "term.m"
                    mercury__term__succeeded = (strcmp(mercury__term__V_136_136, (MR_String) "univ") == 0);
#line 628 "term.m"
                    if (mercury__term__succeeded)
#line 628 "term.m"
                      {
#line 632 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_137_137)) == (MR_mktag((MR_Integer) 1)));
#line 632 "term.m"
                        if (mercury__term__succeeded)
#line 632 "term.m"
                          {
#line 632 "term.m"
                            mercury__term__Arg_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 0)));
#line 632 "term.m"
                            mercury__term__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 1)));
#line 632 "term.m"
                            mercury__term__succeeded = (mercury__term__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "term.m"
                            if (mercury__term__succeeded)
#line 628 "term.m"
                              {
#line 633 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Arg_120)) == (MR_mktag((MR_Integer) 0)));
#line 633 "term.m"
                                if (mercury__term__succeeded)
#line 633 "term.m"
                                  {
#line 633 "term.m"
                                    mercury__term__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 0)));
#line 633 "term.m"
                                    mercury__term__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 1)));
#line 633 "term.m"
                                    mercury__term__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 2)));
#line 633 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_139_139)) == (MR_mktag((MR_Integer) 0)));
#line 633 "term.m"
                                    if (mercury__term__succeeded)
#line 633 "term.m"
                                      {
#line 633 "term.m"
                                        mercury__term__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_139_139, (MR_Integer) 0)));
#line 633 "term.m"
                                        mercury__term__succeeded = (strcmp(mercury__term__V_140_140, (MR_String) ":") == 0);
#line 628 "term.m"
                                        if (mercury__term__succeeded)
#line 628 "term.m"
                                          {
#line 633 "term.m"
                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_141_141)) == (MR_mktag((MR_Integer) 1)));
#line 633 "term.m"
                                            if (mercury__term__succeeded)
#line 633 "term.m"
                                              {
#line 633 "term.m"
                                                mercury__term__Value_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 0)));
#line 633 "term.m"
                                                mercury__term__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 1)));
#line 633 "term.m"
                                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_142_142)) == (MR_mktag((MR_Integer) 1)));
#line 633 "term.m"
                                                if (mercury__term__succeeded)
#line 633 "term.m"
                                                  {
#line 633 "term.m"
                                                    mercury__term__Type_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 0)));
#line 633 "term.m"
                                                    mercury__term__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 1)));
#line 633 "term.m"
                                                    mercury__term__succeeded = (mercury__term__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "term.m"
                                                    if (mercury__term__succeeded)
#line 628 "term.m"
                                                      {
#line 636 "term.m"
                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Value_122)) == (MR_mktag((MR_Integer) 0)));
#line 636 "term.m"
                                                        if (mercury__term__succeeded)
#line 636 "term.m"
                                                          {
#line 636 "term.m"
                                                            mercury__term__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 0)));
#line 636 "term.m"
                                                            mercury__term__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 1)));
#line 636 "term.m"
                                                            mercury__term__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 2)));
#line 635 "term.m"
                                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Type_123)) == (MR_mktag((MR_Integer) 0)));
#line 635 "term.m"
                                                            if (mercury__term__succeeded)
#line 635 "term.m"
                                                              {
#line 635 "term.m"
                                                                mercury__term__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 0)));
#line 635 "term.m"
                                                                mercury__term__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 1)));
#line 635 "term.m"
                                                                mercury__term__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 2)));
#line 636 "term.m"
                                                                mercury__term__succeeded = (mercury__term__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "term.m"
                                                                if (mercury__term__succeeded)
#line 628 "term.m"
                                                                  {
#line 643 "term.m"
                                                                    mercury__term__succeeded = (mercury__term__V_195_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "term.m"
                                                                    if (mercury__term__succeeded)
#line 628 "term.m"
                                                                      {
#line 643 "term.m"
                                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_196_196)) == (MR_mktag((MR_Integer) 0)));
#line 643 "term.m"
                                                                        if (mercury__term__succeeded)
#line 643 "term.m"
                                                                          {
#line 643 "term.m"
                                                                            mercury__term__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_196_196, (MR_Integer) 0)));
#line 638 "term.m"
                                                                            if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 1))))
#line 635 "term.m"
                                                                              {
#line 635 "term.m"
                                                                                MR_Word mercury__term__TypeCtorInfo_185_185;
#line 635 "term.m"
                                                                                MR_Integer mercury__term__Int_126;

#line 635 "term.m"
                                                                                mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "int") == 0);
#line 635 "term.m"
                                                                                if (mercury__term__succeeded)
#line 635 "term.m"
                                                                                  {
#line 636 "term.m"
                                                                                    mercury__term__Int_126 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_193_193, (MR_Integer) 0)));
#line 3897 "term.c"
                                                                                    mercury__term__TypeCtorInfo_185_185 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 637 "term.m"
                                                                                    {
#line 637 "term.m"
                                                                                      mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_185_185, ((MR_Box) (mercury__term__Int_126)));
                                                                                    }
#line 637 "term.m"
                                                                                    mercury__term__succeeded = MR_TRUE;
#line 635 "term.m"
                                                                                  }
#line 635 "term.m"
                                                                              }
#line 638 "term.m"
                                                                            else
#line 638 "term.m"
                                                                              if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 2))))
#line 639 "term.m"
                                                                                {
#line 639 "term.m"
                                                                                  MR_Word mercury__term__TypeCtorInfo_186_186;
#line 639 "term.m"
                                                                                  MR_String mercury__term__String_130;

#line 639 "term.m"
                                                                                  mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "string") == 0);
#line 639 "term.m"
                                                                                  if (mercury__term__succeeded)
#line 639 "term.m"
                                                                                    {
#line 640 "term.m"
                                                                                      mercury__term__String_130 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_193_193, (MR_Integer) 0)));
#line 3929 "term.c"
                                                                                      mercury__term__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 641 "term.m"
                                                                                      {
#line 641 "term.m"
                                                                                        mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_186_186, ((MR_Box) (mercury__term__String_130)));
                                                                                      }
#line 641 "term.m"
                                                                                      mercury__term__succeeded = MR_TRUE;
#line 639 "term.m"
                                                                                    }
#line 639 "term.m"
                                                                                }
#line 638 "term.m"
                                                                              else
#line 638 "term.m"
                                                                                if (((((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 643 "term.m"
                                                                                  {
#line 643 "term.m"
                                                                                    MR_Word mercury__term__TypeCtorInfo_187_187;
#line 643 "term.m"
                                                                                    MR_Float mercury__term__Float_133;

#line 643 "term.m"
                                                                                    mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "float") == 0);
#line 643 "term.m"
                                                                                    if (mercury__term__succeeded)
#line 643 "term.m"
                                                                                      {
#line 644 "term.m"
                                                                                        mercury__term__Float_133 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 1)));
#line 3961 "term.c"
                                                                                        mercury__term__TypeCtorInfo_187_187 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 645 "term.m"
                                                                                        {
#line 645 "term.m"
                                                                                          mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_187_187, MR_box_float(mercury__term__Float_133));
                                                                                        }
#line 645 "term.m"
                                                                                        mercury__term__succeeded = MR_TRUE;
#line 643 "term.m"
                                                                                      }
#line 643 "term.m"
                                                                                  }
#line 638 "term.m"
                                                                                else
#line 638 "term.m"
                                                                                  mercury__term__succeeded = MR_FALSE;
#line 628 "term.m"
                                                                            if (mercury__term__succeeded)
#line 628 "term.m"
                                                                              {
#line 3982 "term.c"
                                                                                mercury__term__TypeCtorInfo_188_188 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 649 "term.m"
                                                                                {
#line 649 "term.m"
                                                                                  mercury__term__V_159_159 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_188_188, ((MR_Box) (mercury__term__Univ_128)));
                                                                                }
#line 649 "term.m"
                                                                                {
#line 649 "term.m"
                                                                                  MR_Word base;
#line 649 "term.m"
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 649 "term.m"
                                                                                  *mercury__term__HeadVar__7_7 = base;
#line 649 "term.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_159_159));
#line 649 "term.m"
                                                                                }
#line 649 "term.m"
                                                                                mercury__term__succeeded = MR_TRUE;
#line 628 "term.m"
                                                                              }
#line 643 "term.m"
                                                                          }
#line 628 "term.m"
                                                                      }
#line 628 "term.m"
                                                                  }
#line 635 "term.m"
                                                              }
#line 636 "term.m"
                                                          }
#line 628 "term.m"
                                                      }
#line 633 "term.m"
                                                  }
#line 633 "term.m"
                                              }
#line 628 "term.m"
                                          }
#line 633 "term.m"
                                      }
#line 633 "term.m"
                                  }
#line 628 "term.m"
                              }
#line 632 "term.m"
                          }
#line 628 "term.m"
                      }
#line 632 "term.m"
                  }
#line 628 "term.m"
              }
#line 628 "term.m"
          }
#line 628 "term.m"
      }
#line 557 "term.m"
    else
#line 557 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 578 "term.m"
        {
#line 578 "term.m"
          MR_Word mercury__term__TypeInfo_171_171;
#line 578 "term.m"
          MR_Word mercury__term__TypeCtorInfo_172_172;
#line 578 "term.m"
          MR_Word mercury__term__TypeInfo_173_173;
#line 578 "term.m"
          MR_Word mercury__term__ElemType_51;
#line 578 "term.m"
          MR_Word mercury__term__ArgList_56;
#line 578 "term.m"
          MR_Word mercury__term__TermContext_57;
#line 578 "term.m"
          MR_Word mercury__term__ListType_59;
#line 578 "term.m"
          MR_Word mercury__term__ArgContext_60;
#line 578 "term.m"
          MR_Word mercury__term__NewContext_61;
#line 578 "term.m"
          MR_Word mercury__term__ArgResult_62;
#line 578 "term.m"
          MR_Word mercury__term__V_68_68;
#line 578 "term.m"
          MR_Word mercury__term__V_69_69;
#line 578 "term.m"
          MR_String mercury__term__V_70_70;
#line 578 "term.m"
          MR_Word mercury__term__V_71_71;
#line 578 "term.m"
          MR_Word mercury__term__V_72_72;
#line 578 "term.m"
          MR_Integer mercury__term__V_77_77;
#line 589 "term.m"
          MR_Box mercury__term__Elem_58;
#line 590 "term.m"
          MR_Word mercury__term__V_73_73;

#line 577 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 578 "term.m"
          if (mercury__term__succeeded)
#line 578 "term.m"
            {
#line 577 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 577 "term.m"
              if (mercury__term__succeeded)
#line 577 "term.m"
                {
#line 577 "term.m"
                  mercury__term__ElemType_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 577 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 577 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "term.m"
                  if (mercury__term__succeeded)
#line 578 "term.m"
                    {
#line 583 "term.m"
                      mercury__term__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 583 "term.m"
                      mercury__term__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 583 "term.m"
                      mercury__term__TermContext_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 583 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 583 "term.m"
                      if (mercury__term__succeeded)
#line 583 "term.m"
                        {
#line 583 "term.m"
                          mercury__term__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_69_69, (MR_Integer) 0)));
#line 583 "term.m"
                          mercury__term__succeeded = (strcmp(mercury__term__V_70_70, (MR_String) "array") == 0);
#line 578 "term.m"
                          if (mercury__term__succeeded)
#line 578 "term.m"
                            {
#line 583 "term.m"
                              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 583 "term.m"
                              if (mercury__term__succeeded)
#line 583 "term.m"
                                {
#line 583 "term.m"
                                  mercury__term__ArgList_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 0)));
#line 583 "term.m"
                                  mercury__term__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 1)));
#line 583 "term.m"
                                  mercury__term__succeeded = (mercury__term__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "term.m"
                                  if (mercury__term__succeeded)
#line 578 "term.m"
                                    {
#line 589 "term.m"
                                      {
#line 589 "term.m"
                                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_171_171, mercury__term__ElemType_51);
                                      }
#line 4147 "term.c"
                                      mercury__term__TypeCtorInfo_172_172 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4149 "term.c"
                                      {
#line 4151 "term.c"
                                        mercury__term__TypeInfo_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4153 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4155 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 1) = ((MR_Box) (mercury__term__TypeInfo_171_171));
#line 4157 "term.c"
                                      }
#line 590 "term.m"
                                      {
#line 590 "term.m"
                                        mercury__term__ListType_59 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_173_173);
                                      }
#line 591 "term.m"
                                      mercury__term__V_77_77 = (MR_Integer) 1;
#line 591 "term.m"
                                      {
#line 591 "term.m"
                                        mercury__term__ArgContext_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 591 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 591 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 1) = ((MR_Box) (mercury__term__V_77_77));
#line 591 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 2) = ((MR_Box) (mercury__term__TermContext_57));
#line 591 "term.m"
                                      }
#line 592 "term.m"
                                      {
#line 592 "term.m"
                                        mercury__term__NewContext_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 0) = ((MR_Box) (mercury__term__ArgContext_60));
#line 592 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 592 "term.m"
                                      }
#line 593 "term.m"
                                      {
#line 593 "term.m"
                                        mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_56, mercury__term__ListType_59, mercury__term__NewContext_61, &mercury__term__ArgResult_62);
                                      }
#line 601 "term.m"
                                      if (((MR_tag((MR_Word) mercury__term__ArgResult_62)) == (MR_mktag((MR_Integer) 1))))
#line 603 "term.m"
                                        *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_62;
#line 601 "term.m"
                                      else
#line 595 "term.m"
                                        {
#line 595 "term.m"
                                          MR_Word mercury__term__TypeInfo_174_174;
#line 595 "term.m"
                                          MR_Word mercury__term__TypeInfo_175_175;
#line 595 "term.m"
                                          MR_Word mercury__term__TypeCtorInfo_176_176;
#line 595 "term.m"
                                          MR_Word mercury__term__TypeInfo_177_177;
#line 595 "term.m"
                                          MR_Word mercury__term__ListUniv_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_62, (MR_Integer) 0)));
#line 595 "term.m"
                                          MR_Word mercury__term__List_65;
#line 595 "term.m"
                                          MR_ArrayPtr mercury__term__Array_66;
#line 595 "term.m"
                                          MR_Word mercury__term__V_80_80;
#line 596 "term.m"
                                          MR_Box mercury__term__Elem2_64;
#line 598 "term.m"
                                          MR_Box mercury__term__conv0_List_65;
#line 599 "term.m"
                                          MR_ArrayPtr mercury__term__conv1_Array_66;

#line 596 "term.m"
                                          {
#line 596 "term.m"
                                            mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_174_174, mercury__term__ElemType_51);
                                          }
#line 4229 "term.c"
                                          {
#line 4231 "term.c"
                                            mercury__term__TypeInfo_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4233 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4235 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4237 "term.c"
                                          }
#line 598 "term.m"
                                          {
#line 598 "term.m"
                                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_175_175, mercury__term__ListUniv_63, &mercury__term__conv0_List_65);
                                          }
#line 598 "term.m"
                                          mercury__term__List_65 = ((MR_Word) mercury__term__conv0_List_65);
#line 599 "term.m"
                                          {
#line 599 "term.m"
                                            mercury__term__conv1_Array_66 = mercury__array__array_1_f_0(mercury__term__TypeInfo_174_174, mercury__term__List_65);
                                          }
#line 599 "term.m"
                                          mercury__term__Array_66 = (MR_ArrayPtr) mercury__term__conv1_Array_66;
#line 4253 "term.c"
                                          mercury__term__TypeCtorInfo_176_176 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 4255 "term.c"
                                          {
#line 4257 "term.c"
                                            mercury__term__TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4259 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_176_176));
#line 4261 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4263 "term.c"
                                          }
#line 600 "term.m"
                                          {
#line 600 "term.m"
                                            mercury__term__V_80_80 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_177_177, ((MR_Box) (mercury__term__Array_66)));
                                          }
#line 600 "term.m"
                                          {
#line 600 "term.m"
                                            MR_Word base;
#line 600 "term.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 600 "term.m"
                                            *mercury__term__HeadVar__7_7 = base;
#line 600 "term.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_80_80));
#line 600 "term.m"
                                          }
#line 595 "term.m"
                                        }
#line 601 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 578 "term.m"
                                    }
#line 583 "term.m"
                                }
#line 578 "term.m"
                            }
#line 583 "term.m"
                        }
#line 578 "term.m"
                    }
#line 577 "term.m"
                }
#line 578 "term.m"
            }
#line 578 "term.m"
        }
#line 557 "term.m"
      else
#line 557 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 573 "term.m"
          {
#line 573 "term.m"
            MR_Word mercury__term__TypeCtorInfo_170_170;
#line 573 "term.m"
            MR_Word mercury__term__Univ_45;
#line 573 "term.m"
            MR_String mercury__term__String_46;
#line 573 "term.m"
            MR_Word mercury__term__V_48_48;
#line 573 "term.m"
            MR_Word mercury__term__V_49_49;
#line 573 "term.m"
            MR_Box mercury__term__V_50_50;
#line 575 "term.m"
            MR_Word mercury__term__V_47_47;

#line 572 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 573 "term.m"
            if (mercury__term__succeeded)
#line 573 "term.m"
              {
#line 572 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "term.m"
                if (mercury__term__succeeded)
#line 573 "term.m"
                  {
#line 575 "term.m"
                    mercury__term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 575 "term.m"
                    mercury__term__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 575 "term.m"
                    mercury__term__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 575 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_48_48)) == (MR_mktag((MR_Integer) 2)));
#line 575 "term.m"
                    if (mercury__term__succeeded)
#line 575 "term.m"
                      {
#line 575 "term.m"
                        mercury__term__String_46 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_48_48, (MR_Integer) 0)));
#line 575 "term.m"
                        mercury__term__succeeded = (mercury__term__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "term.m"
                        if (mercury__term__succeeded)
#line 573 "term.m"
                          {
#line 576 "term.m"
                            {
#line 576 "term.m"
                              mercury__term__succeeded = mercury__bitmap__from_string_1_f_0(mercury__term__String_46, &mercury__term__V_50_50);
                            }
#line 573 "term.m"
                            if (mercury__term__succeeded)
#line 573 "term.m"
                              {
#line 4364 "term.c"
                                mercury__term__TypeCtorInfo_170_170 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 576 "term.m"
                                {
#line 576 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_170_170, ((MR_Box) (mercury__term__V_50_50)), &mercury__term__Univ_45);
                                }
#line 573 "term.m"
                                {
#line 573 "term.m"
                                  MR_Word base;
#line 573 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 573 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 573 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_45));
#line 573 "term.m"
                                }
#line 573 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 573 "term.m"
                              }
#line 573 "term.m"
                          }
#line 575 "term.m"
                      }
#line 573 "term.m"
                  }
#line 573 "term.m"
              }
#line 573 "term.m"
          }
#line 557 "term.m"
        else
#line 557 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 557 "term.m"
            if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 562 "term.m"
              {
#line 562 "term.m"
                MR_Word mercury__term__TypeCtorInfo_167_167;
#line 562 "term.m"
                MR_Word mercury__term__Univ_21;
#line 562 "term.m"
                MR_Integer mercury__term__Int_22;
#line 562 "term.m"
                MR_Word mercury__term__V_24_24;
#line 562 "term.m"
                MR_Word mercury__term__V_25_25;
#line 563 "term.m"
                MR_Word mercury__term__V_23_23;

#line 561 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "term.m"
                if (mercury__term__succeeded)
#line 562 "term.m"
                  {
#line 563 "term.m"
                    mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 563 "term.m"
                    mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 563 "term.m"
                    mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 563 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 563 "term.m"
                    if (mercury__term__succeeded)
#line 563 "term.m"
                      {
#line 563 "term.m"
                        mercury__term__Int_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_24_24, (MR_Integer) 0)));
#line 563 "term.m"
                        mercury__term__succeeded = (mercury__term__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "term.m"
                        if (mercury__term__succeeded)
#line 562 "term.m"
                          {
#line 4444 "term.c"
                            mercury__term__TypeCtorInfo_167_167 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 564 "term.m"
                            {
#line 564 "term.m"
                              mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_167_167, ((MR_Box) (mercury__term__Int_22)), &mercury__term__Univ_21);
                            }
#line 562 "term.m"
                            {
#line 562 "term.m"
                              MR_Word base;
#line 562 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 562 "term.m"
                              *mercury__term__HeadVar__7_7 = base;
#line 562 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_21));
#line 562 "term.m"
                            }
#line 562 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 562 "term.m"
                          }
#line 563 "term.m"
                      }
#line 562 "term.m"
                  }
#line 562 "term.m"
              }
#line 557 "term.m"
            else
#line 557 "term.m"
              if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 569 "term.m"
                {
#line 569 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_169_169;
#line 569 "term.m"
                  MR_Word mercury__term__Univ_37;
#line 569 "term.m"
                  MR_Float mercury__term__Float_38;
#line 569 "term.m"
                  MR_Word mercury__term__V_40_40;
#line 569 "term.m"
                  MR_Word mercury__term__V_41_41;
#line 570 "term.m"
                  MR_Word mercury__term__V_39_39;

#line 569 "term.m"
                  mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "term.m"
                  if (mercury__term__succeeded)
#line 569 "term.m"
                    {
#line 570 "term.m"
                      mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 570 "term.m"
                      mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 570 "term.m"
                      mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 570 "term.m"
                      mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 570 "term.m"
                      if (mercury__term__succeeded)
#line 570 "term.m"
                        {
#line 570 "term.m"
                          mercury__term__Float_38 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 1)));
#line 570 "term.m"
                          mercury__term__succeeded = (mercury__term__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "term.m"
                          if (mercury__term__succeeded)
#line 569 "term.m"
                            {
#line 4518 "term.c"
                              mercury__term__TypeCtorInfo_169_169 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 571 "term.m"
                              {
#line 571 "term.m"
                                mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_169_169, MR_box_float(mercury__term__Float_38), &mercury__term__Univ_37);
                              }
#line 569 "term.m"
                              {
#line 569 "term.m"
                                MR_Word base;
#line 569 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 569 "term.m"
                                *mercury__term__HeadVar__7_7 = base;
#line 569 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_37));
#line 569 "term.m"
                              }
#line 569 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 569 "term.m"
                            }
#line 570 "term.m"
                        }
#line 569 "term.m"
                    }
#line 569 "term.m"
                }
#line 557 "term.m"
              else
#line 557 "term.m"
                if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 566 "term.m"
                  {
#line 566 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_168_168;
#line 566 "term.m"
                    MR_Word mercury__term__Univ_29;
#line 566 "term.m"
                    MR_String mercury__term__String_30;
#line 566 "term.m"
                    MR_Word mercury__term__V_32_32;
#line 566 "term.m"
                    MR_Word mercury__term__V_33_33;
#line 567 "term.m"
                    MR_Word mercury__term__V_31_31;

#line 565 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "term.m"
                    if (mercury__term__succeeded)
#line 566 "term.m"
                      {
#line 567 "term.m"
                        mercury__term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 567 "term.m"
                        mercury__term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 567 "term.m"
                        mercury__term__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 567 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 567 "term.m"
                        if (mercury__term__succeeded)
#line 567 "term.m"
                          {
#line 567 "term.m"
                            mercury__term__String_30 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_32_32, (MR_Integer) 0)));
#line 567 "term.m"
                            mercury__term__succeeded = (mercury__term__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "term.m"
                            if (mercury__term__succeeded)
#line 566 "term.m"
                              {
#line 4592 "term.c"
                                mercury__term__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 568 "term.m"
                                {
#line 568 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_168_168, ((MR_Box) (mercury__term__String_30)), &mercury__term__Univ_29);
                                }
#line 566 "term.m"
                                {
#line 566 "term.m"
                                  MR_Word base;
#line 566 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 566 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 566 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_29));
#line 566 "term.m"
                                }
#line 566 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 566 "term.m"
                              }
#line 567 "term.m"
                          }
#line 566 "term.m"
                      }
#line 566 "term.m"
                  }
#line 557 "term.m"
                else
#line 557 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 557 "term.m"
                    {
#line 557 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_166_166;
#line 557 "term.m"
                      MR_Word mercury__term__Univ_11;
#line 557 "term.m"
                      MR_String mercury__term__FunctorName_12;
#line 557 "term.m"
                      MR_Char mercury__term__Char_14;
#line 557 "term.m"
                      MR_Word mercury__term__V_15_15;
#line 557 "term.m"
                      MR_Word mercury__term__V_16_16;
#line 557 "term.m"
                      MR_String mercury__term__V_17_17;
#line 558 "term.m"
                      MR_Word mercury__term__V_13_13;

#line 557 "term.m"
                      mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "term.m"
                      if (mercury__term__succeeded)
#line 557 "term.m"
                        {
#line 558 "term.m"
                          mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 558 "term.m"
                          mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 558 "term.m"
                          mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 558 "term.m"
                          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 558 "term.m"
                          if (mercury__term__succeeded)
#line 558 "term.m"
                            {
#line 558 "term.m"
                              mercury__term__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_15_15, (MR_Integer) 0)));
#line 558 "term.m"
                              mercury__term__succeeded = (mercury__term__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "term.m"
                              if (mercury__term__succeeded)
#line 557 "term.m"
                                {
#line 559 "term.m"
                                  mercury__term__V_17_17 = (MR_String) "";
#line 559 "term.m"
                                  {
#line 559 "term.m"
                                    mercury__term__succeeded = mercury__string__first_char_3_p_1(mercury__term__FunctorName_12, &mercury__term__Char_14, mercury__term__V_17_17);
                                  }
#line 557 "term.m"
                                  if (mercury__term__succeeded)
#line 557 "term.m"
                                    {
#line 4681 "term.c"
                                      mercury__term__TypeCtorInfo_166_166 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 560 "term.m"
                                      {
#line 560 "term.m"
                                        mercury__univ__type_to_univ_2_p_0(mercury__term__TypeCtorInfo_166_166, ((MR_Box) (MR_Word) (mercury__term__Char_14)), &mercury__term__Univ_11);
                                      }
#line 557 "term.m"
                                      {
#line 557 "term.m"
                                        MR_Word base;
#line 557 "term.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 557 "term.m"
                                        *mercury__term__HeadVar__7_7 = base;
#line 557 "term.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_11));
#line 557 "term.m"
                                      }
#line 557 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 557 "term.m"
                                    }
#line 557 "term.m"
                                }
#line 558 "term.m"
                            }
#line 557 "term.m"
                        }
#line 557 "term.m"
                    }
#line 557 "term.m"
                  else
#line 557 "term.m"
                    mercury__term__succeeded = MR_FALSE;
#line 557 "term.m"
          else
#line 557 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 606 "term.m"
              {
#line 606 "term.m"
                MR_Word mercury__term__TypeInfo_178_178;
#line 606 "term.m"
                MR_Word mercury__term__TypeCtorInfo_179_179;
#line 606 "term.m"
                MR_Word mercury__term__TypeInfo_180_180;
#line 606 "term.m"
                MR_Word mercury__term__ElemType_81;
#line 606 "term.m"
                MR_Word mercury__term__ArgList_86;
#line 606 "term.m"
                MR_Word mercury__term__TermContext_87;
#line 606 "term.m"
                MR_Word mercury__term__ListType_89;
#line 606 "term.m"
                MR_Word mercury__term__ArgContext_90;
#line 606 "term.m"
                MR_Word mercury__term__NewContext_91;
#line 606 "term.m"
                MR_Word mercury__term__ArgResult_92;
#line 606 "term.m"
                MR_Word mercury__term__V_98_98;
#line 606 "term.m"
                MR_Word mercury__term__V_99_99;
#line 606 "term.m"
                MR_String mercury__term__V_100_100;
#line 606 "term.m"
                MR_Word mercury__term__V_101_101;
#line 606 "term.m"
                MR_Word mercury__term__V_102_102;
#line 606 "term.m"
                MR_Integer mercury__term__V_107_107;
#line 610 "term.m"
                MR_Box mercury__term__Elem_88;
#line 611 "term.m"
                MR_Word mercury__term__V_103_103;

#line 605 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 606 "term.m"
                if (mercury__term__succeeded)
#line 606 "term.m"
                  {
#line 605 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 605 "term.m"
                    if (mercury__term__succeeded)
#line 605 "term.m"
                      {
#line 605 "term.m"
                        mercury__term__ElemType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 605 "term.m"
                        mercury__term__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 605 "term.m"
                        mercury__term__succeeded = (mercury__term__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "term.m"
                        if (mercury__term__succeeded)
#line 606 "term.m"
                          {
#line 609 "term.m"
                            mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 609 "term.m"
                            mercury__term__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 609 "term.m"
                            mercury__term__TermContext_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 609 "term.m"
                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_99_99)) == (MR_mktag((MR_Integer) 0)));
#line 609 "term.m"
                            if (mercury__term__succeeded)
#line 609 "term.m"
                              {
#line 609 "term.m"
                                mercury__term__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_99_99, (MR_Integer) 0)));
#line 609 "term.m"
                                mercury__term__succeeded = (strcmp(mercury__term__V_100_100, (MR_String) "version_array") == 0);
#line 606 "term.m"
                                if (mercury__term__succeeded)
#line 606 "term.m"
                                  {
#line 609 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 609 "term.m"
                                    if (mercury__term__succeeded)
#line 609 "term.m"
                                      {
#line 609 "term.m"
                                        mercury__term__ArgList_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 0)));
#line 609 "term.m"
                                        mercury__term__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 1)));
#line 609 "term.m"
                                        mercury__term__succeeded = (mercury__term__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "term.m"
                                        if (mercury__term__succeeded)
#line 606 "term.m"
                                          {
#line 610 "term.m"
                                            {
#line 610 "term.m"
                                              mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_178_178, mercury__term__ElemType_81);
                                            }
#line 4822 "term.c"
                                            mercury__term__TypeCtorInfo_179_179 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4824 "term.c"
                                            {
#line 4826 "term.c"
                                              mercury__term__TypeInfo_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4828 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 4830 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 1) = ((MR_Box) (mercury__term__TypeInfo_178_178));
#line 4832 "term.c"
                                            }
#line 611 "term.m"
                                            {
#line 611 "term.m"
                                              mercury__term__ListType_89 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_180_180);
                                            }
#line 612 "term.m"
                                            mercury__term__V_107_107 = (MR_Integer) 1;
#line 612 "term.m"
                                            {
#line 612 "term.m"
                                              mercury__term__ArgContext_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 0) = ((MR_Box) (mercury__term__V_99_99));
#line 612 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 1) = ((MR_Box) (mercury__term__V_107_107));
#line 612 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 2) = ((MR_Box) (mercury__term__TermContext_87));
#line 612 "term.m"
                                            }
#line 613 "term.m"
                                            {
#line 613 "term.m"
                                              mercury__term__NewContext_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 0) = ((MR_Box) (mercury__term__ArgContext_90));
#line 613 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 613 "term.m"
                                            }
#line 614 "term.m"
                                            {
#line 614 "term.m"
                                              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_86, mercury__term__ListType_89, mercury__term__NewContext_91, &mercury__term__ArgResult_92);
                                            }
#line 622 "term.m"
                                            if (((MR_tag((MR_Word) mercury__term__ArgResult_92)) == (MR_mktag((MR_Integer) 1))))
#line 624 "term.m"
                                              *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_92;
#line 622 "term.m"
                                            else
#line 616 "term.m"
                                              {
#line 616 "term.m"
                                                MR_Word mercury__term__TypeInfo_181_181;
#line 616 "term.m"
                                                MR_Word mercury__term__TypeInfo_182_182;
#line 616 "term.m"
                                                MR_Word mercury__term__TypeCtorInfo_183_183;
#line 616 "term.m"
                                                MR_Word mercury__term__TypeInfo_184_184;
#line 616 "term.m"
                                                MR_Word mercury__term__ListUniv_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_92, (MR_Integer) 0)));
#line 616 "term.m"
                                                MR_Word mercury__term__List_95;
#line 616 "term.m"
                                                MR_Box mercury__term__Array_96;
#line 616 "term.m"
                                                MR_Word mercury__term__V_110_110;
#line 617 "term.m"
                                                MR_Box mercury__term__Elem2_94;
#line 619 "term.m"
                                                MR_Box mercury__term__conv2_List_95;

#line 617 "term.m"
                                                {
#line 617 "term.m"
                                                  mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_181_181, mercury__term__ElemType_81);
                                                }
#line 4902 "term.c"
                                                {
#line 4904 "term.c"
                                                  mercury__term__TypeInfo_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4906 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 4908 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 4910 "term.c"
                                                }
#line 619 "term.m"
                                                {
#line 619 "term.m"
                                                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_182_182, mercury__term__ListUniv_93, &mercury__term__conv2_List_95);
                                                }
#line 619 "term.m"
                                                mercury__term__List_95 = ((MR_Word) mercury__term__conv2_List_95);
#line 620 "term.m"
                                                {
#line 620 "term.m"
                                                  mercury__term__Array_96 = mercury__version_array__version_array_1_f_0(mercury__term__TypeInfo_181_181, mercury__term__List_95);
                                                }
#line 4924 "term.c"
                                                mercury__term__TypeCtorInfo_183_183 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 4926 "term.c"
                                                {
#line 4928 "term.c"
                                                  mercury__term__TypeInfo_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4930 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_183_183));
#line 4932 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 4934 "term.c"
                                                }
#line 621 "term.m"
                                                {
#line 621 "term.m"
                                                  mercury__term__V_110_110 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_184_184, ((MR_Box) (mercury__term__Array_96)));
                                                }
#line 621 "term.m"
                                                {
#line 621 "term.m"
                                                  MR_Word base;
#line 621 "term.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 621 "term.m"
                                                  *mercury__term__HeadVar__7_7 = base;
#line 621 "term.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_110_110));
#line 621 "term.m"
                                                }
#line 616 "term.m"
                                              }
#line 622 "term.m"
                                            mercury__term__succeeded = MR_TRUE;
#line 606 "term.m"
                                          }
#line 609 "term.m"
                                      }
#line 606 "term.m"
                                  }
#line 609 "term.m"
                              }
#line 606 "term.m"
                          }
#line 605 "term.m"
                      }
#line 606 "term.m"
                  }
#line 606 "term.m"
              }
#line 557 "term.m"
            else
#line 557 "term.m"
              mercury__term__succeeded = MR_FALSE;
#line 557 "term.m"
    return mercury__term__succeeded;
#line 557 "term.m"
  }
#line 551 "term.m"
}

#line 423 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
#line 423 "term.m"
{
#line 1220 "term.m"
  {
#line 1220 "term.m"
    MR_bool mercury__term__succeeded;

#line 1220 "term.m"
  }
#line 423 "term.m"
}

#line 1123 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 1123 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1123 "term.m"
  MR_Integer mercury__term__X_4,
#line 1123 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 1123 "term.m"
{
#line 1132 "term.m"
  {
#line 1132 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 1132 "term.m"
    return MR_TRUE;
#line 1132 "term.m"
  }
#line 1123 "term.m"
}

#line 1122 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 1122 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1122 "term.m"
  MR_Word mercury__term__X_4)
#line 1122 "term.m"
{
#line 1126 "term.m"
  {
#line 1126 "term.m"
    MR_bool mercury__term__succeeded;
#line 1126 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 1126 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1126 "term.m"
  }
#line 1122 "term.m"
}

#line 474 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 474 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 474 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 474 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 474 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 474 "term.m"
{
#line 474 "term.m"
  {
#line 474 "term.m"
    MR_bool mercury__term__succeeded;
#line 474 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 474 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 474 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 474 "term.m"
    if (mercury__term__succeeded)
#line 5070 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 474 "term.m"
    else
#line 474 "term.m"
      {
#line 474 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 474 "term.m"
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
#line 474 "term.m"
      }
#line 474 "term.m"
  }
#line 474 "term.m"
}

#line 474 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 474 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 474 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 474 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 474 "term.m"
{
#line 474 "term.m"
  {
#line 474 "term.m"
    MR_bool mercury__term__succeeded;
#line 474 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 474 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 474 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 474 "term.m"
    if (mercury__term__succeeded)
#line 474 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 474 "term.m"
    else
#line 474 "term.m"
      {
#line 474 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 474 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5145 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 474 "term.m"
      }
#line 474 "term.m"
    return mercury__term__succeeded;
#line 474 "term.m"
  }
#line 474 "term.m"
}

#line 477 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 477 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 477 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 477 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 477 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 477 "term.m"
{
#line 477 "term.m"
  {
#line 477 "term.m"
    MR_bool mercury__term__succeeded;
#line 477 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 477 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 477 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 477 "term.m"
    if (mercury__term__succeeded)
#line 5182 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 477 "term.m"
    else
#line 477 "term.m"
      {
#line 477 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 477 "term.m"
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
#line 477 "term.m"
      }
#line 477 "term.m"
  }
#line 477 "term.m"
}

#line 477 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 477 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 477 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 477 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 477 "term.m"
{
#line 477 "term.m"
  {
#line 477 "term.m"
    MR_bool mercury__term__succeeded;
#line 477 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 477 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 477 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 477 "term.m"
    if (mercury__term__succeeded)
#line 477 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
    else
#line 477 "term.m"
      {
#line 477 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 477 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5257 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 477 "term.m"
      }
#line 477 "term.m"
    return mercury__term__succeeded;
#line 477 "term.m"
  }
#line 477 "term.m"
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
#line 477 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 477 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 477 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 477 "term.m"
    if (mercury__term__succeeded)
#line 477 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
    else
#line 477 "term.m"
      {
#line 477 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 477 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 5339 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 477 "term.m"
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
#line 5378 "term.c"
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
#line 5407 "term.c"
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
#line 5420 "term.c"
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
#line 5492 "term.c"
              {
#line 5494 "term.c"
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
#line 5518 "term.c"
              {
#line 5520 "term.c"
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
#line 5630 "term.c"
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
#line 5680 "term.c"
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
#line 5708 "term.c"
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
#line 5727 "term.c"
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
#line 5749 "term.c"
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
#line 5769 "term.c"
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
#line 5789 "term.c"
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
#line 477 "term.m"
          MR_Integer mercury__term__CastX_23;
#line 477 "term.m"
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
#line 477 "term.m"
              mercury__term__CastX_23 = (MR_Integer) mercury__term__V_11_11;
#line 477 "term.m"
              mercury__term__CastY_24 = (MR_Integer) mercury__term__V_13_13;
#line 477 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_23 == mercury__term__CastY_24);
#line 477 "term.m"
              if (mercury__term__succeeded)
#line 477 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
              else
#line 477 "term.m"
                {
#line 477 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;
#line 477 "term.m"
                  MR_Integer mercury__term__V_22_22 = (MR_Integer) mercury__term__V_13_13;

#line 5902 "term.c"
                  mercury__term__succeeded = (mercury__term__V_21_21 == mercury__term__V_22_22);
#line 477 "term.m"
                }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 5910 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 5912 "term.c"
                  {
#line 5914 "term.c"
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
#line 5960 "term.c"
              {
#line 5962 "term.c"
                mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeInfo_for_T_17, mercury__term__V_3_3, mercury__term__V_7_7);
              }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 5969 "term.c"
                  {
#line 5971 "term.c"
                    mercury__term__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term__V_4_4, mercury__term__V_8_8);
                  }
#line 93 "term.m"
                  if (mercury__term__succeeded)
#line 93 "term.m"
                    {
#line 5978 "term.c"
                      {
#line 5980 "term.c"
                        mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_9_9);
                      }
#line 93 "term.m"
                      if (mercury__term__succeeded)
#line 93 "term.m"
                        {
#line 5987 "term.c"
                          mercury__term__TypeInfo_20_20 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 5989 "term.c"
                          {
#line 5991 "term.c"
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
#line 6101 "term.c"
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
#line 6127 "term.c"
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
#line 6164 "term.c"
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

#line 6231 "term.c"
        {
#line 6233 "term.c"
          mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
        }
#line 107 "term.m"
        if (mercury__term__succeeded)
#line 107 "term.m"
          {
#line 6240 "term.c"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_7_7);
#line 107 "term.m"
            if (mercury__term__succeeded)
#line 6244 "term.c"
              {
#line 6246 "term.c"
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
#line 6286 "term.c"
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
#line 6319 "term.c"
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

#line 6338 "term.c"
                  {
#line 6340 "term.c"
                    mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6342 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 6344 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 6346 "term.c"
                  }
#line 32 "term.m"
                  {
#line 32 "term.m"
                    mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                  }
#line 6353 "term.c"
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
#line 6376 "term.c"
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
#line 6391 "term.c"
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
#line 6430 "term.c"
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
#line 6517 "term.c"
              {
#line 6519 "term.c"
                mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
              }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 32 "term.m"
                {
#line 6526 "term.c"
                  mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6528 "term.c"
                  {
#line 6530 "term.c"
                    mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6532 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 6534 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 6536 "term.c"
                  }
#line 6538 "term.c"
                  {
#line 6540 "term.c"
                    mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                  }
#line 32 "term.m"
                  if (mercury__term__succeeded)
#line 6545 "term.c"
                    {
#line 6547 "term.c"
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
#line 477 "term.m"
          MR_Integer mercury__term__CastX_22;
#line 477 "term.m"
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
#line 477 "term.m"
              mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 477 "term.m"
              mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 477 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 477 "term.m"
              if (mercury__term__succeeded)
#line 477 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
              else
#line 477 "term.m"
                {
#line 477 "term.m"
                  MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 477 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 6602 "term.c"
                  mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 477 "term.m"
                }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 6608 "term.c"
                {
#line 6610 "term.c"
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

#line 175 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_1_0(
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
    MR_Word mercury__term__TypeCtorInfo_9_9;
#line 175 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 6720 "term.c"
    {
#line 6722 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6724 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 6726 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6728 "term.c"
    }
#line 6730 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6732 "term.c"
    {
#line 6734 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6736 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 6738 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6740 "term.c"
    }
#line 175 "term.m"
    {
#line 175 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_10_10, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 175 "term.m"
      return;
    }
#line 175 "term.m"
  }
#line 175 "term.m"
}

#line 175 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
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
    MR_Word mercury__term__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 175 "term.m"
    MR_Word mercury__term__TypeInfo_9_9;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 175 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 6782 "term.c"
    {
#line 6784 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6786 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 6788 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 6790 "term.c"
    }
#line 6792 "term.c"
    {
#line 6794 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6796 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 6798 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 6800 "term.c"
    }
#line 175 "term.m"
    {
#line 175 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_9_9, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 175 "term.m"
    return mercury__term__succeeded;
#line 175 "term.m"
  }
#line 175 "term.m"
}

#line 176 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_0_0(
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
mercury__term____Unify____substitution_0_0(
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
#line 6950 "term.c"
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

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_4_4 ;
	S2 =  mercury__term__V_6_6 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 6984 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_16  = Res;
#line 134 "private_builtin.opt"
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
#line 7013 "term.c"
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

#line 7093 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 50 "term.m"
        if (mercury__term__succeeded)
#line 7097 "term.c"
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
#line 7132 "term.c"
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

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_61_61 ;
	S2 =  mercury__term__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7167 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_69  = Res;
#line 134 "private_builtin.opt"
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
#line 7202 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
            else
#line 43 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7208 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7214 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 7218 "term.c"
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
#line 7233 "term.c"
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
#line 7272 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7278 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                  else
#line 7282 "term.c"
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
#line 7297 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7303 "term.c"
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

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_65_65 ;
	S2 =  mercury__term__V_29_29 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7331 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_85  = Res;
#line 134 "private_builtin.opt"
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
#line 7366 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                    else
#line 7370 "term.c"
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
#line 7385 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7391 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7397 "term.c"
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
#line 7434 "term.c"
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
#line 7447 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7453 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7459 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                    else
#line 43 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7465 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                      else
#line 43 "term.m"
                        {
#line 43 "term.m"
                          MR_String mercury__term__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "term.m"
                          MR_Integer mercury__term__Res_7_77;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_63_63 ;
	S2 =  mercury__term__V_53_53 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 7491 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_77  = Res;
#line 134 "private_builtin.opt"
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
#line 7572 "term.c"
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
#line 7597 "term.c"
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
#line 7622 "term.c"
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
#line 7647 "term.c"
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
#line 7670 "term.c"
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

#line 1211 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 1211 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 1211 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 1211 "term.m"
{
#line 1213 "term.m"
  while (MR_TRUE)
#line 1213 "term.m"
    {
#line 1213 "term.m"
      /* tailcall optimized into a loop */
#line 1213 "term.m"
      {
#line 1213 "term.m"
        MR_bool mercury__term__succeeded;

#line 1213 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1213 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1213 "term.m"
        else
#line 1214 "term.m"
          {
#line 1214 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1214 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1214 "term.m"
            MR_Word mercury__term__Args_6;
#line 1208 "term.m"
            MR_Word mercury__term__V_5_5;
#line 1208 "term.m"
            MR_Word mercury__term__V_7_7;

#line 1208 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 1208 "term.m"
            if (mercury__term__succeeded)
#line 1208 "term.m"
              {
#line 1208 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 1208 "term.m"
                mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 1208 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 1209 "term.m"
                {
#line 1209 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__Args_6);
                }
#line 1214 "term.m"
                if (mercury__term__succeeded)
#line 1216 "term.m"
                  {
#line 1216 "term.m"
                    /* direct tailcall eliminated */
#line 1216 "term.m"
                    {
#line 1216 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 1216 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1216 "term.m"
                    }
#line 1216 "term.m"
                    continue;
#line 1216 "term.m"
                  }
#line 1208 "term.m"
              }
#line 1214 "term.m"
          }
#line 1213 "term.m"
        return mercury__term__succeeded;
#line 1213 "term.m"
      }
#line 1213 "term.m"
      break;
#line 1213 "term.m"
    }
#line 1211 "term.m"
}

#line 1198 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1198 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1198 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1198 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 1198 "term.m"
{
#line 1201 "term.m"
  while (MR_TRUE)
#line 1201 "term.m"
    {
#line 1201 "term.m"
      /* tailcall optimized into a loop */
#line 1201 "term.m"
      {
#line 1201 "term.m"
        MR_bool mercury__term__succeeded;

#line 1201 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1201 "term.m"
        else
#line 1202 "term.m"
          {
#line 1202 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1202 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1203 "term.m"
            {
#line 1203 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 1202 "term.m"
            if (mercury__term__succeeded)
#line 1204 "term.m"
              {
#line 1204 "term.m"
                /* direct tailcall eliminated */
#line 1204 "term.m"
                {
#line 1204 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1204 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1204 "term.m"
                }
#line 1204 "term.m"
                continue;
#line 1204 "term.m"
              }
#line 1202 "term.m"
          }
#line 1201 "term.m"
        return mercury__term__succeeded;
#line 1201 "term.m"
      }
#line 1201 "term.m"
      break;
#line 1201 "term.m"
    }
#line 1198 "term.m"
}

#line 1059 "term.m"
MR_bool MR_CALL 
mercury__term__substitute_corresponding_2_4_p_0(
#line 1059 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 1059 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1059 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1059 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1059 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1059 "term.m"
{
#line 1062 "term.m"
  while (MR_TRUE)
#line 1062 "term.m"
    {
#line 1062 "term.m"
      /* tailcall optimized into a loop */
#line 1062 "term.m"
      {
#line 1062 "term.m"
        MR_bool mercury__term__succeeded;

#line 1062 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "term.m"
          {
#line 1062 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1062 "term.m"
            if (mercury__term__succeeded)
#line 1062 "term.m"
              {
#line 1062 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1062 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1062 "term.m"
              }
#line 1062 "term.m"
          }
#line 1062 "term.m"
        else
#line 1063 "term.m"
          {
#line 1063 "term.m"
            MR_Word mercury__term__TypeCtorInfo_18_18;
#line 1063 "term.m"
            MR_Word mercury__term__TypeInfo_19_19;
#line 1063 "term.m"
            MR_Word mercury__term__TypeCtorInfo_20_20;
#line 1063 "term.m"
            MR_Word mercury__term__TypeInfo_21_21;
#line 1063 "term.m"
            MR_Word mercury__term__S_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1063 "term.m"
            MR_Word mercury__term__Ss_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1063 "term.m"
            MR_Word mercury__term__R_10;
#line 1063 "term.m"
            MR_Word mercury__term__Rs_11;
#line 1063 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;
#line 117 "map.opt"
            MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_15_15;

#line 1063 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1063 "term.m"
            if (mercury__term__succeeded)
#line 1063 "term.m"
              {
#line 1063 "term.m"
                mercury__term__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1063 "term.m"
                mercury__term__Rs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 7924 "term.c"
                mercury__term__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 7926 "term.c"
                mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 7928 "term.c"
                {
#line 7930 "term.c"
                  mercury__term__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7932 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_18_18));
#line 7934 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_17));
#line 7936 "term.c"
                }
#line 7938 "term.c"
                {
#line 7940 "term.c"
                  mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7942 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 7944 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_17));
#line 7946 "term.c"
                }
#line 117 "map.opt"
                {
#line 117 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TypeInfo_19_19, mercury__term__TypeInfo_21_21, mercury__term__S_8, ((MR_Box) (mercury__term__R_10)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_15_15);
                }
#line 117 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_15_15 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_15_15;
#line 1065 "term.m"
                {
#line 1065 "term.m"
                  /* direct tailcall eliminated */
#line 1065 "term.m"
                  {
#line 1065 "term.m"
                    MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Ss_9;
#line 1065 "term.m"
                    MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Rs_11;
#line 1065 "term.m"
                    MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 1065 "term.m"
                    mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1065 "term.m"
                    mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1065 "term.m"
                    mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1065 "term.m"
                  }
#line 1065 "term.m"
                  continue;
#line 1065 "term.m"
                }
#line 1063 "term.m"
              }
#line 1063 "term.m"
          }
#line 1062 "term.m"
        return mercury__term__succeeded;
#line 1062 "term.m"
      }
#line 1062 "term.m"
      break;
#line 1062 "term.m"
    }
#line 1059 "term.m"
}

#line 984 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 984 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 984 "term.m"
  MR_Word mercury__term__Var_6,
#line 984 "term.m"
  MR_Word mercury__term__BoundVar_7,
#line 984 "term.m"
  MR_Word mercury__term__BoundVars_8,
#line 984 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_13,
#line 984 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_14)
#line 984 "term.m"
{
#line 991 "term.m"
  while (MR_TRUE)
#line 991 "term.m"
    {
#line 991 "term.m"
      /* tailcall optimized into a loop */
#line 991 "term.m"
      {
#line 991 "term.m"
        MR_bool mercury__term__succeeded;
#line 991 "term.m"
        MR_Word mercury__term__BindingOfVar_10;
#line 988 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 988 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 988 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 988 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_BindingOfVar_10;

#line 8035 "term.c"
        {
#line 8037 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8039 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 8041 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8043 "term.c"
        }
#line 8045 "term.c"
        {
#line 8047 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8049 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 8051 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8053 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_21_21, mercury__term__TypeInfo_23_23, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_13, mercury__term__Var_6, &mercury__term__conv0_BindingOfVar_10);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__BindingOfVar_10 = ((MR_Word) mercury__term__conv0_BindingOfVar_10);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 991 "term.m"
        if (mercury__term__succeeded)
#line 989 "term.m"
          {
#line 989 "term.m"
            MR_Word mercury__term__Var2_11;
#line 989 "term.m"
            MR_Word mercury__term__V_12_12;

#line 989 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__BindingOfVar_10)) == (MR_mktag((MR_Integer) 1)));
#line 989 "term.m"
            if (mercury__term__succeeded)
#line 989 "term.m"
              {
#line 989 "term.m"
                mercury__term__Var2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__BindingOfVar_10, (MR_Integer) 0)));
#line 989 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__BindingOfVar_10, (MR_Integer) 1)));
#line 990 "term.m"
                /* direct tailcall eliminated */
#line 990 "term.m"
                {
#line 990 "term.m"
                  MR_Word mercury__term__Var__tmp_copy_6 = mercury__term__Var2_11;

#line 990 "term.m"
                  mercury__term__Var_6 = mercury__term__Var__tmp_copy_6;
#line 990 "term.m"
                }
#line 990 "term.m"
                continue;
#line 989 "term.m"
              }
#line 989 "term.m"
          }
#line 991 "term.m"
        else
#line 994 "term.m"
          {
#line 477 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__Var_6;
#line 477 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundVar_7;

#line 477 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 477 "term.m"
            if (mercury__term__succeeded)
#line 477 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
            else
#line 477 "term.m"
              {
#line 477 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__Var_6;
#line 477 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundVar_7;

#line 8130 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 477 "term.m"
              }
#line 994 "term.m"
            if (mercury__term__succeeded)
#line 992 "term.m"
              {
#line 992 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_14 = mercury__term__STATE_VARIABLE_Bindings_0_13;
#line 992 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 992 "term.m"
              }
#line 994 "term.m"
            else
#line 995 "term.m"
              {
#line 995 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 995 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 995 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 995 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 995 "term.m"
                MR_Word mercury__term__V_16_16;
#line 995 "term.m"
                MR_Word mercury__term__V_18_18;
#line 995 "term.m"
                MR_String mercury__term__V_39_39;
#line 995 "term.m"
                MR_Integer mercury__term__V_40_40;
#line 996 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_14;

#line 995 "term.m"
                {
#line 995 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__Var_6, mercury__term__BoundVars_8);
                }
#line 995 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 995 "term.m"
                if (mercury__term__succeeded)
#line 995 "term.m"
                  {
#line 839 "term.m"
                    mercury__term__V_39_39 = (MR_String) "";
#line 839 "term.m"
                    mercury__term__V_40_40 = (MR_Integer) 0;
#line 8182 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8184 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 839 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 996 "term.m"
                    {
#line 996 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundVar_7));
#line 996 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 996 "term.m"
                    }
#line 8198 "term.c"
                    {
#line 8200 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8202 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 8204 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8206 "term.c"
                    }
#line 8208 "term.c"
                    {
#line 8210 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8212 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 8214 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8216 "term.c"
                    }
#line 996 "term.m"
                    {
#line 996 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__Var_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_13, &mercury__term__conv1_STATE_VARIABLE_Bindings_14);
                    }
#line 996 "term.m"
                    *mercury__term__STATE_VARIABLE_Bindings_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_14;
#line 996 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 995 "term.m"
                  }
#line 995 "term.m"
              }
#line 994 "term.m"
          }
#line 991 "term.m"
        return mercury__term__succeeded;
#line 991 "term.m"
      }
#line 991 "term.m"
      break;
#line 991 "term.m"
    }
#line 984 "term.m"
}

#line 816 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 816 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 816 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 816 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 816 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 816 "term.m"
{
#line 819 "term.m"
  while (MR_TRUE)
#line 819 "term.m"
    {
#line 819 "term.m"
      /* tailcall optimized into a loop */
#line 819 "term.m"
      {
#line 819 "term.m"
        MR_bool mercury__term__succeeded;

#line 819 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 819 "term.m"
        else
#line 820 "term.m"
          {
#line 820 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 820 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 820 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 821 "term.m"
            {
#line 821 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 811 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 813 "term.m"
              {
#line 813 "term.m"
                MR_Word mercury__term__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 813 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 813 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 814 "term.m"
                /* direct tailcall eliminated */
#line 814 "term.m"
                {
#line 814 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Args_22;
#line 814 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 814 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 814 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 814 "term.m"
                }
#line 814 "term.m"
                continue;
#line 813 "term.m"
              }
#line 811 "term.m"
            else
#line 811 "term.m"
              {
#line 811 "term.m"
                MR_Word mercury__term__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 811 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 812 "term.m"
                {
#line 812 "term.m"
                  MR_Word base;
#line 812 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 812 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_15));
#line 812 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 812 "term.m"
                }
#line 811 "term.m"
              }
#line 820 "term.m"
          }
#line 819 "term.m"
      }
#line 819 "term.m"
      break;
#line 819 "term.m"
    }
#line 816 "term.m"
}

#line 774 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 774 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 774 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 774 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 774 "term.m"
{
#line 776 "term.m"
  {
#line 776 "term.m"
    MR_bool mercury__term__succeeded;

#line 776 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "term.m"
    else
#line 777 "term.m"
      {
#line 777 "term.m"
        MR_Word mercury__term__Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "term.m"
        MR_Word mercury__term__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 777 "term.m"
        MR_Word mercury__term__Term_5;
#line 777 "term.m"
        MR_Word mercury__term__Terms_6;

#line 778 "term.m"
        {
#line 778 "term.m"
          mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Value_3, &mercury__term__Term_5);
        }
#line 779 "term.m"
        {
#line 779 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Values_4, &mercury__term__Terms_6);
        }
#line 777 "term.m"
        {
#line 777 "term.m"
          MR_Word base;
#line 777 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 777 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_5));
#line 777 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_6));
#line 777 "term.m"
        }
#line 777 "term.m"
      }
#line 776 "term.m"
  }
#line 774 "term.m"
}

#line 724 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 724 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 724 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 724 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 724 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 724 "term.m"
  MR_Word mercury__term__Univ_4,
#line 724 "term.m"
  MR_Word mercury__term__Context_5,
#line 724 "term.m"
  MR_Word * mercury__term__HeadVar__6_6)
#line 724 "term.m"
{
#line 729 "term.m"
  {
#line 729 "term.m"
    MR_bool mercury__term__succeeded;

#line 729 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 745 "term.m"
      {
#line 745 "term.m"
        MR_Word mercury__term__TypeCtorInfo_96_96;
#line 745 "term.m"
        MR_Word mercury__term__TypeInfo_97_97;
#line 745 "term.m"
        MR_Word mercury__term__NestedUniv_39;
#line 745 "term.m"
        MR_Word mercury__term__ValueTerm_40;
#line 745 "term.m"
        MR_Word mercury__term__TypeTerm_41;
#line 745 "term.m"
        MR_Box mercury__term__NestedUnivValue_42;
#line 745 "term.m"
        MR_Word mercury__term__V_43_43;
#line 745 "term.m"
        MR_String mercury__term__V_44_44;
#line 745 "term.m"
        MR_Word mercury__term__V_45_45;
#line 745 "term.m"
        MR_Word mercury__term__V_46_46;
#line 745 "term.m"
        MR_Word mercury__term__V_47_47;
#line 745 "term.m"
        MR_String mercury__term__V_48_48;
#line 745 "term.m"
        MR_Word mercury__term__V_49_49;
#line 745 "term.m"
        MR_Word mercury__term__V_50_50;
#line 745 "term.m"
        MR_Word mercury__term__V_51_51;
#line 745 "term.m"
        MR_Word mercury__term__V_52_52;
#line 745 "term.m"
        MR_Word mercury__term__V_53_53;
#line 746 "term.m"
        MR_Box mercury__term__conv0_NestedUniv_39;

#line 745 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 745 "term.m"
        if (mercury__term__succeeded)
#line 745 "term.m"
          {
#line 745 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "term.m"
            if (mercury__term__succeeded)
#line 745 "term.m"
              {
#line 8495 "term.c"
                mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 746 "term.m"
                {
#line 746 "term.m"
                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_96_96, mercury__term__Univ_4, &mercury__term__conv0_NestedUniv_39);
                }
#line 746 "term.m"
                mercury__term__NestedUniv_39 = ((MR_Word) mercury__term__conv0_NestedUniv_39);
#line 747 "term.m"
                mercury__term__V_44_44 = (MR_String) "univ";
#line 748 "term.m"
                mercury__term__V_48_48 = (MR_String) ":";
#line 748 "term.m"
                mercury__term__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "term.m"
                mercury__term__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 747 "term.m"
                mercury__term__V_43_43 = (MR_Word) &mercury__term_scalar_common_5[1];
#line 748 "term.m"
                mercury__term__V_47_47 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 749 "term.m"
                {
#line 749 "term.m"
                  mercury__term__V_53_53 = mercury__univ__univ_type_1_f_0(mercury__term__NestedUniv_39);
                }
#line 749 "term.m"
                {
#line 749 "term.m"
                  mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__V_53_53, &mercury__term__TypeTerm_41);
                }
#line 748 "term.m"
                {
#line 748 "term.m"
                  mercury__term__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 0) = ((MR_Box) (mercury__term__TypeTerm_41));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 1) = ((MR_Box) (mercury__term__V_51_51));
#line 748 "term.m"
                }
#line 750 "term.m"
                {
#line 750 "term.m"
                  mercury__term__NestedUnivValue_42 = mercury__univ__univ_value_1_f_0(&mercury__term__TypeInfo_97_97, mercury__term__NestedUniv_39);
                }
#line 751 "term.m"
                {
#line 751 "term.m"
                  mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_97_97, mercury__term__TypeInfo_for_T_90, mercury__term__NestedUnivValue_42, &mercury__term__ValueTerm_40);
                }
#line 748 "term.m"
                {
#line 748 "term.m"
                  mercury__term__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 0) = ((MR_Box) (mercury__term__ValueTerm_40));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 1) = ((MR_Box) (mercury__term__V_50_50));
#line 748 "term.m"
                }
#line 748 "term.m"
                {
#line 748 "term.m"
                  mercury__term__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 0) = ((MR_Box) (mercury__term__V_47_47));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 1) = ((MR_Box) (mercury__term__V_49_49));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 2) = ((MR_Box) (mercury__term__Context_5));
#line 748 "term.m"
                }
#line 748 "term.m"
                {
#line 748 "term.m"
                  mercury__term__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 0) = ((MR_Box) (mercury__term__V_46_46));
#line 748 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 1) = ((MR_Box) (mercury__term__V_52_52));
#line 748 "term.m"
                }
#line 747 "term.m"
                {
#line 747 "term.m"
                  MR_Word base;
#line 747 "term.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 747 "term.m"
                  *mercury__term__HeadVar__6_6 = base;
#line 747 "term.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_43_43));
#line 747 "term.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_45_45));
#line 747 "term.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 747 "term.m"
                }
#line 747 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 745 "term.m"
              }
#line 745 "term.m"
          }
#line 745 "term.m"
      }
#line 729 "term.m"
    else
#line 729 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 757 "term.m"
        {
#line 757 "term.m"
          MR_Word mercury__term__TypeInfo_99_99;
#line 757 "term.m"
          MR_Word mercury__term__TypeCtorInfo_100_100;
#line 757 "term.m"
          MR_Word mercury__term__TypeInfo_101_101;
#line 757 "term.m"
          MR_Word mercury__term__TypeCtorInfo_102_102;
#line 757 "term.m"
          MR_Word mercury__term__TypeInfo_103_103;
#line 757 "term.m"
          MR_Word mercury__term__ElemType_60;
#line 757 "term.m"
          MR_Word mercury__term__ArgsTerm_64;
#line 757 "term.m"
          MR_Word mercury__term__List_66;
#line 757 "term.m"
          MR_ArrayPtr mercury__term__Array_67;
#line 757 "term.m"
          MR_Word mercury__term__V_68_68;
#line 757 "term.m"
          MR_Word mercury__term__V_69_69;
#line 757 "term.m"
          MR_String mercury__term__V_70_70;
#line 757 "term.m"
          MR_Word mercury__term__V_71_71;
#line 757 "term.m"
          MR_Word mercury__term__V_72_72;
#line 759 "term.m"
          MR_Box mercury__term__Elem_65;
#line 761 "term.m"
          MR_Box mercury__term__conv1_Array_67;

#line 757 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 757 "term.m"
          if (mercury__term__succeeded)
#line 757 "term.m"
            {
#line 757 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 757 "term.m"
              if (mercury__term__succeeded)
#line 757 "term.m"
                {
#line 757 "term.m"
                  mercury__term__ElemType_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 757 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 757 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 757 "term.m"
                  if (mercury__term__succeeded)
#line 757 "term.m"
                    {
#line 758 "term.m"
                      mercury__term__V_70_70 = (MR_String) "array";
#line 758 "term.m"
                      mercury__term__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 758 "term.m"
                      mercury__term__V_69_69 = (MR_Word) &mercury__term_scalar_common_5[3];
#line 759 "term.m"
                      {
#line 759 "term.m"
                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_99_99, mercury__term__ElemType_60);
                      }
#line 8674 "term.c"
                      mercury__term__TypeCtorInfo_100_100 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8676 "term.c"
                      mercury__term__TypeCtorInfo_102_102 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 8678 "term.c"
                      {
#line 8680 "term.c"
                        mercury__term__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8682 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_100_100));
#line 8684 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 8686 "term.c"
                      }
#line 8688 "term.c"
                      {
#line 8690 "term.c"
                        mercury__term__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8692 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_102_102));
#line 8694 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 8696 "term.c"
                      }
#line 761 "term.m"
                      {
#line 761 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_103_103, mercury__term__Univ_4, &mercury__term__conv1_Array_67);
                      }
#line 761 "term.m"
                      mercury__term__Array_67 = ((MR_ArrayPtr) mercury__term__conv1_Array_67);
#line 762 "term.m"
                      {
#line 762 "term.m"
                        mercury__array__to_list_2_p_0(mercury__term__TypeInfo_99_99, (MR_ArrayPtr) mercury__term__Array_67, &mercury__term__List_66);
                      }
#line 763 "term.m"
                      {
#line 763 "term.m"
                        mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_101_101, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_66)), &mercury__term__ArgsTerm_64);
                      }
#line 758 "term.m"
                      {
#line 758 "term.m"
                        mercury__term__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 0) = ((MR_Box) (mercury__term__ArgsTerm_64));
#line 758 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 1) = ((MR_Box) (mercury__term__V_72_72));
#line 758 "term.m"
                      }
#line 758 "term.m"
                      {
#line 758 "term.m"
                        MR_Word base;
#line 758 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 758 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 758 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 758 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_71_71));
#line 758 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 758 "term.m"
                      }
#line 758 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 757 "term.m"
                    }
#line 757 "term.m"
                }
#line 757 "term.m"
            }
#line 757 "term.m"
        }
#line 729 "term.m"
      else
#line 729 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 753 "term.m"
          {
#line 753 "term.m"
            MR_Word mercury__term__TypeCtorInfo_98_98;
#line 753 "term.m"
            MR_String mercury__term__BitmapStr_56;
#line 753 "term.m"
            MR_Box mercury__term__Bitmap_57;
#line 753 "term.m"
            MR_Word mercury__term__V_58_58;
#line 753 "term.m"
            MR_Word mercury__term__V_59_59;
#line 754 "term.m"
            MR_Box mercury__term__conv2_Bitmap_57;

#line 752 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 753 "term.m"
            if (mercury__term__succeeded)
#line 753 "term.m"
              {
#line 752 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "term.m"
                if (mercury__term__succeeded)
#line 753 "term.m"
                  {
#line 753 "term.m"
                    mercury__term__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8784 "term.c"
                    mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 754 "term.m"
                    {
#line 754 "term.m"
                      mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_98_98, mercury__term__Univ_4, &mercury__term__conv2_Bitmap_57);
                    }
#line 754 "term.m"
                    mercury__term__Bitmap_57 = ((MR_Box) mercury__term__conv2_Bitmap_57);
#line 755 "term.m"
                    {
#line 755 "term.m"
                      mercury__term__BitmapStr_56 = mercury__bitmap__to_string_1_f_0(mercury__term__Bitmap_57);
                    }
#line 753 "term.m"
                    {
#line 753 "term.m"
                      mercury__term__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 753 "term.m"
                      MR_hl_field(MR_mktag(2), mercury__term__V_58_58, 0) = ((MR_Box) (mercury__term__BitmapStr_56));
#line 753 "term.m"
                    }
#line 753 "term.m"
                    {
#line 753 "term.m"
                      MR_Word base;
#line 753 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "term.m"
                      *mercury__term__HeadVar__6_6 = base;
#line 753 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_58_58));
#line 753 "term.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_59_59));
#line 753 "term.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 753 "term.m"
                    }
#line 753 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 753 "term.m"
                  }
#line 753 "term.m"
              }
#line 753 "term.m"
          }
#line 729 "term.m"
        else
#line 729 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 729 "term.m"
            {
#line 734 "term.m"
              mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 729 "term.m"
              if (mercury__term__succeeded)
#line 729 "term.m"
                {
#line 729 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 729 "term.m"
                    {
#line 729 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 729 "term.m"
                      MR_Integer mercury__term__Int_9;
#line 729 "term.m"
                      MR_Word mercury__term__V_10_10;
#line 729 "term.m"
                      MR_Word mercury__term__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "term.m"
                      MR_Box mercury__term__conv3_Int_9;

#line 730 "term.m"
                      {
#line 730 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_91_91, mercury__term__Univ_4, &mercury__term__conv3_Int_9);
                      }
#line 730 "term.m"
                      mercury__term__Int_9 = ((MR_Integer) mercury__term__conv3_Int_9);
#line 729 "term.m"
                      {
#line 729 "term.m"
                        mercury__term__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 729 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_10_10, 0) = ((MR_Box) (mercury__term__Int_9));
#line 729 "term.m"
                      }
#line 729 "term.m"
                      {
#line 729 "term.m"
                        MR_Word base;
#line 729 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 729 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 729 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_10_10));
#line 729 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_11_11));
#line 729 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 729 "term.m"
                      }
#line 729 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 729 "term.m"
                    }
#line 729 "term.m"
                  else
#line 729 "term.m"
                    if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 732 "term.m"
                      {
#line 732 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 732 "term.m"
                        MR_Float mercury__term__Float_14;
#line 732 "term.m"
                        MR_Word mercury__term__V_15_15;
#line 732 "term.m"
                        MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 733 "term.m"
                        MR_Box mercury__term__conv4_Float_14;

#line 733 "term.m"
                        {
#line 733 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_92_92, mercury__term__Univ_4, &mercury__term__conv4_Float_14);
                        }
#line 733 "term.m"
                        mercury__term__Float_14 = MR_unbox_float(mercury__term__conv4_Float_14);
#line 732 "term.m"
                        {
#line 732 "term.m"
                          mercury__term__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 732 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 1) = MR_box_float(mercury__term__Float_14);
#line 732 "term.m"
                        }
#line 732 "term.m"
                        {
#line 732 "term.m"
                          MR_Word base;
#line 732 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 732 "term.m"
                          *mercury__term__HeadVar__6_6 = base;
#line 732 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 732 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_16_16));
#line 732 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 732 "term.m"
                        }
#line 732 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 732 "term.m"
                      }
#line 729 "term.m"
                    else
#line 729 "term.m"
                      if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 739 "term.m"
                        {
#line 739 "term.m"
                          MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 739 "term.m"
                          MR_String mercury__term__String_25;
#line 739 "term.m"
                          MR_Word mercury__term__V_26_26;
#line 739 "term.m"
                          MR_Word mercury__term__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "term.m"
                          MR_Box mercury__term__conv5_String_25;

#line 740 "term.m"
                          {
#line 740 "term.m"
                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_94_94, mercury__term__Univ_4, &mercury__term__conv5_String_25);
                          }
#line 740 "term.m"
                          mercury__term__String_25 = ((MR_String) mercury__term__conv5_String_25);
#line 739 "term.m"
                          {
#line 739 "term.m"
                            mercury__term__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "term.m"
                            MR_hl_field(MR_mktag(2), mercury__term__V_26_26, 0) = ((MR_Box) (mercury__term__String_25));
#line 739 "term.m"
                          }
#line 739 "term.m"
                          {
#line 739 "term.m"
                            MR_Word base;
#line 739 "term.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 739 "term.m"
                            *mercury__term__HeadVar__6_6 = base;
#line 739 "term.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_26_26));
#line 739 "term.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_27_27));
#line 739 "term.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 739 "term.m"
                          }
#line 739 "term.m"
                          mercury__term__succeeded = MR_TRUE;
#line 739 "term.m"
                        }
#line 729 "term.m"
                      else
#line 729 "term.m"
                        if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 735 "term.m"
                          {
#line 735 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 735 "term.m"
                            MR_String mercury__term__CharName_19;
#line 735 "term.m"
                            MR_Char mercury__term__Character_20;
#line 735 "term.m"
                            MR_Word mercury__term__V_21_21;
#line 735 "term.m"
                            MR_Word mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "term.m"
                            MR_Box mercury__term__conv6_Character_20;

#line 736 "term.m"
                            {
#line 736 "term.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_93_93, mercury__term__Univ_4, &mercury__term__conv6_Character_20);
                            }
#line 736 "term.m"
                            mercury__term__Character_20 = ((MR_Char) (MR_Word) mercury__term__conv6_Character_20);
#line 737 "term.m"
                            {
#line 737 "term.m"
                              mercury__string__char_to_string_2_p_0(mercury__term__Character_20, &mercury__term__CharName_19);
                            }
#line 735 "term.m"
                            {
#line 735 "term.m"
                              mercury__term__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 735 "term.m"
                              MR_hl_field(MR_mktag(0), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__CharName_19));
#line 735 "term.m"
                            }
#line 735 "term.m"
                            {
#line 735 "term.m"
                              MR_Word base;
#line 735 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 735 "term.m"
                              *mercury__term__HeadVar__6_6 = base;
#line 735 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_21_21));
#line 735 "term.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 735 "term.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 735 "term.m"
                            }
#line 735 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 735 "term.m"
                          }
#line 729 "term.m"
                        else
#line 729 "term.m"
                          mercury__term__succeeded = MR_FALSE;
#line 729 "term.m"
                }
#line 729 "term.m"
            }
#line 729 "term.m"
          else
#line 729 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 742 "term.m"
              {
#line 742 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95;
#line 742 "term.m"
                MR_Word mercury__term__Term_30;
#line 742 "term.m"
                MR_Word mercury__term__TypeInfo_31;
#line 742 "term.m"
                MR_Word mercury__term__V_32_32;
#line 742 "term.m"
                MR_String mercury__term__V_33_33;
#line 742 "term.m"
                MR_Word mercury__term__V_34_34;
#line 742 "term.m"
                MR_Word mercury__term__V_35_35;
#line 743 "term.m"
                MR_Box mercury__term__conv7_TypeInfo_31;

#line 741 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "type_desc") == 0);
#line 742 "term.m"
                if (mercury__term__succeeded)
#line 742 "term.m"
                  {
#line 741 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "term.m"
                    if (mercury__term__succeeded)
#line 742 "term.m"
                      {
#line 742 "term.m"
                        mercury__term__V_33_33 = (MR_String) "type_info";
#line 742 "term.m"
                        mercury__term__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9104 "term.c"
                        mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 742 "term.m"
                        mercury__term__V_32_32 = (MR_Word) &mercury__term_scalar_common_5[4];
#line 743 "term.m"
                        {
#line 743 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_95_95, mercury__term__Univ_4, &mercury__term__conv7_TypeInfo_31);
                        }
#line 743 "term.m"
                        mercury__term__TypeInfo_31 = ((MR_Word) mercury__term__conv7_TypeInfo_31);
#line 744 "term.m"
                        {
#line 744 "term.m"
                          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__TypeInfo_31, &mercury__term__Term_30);
                        }
#line 742 "term.m"
                        {
#line 742 "term.m"
                          mercury__term__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 0) = ((MR_Box) (mercury__term__Term_30));
#line 742 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 1) = ((MR_Box) (mercury__term__V_35_35));
#line 742 "term.m"
                        }
#line 742 "term.m"
                        {
#line 742 "term.m"
                          MR_Word base;
#line 742 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 742 "term.m"
                          *mercury__term__HeadVar__6_6 = base;
#line 742 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_32_32));
#line 742 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_34_34));
#line 742 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 742 "term.m"
                        }
#line 742 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 742 "term.m"
                      }
#line 742 "term.m"
                  }
#line 742 "term.m"
              }
#line 729 "term.m"
            else
#line 729 "term.m"
              if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 766 "term.m"
                {
#line 766 "term.m"
                  MR_Word mercury__term__TypeInfo_104_104;
#line 766 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_105_105;
#line 766 "term.m"
                  MR_Word mercury__term__TypeInfo_106_106;
#line 766 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_107_107;
#line 766 "term.m"
                  MR_Word mercury__term__TypeInfo_108_108;
#line 766 "term.m"
                  MR_Word mercury__term__ElemType_75;
#line 766 "term.m"
                  MR_Word mercury__term__ArgsTerm_79;
#line 766 "term.m"
                  MR_Word mercury__term__List_81;
#line 766 "term.m"
                  MR_Box mercury__term__Array_82;
#line 766 "term.m"
                  MR_Word mercury__term__V_83_83;
#line 766 "term.m"
                  MR_Word mercury__term__V_84_84;
#line 766 "term.m"
                  MR_String mercury__term__V_85_85;
#line 766 "term.m"
                  MR_Word mercury__term__V_86_86;
#line 766 "term.m"
                  MR_Word mercury__term__V_87_87;
#line 768 "term.m"
                  MR_Box mercury__term__Elem_80;
#line 770 "term.m"
                  MR_Box mercury__term__conv8_Array_82;

#line 765 "term.m"
                  mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 766 "term.m"
                  if (mercury__term__succeeded)
#line 766 "term.m"
                    {
#line 765 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 765 "term.m"
                      if (mercury__term__succeeded)
#line 765 "term.m"
                        {
#line 765 "term.m"
                          mercury__term__ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 765 "term.m"
                          mercury__term__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 765 "term.m"
                          mercury__term__succeeded = (mercury__term__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "term.m"
                          if (mercury__term__succeeded)
#line 766 "term.m"
                            {
#line 767 "term.m"
                              mercury__term__V_85_85 = (MR_String) "version_array";
#line 767 "term.m"
                              mercury__term__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 767 "term.m"
                              mercury__term__V_84_84 = (MR_Word) &mercury__term_scalar_common_5[5];
#line 768 "term.m"
                              {
#line 768 "term.m"
                                mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_104_104, mercury__term__ElemType_75);
                              }
#line 9226 "term.c"
                              mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9228 "term.c"
                              mercury__term__TypeCtorInfo_107_107 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9230 "term.c"
                              {
#line 9232 "term.c"
                                mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9234 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9236 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9238 "term.c"
                              }
#line 9240 "term.c"
                              {
#line 9242 "term.c"
                                mercury__term__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9244 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_107_107));
#line 9246 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9248 "term.c"
                              }
#line 770 "term.m"
                              {
#line 770 "term.m"
                                mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_108_108, mercury__term__Univ_4, &mercury__term__conv8_Array_82);
                              }
#line 770 "term.m"
                              mercury__term__Array_82 = ((MR_Box) mercury__term__conv8_Array_82);
#line 771 "term.m"
                              {
#line 771 "term.m"
                                mercury__term__List_81 = mercury__version_array__to_list_1_f_0(mercury__term__TypeInfo_104_104, mercury__term__Array_82);
                              }
#line 772 "term.m"
                              {
#line 772 "term.m"
                                mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_106_106, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_81)), &mercury__term__ArgsTerm_79);
                              }
#line 767 "term.m"
                              {
#line 767 "term.m"
                                mercury__term__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 0) = ((MR_Box) (mercury__term__ArgsTerm_79));
#line 767 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 1) = ((MR_Box) (mercury__term__V_87_87));
#line 767 "term.m"
                              }
#line 767 "term.m"
                              {
#line 767 "term.m"
                                MR_Word base;
#line 767 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 767 "term.m"
                                *mercury__term__HeadVar__6_6 = base;
#line 767 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_84_84));
#line 767 "term.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_86_86));
#line 767 "term.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 767 "term.m"
                              }
#line 767 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 766 "term.m"
                            }
#line 765 "term.m"
                        }
#line 766 "term.m"
                    }
#line 766 "term.m"
                }
#line 729 "term.m"
              else
#line 729 "term.m"
                mercury__term__succeeded = MR_FALSE;
#line 729 "term.m"
    return mercury__term__succeeded;
#line 729 "term.m"
  }
#line 724 "term.m"
}

#line 655 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 655 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 655 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 655 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 655 "term.m"
  MR_Word mercury__term__Functor_3,
#line 655 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 655 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 655 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 655 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 655 "term.m"
{
#line 660 "term.m"
  {
#line 660 "term.m"
    MR_bool mercury__term__succeeded;

#line 660 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "term.m"
      {
#line 660 "term.m"
        MR_Word mercury__term__V_12_12;

#line 660 "term.m"
        mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "term.m"
        if (mercury__term__succeeded)
#line 660 "term.m"
          {
#line 660 "term.m"
            mercury__term__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "term.m"
            *mercury__term__HeadVar__7_7 = (MR_Word) &mercury__term_scalar_common_5[0];
#line 660 "term.m"
            mercury__term__succeeded = MR_TRUE;
#line 660 "term.m"
          }
#line 660 "term.m"
      }
#line 660 "term.m"
    else
#line 662 "term.m"
      {
#line 662 "term.m"
        MR_Word mercury__term__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "term.m"
        MR_Word mercury__term__Type_15;
#line 662 "term.m"
        MR_Word mercury__term__Types_16;
#line 662 "term.m"
        MR_Word mercury__term__ArgContext_22;
#line 662 "term.m"
        MR_Word mercury__term__NewContext_23;
#line 662 "term.m"
        MR_Word mercury__term__ArgResult_24;

#line 662 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 662 "term.m"
        if (mercury__term__succeeded)
#line 662 "term.m"
          {
#line 662 "term.m"
            mercury__term__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "term.m"
            mercury__term__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "term.m"
            {
#line 663 "term.m"
              mercury__term__ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 663 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 0) = ((MR_Box) (mercury__term__Functor_3));
#line 663 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 1) = ((MR_Box) (mercury__term__ArgNum_4));
#line 663 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 2) = ((MR_Box) (mercury__term__TermContext_6));
#line 663 "term.m"
            }
#line 664 "term.m"
            {
#line 664 "term.m"
              mercury__term__NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 0) = ((MR_Box) (mercury__term__ArgContext_22));
#line 664 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 1) = ((MR_Box) (mercury__term__PrevContext_5));
#line 664 "term.m"
            }
#line 665 "term.m"
            {
#line 665 "term.m"
              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerm_13, mercury__term__Type_15, mercury__term__NewContext_23, &mercury__term__ArgResult_24);
            }
#line 677 "term.m"
            if (((MR_tag((MR_Word) mercury__term__ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 679 "term.m"
              {
#line 679 "term.m"
                *mercury__term__HeadVar__7_7 = (MR_Word) mercury__term__ArgResult_24;
#line 679 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 679 "term.m"
              }
#line 677 "term.m"
            else
#line 667 "term.m"
              {
#line 667 "term.m"
                MR_Word mercury__term__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_24, (MR_Integer) 0)));
#line 667 "term.m"
                MR_Word mercury__term__RestResult_26;
#line 667 "term.m"
                MR_Integer mercury__term__V_29_29 = (mercury__term__ArgNum_4 + (MR_Integer) 1);

#line 668 "term.m"
                {
#line 668 "term.m"
                  mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerms_14, mercury__term__Types_16, mercury__term__Functor_3, mercury__term__V_29_29, mercury__term__PrevContext_5, mercury__term__TermContext_6, &mercury__term__RestResult_26);
                }
#line 667 "term.m"
                if (mercury__term__succeeded)
#line 667 "term.m"
                  {
#line 673 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__RestResult_26)) == (MR_mktag((MR_Integer) 1))))
#line 675 "term.m"
                      *mercury__term__HeadVar__7_7 = mercury__term__RestResult_26;
#line 673 "term.m"
                    else
#line 671 "term.m"
                      {
#line 671 "term.m"
                        MR_Word mercury__term__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__RestResult_26, (MR_Integer) 0)));
#line 671 "term.m"
                        MR_Word mercury__term__V_31_31;

#line 672 "term.m"
                        {
#line 672 "term.m"
                          mercury__term__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 0) = ((MR_Box) (mercury__term__Arg_25));
#line 672 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 1) = ((MR_Box) (mercury__term__Rest_27));
#line 672 "term.m"
                        }
#line 672 "term.m"
                        {
#line 672 "term.m"
                          MR_Word base;
#line 672 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 672 "term.m"
                          *mercury__term__HeadVar__7_7 = base;
#line 672 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_31_31));
#line 672 "term.m"
                        }
#line 671 "term.m"
                      }
#line 673 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 667 "term.m"
                  }
#line 667 "term.m"
              }
#line 662 "term.m"
          }
#line 662 "term.m"
      }
#line 660 "term.m"
    return mercury__term__succeeded;
#line 660 "term.m"
  }
#line 655 "term.m"
}

#line 510 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 510 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 510 "term.m"
  MR_Word mercury__term__Context_3,
#line 510 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 510 "term.m"
{
#line 514 "term.m"
  {
#line 514 "term.m"
    MR_bool mercury__term__succeeded;

#line 514 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 516 "term.m"
      {
#line 516 "term.m"
        MR_Word mercury__term__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "term.m"
        MR_Word mercury__term__TermContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 526 "term.m"
        MR_Word mercury__term__SpecialCaseResult_19;
#line 519 "term.m"
        MR_Word mercury__term__TypeCtor_17;
#line 519 "term.m"
        MR_Word mercury__term__TypeArgs_18;
#line 519 "term.m"
        MR_String mercury__term__V_29_29;
#line 519 "term.m"
        MR_String mercury__term__V_30_30;
#line 142 "type_desc.opt"
        MR_String mercury__term___Name_5_40;
#line 142 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_41;
#line 142 "type_desc.opt"
        MR_String mercury__term___ModuleName_5_44;
#line 142 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_45;

#line 76 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__HeadVar__2_2 ;
		{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 9575 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_17  = TypeCtorDesc;
	 mercury__term__TypeArgs_18  = ArgTypes;
#line 76 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_17 ;
		{
#line 142 "type_desc.opt"
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
#line 9624 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_29_29  = TypeCtorModuleName;
	 mercury__term___Name_5_40  = TypeCtorName;
	 mercury__term___Arity_6_41  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_univ_2_4_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_17 ;
		{
#line 142 "type_desc.opt"
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
#line 9674 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_44  = TypeCtorModuleName;
	 mercury__term__V_30_30  = TypeCtorName;
	 mercury__term___Arity_6_45  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 520 "term.m"
        {
#line 520 "term.m"
          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__V_29_29, mercury__term__V_30_30, mercury__term__TypeArgs_18, mercury__term__HeadVar__1_1, mercury__term__Context_3, &mercury__term__SpecialCaseResult_19);
        }
#line 526 "term.m"
        if (mercury__term__succeeded)
#line 525 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__SpecialCaseResult_19;
#line 526 "term.m"
        else
#line 544 "term.m"
          {
#line 544 "term.m"
            MR_Integer mercury__term__FunctorNumber_22;
#line 544 "term.m"
            MR_Word mercury__term__ArgsResult_24;
#line 527 "term.m"
            MR_Word mercury__term__TypeCtorInfo_35_35;
#line 527 "term.m"
            MR_Word mercury__term__TypeInfo_36_36;
#line 527 "term.m"
            MR_String mercury__term__FunctorName_20;
#line 527 "term.m"
            MR_Integer mercury__term__Arity_21;
#line 527 "term.m"
            MR_Word mercury__term__ArgTypes_23;
#line 527 "term.m"
            MR_Integer mercury__term__V_31_31;
#line 527 "term.m"
            MR_Integer mercury__term__V_5_48;
#line 527 "term.m"
            MR_Integer mercury__term__N_11_54;

#line 527 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 527 "term.m"
            if (mercury__term__succeeded)
#line 527 "term.m"
              {
#line 527 "term.m"
                mercury__term__FunctorName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__Functor_14, (MR_Integer) 0)));
#line 9725 "term.c"
                mercury__term__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 77 "list.opt"
                mercury__term__V_5_48 = (MR_Integer) 0;
#line 9729 "term.c"
                {
#line 9731 "term.c"
                  mercury__term__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9733 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_35_35));
#line 9735 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_34));
#line 9737 "term.c"
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
#line 9761 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__N_11_54  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 527 "term.m"
                if (mercury__term__succeeded)
#line 527 "term.m"
                  {
#line 208 "construct.opt"
                    {
#line 208 "construct.opt"
                      mercury__term__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__term__HeadVar__2_2, mercury__term__FunctorName_20, mercury__term__Arity_21, mercury__term__N_11_54, &mercury__term__FunctorNumber_22, &mercury__term__ArgTypes_23);
                    }
#line 527 "term.m"
                    if (mercury__term__succeeded)
#line 527 "term.m"
                      {
#line 530 "term.m"
                        mercury__term__V_31_31 = (MR_Integer) 1;
#line 530 "term.m"
                        {
#line 530 "term.m"
                          mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__ArgTerms_15, mercury__term__ArgTypes_23, mercury__term__Functor_14, mercury__term__V_31_31, mercury__term__Context_3, mercury__term__TermContext_16, &mercury__term__ArgsResult_24);
                        }
#line 527 "term.m"
                      }
#line 527 "term.m"
                  }
#line 527 "term.m"
              }
#line 544 "term.m"
            if (mercury__term__succeeded)
#line 540 "term.m"
              if (((MR_tag((MR_Word) mercury__term__ArgsResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 542 "term.m"
                *mercury__term__HeadVar__4_4 = (MR_Word) mercury__term__ArgsResult_24;
#line 540 "term.m"
              else
#line 534 "term.m"
                {
#line 534 "term.m"
                  MR_Word mercury__term__ArgValues_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgsResult_24, (MR_Integer) 0)));
#line 537 "term.m"
                  MR_Word mercury__term__Value_26;

#line 535 "term.m"
                  {
#line 535 "term.m"
                    mercury__term__succeeded = mercury__construct__construct_3_f_0(mercury__term__HeadVar__2_2, mercury__term__FunctorNumber_22, mercury__term__ArgValues_25, &mercury__term__Value_26);
                  }
#line 537 "term.m"
                  if (mercury__term__succeeded)
#line 536 "term.m"
                    {
#line 536 "term.m"
                      MR_Word base;
#line 536 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 536 "term.m"
                      *mercury__term__HeadVar__4_4 = base;
#line 536 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Value_26));
#line 536 "term.m"
                    }
#line 537 "term.m"
                  else
#line 538 "term.m"
                    {
#line 538 "term.m"
                      {
#line 538 "term.m"
                        mercury__require__error_1_p_0((MR_String) "term_to_type: construct/3 failed");
#line 538 "term.m"
                        return;
                      }
#line 538 "term.m"
                    }
#line 534 "term.m"
                }
#line 544 "term.m"
            else
#line 547 "term.m"
              {
#line 547 "term.m"
                MR_Word mercury__term__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0;
#line 547 "term.m"
                MR_Word mercury__term__RevContext_28;
#line 547 "term.m"
                MR_Word mercury__term__V_33_33;

#line 547 "term.m"
                {
#line 547 "term.m"
                  mercury__list__reverse_2_p_0(mercury__term__TypeCtorInfo_37_37, mercury__term__Context_3, &mercury__term__RevContext_28);
                }
#line 548 "term.m"
                {
#line 548 "term.m"
                  mercury__term__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 548 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 0) = ((MR_Box) (mercury__term__HeadVar__1_1));
#line 548 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 1) = ((MR_Box) (mercury__term__HeadVar__2_2));
#line 548 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 2) = ((MR_Box) (mercury__term__TermContext_16));
#line 548 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 3) = ((MR_Box) (mercury__term__RevContext_28));
#line 548 "term.m"
                }
#line 548 "term.m"
                {
#line 548 "term.m"
                  MR_Word base;
#line 548 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 548 "term.m"
                  *mercury__term__HeadVar__4_4 = base;
#line 548 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_33_33));
#line 548 "term.m"
                }
#line 547 "term.m"
              }
#line 544 "term.m"
          }
#line 516 "term.m"
      }
#line 514 "term.m"
    else
#line 514 "term.m"
      {
#line 514 "term.m"
        MR_Word mercury__term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "term.m"
        MR_Word mercury__term__V_9_9;
#line 514 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 515 "term.m"
        {
#line 515 "term.m"
          mercury__term__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 0) = ((MR_Box) (mercury__term__Var_5));
#line 515 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 1) = ((MR_Box) (mercury__term__Context_3));
#line 515 "term.m"
        }
#line 515 "term.m"
        {
#line 515 "term.m"
          MR_Word base;
#line 515 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 515 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_9_9));
#line 515 "term.m"
        }
#line 514 "term.m"
      }
#line 514 "term.m"
  }
#line 510 "term.m"
}

#line 456 "term.m"
MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
#line 456 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 456 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 456 "term.m"
{
#line 1136 "term.m"
  {
#line 1136 "term.m"
    MR_bool mercury__term__succeeded;
#line 1136 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1136 "term.m"
    return mercury__term__V_3;
#line 1136 "term.m"
  }
#line 456 "term.m"
}

#line 454 "term.m"
MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
#line 454 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 454 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 454 "term.m"
{
#line 1134 "term.m"
  {
#line 1134 "term.m"
    MR_bool mercury__term__succeeded;
#line 1134 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 1134 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1134 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 1134 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1134 "term.m"
  }
#line 454 "term.m"
}

#line 438 "term.m"
void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
#line 438 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 438 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 438 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 438 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 438 "term.m"
{
#line 1232 "term.m"
  {
#line 1232 "term.m"
    MR_bool mercury__term__succeeded;

#line 1232 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1232 "term.m"
  }
#line 438 "term.m"
}

#line 437 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
#line 437 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 437 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 437 "term.m"
  MR_Word mercury__term__VS1_3)
#line 437 "term.m"
{
#line 1232 "term.m"
  {
#line 1232 "term.m"
    MR_bool mercury__term__succeeded;
#line 1232 "term.m"
    MR_Word mercury__term__VS2_4 = mercury__term__VS1_3;

#line 1232 "term.m"
    return mercury__term__VS2_4;
#line 1232 "term.m"
  }
#line 437 "term.m"
}

#line 433 "term.m"
void MR_CALL 
mercury__term__coerce_var_2_p_0(
#line 433 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 433 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 433 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 433 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 433 "term.m"
{
#line 1230 "term.m"
  {
#line 1230 "term.m"
    MR_bool mercury__term__succeeded;

#line 1230 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1230 "term.m"
  }
#line 433 "term.m"
}

#line 432 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
#line 432 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 432 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 432 "term.m"
  MR_Word mercury__term__V1_3)
#line 432 "term.m"
{
#line 1230 "term.m"
  {
#line 1230 "term.m"
    MR_bool mercury__term__succeeded;
#line 1230 "term.m"
    MR_Word mercury__term__V2_4 = mercury__term__V1_3;

#line 1230 "term.m"
    return mercury__term__V2_4;
#line 1230 "term.m"
  }
#line 432 "term.m"
}

#line 428 "term.m"
void MR_CALL 
mercury__term__coerce_2_p_0(
#line 428 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 428 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 428 "term.m"
  MR_Word mercury__term__A_3,
#line 428 "term.m"
  MR_Word * mercury__term__B_4)
#line 428 "term.m"
{
#line 1228 "term.m"
  {
#line 1228 "term.m"
    MR_bool mercury__term__succeeded;

#line 1228 "term.m"
    *mercury__term__B_4 = mercury__term__A_3;
#line 1228 "term.m"
  }
#line 428 "term.m"
}

#line 427 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
#line 427 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 427 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 427 "term.m"
  MR_Word mercury__term__T1_3)
#line 427 "term.m"
{
#line 1228 "term.m"
  {
#line 1228 "term.m"
    MR_bool mercury__term__succeeded;
#line 1228 "term.m"
    MR_Word mercury__term__T2_4 = mercury__term__T1_3;

#line 1228 "term.m"
    return mercury__term__T2_4;
#line 1228 "term.m"
  }
#line 427 "term.m"
}

#line 423 "term.m"
void MR_CALL 
mercury__term__generic_term_1_p_0(
#line 423 "term.m"
  MR_Word mercury__term__HeadVar__1_2)
#line 423 "term.m"
{
#line 1220 "term.m"
  {
#line 1220 "term.m"
    MR_bool mercury__term__succeeded;

#line 1220 "term.m"
    {
#line 1220 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1220 "term.m"
      return;
    }
#line 1220 "term.m"
  }
#line 423 "term.m"
}

#line 414 "term.m"
void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
#line 414 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 414 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 414 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 414 "term.m"
{
#line 1186 "term.m"
  {
#line 1186 "term.m"
    MR_bool mercury__term__succeeded;

#line 1186 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "term.m"
    else
#line 1187 "term.m"
      {
#line 1187 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1187 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1187 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1187 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1187 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 1187 "term.m"
        {
#line 1187 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1187 "term.m"
        }
#line 1188 "term.m"
        {
#line 1188 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1187 "term.m"
        {
#line 1187 "term.m"
          MR_Word base;
#line 1187 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1187 "term.m"
        }
#line 1187 "term.m"
      }
#line 1186 "term.m"
  }
#line 414 "term.m"
}

#line 413 "term.m"
MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
#line 413 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 413 "term.m"
  MR_Word mercury__term__Vs_3)
#line 413 "term.m"
{
#line 1328 "term.m"
  {
#line 1328 "term.m"
    MR_bool mercury__term__succeeded;
#line 1328 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1328 "term.m"
    {
#line 1328 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1328 "term.m"
    return mercury__term__Ts_4;
#line 1328 "term.m"
  }
#line 413 "term.m"
}

#line 408 "term.m"
MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
#line 408 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 408 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 408 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 408 "term.m"
{
#line 1182 "term.m"
  {
#line 1182 "term.m"
    MR_bool mercury__term__succeeded;

#line 1182 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1182 "term.m"
      {
#line 1182 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1182 "term.m"
      }
#line 1182 "term.m"
    else
#line 1183 "term.m"
      {
#line 1183 "term.m"
        MR_Word mercury__term__Var_3;
#line 1183 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1183 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1183 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1183 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1183 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1183 "term.m"
        if (mercury__term__succeeded)
#line 1183 "term.m"
          {
#line 1183 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1183 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1184 "term.m"
            {
#line 1184 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1183 "term.m"
            if (mercury__term__succeeded)
#line 1183 "term.m"
              {
#line 1183 "term.m"
                {
#line 1183 "term.m"
                  MR_Word base;
#line 1183 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1183 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1183 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1183 "term.m"
                }
#line 1183 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1183 "term.m"
              }
#line 1183 "term.m"
          }
#line 1183 "term.m"
      }
#line 1182 "term.m"
    return mercury__term__succeeded;
#line 1182 "term.m"
  }
#line 408 "term.m"
}

#line 404 "term.m"
MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
#line 404 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 404 "term.m"
  MR_Word mercury__term__Ts_3)
#line 404 "term.m"
{
#line 1323 "term.m"
  {
#line 1323 "term.m"
    MR_bool mercury__term__succeeded;
#line 1323 "term.m"
    MR_Word mercury__term__Vs_4;
#line 1323 "term.m"
    MR_Word mercury__term__Vs0_5;

#line 1321 "term.m"
    {
#line 1321 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts_3, &mercury__term__Vs0_5);
    }
#line 1323 "term.m"
    if (mercury__term__succeeded)
#line 1322 "term.m"
      mercury__term__Vs_4 = mercury__term__Vs0_5;
#line 1323 "term.m"
    else
#line 1324 "term.m"
      {
#line 1324 "term.m"
        {
#line 1324 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.term_list_to_var_list: not all vars");
        }
#line 1324 "term.m"
      }
#line 1323 "term.m"
    return mercury__term__Vs_4;
#line 1323 "term.m"
  }
#line 404 "term.m"
}

#line 399 "term.m"
void MR_CALL 
mercury__term__context_init_3_p_0(
#line 399 "term.m"
  MR_String mercury__term__File_4,
#line 399 "term.m"
  MR_Integer mercury__term__LineNumber_5,
#line 399 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 399 "term.m"
{
#line 840 "term.m"
  {
#line 840 "term.m"
    MR_bool mercury__term__succeeded;

#line 840 "term.m"
    {
#line 840 "term.m"
      MR_Word base;
#line 840 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 840 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 840 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 840 "term.m"
    }
#line 840 "term.m"
  }
#line 399 "term.m"
}

#line 398 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
#line 398 "term.m"
  MR_String mercury__term__S_4,
#line 398 "term.m"
  MR_Integer mercury__term__N_5)
#line 398 "term.m"
{
#line 840 "term.m"
  {
#line 840 "term.m"
    MR_bool mercury__term__succeeded;
#line 840 "term.m"
    MR_Word mercury__term__C_6;

#line 840 "term.m"
    {
#line 840 "term.m"
      mercury__term__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 0) = ((MR_Box) (mercury__term__S_4));
#line 840 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 1) = ((MR_Box) (mercury__term__N_5));
#line 840 "term.m"
    }
#line 840 "term.m"
    return mercury__term__C_6;
#line 840 "term.m"
  }
#line 398 "term.m"
}

#line 397 "term.m"
void MR_CALL 
mercury__term__context_init_1_p_0(
#line 397 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 397 "term.m"
{
#line 839 "term.m"
  {
#line 839 "term.m"
    MR_bool mercury__term__succeeded;

#line 839 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 839 "term.m"
  }
#line 397 "term.m"
}

#line 396 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 396 "term.m"
{
#line 839 "term.m"
  {
#line 839 "term.m"
    MR_bool mercury__term__succeeded;
#line 839 "term.m"
    MR_Word mercury__term__C_2 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 839 "term.m"
    return mercury__term__C_2;
#line 839 "term.m"
  }
#line 396 "term.m"
}

#line 391 "term.m"
void MR_CALL 
mercury__term__context_file_2_p_0(
#line 391 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 391 "term.m"
  MR_String * mercury__term__FileName_3)
#line 391 "term.m"
{
#line 838 "term.m"
  {
#line 838 "term.m"
    MR_bool mercury__term__succeeded;
#line 838 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 838 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 838 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 838 "term.m"
  }
#line 391 "term.m"
}

#line 390 "term.m"
MR_String MR_CALL 
mercury__term__context_file_1_f_0(
#line 390 "term.m"
  MR_Word mercury__term__C_3)
#line 390 "term.m"
{
#line 838 "term.m"
  {
#line 838 "term.m"
    MR_bool mercury__term__succeeded;
#line 838 "term.m"
    MR_String mercury__term__S_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));
#line 838 "term.m"
    MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));

#line 838 "term.m"
    return mercury__term__S_4;
#line 838 "term.m"
  }
#line 390 "term.m"
}

#line 386 "term.m"
void MR_CALL 
mercury__term__context_line_2_p_0(
#line 386 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 386 "term.m"
  MR_Integer * mercury__term__LineNumber_4)
#line 386 "term.m"
{
#line 837 "term.m"
  {
#line 837 "term.m"
    MR_bool mercury__term__succeeded;
#line 837 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 837 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 837 "term.m"
  }
#line 386 "term.m"
}

#line 385 "term.m"
MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
#line 385 "term.m"
  MR_Word mercury__term__C_3)
#line 385 "term.m"
{
#line 837 "term.m"
  {
#line 837 "term.m"
    MR_bool mercury__term__succeeded;
#line 837 "term.m"
    MR_Integer mercury__term__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));
#line 837 "term.m"
    MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));

#line 837 "term.m"
    return mercury__term__N_4;
#line 837 "term.m"
  }
#line 385 "term.m"
}

#line 379 "term.m"
void MR_CALL 
mercury__term__var_to_int_2_p_0(
#line 379 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 379 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 379 "term.m"
  MR_Integer * mercury__term__Var_3)
#line 379 "term.m"
{
#line 1126 "term.m"
  {
#line 1126 "term.m"
    MR_bool mercury__term__succeeded;

#line 1126 "term.m"
    *mercury__term__Var_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 1126 "term.m"
  }
#line 379 "term.m"
}

#line 378 "term.m"
MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
#line 378 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 378 "term.m"
  MR_Word mercury__term__V_3)
#line 378 "term.m"
{
#line 1126 "term.m"
  {
#line 1126 "term.m"
    MR_bool mercury__term__succeeded;
#line 1126 "term.m"
    MR_Integer mercury__term__N_4 = (MR_Integer) mercury__term__V_3;

#line 1126 "term.m"
    return mercury__term__N_4;
#line 1126 "term.m"
  }
#line 378 "term.m"
}

#line 366 "term.m"
MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
#line 366 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 366 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 366 "term.m"
{
#line 1117 "term.m"
  {
#line 1117 "term.m"
    MR_bool mercury__term__succeeded;
#line 1117 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1117 "term.m"
    return mercury__term__V_3;
#line 1117 "term.m"
  }
#line 366 "term.m"
}

#line 360 "term.m"
void MR_CALL 
mercury__term__create_var_3_p_0(
#line 360 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 360 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 360 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 360 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 360 "term.m"
{
#line 1111 "term.m"
  {
#line 1111 "term.m"
    MR_bool mercury__term__succeeded;
#line 1111 "term.m"
    MR_Integer mercury__term__V_4;
#line 1111 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 1113 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 1111 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 1111 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 1111 "term.m"
  }
#line 360 "term.m"
}

#line 355 "term.m"
MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
#line 355 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 355 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 355 "term.m"
{
#line 1109 "term.m"
  {
#line 1109 "term.m"
    MR_bool mercury__term__succeeded;
#line 1109 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1109 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 1109 "term.m"
    return mercury__term__succeeded;
#line 1109 "term.m"
  }
#line 355 "term.m"
}

#line 354 "term.m"
void MR_CALL 
mercury__term__init_var_supply_1_p_0(
#line 354 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 354 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 354 "term.m"
{
#line 1109 "term.m"
  {
#line 1109 "term.m"
    MR_bool mercury__term__succeeded;

#line 1109 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1109 "term.m"
  }
#line 354 "term.m"
}

#line 352 "term.m"
MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
#line 352 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3)
#line 352 "term.m"
{
#line 1109 "term.m"
  {
#line 1109 "term.m"
    MR_bool mercury__term__succeeded;
#line 1109 "term.m"
    MR_Word mercury__term__VS_2 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 1109 "term.m"
    return mercury__term__VS_2;
#line 1109 "term.m"
  }
#line 352 "term.m"
}

#line 341 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
#line 341 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 341 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 341 "term.m"
{
#line 1208 "term.m"
  {
#line 1208 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1208 "term.m"
    MR_Word mercury__term__Args_3;
#line 1208 "term.m"
    MR_Word mercury__term__V_2_2;
#line 1208 "term.m"
    MR_Word mercury__term__V_4_4;

#line 1208 "term.m"
    if (mercury__term__succeeded)
#line 1208 "term.m"
      {
#line 1208 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1208 "term.m"
        mercury__term__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1208 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1209 "term.m"
        {
#line 1209 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Args_3);
        }
#line 1208 "term.m"
      }
#line 1208 "term.m"
    return mercury__term__succeeded;
#line 1208 "term.m"
  }
#line 341 "term.m"
}

#line 337 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
#line 337 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 337 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 337 "term.m"
  MR_Word mercury__term__Bindings_2)
#line 337 "term.m"
{
#line 1192 "term.m"
  while (MR_TRUE)
#line 1192 "term.m"
    {
#line 1192 "term.m"
      /* tailcall optimized into a loop */
#line 1192 "term.m"
      {
#line 1192 "term.m"
        MR_bool mercury__term__succeeded;

#line 1192 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1195 "term.m"
          {
#line 1195 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1195 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1195 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1196 "term.m"
            {
#line 1196 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 1195 "term.m"
          }
#line 1192 "term.m"
        else
#line 1192 "term.m"
          {
#line 1192 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1192 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 1192 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1192 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 1192 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "term.m"
            MR_Word mercury__term__Binding_6;
#line 1192 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 10865 "term.c"
            {
#line 10867 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10869 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 10871 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 10873 "term.c"
            }
#line 10875 "term.c"
            {
#line 10877 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10879 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 10881 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 10883 "term.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__TypeInfo_13_13, mercury__term__TypeInfo_15_15, (MR_Word) mercury__term__Bindings_2, mercury__term__V_3, &mercury__term__conv0_Binding_6);
            }
#line 39 "map.opt"
            if (mercury__term__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__term__Binding_6 = ((MR_Word) mercury__term__conv0_Binding_6);
#line 39 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 1192 "term.m"
            if (mercury__term__succeeded)
#line 1194 "term.m"
              {
#line 1194 "term.m"
                /* direct tailcall eliminated */
#line 1194 "term.m"
                {
#line 1194 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 1194 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1194 "term.m"
                }
#line 1194 "term.m"
                continue;
#line 1194 "term.m"
              }
#line 1192 "term.m"
          }
#line 1192 "term.m"
        return mercury__term__succeeded;
#line 1192 "term.m"
      }
#line 1192 "term.m"
      break;
#line 1192 "term.m"
    }
#line 337 "term.m"
}

#line 331 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
#line 331 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 331 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 331 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 331 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 331 "term.m"
{
#line 1175 "term.m"
  {
#line 1175 "term.m"
    MR_bool mercury__term__succeeded;

#line 1175 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1175 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "term.m"
    else
#line 1176 "term.m"
      {
#line 1176 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1176 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1176 "term.m"
        MR_Word mercury__term__Var_8;
#line 1176 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1171 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1169 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1169 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 10975 "term.c"
        {
#line 10977 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10979 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 10981 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 10983 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__TypeInfo_10_16, mercury__term__TypeInfo_10_16, (MR_Word) mercury__term__HeadVar__1_1, mercury__term__Var0_6, &mercury__term__conv0_NewVar_14);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__NewVar_14 = ((MR_Word) mercury__term__conv0_NewVar_14);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 1171 "term.m"
        if (mercury__term__succeeded)
#line 1170 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1171 "term.m"
        else
#line 1172 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1178 "term.m"
        {
#line 1178 "term.m"
          mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1176 "term.m"
        {
#line 1176 "term.m"
          MR_Word base;
#line 1176 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1176 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1176 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1176 "term.m"
        }
#line 1176 "term.m"
      }
#line 1175 "term.m"
  }
#line 331 "term.m"
}

#line 329 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
#line 329 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 329 "term.m"
  MR_Word mercury__term__M_4,
#line 329 "term.m"
  MR_Word mercury__term__Vs0_5)
#line 329 "term.m"
{
#line 1303 "term.m"
  {
#line 1303 "term.m"
    MR_bool mercury__term__succeeded;
#line 1303 "term.m"
    MR_Word mercury__term__Vs_6;

#line 1303 "term.m"
    {
#line 1303 "term.m"
      mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__M_4, mercury__term__Vs0_5, &mercury__term__Vs_6);
    }
#line 1303 "term.m"
    return mercury__term__Vs_6;
#line 1303 "term.m"
  }
#line 329 "term.m"
}

#line 324 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
#line 324 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 324 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 324 "term.m"
  MR_Word mercury__term__Var0_5,
#line 324 "term.m"
  MR_Word * mercury__term__Var_6)
#line 324 "term.m"
{
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;
#line 1171 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1169 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1169 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 39 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 11090 "term.c"
    {
#line 11092 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11094 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 11096 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 11098 "term.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__TypeInfo_10_10, mercury__term__TypeInfo_10_10, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_7);
    }
#line 39 "map.opt"
    if (mercury__term__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__term__NewVar_7 = ((MR_Word) mercury__term__conv0_NewVar_7);
#line 39 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 1171 "term.m"
    if (mercury__term__succeeded)
#line 1170 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1171 "term.m"
    else
#line 1172 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1171 "term.m"
  }
#line 324 "term.m"
}

#line 322 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
#line 322 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 322 "term.m"
  MR_Word mercury__term__M_4,
#line 322 "term.m"
  MR_Word mercury__term__V0_5)
#line 322 "term.m"
{
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;
#line 1171 "term.m"
    MR_Word mercury__term__V_6;
#line 1171 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1169 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1169 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 39 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 11154 "term.c"
    {
#line 11156 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11158 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 11160 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 11162 "term.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__M_4, mercury__term__V0_5, &mercury__term__conv0_NewVar_11);
    }
#line 39 "map.opt"
    if (mercury__term__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
#line 39 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 1171 "term.m"
    if (mercury__term__succeeded)
#line 1170 "term.m"
      mercury__term__V_6 = mercury__term__NewVar_11;
#line 1171 "term.m"
    else
#line 1172 "term.m"
      mercury__term__V_6 = mercury__term__V0_5;
#line 1171 "term.m"
    return mercury__term__V_6;
#line 1171 "term.m"
  }
#line 322 "term.m"
}

#line 317 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
#line 317 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 317 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 317 "term.m"
  MR_Word mercury__term__Renaming_2,
#line 317 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 317 "term.m"
{
#line 1163 "term.m"
  {
#line 1163 "term.m"
    MR_bool mercury__term__succeeded;

#line 1163 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1163 "term.m"
    else
#line 1164 "term.m"
      {
#line 1164 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1164 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1164 "term.m"
        MR_Word mercury__term__Term_8;
#line 1164 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1165 "term.m"
        {
#line 1165 "term.m"
          mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__Renaming_2, &mercury__term__Term_8);
        }
#line 1166 "term.m"
        {
#line 1166 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__Renaming_2, &mercury__term__Terms_9);
        }
#line 1164 "term.m"
        {
#line 1164 "term.m"
          MR_Word base;
#line 1164 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1164 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1164 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1164 "term.m"
        }
#line 1164 "term.m"
      }
#line 1163 "term.m"
  }
#line 317 "term.m"
}

#line 315 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
#line 315 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 315 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 315 "term.m"
  MR_Word mercury__term__M_5)
#line 315 "term.m"
{
#line 1300 "term.m"
  {
#line 1300 "term.m"
    MR_bool mercury__term__succeeded;
#line 1300 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1300 "term.m"
    {
#line 1300 "term.m"
      mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__M_5, &mercury__term__Ts2_6);
    }
#line 1300 "term.m"
    return mercury__term__Ts2_6;
#line 1300 "term.m"
  }
#line 315 "term.m"
}

#line 310 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
#line 310 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 310 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 310 "term.m"
  MR_Word mercury__term__Renaming_2,
#line 310 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 310 "term.m"
{
#line 1157 "term.m"
  {
#line 1157 "term.m"
    MR_bool mercury__term__succeeded;

#line 1157 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1157 "term.m"
      {
#line 1157 "term.m"
        MR_Word mercury__term__Const_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1157 "term.m"
        MR_Word mercury__term__Args0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1157 "term.m"
        MR_Word mercury__term__Cont_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1157 "term.m"
        MR_Word mercury__term__Args_8;

#line 1158 "term.m"
        {
#line 1158 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Args0_5, mercury__term__Renaming_2, &mercury__term__Args_8);
        }
#line 1157 "term.m"
        {
#line 1157 "term.m"
          MR_Word base;
#line 1157 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1157 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Const_4));
#line 1157 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_8));
#line 1157 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Cont_6));
#line 1157 "term.m"
        }
#line 1157 "term.m"
      }
#line 1157 "term.m"
    else
#line 1160 "term.m"
      {
#line 1160 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1160 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1160 "term.m"
        MR_Word mercury__term__Var_12;
#line 1171 "term.m"
        MR_Word mercury__term__NewVar_17;
#line 1169 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1169 "term.m"
        MR_Word mercury__term__TypeInfo_10_19;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_NewVar_17;

#line 11363 "term.c"
        {
#line 11365 "term.c"
          mercury__term__TypeInfo_10_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11367 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_18));
#line 11369 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_13));
#line 11371 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__TypeInfo_10_19, mercury__term__TypeInfo_10_19, (MR_Word) mercury__term__Renaming_2, mercury__term__Var0_9, &mercury__term__conv0_NewVar_17);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__NewVar_17 = ((MR_Word) mercury__term__conv0_NewVar_17);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 1171 "term.m"
        if (mercury__term__succeeded)
#line 1170 "term.m"
          mercury__term__Var_12 = mercury__term__NewVar_17;
#line 1171 "term.m"
        else
#line 1172 "term.m"
          mercury__term__Var_12 = mercury__term__Var0_9;
#line 1160 "term.m"
        {
#line 1160 "term.m"
          MR_Word base;
#line 1160 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1160 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_12));
#line 1160 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1160 "term.m"
        }
#line 1160 "term.m"
      }
#line 1157 "term.m"
  }
#line 310 "term.m"
}

#line 309 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
#line 309 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 309 "term.m"
  MR_Word mercury__term__T1_4,
#line 309 "term.m"
  MR_Word mercury__term__M_5)
#line 309 "term.m"
{
#line 1297 "term.m"
  {
#line 1297 "term.m"
    MR_bool mercury__term__succeeded;
#line 1297 "term.m"
    MR_Word mercury__term__T2_6;

#line 1297 "term.m"
    {
#line 1297 "term.m"
      mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__M_5, &mercury__term__T2_6);
    }
#line 1297 "term.m"
    return mercury__term__T2_6;
#line 1297 "term.m"
  }
#line 309 "term.m"
}

#line 303 "term.m"
void MR_CALL 
mercury__term__relabel_variables_4_p_0(
#line 303 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 303 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 303 "term.m"
  MR_Word mercury__term__OldVar_2,
#line 303 "term.m"
  MR_Word mercury__term__NewVar_3,
#line 303 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 303 "term.m"
{
#line 1151 "term.m"
  {
#line 1151 "term.m"
    MR_bool mercury__term__succeeded;

#line 1151 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1151 "term.m"
    else
#line 1152 "term.m"
      {
#line 1152 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1152 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1152 "term.m"
        MR_Word mercury__term__Term_11;
#line 1152 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1153 "term.m"
        {
#line 1153 "term.m"
          mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Term_11);
        }
#line 1154 "term.m"
        {
#line 1154 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Terms_12);
        }
#line 1152 "term.m"
        {
#line 1152 "term.m"
          MR_Word base;
#line 1152 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1152 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1152 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1152 "term.m"
        }
#line 1152 "term.m"
      }
#line 1151 "term.m"
  }
#line 303 "term.m"
}

#line 302 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
#line 302 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 302 "term.m"
  MR_Word mercury__term__Ts1_5,
#line 302 "term.m"
  MR_Word mercury__term__V1_6,
#line 302 "term.m"
  MR_Word mercury__term__V2_7)
#line 302 "term.m"
{
#line 1294 "term.m"
  {
#line 1294 "term.m"
    MR_bool mercury__term__succeeded;
#line 1294 "term.m"
    MR_Word mercury__term__Ts2_8;

#line 1294 "term.m"
    {
#line 1294 "term.m"
      mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Ts1_5, mercury__term__V1_6, mercury__term__V2_7, &mercury__term__Ts2_8);
    }
#line 1294 "term.m"
    return mercury__term__Ts2_8;
#line 1294 "term.m"
  }
#line 302 "term.m"
}

#line 296 "term.m"
void MR_CALL 
mercury__term__relabel_variable_4_p_0(
#line 296 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_16,
#line 296 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 296 "term.m"
  MR_Word mercury__term__OldVar_2,
#line 296 "term.m"
  MR_Word mercury__term__NewVar_3,
#line 296 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 296 "term.m"
{
#line 1141 "term.m"
  {
#line 1141 "term.m"
    MR_bool mercury__term__succeeded;

#line 1141 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1141 "term.m"
      {
#line 1141 "term.m"
        MR_Word mercury__term__Const_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1141 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1141 "term.m"
        MR_Word mercury__term__Cont_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1141 "term.m"
        MR_Word mercury__term__Terms_10;

#line 1142 "term.m"
        {
#line 1142 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_16, mercury__term__Terms0_6, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Terms_10);
        }
#line 1141 "term.m"
        {
#line 1141 "term.m"
          MR_Word base;
#line 1141 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1141 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Const_5));
#line 1141 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Terms_10));
#line 1141 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Cont_7));
#line 1141 "term.m"
        }
#line 1141 "term.m"
      }
#line 1141 "term.m"
    else
#line 1144 "term.m"
      {
#line 1144 "term.m"
        MR_Word mercury__term__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1144 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1144 "term.m"
        MR_Word mercury__term__Var_15;
#line 477 "term.m"
        MR_Integer mercury__term__CastX_19 = (MR_Integer) mercury__term__Var0_11;
#line 477 "term.m"
        MR_Integer mercury__term__CastY_20 = (MR_Integer) mercury__term__OldVar_2;

#line 477 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_19 == mercury__term__CastY_20);
#line 477 "term.m"
        if (mercury__term__succeeded)
#line 477 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
        else
#line 477 "term.m"
          {
#line 477 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var0_11;
#line 477 "term.m"
            MR_Integer mercury__term__V_18_18 = (MR_Integer) mercury__term__OldVar_2;

#line 11633 "term.c"
            mercury__term__succeeded = (mercury__term__V_17_17 == mercury__term__V_18_18);
#line 477 "term.m"
          }
#line 1147 "term.m"
        if (mercury__term__succeeded)
#line 1146 "term.m"
          mercury__term__Var_15 = mercury__term__NewVar_3;
#line 1147 "term.m"
        else
#line 1148 "term.m"
          mercury__term__Var_15 = mercury__term__Var0_11;
#line 1144 "term.m"
        {
#line 1144 "term.m"
          MR_Word base;
#line 1144 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1144 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_15));
#line 1144 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_12));
#line 1144 "term.m"
        }
#line 1144 "term.m"
      }
#line 1141 "term.m"
  }
#line 296 "term.m"
}

#line 295 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
#line 295 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 295 "term.m"
  MR_Word mercury__term__T1_5,
#line 295 "term.m"
  MR_Word mercury__term__V1_6,
#line 295 "term.m"
  MR_Word mercury__term__V2_7)
#line 295 "term.m"
{
#line 1291 "term.m"
  {
#line 1291 "term.m"
    MR_bool mercury__term__succeeded;
#line 1291 "term.m"
    MR_Word mercury__term__T2_8;

#line 1291 "term.m"
    {
#line 1291 "term.m"
      mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__T1_5, mercury__term__V1_6, mercury__term__V2_7, &mercury__term__T2_8);
    }
#line 1291 "term.m"
    return mercury__term__T2_8;
#line 1291 "term.m"
  }
#line 295 "term.m"
}

#line 287 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
#line 287 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 287 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 287 "term.m"
  MR_Word mercury__term__Y_6,
#line 287 "term.m"
  MR_Word mercury__term__Bindings_7)
#line 287 "term.m"
{
#line 1019 "term.m"
  while (MR_TRUE)
#line 1019 "term.m"
    {
#line 1019 "term.m"
      /* tailcall optimized into a loop */
#line 1019 "term.m"
      {
#line 1019 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1019 "term.m"
        MR_Word mercury__term__Term_4;
#line 1019 "term.m"
        MR_Word mercury__term__Terms_5;

#line 1019 "term.m"
        if (mercury__term__succeeded)
#line 1019 "term.m"
          {
#line 1019 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1019 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1020 "term.m"
            {
#line 1020 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Y_6, mercury__term__Bindings_7);
            }
#line 1022 "term.m"
            if (mercury__term__succeeded)
#line 1021 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1022 "term.m"
            else
#line 1023 "term.m"
              {
#line 1023 "term.m"
                /* direct tailcall eliminated */
#line 1023 "term.m"
                {
#line 1023 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1023 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1023 "term.m"
                }
#line 1023 "term.m"
                continue;
#line 1023 "term.m"
              }
#line 1019 "term.m"
          }
#line 1019 "term.m"
        return mercury__term__succeeded;
#line 1019 "term.m"
      }
#line 1019 "term.m"
      break;
#line 1019 "term.m"
    }
#line 287 "term.m"
}

#line 283 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
#line 283 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 283 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 283 "term.m"
  MR_Word mercury__term__Y_2,
#line 283 "term.m"
  MR_Word mercury__term__Bindings_3)
#line 283 "term.m"
{
#line 1009 "term.m"
  while (MR_TRUE)
#line 1009 "term.m"
    {
#line 1009 "term.m"
      /* tailcall optimized into a loop */
#line 1009 "term.m"
      {
#line 1009 "term.m"
        MR_bool mercury__term__succeeded;

#line 1009 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1016 "term.m"
          {
#line 1016 "term.m"
            MR_Word mercury__term__As_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "term.m"
            MR_Word mercury__term___F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "term.m"
            MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1017 "term.m"
            {
#line 1017 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__As_10, mercury__term__Y_2, mercury__term__Bindings_3);
            }
#line 1016 "term.m"
          }
#line 1009 "term.m"
        else
#line 1009 "term.m"
          {
#line 1009 "term.m"
            MR_Word mercury__term__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1009 "term.m"
            MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_4;
#line 477 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Y_2;

#line 477 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 477 "term.m"
            if (mercury__term__succeeded)
#line 477 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
            else
#line 477 "term.m"
              {
#line 477 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_4;
#line 477 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Y_2;

#line 11845 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 477 "term.m"
              }
#line 1012 "term.m"
            if (mercury__term__succeeded)
#line 1011 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1012 "term.m"
            else
#line 1013 "term.m"
              {
#line 1013 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1013 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 1013 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1013 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 1013 "term.m"
                MR_Word mercury__term__BindingOfX_8;
#line 39 "map.opt"
                MR_Box mercury__term__conv0_BindingOfX_8;

#line 11870 "term.c"
                {
#line 11872 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11874 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 11876 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 11878 "term.c"
                }
#line 11880 "term.c"
                {
#line 11882 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11884 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 11886 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 11888 "term.c"
                }
#line 39 "map.opt"
                {
#line 39 "map.opt"
                  mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Bindings_3, mercury__term__X_4, &mercury__term__conv0_BindingOfX_8);
                }
#line 39 "map.opt"
                if (mercury__term__succeeded)
#line 39 "map.opt"
                  {
#line 39 "map.opt"
                    mercury__term__BindingOfX_8 = ((MR_Word) mercury__term__conv0_BindingOfX_8);
#line 39 "map.opt"
                    mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
                  }
#line 1013 "term.m"
                if (mercury__term__succeeded)
#line 1014 "term.m"
                  {
#line 1014 "term.m"
                    /* direct tailcall eliminated */
#line 1014 "term.m"
                    {
#line 1014 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_8;

#line 1014 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1014 "term.m"
                    }
#line 1014 "term.m"
                    continue;
#line 1014 "term.m"
                  }
#line 1013 "term.m"
              }
#line 1009 "term.m"
          }
#line 1009 "term.m"
        return mercury__term__succeeded;
#line 1009 "term.m"
      }
#line 1009 "term.m"
      break;
#line 1009 "term.m"
    }
#line 283 "term.m"
}

#line 276 "term.m"
void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
#line 276 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 276 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 276 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 276 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 276 "term.m"
{
#line 1102 "term.m"
  {
#line 1102 "term.m"
    MR_bool mercury__term__succeeded;

#line 1102 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1102 "term.m"
    else
#line 1103 "term.m"
      {
#line 1103 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1103 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1103 "term.m"
        MR_Word mercury__term__Term_8;
#line 1103 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1104 "term.m"
        {
#line 1104 "term.m"
          mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1105 "term.m"
        {
#line 1105 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1103 "term.m"
        {
#line 1103 "term.m"
          MR_Word base;
#line 1103 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1103 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1103 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1103 "term.m"
        }
#line 1103 "term.m"
      }
#line 1102 "term.m"
  }
#line 276 "term.m"
}

#line 274 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
#line 274 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 274 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 274 "term.m"
  MR_Word mercury__term__S_5)
#line 274 "term.m"
{
#line 1288 "term.m"
  {
#line 1288 "term.m"
    MR_bool mercury__term__succeeded;
#line 1288 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1288 "term.m"
    {
#line 1288 "term.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__S_5, &mercury__term__Ts2_6);
    }
#line 1288 "term.m"
    return mercury__term__Ts2_6;
#line 1288 "term.m"
  }
#line 274 "term.m"
}

#line 269 "term.m"
void MR_CALL 
mercury__term__apply_substitution_3_p_0(
#line 269 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 269 "term.m"
  MR_Word mercury__term__Term0_4,
#line 269 "term.m"
  MR_Word mercury__term__Substitution_5,
#line 269 "term.m"
  MR_Word * mercury__term__Term_6)
#line 269 "term.m"
{
#line 1096 "term.m"
  {
#line 1096 "term.m"
    MR_bool mercury__term__succeeded;

#line 1096 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1097 "term.m"
      {
#line 1097 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1097 "term.m"
        MR_Word mercury__term__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1097 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));
#line 1097 "term.m"
        MR_Word mercury__term__Args_13;

#line 1098 "term.m"
        {
#line 1098 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Args0_11, mercury__term__Substitution_5, &mercury__term__Args_13);
        }
#line 1099 "term.m"
        {
#line 1099 "term.m"
          MR_Word base;
#line 1099 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1099 "term.m"
          *mercury__term__Term_6 = base;
#line 1099 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1099 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_13));
#line 1099 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1099 "term.m"
        }
#line 1097 "term.m"
      }
#line 1096 "term.m"
    else
#line 1090 "term.m"
      {
#line 1090 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1090 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1093 "term.m"
        MR_Word mercury__term__Replacement_9;
#line 1091 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1091 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1091 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1091 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_Replacement_9;

#line 12110 "term.c"
        {
#line 12112 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12114 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12116 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12118 "term.c"
        }
#line 12120 "term.c"
        {
#line 12122 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12124 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 12126 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12128 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Substitution_5, mercury__term__Var_7, &mercury__term__conv0_Replacement_9);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__Replacement_9 = ((MR_Word) mercury__term__conv0_Replacement_9);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 1093 "term.m"
        if (mercury__term__succeeded)
#line 1092 "term.m"
          *mercury__term__Term_6 = mercury__term__Replacement_9;
#line 1093 "term.m"
        else
#line 1094 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1090 "term.m"
      }
#line 1096 "term.m"
  }
#line 269 "term.m"
}

#line 268 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
#line 268 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 268 "term.m"
  MR_Word mercury__term__T1_4,
#line 268 "term.m"
  MR_Word mercury__term__S_5)
#line 268 "term.m"
{
#line 1285 "term.m"
  {
#line 1285 "term.m"
    MR_bool mercury__term__succeeded;
#line 1285 "term.m"
    MR_Word mercury__term__T2_6;

#line 1285 "term.m"
    {
#line 1285 "term.m"
      mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__S_5, &mercury__term__T2_6);
    }
#line 1285 "term.m"
    return mercury__term__T2_6;
#line 1285 "term.m"
  }
#line 268 "term.m"
}

#line 261 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
#line 261 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 261 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 261 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 261 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 261 "term.m"
{
#line 1080 "term.m"
  {
#line 1080 "term.m"
    MR_bool mercury__term__succeeded;

#line 1080 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1080 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "term.m"
    else
#line 1082 "term.m"
      {
#line 1082 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1082 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1082 "term.m"
        MR_Word mercury__term__Term_8;
#line 1082 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1083 "term.m"
        {
#line 1083 "term.m"
          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1084 "term.m"
        {
#line 1084 "term.m"
          mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1082 "term.m"
        {
#line 1082 "term.m"
          MR_Word base;
#line 1082 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1082 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1082 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1082 "term.m"
        }
#line 1082 "term.m"
      }
#line 1080 "term.m"
  }
#line 261 "term.m"
}

#line 259 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
#line 259 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 259 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 259 "term.m"
  MR_Word mercury__term__S_5)
#line 259 "term.m"
{
#line 1282 "term.m"
  {
#line 1282 "term.m"
    MR_bool mercury__term__succeeded;
#line 1282 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1282 "term.m"
    {
#line 1282 "term.m"
      mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__S_5, &mercury__term__Ts2_6);
    }
#line 1282 "term.m"
    return mercury__term__Ts2_6;
#line 1282 "term.m"
  }
#line 259 "term.m"
}

#line 254 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
#line 254 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 254 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 254 "term.m"
  MR_Word mercury__term__Substitution_2,
#line 254 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 254 "term.m"
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
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1077 "term.m"
          {
#line 1077 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1077 "term.m"
            MR_Word mercury__term__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1077 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1077 "term.m"
            MR_Word mercury__term__Args_14;

#line 1078 "term.m"
            {
#line 1078 "term.m"
              mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Args0_11, mercury__term__Substitution_2, &mercury__term__Args_14);
            }
#line 1077 "term.m"
            {
#line 1077 "term.m"
              MR_Word base;
#line 1077 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "term.m"
              *mercury__term__HeadVar__3_3 = base;
#line 1077 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1077 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_14));
#line 1077 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1077 "term.m"
            }
#line 1077 "term.m"
          }
#line 1069 "term.m"
        else
#line 1069 "term.m"
          {
#line 1069 "term.m"
            MR_Word mercury__term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1069 "term.m"
            MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1073 "term.m"
            MR_Word mercury__term__Replacement_9;
#line 1070 "term.m"
            MR_Word mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1070 "term.m"
            MR_Word mercury__term__TypeInfo_17_17;
#line 1070 "term.m"
            MR_Word mercury__term__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1070 "term.m"
            MR_Word mercury__term__TypeInfo_19_19;
#line 39 "map.opt"
            MR_Box mercury__term__conv0_Replacement_9;

#line 12367 "term.c"
            {
#line 12369 "term.c"
              mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12371 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 12373 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 12375 "term.c"
            }
#line 12377 "term.c"
            {
#line 12379 "term.c"
              mercury__term__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12381 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_18_18));
#line 12383 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 12385 "term.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__TypeInfo_17_17, mercury__term__TypeInfo_19_19, (MR_Word) mercury__term__Substitution_2, mercury__term__Var_5, &mercury__term__conv0_Replacement_9);
            }
#line 39 "map.opt"
            if (mercury__term__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__term__Replacement_9 = ((MR_Word) mercury__term__conv0_Replacement_9);
#line 39 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 1073 "term.m"
            if (mercury__term__succeeded)
#line 1072 "term.m"
              {
#line 1072 "term.m"
                /* direct tailcall eliminated */
#line 1072 "term.m"
                {
#line 1072 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Replacement_9;

#line 1072 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1072 "term.m"
                }
#line 1072 "term.m"
                continue;
#line 1072 "term.m"
              }
#line 1073 "term.m"
            else
#line 1074 "term.m"
              *mercury__term__HeadVar__3_3 = mercury__term__HeadVar__1_1;
#line 1069 "term.m"
          }
#line 1069 "term.m"
      }
#line 1069 "term.m"
      break;
#line 1069 "term.m"
    }
#line 254 "term.m"
}

#line 253 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
#line 253 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 253 "term.m"
  MR_Word mercury__term__T1_4,
#line 253 "term.m"
  MR_Word mercury__term__S_5)
#line 253 "term.m"
{
#line 1279 "term.m"
  {
#line 1279 "term.m"
    MR_bool mercury__term__succeeded;
#line 1279 "term.m"
    MR_Word mercury__term__T2_6;

#line 1279 "term.m"
    {
#line 1279 "term.m"
      mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__S_5, &mercury__term__T2_6);
    }
#line 1279 "term.m"
    return mercury__term__T2_6;
#line 1279 "term.m"
  }
#line 253 "term.m"
}

#line 245 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
#line 245 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_12,
#line 245 "term.m"
  MR_Word mercury__term__Ss_5,
#line 245 "term.m"
  MR_Word mercury__term__Rs_6,
#line 245 "term.m"
  MR_Word mercury__term__TermList0_7,
#line 245 "term.m"
  MR_Word * mercury__term__TermList_8)
#line 245 "term.m"
{
#line 1051 "term.m"
  {
#line 1051 "term.m"
    MR_bool mercury__term__succeeded;
#line 1051 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1055 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1053 "term.m"
    {
#line 1053 "term.m"
      mercury__term__succeeded = mercury__term__substitute_corresponding_2_4_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Ss_5, mercury__term__Rs_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1055 "term.m"
    if (mercury__term__succeeded)
#line 1054 "term.m"
      {
#line 1054 "term.m"
        mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__TermList0_7, mercury__term__Subst_10, mercury__term__TermList_8);
#line 1054 "term.m"
        return;
      }
#line 1055 "term.m"
    else
#line 1056 "term.m"
      {
#line 1056 "term.m"
        {
#line 1056 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.substitute_corresponding_list: different length lists");
#line 1056 "term.m"
          return;
        }
#line 1056 "term.m"
      }
#line 1051 "term.m"
  }
#line 245 "term.m"
}

#line 243 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
#line 243 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 243 "term.m"
  MR_Word mercury__term__Vs_5,
#line 243 "term.m"
  MR_Word mercury__term__Ts1_6,
#line 243 "term.m"
  MR_Word mercury__term__Ts2_7)
#line 243 "term.m"
{
#line 1276 "term.m"
  {
#line 1276 "term.m"
    MR_bool mercury__term__succeeded;
#line 1276 "term.m"
    MR_Word mercury__term__Ts3_8;

#line 1276 "term.m"
    {
#line 1276 "term.m"
      mercury__term__substitute_corresponding_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vs_5, mercury__term__Ts1_6, mercury__term__Ts2_7, &mercury__term__Ts3_8);
    }
#line 1276 "term.m"
    return mercury__term__Ts3_8;
#line 1276 "term.m"
  }
#line 243 "term.m"
}

#line 238 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
#line 238 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_12,
#line 238 "term.m"
  MR_Word mercury__term__Ss_5,
#line 238 "term.m"
  MR_Word mercury__term__Rs_6,
#line 238 "term.m"
  MR_Word mercury__term__Term0_7,
#line 238 "term.m"
  MR_Word * mercury__term__Term_8)
#line 238 "term.m"
{
#line 1043 "term.m"
  {
#line 1043 "term.m"
    MR_bool mercury__term__succeeded;
#line 1043 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1047 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1045 "term.m"
    {
#line 1045 "term.m"
      mercury__term__succeeded = mercury__term__substitute_corresponding_2_4_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Ss_5, mercury__term__Rs_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1047 "term.m"
    if (mercury__term__succeeded)
#line 1046 "term.m"
      {
#line 1046 "term.m"
        mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Term0_7, mercury__term__Subst_10, mercury__term__Term_8);
#line 1046 "term.m"
        return;
      }
#line 1047 "term.m"
    else
#line 1048 "term.m"
      {
#line 1048 "term.m"
        {
#line 1048 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.substitute_corresponding: different length lists");
#line 1048 "term.m"
          return;
        }
#line 1048 "term.m"
      }
#line 1043 "term.m"
  }
#line 238 "term.m"
}

#line 236 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
#line 236 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 236 "term.m"
  MR_Word mercury__term__Vs_5,
#line 236 "term.m"
  MR_Word mercury__term__T1s_6,
#line 236 "term.m"
  MR_Word mercury__term__T_7)
#line 236 "term.m"
{
#line 1273 "term.m"
  {
#line 1273 "term.m"
    MR_bool mercury__term__succeeded;
#line 1273 "term.m"
    MR_Word mercury__term__T2_8;

#line 1273 "term.m"
    {
#line 1273 "term.m"
      mercury__term__substitute_corresponding_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vs_5, mercury__term__T1s_6, mercury__term__T_7, &mercury__term__T2_8);
    }
#line 1273 "term.m"
    return mercury__term__T2_8;
#line 1273 "term.m"
  }
#line 236 "term.m"
}

#line 226 "term.m"
void MR_CALL 
mercury__term__substitute_list_4_p_0(
#line 226 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 226 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 226 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 226 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 226 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 226 "term.m"
{
#line 1038 "term.m"
  {
#line 1038 "term.m"
    MR_bool mercury__term__succeeded;

#line 1038 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1038 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1038 "term.m"
    else
#line 1039 "term.m"
      {
#line 1039 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1039 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1039 "term.m"
        MR_Word mercury__term__Term_11;
#line 1039 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1040 "term.m"
        {
#line 1040 "term.m"
          mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Term_11);
        }
#line 1041 "term.m"
        {
#line 1041 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Terms_12);
        }
#line 1039 "term.m"
        {
#line 1039 "term.m"
          MR_Word base;
#line 1039 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1039 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1039 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1039 "term.m"
        }
#line 1039 "term.m"
      }
#line 1038 "term.m"
  }
#line 226 "term.m"
}

#line 225 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
#line 225 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 225 "term.m"
  MR_Word mercury__term__Ts1_5,
#line 225 "term.m"
  MR_Word mercury__term__V_6,
#line 225 "term.m"
  MR_Word mercury__term__T_7)
#line 225 "term.m"
{
#line 1270 "term.m"
  {
#line 1270 "term.m"
    MR_bool mercury__term__succeeded;
#line 1270 "term.m"
    MR_Word mercury__term__Ts2_8;

#line 1270 "term.m"
    {
#line 1270 "term.m"
      mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Ts1_5, mercury__term__V_6, mercury__term__T_7, &mercury__term__Ts2_8);
    }
#line 1270 "term.m"
    return mercury__term__Ts2_8;
#line 1270 "term.m"
  }
#line 225 "term.m"
}

#line 220 "term.m"
void MR_CALL 
mercury__term__substitute_4_p_0(
#line 220 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 220 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 220 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 220 "term.m"
  MR_Word mercury__term__Replacement_3,
#line 220 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 220 "term.m"
{
#line 1028 "term.m"
  {
#line 1028 "term.m"
    MR_bool mercury__term__succeeded;

#line 1028 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1035 "term.m"
      {
#line 1035 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1035 "term.m"
        MR_Word mercury__term__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1035 "term.m"
        MR_Word mercury__term__Args_16;

#line 1036 "term.m"
        {
#line 1036 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__Args0_12, mercury__term__HeadVar__2_2, mercury__term__Replacement_3, &mercury__term__Args_16);
        }
#line 1035 "term.m"
        {
#line 1035 "term.m"
          MR_Word base;
#line 1035 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1035 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1035 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_16));
#line 1035 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1035 "term.m"
        }
#line 1035 "term.m"
      }
#line 1028 "term.m"
    else
#line 1028 "term.m"
      {
#line 1028 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "term.m"
        MR_Integer mercury__term__CastX_20 = (MR_Integer) mercury__term__Var_6;
#line 477 "term.m"
        MR_Integer mercury__term__CastY_21 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 477 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_20 == mercury__term__CastY_21);
#line 477 "term.m"
        if (mercury__term__succeeded)
#line 477 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
        else
#line 477 "term.m"
          {
#line 477 "term.m"
            MR_Integer mercury__term__V_18_18 = (MR_Integer) mercury__term__Var_6;
#line 477 "term.m"
            MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 12826 "term.c"
            mercury__term__succeeded = (mercury__term__V_18_18 == mercury__term__V_19_19);
#line 477 "term.m"
          }
#line 1031 "term.m"
        if (mercury__term__succeeded)
#line 1030 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__Replacement_3;
#line 1031 "term.m"
        else
#line 1032 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__HeadVar__1_1;
#line 1028 "term.m"
      }
#line 1028 "term.m"
  }
#line 220 "term.m"
}

#line 219 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
#line 219 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 219 "term.m"
  MR_Word mercury__term__T1_5,
#line 219 "term.m"
  MR_Word mercury__term__V_6,
#line 219 "term.m"
  MR_Word mercury__term__T2_7)
#line 219 "term.m"
{
#line 1267 "term.m"
  {
#line 1267 "term.m"
    MR_bool mercury__term__succeeded;
#line 1267 "term.m"
    MR_Word mercury__term__T3_8;

#line 1267 "term.m"
    {
#line 1267 "term.m"
      mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__T1_5, mercury__term__V_6, mercury__term__T2_7, &mercury__term__T3_8);
    }
#line 1267 "term.m"
    return mercury__term__T3_8;
#line 1267 "term.m"
  }
#line 219 "term.m"
}

#line 211 "term.m"
MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
#line 211 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 211 "term.m"
  MR_Word mercury__term__Terms1_4,
#line 211 "term.m"
  MR_Word mercury__term__Terms2_5,
#line 211 "term.m"
  MR_Word * mercury__term__Subst_6)
#line 211 "term.m"
{
#line 1000 "term.m"
  {
#line 1000 "term.m"
    MR_bool mercury__term__succeeded;
#line 1000 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 1000 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 1000 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 809 "term.m"
    {
#line 809 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 48 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "term.m"
    {
#line 1005 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 1000 "term.m"
    return mercury__term__succeeded;
#line 1000 "term.m"
  }
#line 211 "term.m"
}

#line 204 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
#line 204 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_20,
#line 204 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 204 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 204 "term.m"
  MR_Word mercury__term__BoundVars_3,
#line 204 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_4,
#line 204 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_5)
#line 204 "term.m"
{
#line 979 "term.m"
  while (MR_TRUE)
#line 979 "term.m"
    {
#line 979 "term.m"
      /* tailcall optimized into a loop */
#line 979 "term.m"
      {
#line 979 "term.m"
        MR_bool mercury__term__succeeded;

#line 979 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 979 "term.m"
          {
#line 979 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 979 "term.m"
            if (mercury__term__succeeded)
#line 979 "term.m"
              {
#line 979 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 979 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 979 "term.m"
              }
#line 979 "term.m"
          }
#line 979 "term.m"
        else
#line 980 "term.m"
          {
#line 980 "term.m"
            MR_Word mercury__term__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 980 "term.m"
            MR_Word mercury__term__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 980 "term.m"
            MR_Word mercury__term__Y_12;
#line 980 "term.m"
            MR_Word mercury__term__Ys_13;
#line 980 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Bindings_18_18;

#line 980 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 980 "term.m"
            if (mercury__term__succeeded)
#line 980 "term.m"
              {
#line 980 "term.m"
                mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 980 "term.m"
                mercury__term__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 981 "term.m"
                {
#line 981 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__X_10, mercury__term__Y_12, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__STATE_VARIABLE_Bindings_18_18);
                }
#line 980 "term.m"
                if (mercury__term__succeeded)
#line 982 "term.m"
                  {
#line 982 "term.m"
                    /* direct tailcall eliminated */
#line 982 "term.m"
                    {
#line 982 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Xs_11;
#line 982 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Ys_13;
#line 982 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Bindings_18_18;

#line 982 "term.m"
                      mercury__term__STATE_VARIABLE_Bindings_0_4 = mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 982 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 982 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 982 "term.m"
                    }
#line 982 "term.m"
                    continue;
#line 982 "term.m"
                  }
#line 980 "term.m"
              }
#line 980 "term.m"
          }
#line 979 "term.m"
        return mercury__term__succeeded;
#line 979 "term.m"
      }
#line 979 "term.m"
      break;
#line 979 "term.m"
    }
#line 204 "term.m"
}

#line 198 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
#line 198 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_69,
#line 198 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 198 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 198 "term.m"
  MR_Word mercury__term__BoundVars_3,
#line 198 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_4,
#line 198 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_5)
#line 198 "term.m"
{
#line 906 "term.m"
  while (MR_TRUE)
#line 906 "term.m"
    {
#line 906 "term.m"
      /* tailcall optimized into a loop */
#line 906 "term.m"
      {
#line 906 "term.m"
        MR_bool mercury__term__succeeded;

#line 906 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 906 "term.m"
          {
#line 906 "term.m"
            MR_Word mercury__term__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 906 "term.m"
            MR_Word mercury__term__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 956 "term.m"
            MR_Word mercury__term__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 906 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 967 "term.m"
              {
#line 967 "term.m"
                MR_Word mercury__term__TypeCtorInfo_118_118 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 967 "term.m"
                MR_Word mercury__term__TypeInfo_119_119;
#line 967 "term.m"
                MR_Word mercury__term__FY_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 967 "term.m"
                MR_Word mercury__term__AsY_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 967 "term.m"
                MR_Integer mercury__term__ArityX_64;
#line 967 "term.m"
                MR_Integer mercury__term__ArityY_65;
#line 966 "term.m"
                MR_Word mercury__term___CY_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));

#line 13096 "term.c"
                {
#line 13098 "term.c"
                  mercury__term__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13100 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_119_119, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_118_118));
#line 13102 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_119_119, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13104 "term.c"
                }
#line 968 "term.m"
                {
#line 968 "term.m"
                  mercury__list__length_2_p_0(mercury__term__TypeInfo_119_119, (MR_Word) mercury__term__V_123_123, &mercury__term__ArityX_64);
                }
#line 969 "term.m"
                {
#line 969 "term.m"
                  mercury__list__length_2_p_0(mercury__term__TypeInfo_119_119, (MR_Word) mercury__term__AsY_60, &mercury__term__ArityY_65);
                }
#line 971 "term.m"
                {
#line 971 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_124_124, mercury__term__FY_59);
                }
#line 967 "term.m"
                if (mercury__term__succeeded)
#line 967 "term.m"
                  {
#line 972 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_64 == mercury__term__ArityY_65);
#line 967 "term.m"
                    if (mercury__term__succeeded)
#line 974 "term.m"
                      {
#line 974 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_123_123, mercury__term__AsY_60, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                      }
#line 967 "term.m"
                  }
#line 967 "term.m"
              }
#line 906 "term.m"
            else
#line 956 "term.m"
              {
#line 956 "term.m"
                MR_Word mercury__term__X_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 956 "term.m"
                MR_Word mercury__term__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 960 "term.m"
                MR_Word mercury__term__BindingOfX_49;
#line 957 "term.m"
                MR_Word mercury__term__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 957 "term.m"
                MR_Word mercury__term__TypeInfo_109_109;
#line 957 "term.m"
                MR_Word mercury__term__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 957 "term.m"
                MR_Word mercury__term__TypeInfo_111_111;
#line 957 "term.m"
                MR_Box mercury__term__conv0_BindingOfX_49;

#line 13159 "term.c"
                {
#line 13161 "term.c"
                  mercury__term__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13163 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_109_109, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_108_108));
#line 13165 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_109_109, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13167 "term.c"
                }
#line 13169 "term.c"
                {
#line 13171 "term.c"
                  mercury__term__TypeInfo_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13173 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_111_111, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_110_110));
#line 13175 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_111_111, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13177 "term.c"
                }
#line 957 "term.m"
                {
#line 957 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_109_109, mercury__term__TypeInfo_111_111, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__X_45, &mercury__term__conv0_BindingOfX_49);
                }
#line 957 "term.m"
                if (mercury__term__succeeded)
#line 957 "term.m"
                  {
#line 957 "term.m"
                    mercury__term__BindingOfX_49 = ((MR_Word) mercury__term__conv0_BindingOfX_49);
#line 957 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 957 "term.m"
                  }
#line 960 "term.m"
                if (mercury__term__succeeded)
#line 958 "term.m"
                  {
#line 958 "term.m"
                    /* direct tailcall eliminated */
#line 958 "term.m"
                    {
#line 958 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfX_49;

#line 958 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 958 "term.m"
                    }
#line 958 "term.m"
                    continue;
#line 958 "term.m"
                  }
#line 960 "term.m"
                else
#line 961 "term.m"
                  {
#line 961 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_114_114;
#line 961 "term.m"
                    MR_Word mercury__term__TypeInfo_115_115;
#line 961 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_116_116;
#line 961 "term.m"
                    MR_Word mercury__term__TypeInfo_117_117;
#line 963 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_5;

#line 961 "term.m"
                    {
#line 961 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_123_123, mercury__term__X_45, mercury__term__STATE_VARIABLE_Bindings_0_4);
                    }
#line 961 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 961 "term.m"
                    if (mercury__term__succeeded)
#line 961 "term.m"
                      {
#line 962 "term.m"
                        {
#line 962 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__X_45, mercury__term__BoundVars_3);
                        }
#line 962 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 961 "term.m"
                        if (mercury__term__succeeded)
#line 961 "term.m"
                          {
#line 13250 "term.c"
                            mercury__term__TypeCtorInfo_114_114 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 13252 "term.c"
                            mercury__term__TypeCtorInfo_116_116 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 13254 "term.c"
                            {
#line 13256 "term.c"
                              mercury__term__TypeInfo_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13258 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_115_115, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_114_114));
#line 13260 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_115_115, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13262 "term.c"
                            }
#line 13264 "term.c"
                            {
#line 13266 "term.c"
                              mercury__term__TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13268 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_117_117, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_116_116));
#line 13270 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_117_117, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13272 "term.c"
                            }
#line 963 "term.m"
                            {
#line 963 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_115_115, mercury__term__TypeInfo_117_117, mercury__term__X_45, ((MR_Box) (mercury__term__HeadVar__1_1)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv1_STATE_VARIABLE_Bindings_5);
                            }
#line 963 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_5;
#line 963 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 961 "term.m"
                          }
#line 961 "term.m"
                      }
#line 961 "term.m"
                  }
#line 956 "term.m"
              }
#line 906 "term.m"
          }
#line 906 "term.m"
        else
#line 906 "term.m"
          {
#line 906 "term.m"
            MR_Word mercury__term__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 905 "term.m"
            MR_Word mercury__term__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 906 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 946 "term.m"
              {
#line 946 "term.m"
                MR_Word mercury__term__As_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 946 "term.m"
                MR_Word mercury__term__F_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 946 "term.m"
                MR_Word mercury__term__C_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 950 "term.m"
                MR_Word mercury__term__BindingOfX_35;
#line 947 "term.m"
                MR_Word mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 947 "term.m"
                MR_Word mercury__term__TypeInfo_99_99;
#line 947 "term.m"
                MR_Word mercury__term__TypeCtorInfo_100_100 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 947 "term.m"
                MR_Word mercury__term__TypeInfo_101_101;
#line 947 "term.m"
                MR_Box mercury__term__conv2_BindingOfX_35;

#line 13325 "term.c"
                {
#line 13327 "term.c"
                  mercury__term__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13329 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_98_98));
#line 13331 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13333 "term.c"
                }
#line 13335 "term.c"
                {
#line 13337 "term.c"
                  mercury__term__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13339 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_100_100));
#line 13341 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13343 "term.c"
                }
#line 947 "term.m"
                {
#line 947 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_99_99, mercury__term__TypeInfo_101_101, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__V_126_126, &mercury__term__conv2_BindingOfX_35);
                }
#line 947 "term.m"
                if (mercury__term__succeeded)
#line 947 "term.m"
                  {
#line 947 "term.m"
                    mercury__term__BindingOfX_35 = ((MR_Word) mercury__term__conv2_BindingOfX_35);
#line 947 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 947 "term.m"
                  }
#line 950 "term.m"
                if (mercury__term__succeeded)
#line 948 "term.m"
                  {
#line 948 "term.m"
                    /* direct tailcall eliminated */
#line 948 "term.m"
                    {
#line 948 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_35;

#line 948 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 948 "term.m"
                    }
#line 948 "term.m"
                    continue;
#line 948 "term.m"
                  }
#line 950 "term.m"
                else
#line 951 "term.m"
                  {
#line 951 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_104_104;
#line 951 "term.m"
                    MR_Word mercury__term__TypeInfo_105_105;
#line 951 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_106_106;
#line 951 "term.m"
                    MR_Word mercury__term__TypeInfo_107_107;
#line 953 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Bindings_5;

#line 951 "term.m"
                    {
#line 951 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__As_31, mercury__term__V_126_126, mercury__term__STATE_VARIABLE_Bindings_0_4);
                    }
#line 951 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 951 "term.m"
                    if (mercury__term__succeeded)
#line 951 "term.m"
                      {
#line 952 "term.m"
                        {
#line 952 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__BoundVars_3);
                        }
#line 952 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 951 "term.m"
                        if (mercury__term__succeeded)
#line 951 "term.m"
                          {
#line 13416 "term.c"
                            mercury__term__TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 13418 "term.c"
                            mercury__term__TypeCtorInfo_106_106 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 13420 "term.c"
                            {
#line 13422 "term.c"
                              mercury__term__TypeInfo_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13424 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_105_105, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_104_104));
#line 13426 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_105_105, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13428 "term.c"
                            }
#line 13430 "term.c"
                            {
#line 13432 "term.c"
                              mercury__term__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13434 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_107_107, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_106_106));
#line 13436 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_107_107, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13438 "term.c"
                            }
#line 953 "term.m"
                            {
#line 953 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_105_105, mercury__term__TypeInfo_107_107, mercury__term__V_126_126, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv3_STATE_VARIABLE_Bindings_5);
                            }
#line 953 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Bindings_5;
#line 953 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 951 "term.m"
                          }
#line 951 "term.m"
                      }
#line 951 "term.m"
                  }
#line 946 "term.m"
              }
#line 906 "term.m"
            else
#line 906 "term.m"
              {
#line 906 "term.m"
                MR_Word mercury__term__Y_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 905 "term.m"
                MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 907 "term.m"
                {
#line 907 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__BoundVars_3);
                }
#line 909 "term.m"
                if (mercury__term__succeeded)
#line 908 "term.m"
                  {
#line 908 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__Y_9, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                  }
#line 909 "term.m"
                else
#line 911 "term.m"
                  {
#line 909 "term.m"
                    {
#line 909 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__BoundVars_3);
                    }
#line 911 "term.m"
                    if (mercury__term__succeeded)
#line 910 "term.m"
                      {
#line 910 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__V_126_126, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                      }
#line 911 "term.m"
                    else
#line 926 "term.m"
                      {
#line 926 "term.m"
                        MR_Word mercury__term__TypeInfo_75_75;
#line 926 "term.m"
                        MR_Word mercury__term__TypeInfo_77_77;
#line 926 "term.m"
                        MR_Word mercury__term__BindingOfX_13;
#line 911 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 911 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_76_76 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 911 "term.m"
                        MR_Box mercury__term__conv4_BindingOfX_13;

#line 13511 "term.c"
                        {
#line 13513 "term.c"
                          mercury__term__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13515 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_74_74));
#line 13517 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13519 "term.c"
                        }
#line 13521 "term.c"
                        {
#line 13523 "term.c"
                          mercury__term__TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13525 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_77_77, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_76_76));
#line 13527 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_77_77, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13529 "term.c"
                        }
#line 911 "term.m"
                        {
#line 911 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__V_126_126, &mercury__term__conv4_BindingOfX_13);
                        }
#line 911 "term.m"
                        if (mercury__term__succeeded)
#line 911 "term.m"
                          {
#line 911 "term.m"
                            mercury__term__BindingOfX_13 = ((MR_Word) mercury__term__conv4_BindingOfX_13);
#line 911 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 911 "term.m"
                          }
#line 926 "term.m"
                        if (mercury__term__succeeded)
#line 916 "term.m"
                          {
#line 916 "term.m"
                            MR_Word mercury__term__BindingOfY_14;
#line 912 "term.m"
                            MR_Box mercury__term__conv5_BindingOfY_14;

#line 912 "term.m"
                            {
#line 912 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__Y_9, &mercury__term__conv5_BindingOfY_14);
                            }
#line 912 "term.m"
                            if (mercury__term__succeeded)
#line 912 "term.m"
                              {
#line 912 "term.m"
                                mercury__term__BindingOfY_14 = ((MR_Word) mercury__term__conv5_BindingOfY_14);
#line 912 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 912 "term.m"
                              }
#line 916 "term.m"
                            if (mercury__term__succeeded)
#line 915 "term.m"
                              {
#line 915 "term.m"
                                /* direct tailcall eliminated */
#line 915 "term.m"
                                {
#line 915 "term.m"
                                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_13;
#line 915 "term.m"
                                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfY_14;

#line 915 "term.m"
                                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 915 "term.m"
                                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 915 "term.m"
                                }
#line 915 "term.m"
                                continue;
#line 915 "term.m"
                              }
#line 916 "term.m"
                            else
#line 917 "term.m"
                              {
#line 917 "term.m"
                                MR_Word mercury__term__SubstBindingOfX_15;
#line 919 "term.m"
                                MR_Word mercury__term__V_120_120;
#line 919 "term.m"
                                MR_Word mercury__term__V_16_16;

#line 917 "term.m"
                                {
#line 917 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__BindingOfX_13, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__SubstBindingOfX_15);
                                }
#line 919 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfX_15)) == (MR_mktag((MR_Integer) 1)));
#line 919 "term.m"
                                if (mercury__term__succeeded)
#line 919 "term.m"
                                  {
#line 919 "term.m"
                                    mercury__term__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_15, (MR_Integer) 0)));
#line 919 "term.m"
                                    mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_15, (MR_Integer) 1)));
#line 919 "term.m"
                                    {
#line 919 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__V_120_120);
                                    }
#line 919 "term.m"
                                  }
#line 921 "term.m"
                                if (mercury__term__succeeded)
#line 919 "term.m"
                                  {
#line 919 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 919 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 919 "term.m"
                                  }
#line 921 "term.m"
                                else
#line 922 "term.m"
                                  {
#line 923 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Bindings_5;

#line 922 "term.m"
                                    {
#line 922 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__SubstBindingOfX_15, mercury__term__Y_9, mercury__term__STATE_VARIABLE_Bindings_0_4);
                                    }
#line 922 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 922 "term.m"
                                    if (mercury__term__succeeded)
#line 922 "term.m"
                                      {
#line 923 "term.m"
                                        {
#line 923 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, mercury__term__Y_9, ((MR_Box) (mercury__term__SubstBindingOfX_15)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv6_STATE_VARIABLE_Bindings_5);
                                        }
#line 923 "term.m"
                                        *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Bindings_5;
#line 923 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 922 "term.m"
                                      }
#line 922 "term.m"
                                  }
#line 917 "term.m"
                              }
#line 916 "term.m"
                          }
#line 926 "term.m"
                        else
#line 936 "term.m"
                          {
#line 936 "term.m"
                            MR_Word mercury__term__TypeInfo_87_87;
#line 936 "term.m"
                            MR_Word mercury__term__TypeInfo_89_89;
#line 936 "term.m"
                            MR_Word mercury__term__BindingOfY_27;
#line 927 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 927 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_88_88 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 927 "term.m"
                            MR_Box mercury__term__conv7_BindingOfY_27;

#line 13688 "term.c"
                            {
#line 13690 "term.c"
                              mercury__term__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13692 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_86_86));
#line 13694 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13696 "term.c"
                            }
#line 13698 "term.c"
                            {
#line 13700 "term.c"
                              mercury__term__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13702 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_88_88));
#line 13704 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13706 "term.c"
                            }
#line 927 "term.m"
                            {
#line 927 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_87_87, mercury__term__TypeInfo_89_89, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__Y_9, &mercury__term__conv7_BindingOfY_27);
                            }
#line 927 "term.m"
                            if (mercury__term__succeeded)
#line 927 "term.m"
                              {
#line 927 "term.m"
                                mercury__term__BindingOfY_27 = ((MR_Word) mercury__term__conv7_BindingOfY_27);
#line 927 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 927 "term.m"
                              }
#line 936 "term.m"
                            if (mercury__term__succeeded)
#line 928 "term.m"
                              {
#line 928 "term.m"
                                MR_Word mercury__term__SubstBindingOfY_17;
#line 930 "term.m"
                                MR_Word mercury__term__V_121_121;
#line 930 "term.m"
                                MR_Word mercury__term__V_18_18;

#line 928 "term.m"
                                {
#line 928 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__BindingOfY_27, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__SubstBindingOfY_17);
                                }
#line 930 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfY_17)) == (MR_mktag((MR_Integer) 1)));
#line 930 "term.m"
                                if (mercury__term__succeeded)
#line 930 "term.m"
                                  {
#line 930 "term.m"
                                    mercury__term__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_17, (MR_Integer) 0)));
#line 930 "term.m"
                                    mercury__term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_17, (MR_Integer) 1)));
#line 930 "term.m"
                                    {
#line 930 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__V_121_121);
                                    }
#line 930 "term.m"
                                  }
#line 932 "term.m"
                                if (mercury__term__succeeded)
#line 930 "term.m"
                                  {
#line 930 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 930 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 930 "term.m"
                                  }
#line 932 "term.m"
                                else
#line 933 "term.m"
                                  {
#line 934 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Bindings_5;

#line 933 "term.m"
                                    {
#line 933 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__SubstBindingOfY_17, mercury__term__V_126_126, mercury__term__STATE_VARIABLE_Bindings_0_4);
                                    }
#line 933 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 933 "term.m"
                                    if (mercury__term__succeeded)
#line 933 "term.m"
                                      {
#line 934 "term.m"
                                        {
#line 934 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_87_87, mercury__term__TypeInfo_89_89, mercury__term__V_126_126, ((MR_Box) (mercury__term__SubstBindingOfY_17)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv8_STATE_VARIABLE_Bindings_5);
                                        }
#line 934 "term.m"
                                        *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Bindings_5;
#line 934 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 933 "term.m"
                                      }
#line 933 "term.m"
                                  }
#line 928 "term.m"
                              }
#line 936 "term.m"
                            else
#line 940 "term.m"
                              {
#line 938 "term.m"
                                {
#line 938 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__Y_9);
                                }
#line 940 "term.m"
                                if (mercury__term__succeeded)
#line 938 "term.m"
                                  *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 940 "term.m"
                                else
#line 941 "term.m"
                                  {
#line 941 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 941 "term.m"
                                    MR_Word mercury__term__TypeInfo_95_95;
#line 941 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_96_96;
#line 941 "term.m"
                                    MR_Word mercury__term__TypeInfo_97_97;
#line 941 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Bindings_5;

#line 13827 "term.c"
                                    {
#line 13829 "term.c"
                                      mercury__term__TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13831 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_94_94));
#line 13833 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13835 "term.c"
                                    }
#line 13837 "term.c"
                                    mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 13839 "term.c"
                                    {
#line 13841 "term.c"
                                      mercury__term__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13843 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_96_96));
#line 13845 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13847 "term.c"
                                    }
#line 941 "term.m"
                                    {
#line 941 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_95_95, mercury__term__TypeInfo_97_97, mercury__term__V_126_126, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv9_STATE_VARIABLE_Bindings_5);
                                    }
#line 941 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Bindings_5;
#line 941 "term.m"
                                  }
#line 940 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 940 "term.m"
                              }
#line 936 "term.m"
                          }
#line 926 "term.m"
                      }
#line 911 "term.m"
                  }
#line 906 "term.m"
              }
#line 906 "term.m"
          }
#line 906 "term.m"
        return mercury__term__succeeded;
#line 906 "term.m"
      }
#line 906 "term.m"
      break;
#line 906 "term.m"
    }
#line 198 "term.m"
}

#line 189 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
#line 189 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 189 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 189 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 189 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_3,
#line 189 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_4)
#line 189 "term.m"
{
#line 900 "term.m"
  while (MR_TRUE)
#line 900 "term.m"
    {
#line 900 "term.m"
      /* tailcall optimized into a loop */
#line 900 "term.m"
      {
#line 900 "term.m"
        MR_bool mercury__term__succeeded;

#line 900 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 900 "term.m"
          {
#line 900 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 900 "term.m"
            if (mercury__term__succeeded)
#line 900 "term.m"
              {
#line 900 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 900 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 900 "term.m"
              }
#line 900 "term.m"
          }
#line 900 "term.m"
        else
#line 901 "term.m"
          {
#line 901 "term.m"
            MR_Word mercury__term__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "term.m"
            MR_Word mercury__term__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 901 "term.m"
            MR_Word mercury__term__Y_10;
#line 901 "term.m"
            MR_Word mercury__term__Ys_11;
#line 901 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Bindings_15_15;

#line 901 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 901 "term.m"
            if (mercury__term__succeeded)
#line 901 "term.m"
              {
#line 901 "term.m"
                mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 901 "term.m"
                mercury__term__Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 902 "term.m"
                {
#line 902 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__X_8, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__STATE_VARIABLE_Bindings_15_15);
                }
#line 901 "term.m"
                if (mercury__term__succeeded)
#line 903 "term.m"
                  {
#line 903 "term.m"
                    /* direct tailcall eliminated */
#line 903 "term.m"
                    {
#line 903 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Xs_9;
#line 903 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Ys_11;
#line 903 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Bindings_15_15;

#line 903 "term.m"
                      mercury__term__STATE_VARIABLE_Bindings_0_3 = mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_3;
#line 903 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 903 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 903 "term.m"
                    }
#line 903 "term.m"
                    continue;
#line 903 "term.m"
                  }
#line 901 "term.m"
              }
#line 901 "term.m"
          }
#line 900 "term.m"
        return mercury__term__succeeded;
#line 900 "term.m"
      }
#line 900 "term.m"
      break;
#line 900 "term.m"
    }
#line 189 "term.m"
}

#line 183 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
#line 183 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_59,
#line 183 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 183 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 183 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_3,
#line 183 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_4)
#line 183 "term.m"
{
#line 844 "term.m"
  while (MR_TRUE)
#line 844 "term.m"
    {
#line 844 "term.m"
      /* tailcall optimized into a loop */
#line 844 "term.m"
      {
#line 844 "term.m"
        MR_bool mercury__term__succeeded;

#line 844 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 844 "term.m"
          {
#line 844 "term.m"
            MR_Word mercury__term__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 844 "term.m"
            MR_Word mercury__term__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "term.m"
            MR_Word mercury__term__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 844 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 897 "term.m"
              {
#line 897 "term.m"
                MR_Word mercury__term__AsY_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 897 "term.m"
                MR_Word mercury__term__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 897 "term.m"
                MR_Word mercury__term__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));

#line 897 "term.m"
                {
#line 897 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_105_105, mercury__term__V_102_102);
                }
#line 897 "term.m"
                if (mercury__term__succeeded)
#line 898 "term.m"
                  {
#line 898 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_104_104, mercury__term__AsY_53, mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__STATE_VARIABLE_Bindings_4);
                  }
#line 897 "term.m"
              }
#line 844 "term.m"
            else
#line 889 "term.m"
              {
#line 889 "term.m"
                MR_Word mercury__term__X_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 889 "term.m"
                MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 892 "term.m"
                MR_Word mercury__term__BindingOfX_43;
#line 890 "term.m"
                MR_Word mercury__term__TypeCtorInfo_92_92 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 890 "term.m"
                MR_Word mercury__term__TypeInfo_93_93;
#line 890 "term.m"
                MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 890 "term.m"
                MR_Word mercury__term__TypeInfo_95_95;
#line 890 "term.m"
                MR_Box mercury__term__conv0_BindingOfX_43;

#line 14082 "term.c"
                {
#line 14084 "term.c"
                  mercury__term__TypeInfo_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14086 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_93_93, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_92_92));
#line 14088 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_93_93, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14090 "term.c"
                }
#line 14092 "term.c"
                {
#line 14094 "term.c"
                  mercury__term__TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14096 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_94_94));
#line 14098 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14100 "term.c"
                }
#line 890 "term.m"
                {
#line 890 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_93_93, mercury__term__TypeInfo_95_95, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__X_40, &mercury__term__conv0_BindingOfX_43);
                }
#line 890 "term.m"
                if (mercury__term__succeeded)
#line 890 "term.m"
                  {
#line 890 "term.m"
                    mercury__term__BindingOfX_43 = ((MR_Word) mercury__term__conv0_BindingOfX_43);
#line 890 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 890 "term.m"
                  }
#line 892 "term.m"
                if (mercury__term__succeeded)
#line 891 "term.m"
                  {
#line 891 "term.m"
                    /* direct tailcall eliminated */
#line 891 "term.m"
                    {
#line 891 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfX_43;

#line 891 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 891 "term.m"
                    }
#line 891 "term.m"
                    continue;
#line 891 "term.m"
                  }
#line 892 "term.m"
                else
#line 893 "term.m"
                  {
#line 893 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_96_96;
#line 893 "term.m"
                    MR_Word mercury__term__TypeInfo_97_97;
#line 893 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_98_98;
#line 893 "term.m"
                    MR_Word mercury__term__TypeInfo_99_99;
#line 894 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_4;

#line 893 "term.m"
                    {
#line 893 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_104_104, mercury__term__X_40, mercury__term__STATE_VARIABLE_Bindings_0_3);
                    }
#line 893 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 893 "term.m"
                    if (mercury__term__succeeded)
#line 893 "term.m"
                      {
#line 14162 "term.c"
                        mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14164 "term.c"
                        mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14166 "term.c"
                        {
#line 14168 "term.c"
                          mercury__term__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14170 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_96_96));
#line 14172 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14174 "term.c"
                        }
#line 14176 "term.c"
                        {
#line 14178 "term.c"
                          mercury__term__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14180 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_98_98));
#line 14182 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14184 "term.c"
                        }
#line 894 "term.m"
                        {
#line 894 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_97_97, mercury__term__TypeInfo_99_99, mercury__term__X_40, ((MR_Box) (mercury__term__HeadVar__1_1)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv1_STATE_VARIABLE_Bindings_4);
                        }
#line 894 "term.m"
                        *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_4;
#line 894 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 893 "term.m"
                      }
#line 893 "term.m"
                  }
#line 889 "term.m"
              }
#line 844 "term.m"
          }
#line 844 "term.m"
        else
#line 844 "term.m"
          {
#line 844 "term.m"
            MR_Word mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 844 "term.m"
            MR_Word mercury__term__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 844 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 881 "term.m"
              {
#line 881 "term.m"
                MR_Word mercury__term__As_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 881 "term.m"
                MR_Word mercury__term__F_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 881 "term.m"
                MR_Word mercury__term__C_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 884 "term.m"
                MR_Word mercury__term__BindingOfX_30;
#line 882 "term.m"
                MR_Word mercury__term__TypeCtorInfo_84_84 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 882 "term.m"
                MR_Word mercury__term__TypeInfo_85_85;
#line 882 "term.m"
                MR_Word mercury__term__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 882 "term.m"
                MR_Word mercury__term__TypeInfo_87_87;
#line 882 "term.m"
                MR_Box mercury__term__conv2_BindingOfX_30;

#line 14235 "term.c"
                {
#line 14237 "term.c"
                  mercury__term__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14239 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_85_85, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_84_84));
#line 14241 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_85_85, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14243 "term.c"
                }
#line 14245 "term.c"
                {
#line 14247 "term.c"
                  mercury__term__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14249 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_86_86));
#line 14251 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14253 "term.c"
                }
#line 882 "term.m"
                {
#line 882 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_85_85, mercury__term__TypeInfo_87_87, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__V_107_107, &mercury__term__conv2_BindingOfX_30);
                }
#line 882 "term.m"
                if (mercury__term__succeeded)
#line 882 "term.m"
                  {
#line 882 "term.m"
                    mercury__term__BindingOfX_30 = ((MR_Word) mercury__term__conv2_BindingOfX_30);
#line 882 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 882 "term.m"
                  }
#line 884 "term.m"
                if (mercury__term__succeeded)
#line 883 "term.m"
                  {
#line 883 "term.m"
                    /* direct tailcall eliminated */
#line 883 "term.m"
                    {
#line 883 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_30;

#line 883 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 883 "term.m"
                    }
#line 883 "term.m"
                    continue;
#line 883 "term.m"
                  }
#line 884 "term.m"
                else
#line 885 "term.m"
                  {
#line 885 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_88_88;
#line 885 "term.m"
                    MR_Word mercury__term__TypeInfo_89_89;
#line 885 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_90_90;
#line 885 "term.m"
                    MR_Word mercury__term__TypeInfo_91_91;
#line 886 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Bindings_4;

#line 885 "term.m"
                    {
#line 885 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__As_27, mercury__term__V_107_107, mercury__term__STATE_VARIABLE_Bindings_0_3);
                    }
#line 885 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 885 "term.m"
                    if (mercury__term__succeeded)
#line 885 "term.m"
                      {
#line 14315 "term.c"
                        mercury__term__TypeCtorInfo_88_88 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14317 "term.c"
                        mercury__term__TypeCtorInfo_90_90 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14319 "term.c"
                        {
#line 14321 "term.c"
                          mercury__term__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14323 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_88_88));
#line 14325 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14327 "term.c"
                        }
#line 14329 "term.c"
                        {
#line 14331 "term.c"
                          mercury__term__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14333 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_91_91, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_90_90));
#line 14335 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_91_91, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14337 "term.c"
                        }
#line 886 "term.m"
                        {
#line 886 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_89_89, mercury__term__TypeInfo_91_91, mercury__term__V_107_107, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv3_STATE_VARIABLE_Bindings_4);
                        }
#line 886 "term.m"
                        *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Bindings_4;
#line 886 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 885 "term.m"
                      }
#line 885 "term.m"
                  }
#line 881 "term.m"
              }
#line 844 "term.m"
            else
#line 844 "term.m"
              {
#line 844 "term.m"
                MR_Word mercury__term__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 844 "term.m"
                MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 860 "term.m"
                MR_Word mercury__term__TypeInfo_61_61;
#line 860 "term.m"
                MR_Word mercury__term__TypeInfo_63_63;
#line 860 "term.m"
                MR_Word mercury__term__BindingOfX_11;
#line 845 "term.m"
                MR_Word mercury__term__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 845 "term.m"
                MR_Word mercury__term__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 845 "term.m"
                MR_Box mercury__term__conv4_BindingOfX_11;

#line 14375 "term.c"
                {
#line 14377 "term.c"
                  mercury__term__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14379 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_61_61, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_60_60));
#line 14381 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_61_61, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14383 "term.c"
                }
#line 14385 "term.c"
                {
#line 14387 "term.c"
                  mercury__term__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14389 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_63_63, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_62_62));
#line 14391 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_63_63, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14393 "term.c"
                }
#line 845 "term.m"
                {
#line 845 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__V_107_107, &mercury__term__conv4_BindingOfX_11);
                }
#line 845 "term.m"
                if (mercury__term__succeeded)
#line 845 "term.m"
                  {
#line 845 "term.m"
                    mercury__term__BindingOfX_11 = ((MR_Word) mercury__term__conv4_BindingOfX_11);
#line 845 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 845 "term.m"
                  }
#line 860 "term.m"
                if (mercury__term__succeeded)
#line 850 "term.m"
                  {
#line 850 "term.m"
                    MR_Word mercury__term__BindingOfY_12;
#line 846 "term.m"
                    MR_Box mercury__term__conv5_BindingOfY_12;

#line 846 "term.m"
                    {
#line 846 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__Y_8, &mercury__term__conv5_BindingOfY_12);
                    }
#line 846 "term.m"
                    if (mercury__term__succeeded)
#line 846 "term.m"
                      {
#line 846 "term.m"
                        mercury__term__BindingOfY_12 = ((MR_Word) mercury__term__conv5_BindingOfY_12);
#line 846 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 846 "term.m"
                      }
#line 850 "term.m"
                    if (mercury__term__succeeded)
#line 849 "term.m"
                      {
#line 849 "term.m"
                        /* direct tailcall eliminated */
#line 849 "term.m"
                        {
#line 849 "term.m"
                          MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_11;
#line 849 "term.m"
                          MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfY_12;

#line 849 "term.m"
                          mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 849 "term.m"
                          mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 849 "term.m"
                        }
#line 849 "term.m"
                        continue;
#line 849 "term.m"
                      }
#line 850 "term.m"
                    else
#line 852 "term.m"
                      {
#line 852 "term.m"
                        MR_Word mercury__term__SubstBindingOfX_13;
#line 853 "term.m"
                        MR_Word mercury__term__V_100_100;
#line 853 "term.m"
                        MR_Word mercury__term__V_14_14;

#line 852 "term.m"
                        {
#line 852 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__BindingOfX_11, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__SubstBindingOfX_13);
                        }
#line 853 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfX_13)) == (MR_mktag((MR_Integer) 1)));
#line 853 "term.m"
                        if (mercury__term__succeeded)
#line 853 "term.m"
                          {
#line 853 "term.m"
                            mercury__term__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_13, (MR_Integer) 0)));
#line 853 "term.m"
                            mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_13, (MR_Integer) 1)));
#line 853 "term.m"
                            {
#line 853 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__Y_8, mercury__term__V_100_100);
                            }
#line 853 "term.m"
                          }
#line 855 "term.m"
                        if (mercury__term__succeeded)
#line 853 "term.m"
                          {
#line 853 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 853 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 853 "term.m"
                          }
#line 855 "term.m"
                        else
#line 856 "term.m"
                          {
#line 857 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Bindings_4;

#line 856 "term.m"
                            {
#line 856 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__SubstBindingOfX_13, mercury__term__Y_8, mercury__term__STATE_VARIABLE_Bindings_0_3);
                            }
#line 856 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 856 "term.m"
                            if (mercury__term__succeeded)
#line 856 "term.m"
                              {
#line 857 "term.m"
                                {
#line 857 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, mercury__term__Y_8, ((MR_Box) (mercury__term__SubstBindingOfX_13)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv6_STATE_VARIABLE_Bindings_4);
                                }
#line 857 "term.m"
                                *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Bindings_4;
#line 857 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 856 "term.m"
                              }
#line 856 "term.m"
                          }
#line 852 "term.m"
                      }
#line 850 "term.m"
                  }
#line 860 "term.m"
                else
#line 870 "term.m"
                  {
#line 870 "term.m"
                    MR_Word mercury__term__TypeInfo_73_73;
#line 870 "term.m"
                    MR_Word mercury__term__TypeInfo_75_75;
#line 870 "term.m"
                    MR_Word mercury__term__BindingOfY_23;
#line 861 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 861 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 861 "term.m"
                    MR_Box mercury__term__conv7_BindingOfY_23;

#line 14552 "term.c"
                    {
#line 14554 "term.c"
                      mercury__term__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14556 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_73_73, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_72_72));
#line 14558 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_73_73, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14560 "term.c"
                    }
#line 14562 "term.c"
                    {
#line 14564 "term.c"
                      mercury__term__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14566 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_74_74));
#line 14568 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14570 "term.c"
                    }
#line 861 "term.m"
                    {
#line 861 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_73_73, mercury__term__TypeInfo_75_75, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__Y_8, &mercury__term__conv7_BindingOfY_23);
                    }
#line 861 "term.m"
                    if (mercury__term__succeeded)
#line 861 "term.m"
                      {
#line 861 "term.m"
                        mercury__term__BindingOfY_23 = ((MR_Word) mercury__term__conv7_BindingOfY_23);
#line 861 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 861 "term.m"
                      }
#line 870 "term.m"
                    if (mercury__term__succeeded)
#line 863 "term.m"
                      {
#line 863 "term.m"
                        MR_Word mercury__term__SubstBindingOfY_15;
#line 864 "term.m"
                        MR_Word mercury__term__V_101_101;
#line 864 "term.m"
                        MR_Word mercury__term__V_16_16;

#line 863 "term.m"
                        {
#line 863 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__BindingOfY_23, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__SubstBindingOfY_15);
                        }
#line 864 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfY_15)) == (MR_mktag((MR_Integer) 1)));
#line 864 "term.m"
                        if (mercury__term__succeeded)
#line 864 "term.m"
                          {
#line 864 "term.m"
                            mercury__term__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_15, (MR_Integer) 0)));
#line 864 "term.m"
                            mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_15, (MR_Integer) 1)));
#line 864 "term.m"
                            {
#line 864 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_107_107, mercury__term__V_101_101);
                            }
#line 864 "term.m"
                          }
#line 866 "term.m"
                        if (mercury__term__succeeded)
#line 864 "term.m"
                          {
#line 864 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 864 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 864 "term.m"
                          }
#line 866 "term.m"
                        else
#line 867 "term.m"
                          {
#line 868 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Bindings_4;

#line 867 "term.m"
                            {
#line 867 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__SubstBindingOfY_15, mercury__term__V_107_107, mercury__term__STATE_VARIABLE_Bindings_0_3);
                            }
#line 867 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 867 "term.m"
                            if (mercury__term__succeeded)
#line 867 "term.m"
                              {
#line 868 "term.m"
                                {
#line 868 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_73_73, mercury__term__TypeInfo_75_75, mercury__term__V_107_107, ((MR_Box) (mercury__term__SubstBindingOfY_15)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv8_STATE_VARIABLE_Bindings_4);
                                }
#line 868 "term.m"
                                *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Bindings_4;
#line 868 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 867 "term.m"
                              }
#line 867 "term.m"
                          }
#line 863 "term.m"
                      }
#line 870 "term.m"
                    else
#line 875 "term.m"
                      {
#line 873 "term.m"
                        {
#line 873 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_107_107, mercury__term__Y_8);
                        }
#line 875 "term.m"
                        if (mercury__term__succeeded)
#line 873 "term.m"
                          *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 875 "term.m"
                        else
#line 876 "term.m"
                          {
#line 876 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_80_80 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 876 "term.m"
                            MR_Word mercury__term__TypeInfo_81_81;
#line 876 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_82_82;
#line 876 "term.m"
                            MR_Word mercury__term__TypeInfo_83_83;
#line 876 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Bindings_4;

#line 14691 "term.c"
                            {
#line 14693 "term.c"
                              mercury__term__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14695 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_81_81, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_80_80));
#line 14697 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_81_81, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14699 "term.c"
                            }
#line 14701 "term.c"
                            mercury__term__TypeCtorInfo_82_82 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14703 "term.c"
                            {
#line 14705 "term.c"
                              mercury__term__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14707 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_83_83, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_82_82));
#line 14709 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_83_83, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14711 "term.c"
                            }
#line 876 "term.m"
                            {
#line 876 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_81_81, mercury__term__TypeInfo_83_83, mercury__term__V_107_107, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv9_STATE_VARIABLE_Bindings_4);
                            }
#line 876 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Bindings_4;
#line 876 "term.m"
                          }
#line 875 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 875 "term.m"
                      }
#line 870 "term.m"
                  }
#line 844 "term.m"
              }
#line 844 "term.m"
          }
#line 844 "term.m"
        return mercury__term__succeeded;
#line 844 "term.m"
      }
#line 844 "term.m"
      break;
#line 844 "term.m"
    }
#line 183 "term.m"
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
#line 830 "term.m"
  while (MR_TRUE)
#line 830 "term.m"
    {
#line 830 "term.m"
      /* tailcall optimized into a loop */
#line 830 "term.m"
      {
#line 830 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 830 "term.m"
        MR_Word mercury__term__V_10_10;
#line 830 "term.m"
        MR_Word mercury__term__V_11_11;

#line 830 "term.m"
        if (mercury__term__succeeded)
#line 830 "term.m"
          {
#line 830 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 830 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 827 "term.m"
              {
#line 827 "term.m"
                MR_Word mercury__term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 827 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 827 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 828 "term.m"
                {
#line 828 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__Args_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 827 "term.m"
              }
#line 826 "term.m"
            else
#line 826 "term.m"
              {
#line 826 "term.m"
                MR_Word mercury__term__V_13_13;

#line 826 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 826 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 826 "term.m"
                {
#line 826 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 826 "term.m"
              }
#line 833 "term.m"
            {
#line 833 "term.m"
              /* direct tailcall eliminated */
#line 833 "term.m"
              {
#line 833 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 833 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 833 "term.m"
              }
#line 833 "term.m"
              continue;
#line 833 "term.m"
            }
#line 830 "term.m"
          }
#line 830 "term.m"
      }
#line 830 "term.m"
      break;
#line 830 "term.m"
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
#line 830 "term.m"
  while (MR_TRUE)
#line 830 "term.m"
    {
#line 830 "term.m"
      /* tailcall optimized into a loop */
#line 830 "term.m"
      {
#line 830 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 830 "term.m"
        MR_Word mercury__term__V_10_10;
#line 830 "term.m"
        MR_Word mercury__term__V_11_11;

#line 830 "term.m"
        if (mercury__term__succeeded)
#line 830 "term.m"
          {
#line 830 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 830 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 831 "term.m"
            {
#line 831 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 830 "term.m"
            if (!(mercury__term__succeeded))
#line 833 "term.m"
              {
#line 833 "term.m"
                /* direct tailcall eliminated */
#line 833 "term.m"
                {
#line 833 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 833 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 833 "term.m"
                }
#line 833 "term.m"
                continue;
#line 833 "term.m"
              }
#line 830 "term.m"
          }
#line 830 "term.m"
        return mercury__term__succeeded;
#line 830 "term.m"
      }
#line 830 "term.m"
      break;
#line 830 "term.m"
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
#line 826 "term.m"
  {
#line 826 "term.m"
    MR_bool mercury__term__succeeded;

#line 826 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 828 "term.m"
        {
#line 828 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__Args_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 828 "term.m"
          return;
        }
#line 827 "term.m"
      }
#line 826 "term.m"
    else
#line 826 "term.m"
      {
#line 826 "term.m"
        MR_Word mercury__term__V_4_4;

#line 826 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "term.m"
        {
#line 826 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 826 "term.m"
          return;
        }
#line 826 "term.m"
      }
#line 826 "term.m"
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
#line 826 "term.m"
  {
#line 826 "term.m"
    MR_bool mercury__term__succeeded;

#line 826 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 828 "term.m"
        {
#line 828 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Args_6, mercury__term__Var_2);
        }
#line 827 "term.m"
      }
#line 826 "term.m"
    else
#line 826 "term.m"
      {
#line 826 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 477 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 477 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 477 "term.m"
        if (mercury__term__succeeded)
#line 477 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 477 "term.m"
        else
#line 477 "term.m"
          {
#line 477 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 477 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 15043 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 477 "term.m"
          }
#line 826 "term.m"
      }
#line 826 "term.m"
    return mercury__term__succeeded;
#line 826 "term.m"
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
#line 808 "term.m"
  {
#line 808 "term.m"
    MR_bool mercury__term__succeeded;
#line 808 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 809 "term.m"
    {
#line 809 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 809 "term.m"
      return;
    }
#line 808 "term.m"
  }
#line 155 "term.m"
}

#line 154 "term.m"
MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
#line 154 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 154 "term.m"
  MR_Word mercury__term__Ts_3)
#line 154 "term.m"
{
#line 808 "term.m"
  {
#line 808 "term.m"
    MR_bool mercury__term__succeeded;
#line 808 "term.m"
    MR_Word mercury__term__Vs_4;
#line 808 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 809 "term.m"
    {
#line 809 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Ts_3, mercury__term__V_8_8, &mercury__term__Vs_4);
    }
#line 808 "term.m"
    return mercury__term__Vs_4;
#line 808 "term.m"
  }
#line 154 "term.m"
}

#line 147 "term.m"
void MR_CALL 
mercury__term__vars_2_3_p_0(
#line 147 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 147 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 147 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 147 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 147 "term.m"
{
#line 811 "term.m"
  {
#line 811 "term.m"
    MR_bool mercury__term__succeeded;

#line 811 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 813 "term.m"
      {
#line 813 "term.m"
        MR_Word mercury__term__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 814 "term.m"
        {
#line 814 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__Args_11, mercury__term__STATE_VARIABLE_Vars_0_2, mercury__term__STATE_VARIABLE_Vars_3);
#line 814 "term.m"
          return;
        }
#line 813 "term.m"
      }
#line 811 "term.m"
    else
#line 811 "term.m"
      {
#line 811 "term.m"
        MR_Word mercury__term__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 811 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 812 "term.m"
        {
#line 812 "term.m"
          MR_Word base;
#line 812 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_4));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_2));
#line 812 "term.m"
        }
#line 811 "term.m"
      }
#line 811 "term.m"
  }
#line 147 "term.m"
}

#line 146 "term.m"
MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
#line 146 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 146 "term.m"
  MR_Word mercury__term__T_4,
#line 146 "term.m"
  MR_Word mercury__term__Vs1_5)
#line 146 "term.m"
{
#line 811 "term.m"
  {
#line 811 "term.m"
    MR_bool mercury__term__succeeded;
#line 811 "term.m"
    MR_Word mercury__term__Vs2_6;

#line 811 "term.m"
    if (((MR_tag((MR_Word) mercury__term__T_4)) == (MR_mktag((MR_Integer) 0))))
#line 813 "term.m"
      {
#line 813 "term.m"
        MR_Word mercury__term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 1)));
#line 813 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 0)));
#line 813 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 2)));

#line 814 "term.m"
        {
#line 814 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Args_15, mercury__term__Vs1_5, &mercury__term__Vs2_6);
        }
#line 813 "term.m"
      }
#line 811 "term.m"
    else
#line 811 "term.m"
      {
#line 811 "term.m"
        MR_Word mercury__term__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_4, (MR_Integer) 0)));
#line 811 "term.m"
        MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_4, (MR_Integer) 1)));

#line 812 "term.m"
        {
#line 812 "term.m"
          mercury__term__Vs2_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs2_6, 0) = ((MR_Box) (mercury__term__Var_8));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs2_6, 1) = ((MR_Box) (mercury__term__Vs1_5));
#line 812 "term.m"
        }
#line 811 "term.m"
      }
#line 811 "term.m"
    return mercury__term__Vs2_6;
#line 811 "term.m"
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
#line 805 "term.m"
  {
#line 805 "term.m"
    MR_bool mercury__term__succeeded;
#line 805 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 811 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 813 "term.m"
      {
#line 813 "term.m"
        MR_Word mercury__term__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 813 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 813 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 814 "term.m"
        {
#line 814 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Args_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 814 "term.m"
          return;
        }
#line 813 "term.m"
      }
#line 811 "term.m"
    else
#line 811 "term.m"
      {
#line 811 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 811 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 812 "term.m"
        {
#line 812 "term.m"
          MR_Word base;
#line 812 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          *mercury__term__Vars_4 = base;
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_7));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 812 "term.m"
        }
#line 811 "term.m"
      }
#line 805 "term.m"
  }
#line 142 "term.m"
}

#line 141 "term.m"
MR_Word MR_CALL 
mercury__term__vars_1_f_0(
#line 141 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 141 "term.m"
  MR_Word mercury__term__T_3)
#line 141 "term.m"
{
#line 805 "term.m"
  {
#line 805 "term.m"
    MR_bool mercury__term__succeeded;
#line 805 "term.m"
    MR_Word mercury__term__Vs_4;
#line 805 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 811 "term.m"
    if (((MR_tag((MR_Word) mercury__term__T_3)) == (MR_mktag((MR_Integer) 0))))
#line 813 "term.m"
      {
#line 813 "term.m"
        MR_Word mercury__term__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 1)));
#line 813 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 0)));
#line 813 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 2)));

#line 814 "term.m"
        {
#line 814 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Args_16, mercury__term__V_8_8, &mercury__term__Vs_4);
        }
#line 813 "term.m"
      }
#line 811 "term.m"
    else
#line 811 "term.m"
      {
#line 811 "term.m"
        MR_Word mercury__term__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_3, (MR_Integer) 0)));
#line 811 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_3, (MR_Integer) 1)));

#line 812 "term.m"
        {
#line 812 "term.m"
          mercury__term__Vs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs_4, 0) = ((MR_Box) (mercury__term__Var_9));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 812 "term.m"
        }
#line 811 "term.m"
      }
#line 805 "term.m"
    return mercury__term__Vs_4;
#line 805 "term.m"
  }
#line 141 "term.m"
}

#line 132 "term.m"
void MR_CALL 
mercury__term__univ_to_term_2_p_0(
#line 132 "term.m"
  MR_Word mercury__term__TypeInfo_26_26,
#line 132 "term.m"
  MR_Word mercury__term__Univ_3,
#line 132 "term.m"
  MR_Word * mercury__term__Term_4)
#line 132 "term.m"
{
#line 700 "term.m"
  {
#line 700 "term.m"
    MR_bool mercury__term__succeeded;
#line 700 "term.m"
    MR_Word mercury__term__TypeInfo_6_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 700 "term.m"
    MR_Word mercury__term__Context_5 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 700 "term.m"
    MR_Word mercury__term__Type_6;
#line 12 "univ.opt"
    MR_Box mercury__term__V_4_32 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 56 "type_desc.opt"
    MR_Box mercury__term__V_34_34;
#line 67 "construct.opt"
    MR_Integer mercury__term__V_7_7;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_6_33 ;
		{
#line 56 "type_desc.opt"
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
#line 15434 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Type_6  = TypeInfo;
#line 56 "type_desc.opt"
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
#line 15458 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__V_7_7  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 708 "term.m"
    if (mercury__term__succeeded)
#line 705 "term.m"
      {
#line 705 "term.m"
        MR_Word mercury__term__TypeInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 705 "term.m"
        MR_String mercury__term__FunctorString_8;
#line 705 "term.m"
        MR_Word mercury__term__FunctorArgs_10;
#line 705 "term.m"
        MR_Word mercury__term__TermArgs_11;
#line 705 "term.m"
        MR_Box mercury__term__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 705 "term.m"
        MR_Word mercury__term__V_20_20;
#line 704 "term.m"
        MR_Integer mercury__term___FunctorArity_9;

#line 704 "term.m"
        {
#line 704 "term.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__term__TypeInfo_27_27, mercury__term__V_18_18, (MR_Integer) 1, &mercury__term__FunctorString_8, &mercury__term___FunctorArity_9, &mercury__term__FunctorArgs_10);
        }
#line 706 "term.m"
        {
#line 706 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_26_26, mercury__term__FunctorArgs_10, &mercury__term__TermArgs_11);
        }
#line 707 "term.m"
        {
#line 707 "term.m"
          mercury__term__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_20_20, 0) = ((MR_Box) (mercury__term__FunctorString_8));
#line 707 "term.m"
        }
#line 707 "term.m"
        {
#line 707 "term.m"
          MR_Word base;
#line 707 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 707 "term.m"
          *mercury__term__Term_4 = base;
#line 707 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_20_20));
#line 707 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__TermArgs_11));
#line 707 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 707 "term.m"
        }
#line 705 "term.m"
      }
#line 708 "term.m"
    else
#line 717 "term.m"
      {
#line 717 "term.m"
        MR_Word mercury__term__SpecialCaseTerm_16;
#line 710 "term.m"
        MR_Word mercury__term__TypeCtor_12;
#line 710 "term.m"
        MR_Word mercury__term__TypeArgs_13;
#line 710 "term.m"
        MR_String mercury__term__TypeName_14;
#line 710 "term.m"
        MR_String mercury__term__ModuleName_15;
#line 142 "type_desc.opt"
        MR_String mercury__term___ModuleName_5_39;
#line 142 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_40;
#line 142 "type_desc.opt"
        MR_String mercury__term___Name_5_43;
#line 142 "type_desc.opt"
        MR_Integer mercury__term___Arity_6_44;

#line 76 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__term__Type_6 ;
		{
#line 76 "type_desc.opt"
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}
#line 15569 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__TypeCtor_12  = TypeCtorDesc;
	 mercury__term__TypeArgs_13  = ArgTypes;
#line 76 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_12 ;
		{
#line 142 "type_desc.opt"
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
#line 15618 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_39  = TypeCtorModuleName;
	 mercury__term__TypeName_14  = TypeCtorName;
	 mercury__term___Arity_6_40  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 142 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__term__TypeCtor_12 ;
		{
#line 142 "type_desc.opt"
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
#line 15668 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__ModuleName_15  = TypeCtorModuleName;
	 mercury__term___Name_5_43  = TypeCtorName;
	 mercury__term___Arity_6_44  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 713 "term.m"
        {
#line 713 "term.m"
          mercury__term__succeeded = mercury__term__univ_to_term_special_case_6_p_0(mercury__term__TypeInfo_26_26, mercury__term__ModuleName_15, mercury__term__TypeName_14, mercury__term__TypeArgs_13, mercury__term__Univ_3, mercury__term__Context_5, &mercury__term__SpecialCaseTerm_16);
        }
#line 717 "term.m"
        if (mercury__term__succeeded)
#line 716 "term.m"
          *mercury__term__Term_4 = mercury__term__SpecialCaseTerm_16;
#line 717 "term.m"
        else
#line 719 "term.m"
          {
#line 719 "term.m"
            MR_Word mercury__term__TypeInfo_6_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 719 "term.m"
            MR_String mercury__term__Message_17;
#line 719 "term.m"
            MR_String mercury__term__V_22_22;
#line 719 "term.m"
            MR_String mercury__term__V_23_23;
#line 719 "term.m"
            MR_Word mercury__term__V_24_24;
#line 12 "univ.opt"
            MR_Box mercury__term__V_4_47 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 56 "type_desc.opt"
            MR_Box mercury__term__V_49_49;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__univ_to_term_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_6_48 ;
		{
#line 56 "type_desc.opt"
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
#line 15731 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_24_24  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 719 "term.m"
            {
#line 719 "term.m"
              mercury__term__V_23_23 = mercury__type_desc__type_name_1_f_0(mercury__term__V_24_24);
            }
#line 260 "string.opt"
            {
#line 260 "string.opt"
              mercury__string__append_3_p_2(mercury__term__V_23_23, (MR_String) "\'", &mercury__term__V_22_22);
            }
#line 260 "string.opt"
            {
#line 260 "string.opt"
              mercury__string__append_3_p_2((MR_String) "term.type_to_term: unknown type \140", mercury__term__V_22_22, &mercury__term__Message_17);
            }
#line 720 "term.m"
            {
#line 720 "term.m"
              mercury__require__error_1_p_0(mercury__term__Message_17);
#line 720 "term.m"
              return;
            }
#line 719 "term.m"
          }
#line 717 "term.m"
      }
#line 700 "term.m"
  }
#line 132 "term.m"
}

#line 131 "term.m"
MR_Word MR_CALL 
mercury__term__univ_to_term_1_f_0(
#line 131 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 131 "term.m"
  MR_Word mercury__term__U_3)
#line 131 "term.m"
{
#line 1255 "term.m"
  {
#line 1255 "term.m"
    MR_bool mercury__term__succeeded;
#line 1255 "term.m"
    MR_Word mercury__term__T_4;

#line 1255 "term.m"
    {
#line 1255 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__U_3, &mercury__term__T_4);
    }
#line 1255 "term.m"
    return mercury__term__T_4;
#line 1255 "term.m"
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
#line 696 "term.m"
  {
#line 696 "term.m"
    MR_bool mercury__term__succeeded;
#line 696 "term.m"
    MR_Word mercury__term__Univ_5;

#line 697 "term.m"
    {
#line 697 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_6, mercury__term__Val_3, &mercury__term__Univ_5);
    }
#line 698 "term.m"
    {
#line 698 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_7_7, mercury__term__Univ_5, mercury__term__Term_4);
#line 698 "term.m"
      return;
    }
#line 696 "term.m"
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
  MR_Box mercury__term__T1_3)
#line 125 "term.m"
{
#line 696 "term.m"
  {
#line 696 "term.m"
    MR_bool mercury__term__succeeded;
#line 696 "term.m"
    MR_Word mercury__term__T2_4;
#line 696 "term.m"
    MR_Word mercury__term__Univ_9;

#line 697 "term.m"
    {
#line 697 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_5, mercury__term__T1_3, &mercury__term__Univ_9);
    }
#line 698 "term.m"
    {
#line 698 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_6_6, mercury__term__Univ_9, &mercury__term__T2_4);
    }
#line 696 "term.m"
    return mercury__term__T2_4;
#line 696 "term.m"
  }
#line 125 "term.m"
}

#line 121 "term.m"
void MR_CALL 
mercury__term__det_term_to_type_2_p_0(
#line 121 "term.m"
  MR_Word mercury__term__TypeInfo_15_15,
#line 121 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_16,
#line 121 "term.m"
  MR_Word mercury__term__Term_3,
#line 121 "term.m"
  MR_Box * mercury__term__X_4)
#line 121 "term.m"
{
#line 685 "term.m"
  {
#line 685 "term.m"
    MR_bool mercury__term__succeeded;
#line 685 "term.m"
    MR_Box mercury__term__X1_5;
#line 489 "term.m"
    MR_Word mercury__term__V_19_19;

#line 490 "term.m"
    {
#line 490 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_15_15, mercury__term__TypeInfo_for_T_16, mercury__term__Term_3, &mercury__term__V_19_19);
    }
#line 490 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 490 "term.m"
    if (mercury__term__succeeded)
#line 490 "term.m"
      {
#line 490 "term.m"
        mercury__term__X1_5 = (MR_hl_field(MR_mktag(0), mercury__term__V_19_19, (MR_Integer) 0));
#line 684 "term.m"
        *mercury__term__X_4 = mercury__term__X1_5;
#line 490 "term.m"
      }
#line 490 "term.m"
    else
#line 687 "term.m"
      {
#line 1208 "term.m"
        MR_Word mercury__term__Args_21;
#line 1208 "term.m"
        MR_Word mercury__term__V_20_20;
#line 1208 "term.m"
        MR_Word mercury__term__V_22_22;

#line 1208 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1208 "term.m"
        if (mercury__term__succeeded)
#line 1208 "term.m"
          {
#line 1208 "term.m"
            mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1208 "term.m"
            mercury__term__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 1208 "term.m"
            mercury__term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1209 "term.m"
            {
#line 1209 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_15_15, mercury__term__Args_21);
            }
#line 1208 "term.m"
          }
#line 685 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 687 "term.m"
        if (mercury__term__succeeded)
#line 686 "term.m"
          {
#line 686 "term.m"
            {
#line 686 "term.m"
              mercury__require__error_1_p_0((MR_String) "term.det_term_to_type failed, because the term wasn\'t ground");
#line 686 "term.m"
              return;
            }
#line 686 "term.m"
          }
#line 687 "term.m"
        else
#line 690 "term.m"
          {
#line 690 "term.m"
            MR_String mercury__term__Message_6;
#line 690 "term.m"
            MR_String mercury__term__V_9_9;
#line 690 "term.m"
            MR_String mercury__term__V_11_11;
#line 690 "term.m"
            MR_String mercury__term__V_12_12;
#line 690 "term.m"
            MR_Word mercury__term__V_13_13;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__det_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_for_T_16 ;
		{
#line 56 "type_desc.opt"
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
#line 15996 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_13_13  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 690 "term.m"
            {
#line 690 "term.m"
              mercury__term__V_12_12 = mercury__type_desc__type_name_1_f_0(mercury__term__V_13_13);
            }
#line 260 "string.opt"
            {
#line 260 "string.opt"
              mercury__string__append_3_p_2(mercury__term__V_12_12, (MR_String) "\'", &mercury__term__V_11_11);
            }
#line 260 "string.opt"
            {
#line 260 "string.opt"
              mercury__string__append_3_p_2((MR_String) "the term wasn\'t a valid term for type \140", mercury__term__V_11_11, &mercury__term__V_9_9);
            }
#line 260 "string.opt"
            {
#line 260 "string.opt"
              mercury__string__append_3_p_2((MR_String) "term.det_term_to_type failed, due to a type error:\n", mercury__term__V_9_9, &mercury__term__Message_6);
            }
#line 691 "term.m"
            {
#line 691 "term.m"
              mercury__require__error_1_p_0(mercury__term__Message_6);
#line 691 "term.m"
              return;
            }
#line 690 "term.m"
          }
#line 687 "term.m"
      }
#line 685 "term.m"
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
  MR_Word mercury__term__T1_3)
#line 120 "term.m"
{
#line 1249 "term.m"
  {
#line 1249 "term.m"
    MR_bool mercury__term__succeeded;
#line 1249 "term.m"
    MR_Box mercury__term__T2_4;

#line 1249 "term.m"
    {
#line 1249 "term.m"
      mercury__term__det_term_to_type_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__TypeInfo_for_T_6, mercury__term__T1_3, &mercury__term__T2_4);
    }
#line 1249 "term.m"
    return mercury__term__T2_4;
#line 1249 "term.m"
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
#line 489 "term.m"
  {
#line 489 "term.m"
    MR_bool mercury__term__succeeded;
#line 489 "term.m"
    MR_Word mercury__term__V_5_5;

#line 490 "term.m"
    {
#line 490 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_6, mercury__term__TypeInfo_for_T_7, mercury__term__Term_3, &mercury__term__V_5_5);
    }
#line 490 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 490 "term.m"
    if (mercury__term__succeeded)
#line 490 "term.m"
      *mercury__term__Val_4 = (MR_hl_field(MR_mktag(0), mercury__term__V_5_5, (MR_Integer) 0));
#line 489 "term.m"
    return mercury__term__succeeded;
#line 489 "term.m"
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
#line 492 "term.m"
  {
#line 492 "term.m"
    MR_bool mercury__term__succeeded;
#line 492 "term.m"
    MR_Word mercury__term__UnivResult_6;
#line 492 "term.m"
    MR_Word mercury__term__V_10_10;
#line 492 "term.m"
    MR_Word mercury__term__V_17_17;
#line 56 "type_desc.opt"
    MR_Box mercury__term__ValTypedVar_5;

#line 56 "type_desc.opt"
{
#define MR_PROC_LABEL mercury__term__try_term_to_type_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__term__TypeInfo_for_T_12 ;
		{
#line 56 "type_desc.opt"
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
#line 16159 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 508 "term.m"
    mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "term.m"
    {
#line 508 "term.m"
      mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_U_11, mercury__term__Term_3, mercury__term__V_10_10, mercury__term__V_17_17, &mercury__term__UnivResult_6);
    }
#line 499 "term.m"
    if (((MR_tag((MR_Word) mercury__term__UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
#line 501 "term.m"
      *mercury__term__Result_4 = mercury__term__UnivResult_6;
#line 499 "term.m"
    else
#line 495 "term.m"
      {
#line 495 "term.m"
        MR_Word mercury__term__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__UnivResult_6, (MR_Integer) 0)));
#line 495 "term.m"
        MR_Box mercury__term__Val_8;

#line 496 "term.m"
        {
#line 496 "term.m"
          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Univ_7, &mercury__term__Val_8);
        }
#line 498 "term.m"
        {
#line 498 "term.m"
          MR_Word base;
#line 498 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 498 "term.m"
          *mercury__term__Result_4 = base;
#line 498 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__term__Val_8;
#line 498 "term.m"
        }
#line 495 "term.m"
      }
#line 492 "term.m"
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
  MR_Word mercury__term__T_3)
#line 90 "term.m"
{
#line 1246 "term.m"
  {
#line 1246 "term.m"
    MR_bool mercury__term__succeeded;
#line 1246 "term.m"
    MR_Word mercury__term__TTTR_4;

#line 1246 "term.m"
    {
#line 1246 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_5, mercury__term__TypeInfo_for_T_6, mercury__term__T_3, &mercury__term__TTTR_4);
    }
#line 1246 "term.m"
    return mercury__term__TTTR_4;
#line 1246 "term.m"
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
#line 484 "term.m"
  {
#line 484 "term.m"
    MR_bool mercury__term__succeeded;
#line 484 "term.m"
    MR_Word mercury__term__Context_4;

#line 484 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 483 "term.m"
      {
#line 483 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 483 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 483 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 483 "term.m"
      }
#line 484 "term.m"
    else
#line 484 "term.m"
      {
#line 484 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 484 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 484 "term.m"
      }
#line 484 "term.m"
    return mercury__term__Context_4;
#line 484 "term.m"
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
