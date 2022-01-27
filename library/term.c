/*
** Automatically generated from `term.m'
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
#include "string.format.mih"
#include "string.to_string.mih"




#line 88 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1];

#line 91 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0;

#line 94 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1];

#line 97 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

#line 100 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1];

#line 103 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

#line 106 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

#line 109 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

#line 112 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

#line 115 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

#line 118 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

#line 121 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

#line 124 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

#line 127 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2];

#line 130 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

#line 133 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5];

#line 136 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5];

#line 139 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

#line 142 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

#line 145 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

#line 148 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

#line 151 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

#line 154 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

#line 157 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

#line 160 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

#line 163 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

#line 166 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

#line 169 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

#line 172 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 175 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

#line 178 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 181 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

#line 184 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 187 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

#line 190 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

#line 193 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 196 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

#line 199 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

#line 202 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

#line 205 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

#line 208 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

#line 211 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

#line 214 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

#line 217 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

#line 220 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

#line 223 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3];

#line 226 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0;

#line 229 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1];

#line 232 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1];

#line 235 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1];

#line 238 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1];

#line 241 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0;

#line 244 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4];

#line 247 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_0;

#line 250 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2];

#line 253 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_error_1_1;

#line 256 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1];

#line 259 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1];

#line 262 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_error_1[2];

#line 265 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2];

#line 268 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2];

#line 271 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1];

#line 274 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_0;

#line 277 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2;

#line 280 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1];

#line 283 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_to_type_result_2_1;

#line 286 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1];

#line 289 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1];

#line 292 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_result_2[2];

#line 295 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2];

#line 298 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2];

#line 301 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0;

#line 304 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

#line 307 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

#line 310 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

#line 313 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

#line 316 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 319 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 321 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 324 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 327 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 329 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 331 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 334 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 337 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 339 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 342 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 345 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 347 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 349 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 352 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 355 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 357 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 360 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 363 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 365 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 367 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 370 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 373 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 375 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 377 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 380 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 383 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 385 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 387 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 389 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 392 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 395 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 397 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 400 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 403 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 405 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 407 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 410 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 413 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 415 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 417 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 420 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 423 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 425 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 427 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 429 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 432 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 435 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 437 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 440 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 443 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 445 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 447 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 450 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 453 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 455 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 457 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 460 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 463 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 465 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 467 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 469 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 472 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 475 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 477 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 480 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 483 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 485 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 487 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 490 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 493 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 495 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 498 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 501 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 503 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 505 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 508 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 511 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 513 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 516 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 519 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 521 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 523 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 526 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 529 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 531 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 533 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 536 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
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
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 551 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 553 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 555 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 557 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 560 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 563 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 565 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 567 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 569 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 571 "term.c"
  MR_Box mercury__term__wrapper_arg_5);

#line 574 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 577 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 579 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 581 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 584 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 587 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 589 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 591 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 593 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 596 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 599 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 601 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 603 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 606 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 609 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 611 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 613 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 615 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 618 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 621 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 623 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 626 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 629 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 631 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 633 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 636 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 639 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 641 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 643 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 646 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 649 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 651 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 653 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 655 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 658 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 661 "term.c"
  MR_Box mercury__term__closure_arg,
#line 663 "term.c"
  MR_Box mercury__term__wrapper_arg_1);

#line 666 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 669 "term.c"
  MR_Box mercury__term__closure_arg,
#line 671 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 673 "term.c"
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

#line 799 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 799 "term.m"
  MR_Word mercury__term__Context_4,
#line 799 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 799 "term.m"
  MR_Word * mercury__term__Term_6);

#line 567 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 567 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 567 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 567 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 567 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 567 "term.m"
  MR_Word mercury__term__Term_4,
#line 567 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 567 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 1233 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1233 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1233 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1233 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 1000 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 1000 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 1000 "term.m"
  MR_Word mercury__term__Var_6,
#line 1000 "term.m"
  MR_Word mercury__term__BoundVar_7,
#line 1000 "term.m"
  MR_Word mercury__term__BoundVars_8,
#line 1000 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_13,
#line 1000 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_14);

#line 790 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 790 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 790 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 790 "term.m"
  MR_Word * mercury__term__HeadVar__2_2);

#line 740 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 740 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 740 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 740 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 740 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 740 "term.m"
  MR_Word mercury__term__Univ_4,
#line 740 "term.m"
  MR_Word mercury__term__Context_5,
#line 740 "term.m"
  MR_Word * mercury__term__HeadVar__6_6);

#line 671 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 671 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 671 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 671 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 671 "term.m"
  MR_Word mercury__term__Functor_3,
#line 671 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 671 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 671 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 671 "term.m"
  MR_Word * mercury__term__HeadVar__7_7);

#line 526 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 526 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 526 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 526 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 526 "term.m"
  MR_Word mercury__term__Context_3,
#line 526 "term.m"
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



#line 1254 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1259 "term.c"
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

#line 1274 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1279 "term.c"
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

#line 1294 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1299 "term.c"
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

#line 1314 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1319 "term.c"
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

#line 1334 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1339 "term.c"
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

#line 1354 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 1359 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 1364 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1369 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

#line 1375 "term.c"
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

#line 1399 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1408 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1417 "term.c"
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

#line 1438 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1444 "term.c"
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

#line 1459 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1464 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1473 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1478 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1483 "term.c"
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

#line 1504 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1510 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1515 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1520 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1525 "term.c"
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

#line 1546 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1554 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1563 "term.c"
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

#line 1584 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1592 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1601 "term.c"
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

#line 1622 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1630 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1639 "term.c"
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

#line 1660 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1668 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1677 "term.c"
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

#line 1698 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1706 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1713 "term.c"
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

#line 1728 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1734 "term.c"
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

#line 1749 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1754 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1759 "term.c"
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

#line 1773 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1779 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1785 "term.c"
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

#line 1806 "term.c"
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

#line 1827 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_arg_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1834 "term.c"
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

#line 1849 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1854 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_to_type_arg_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_to_type_arg_context_0_0
  }
};

#line 1863 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_arg_context_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_arg_context_0_0
};

#line 1868 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_arg_context_0[1] = {
  (MR_Integer) 0
};

#line 1873 "term.c"
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

#line 1894 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0
  }
};

#line 1902 "term.c"
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

#line 1923 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1931 "term.c"
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

#line 1946 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_error_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__list__ti_list_1term__type_ctor_info_term_to_type_arg_context_0
};

#line 1952 "term.c"
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

#line 1967 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 1972 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_error_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1
};

#line 1977 "term.c"
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

#line 1991 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_error_1[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_error_1_1,
  &mercury__term__term__du_functor_desc_term_to_type_error_1_0
};

#line 1997 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2003 "term.c"
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

#line 2024 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2029 "term.c"
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

#line 2044 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_to_type_error_1__pseudo_2 = {
  &mercury__term__term__type_ctor_info_term_to_type_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 2052 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_to_type_result_2_1[1] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_term_to_type_error_1__pseudo_2
};

#line 2057 "term.c"
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

#line 2072 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_0[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 2077 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_to_type_result_2_1[1] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1
};

#line 2082 "term.c"
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

#line 2096 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_to_type_result_2[2] = {
  &mercury__term__term__du_functor_desc_term_to_type_result_2_1,
  &mercury__term__term__du_functor_desc_term_to_type_result_2_0
};

#line 2102 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_to_type_result_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2108 "term.c"
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

#line 2129 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__term__pti_term_to_type_result_2__pseudo_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_to_type_result_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2138 "term.c"
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

#line 2159 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 2164 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2171 "term.c"
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

#line 2192 "term.c"
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

#line 2213 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 2218 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2225 "term.c"
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

#line 2246 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 2257 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 2260 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2262 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2264 "term.c"
{
#line 2266 "term.c"
  {
#line 2268 "term.c"
    MR_bool mercury__term__succeeded;

#line 2271 "term.c"
    {
#line 2273 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2276 "term.c"
    return mercury__term__succeeded;
#line 2278 "term.c"
  }
#line 2280 "term.c"
}

#line 2283 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 2286 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2288 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2290 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2292 "term.c"
{
#line 2294 "term.c"
  {
#line 2296 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2299 "term.c"
    {
#line 2301 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2304 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2306 "term.c"
  }
#line 2308 "term.c"
}

#line 2311 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 2314 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2316 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2318 "term.c"
{
#line 2320 "term.c"
  {
#line 2322 "term.c"
    MR_bool mercury__term__succeeded;

#line 2325 "term.c"
    {
#line 2327 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2330 "term.c"
    return mercury__term__succeeded;
#line 2332 "term.c"
  }
#line 2334 "term.c"
}

#line 2337 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 2340 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2342 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2344 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2346 "term.c"
{
#line 2348 "term.c"
  {
#line 2350 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2353 "term.c"
    {
#line 2355 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2358 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2360 "term.c"
  }
#line 2362 "term.c"
}

#line 2365 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 2368 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2370 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2372 "term.c"
{
#line 2374 "term.c"
  {
#line 2376 "term.c"
    MR_bool mercury__term__succeeded;

#line 2379 "term.c"
    {
#line 2381 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 2384 "term.c"
    return mercury__term__succeeded;
#line 2386 "term.c"
  }
#line 2388 "term.c"
}

#line 2391 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 2394 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2396 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2398 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2400 "term.c"
{
#line 2402 "term.c"
  {
#line 2404 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2407 "term.c"
    {
#line 2409 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 2412 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2414 "term.c"
  }
#line 2416 "term.c"
}

#line 2419 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 2422 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2424 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2426 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2428 "term.c"
{
#line 2430 "term.c"
  {
#line 2432 "term.c"
    MR_bool mercury__term__succeeded;

#line 2435 "term.c"
    {
#line 2437 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2440 "term.c"
    return mercury__term__succeeded;
#line 2442 "term.c"
  }
#line 2444 "term.c"
}

#line 2447 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 2450 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2452 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2454 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2456 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2458 "term.c"
{
#line 2460 "term.c"
  {
#line 2462 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2465 "term.c"
    {
#line 2467 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2470 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2472 "term.c"
  }
#line 2474 "term.c"
}

#line 2477 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 2480 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2482 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2484 "term.c"
{
#line 2486 "term.c"
  {
#line 2488 "term.c"
    MR_bool mercury__term__succeeded;

#line 2491 "term.c"
    {
#line 2493 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2496 "term.c"
    return mercury__term__succeeded;
#line 2498 "term.c"
  }
#line 2500 "term.c"
}

#line 2503 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 2506 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2508 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2510 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2512 "term.c"
{
#line 2514 "term.c"
  {
#line 2516 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2519 "term.c"
    {
#line 2521 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2524 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2526 "term.c"
  }
#line 2528 "term.c"
}

#line 2531 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 2534 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2536 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2538 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2540 "term.c"
{
#line 2542 "term.c"
  {
#line 2544 "term.c"
    MR_bool mercury__term__succeeded;

#line 2547 "term.c"
    {
#line 2549 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2552 "term.c"
    return mercury__term__succeeded;
#line 2554 "term.c"
  }
#line 2556 "term.c"
}

#line 2559 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 2562 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2564 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2566 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2568 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2570 "term.c"
{
#line 2572 "term.c"
  {
#line 2574 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2577 "term.c"
    {
#line 2579 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2582 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2584 "term.c"
  }
#line 2586 "term.c"
}

#line 2589 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 2592 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2594 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2596 "term.c"
{
#line 2598 "term.c"
  {
#line 2600 "term.c"
    MR_bool mercury__term__succeeded;

#line 2603 "term.c"
    {
#line 2605 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2608 "term.c"
    return mercury__term__succeeded;
#line 2610 "term.c"
  }
#line 2612 "term.c"
}

#line 2615 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 2618 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2620 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2622 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2624 "term.c"
{
#line 2626 "term.c"
  {
#line 2628 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2631 "term.c"
    {
#line 2633 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2636 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2638 "term.c"
  }
#line 2640 "term.c"
}

#line 2643 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 2646 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2648 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2650 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2652 "term.c"
{
#line 2654 "term.c"
  {
#line 2656 "term.c"
    MR_bool mercury__term__succeeded;

#line 2659 "term.c"
    {
#line 2661 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2664 "term.c"
    return mercury__term__succeeded;
#line 2666 "term.c"
  }
#line 2668 "term.c"
}

#line 2671 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 2674 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2676 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2678 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2680 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2682 "term.c"
{
#line 2684 "term.c"
  {
#line 2686 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2689 "term.c"
    {
#line 2691 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2694 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2696 "term.c"
  }
#line 2698 "term.c"
}

#line 2701 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 2704 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2706 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2708 "term.c"
{
#line 2710 "term.c"
  {
#line 2712 "term.c"
    MR_bool mercury__term__succeeded;

#line 2715 "term.c"
    {
#line 2717 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2720 "term.c"
    return mercury__term__succeeded;
#line 2722 "term.c"
  }
#line 2724 "term.c"
}

#line 2727 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2730 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2732 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2734 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2736 "term.c"
{
#line 2738 "term.c"
  {
#line 2740 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2743 "term.c"
    {
#line 2745 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2748 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2750 "term.c"
  }
#line 2752 "term.c"
}

#line 2755 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_arg_context_0_0_10001(
#line 2758 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2760 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2762 "term.c"
{
#line 2764 "term.c"
  {
#line 2766 "term.c"
    MR_bool mercury__term__succeeded;

#line 2769 "term.c"
    {
#line 2771 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_arg_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2774 "term.c"
    return mercury__term__succeeded;
#line 2776 "term.c"
  }
#line 2778 "term.c"
}

#line 2781 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_arg_context_0_0_10001(
#line 2784 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2786 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2788 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2790 "term.c"
{
#line 2792 "term.c"
  {
#line 2794 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2797 "term.c"
    {
#line 2799 "term.c"
      mercury__term____Compare____term_to_type_arg_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2802 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2804 "term.c"
  }
#line 2806 "term.c"
}

#line 2809 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_context_0_0_10001(
#line 2812 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2814 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2816 "term.c"
{
#line 2818 "term.c"
  {
#line 2820 "term.c"
    MR_bool mercury__term__succeeded;

#line 2823 "term.c"
    {
#line 2825 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2828 "term.c"
    return mercury__term__succeeded;
#line 2830 "term.c"
  }
#line 2832 "term.c"
}

#line 2835 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_context_0_0_10001(
#line 2838 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2840 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2842 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2844 "term.c"
{
#line 2846 "term.c"
  {
#line 2848 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2851 "term.c"
    {
#line 2853 "term.c"
      mercury__term____Compare____term_to_type_context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2856 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2858 "term.c"
  }
#line 2860 "term.c"
}

#line 2863 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_error_1_0_10001(
#line 2866 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2868 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2870 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2872 "term.c"
{
#line 2874 "term.c"
  {
#line 2876 "term.c"
    MR_bool mercury__term__succeeded;

#line 2879 "term.c"
    {
#line 2881 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2884 "term.c"
    return mercury__term__succeeded;
#line 2886 "term.c"
  }
#line 2888 "term.c"
}

#line 2891 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_error_1_0_10001(
#line 2894 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2896 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2898 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2900 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2902 "term.c"
{
#line 2904 "term.c"
  {
#line 2906 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2909 "term.c"
    {
#line 2911 "term.c"
      mercury__term____Compare____term_to_type_error_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2914 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2916 "term.c"
  }
#line 2918 "term.c"
}

#line 2921 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_2_0_10001(
#line 2924 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2926 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2928 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2930 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2932 "term.c"
{
#line 2934 "term.c"
  {
#line 2936 "term.c"
    MR_bool mercury__term__succeeded;

#line 2939 "term.c"
    {
#line 2941 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2944 "term.c"
    return mercury__term__succeeded;
#line 2946 "term.c"
  }
#line 2948 "term.c"
}

#line 2951 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_2_0_10001(
#line 2954 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2956 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2958 "term.c"
  MR_Box * mercury__term__wrapper_arg_3,
#line 2960 "term.c"
  MR_Box mercury__term__wrapper_arg_4,
#line 2962 "term.c"
  MR_Box mercury__term__wrapper_arg_5)
#line 2964 "term.c"
{
#line 2966 "term.c"
  {
#line 2968 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2971 "term.c"
    {
#line 2973 "term.c"
      mercury__term____Compare____term_to_type_result_2_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_4), ((MR_Word) mercury__term__wrapper_arg_5));
    }
#line 2976 "term.c"
    *mercury__term__wrapper_arg_3 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2978 "term.c"
  }
#line 2980 "term.c"
}

#line 2983 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_to_type_result_1_0_10001(
#line 2986 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2988 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2990 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2992 "term.c"
{
#line 2994 "term.c"
  {
#line 2996 "term.c"
    MR_bool mercury__term__succeeded;

#line 2999 "term.c"
    {
#line 3001 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3004 "term.c"
    return mercury__term__succeeded;
#line 3006 "term.c"
  }
#line 3008 "term.c"
}

#line 3011 "term.c"
static void MR_CALL 
mercury__term____Compare____term_to_type_result_1_0_10001(
#line 3014 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3016 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3018 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3020 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3022 "term.c"
{
#line 3024 "term.c"
  {
#line 3026 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3029 "term.c"
    {
#line 3031 "term.c"
      mercury__term____Compare____term_to_type_result_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3034 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3036 "term.c"
  }
#line 3038 "term.c"
}

#line 3041 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 3044 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3046 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3048 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3050 "term.c"
{
#line 3052 "term.c"
  {
#line 3054 "term.c"
    MR_bool mercury__term__succeeded;

#line 3057 "term.c"
    {
#line 3059 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3062 "term.c"
    return mercury__term__succeeded;
#line 3064 "term.c"
  }
#line 3066 "term.c"
}

#line 3069 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 3072 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3074 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3076 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3078 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3080 "term.c"
{
#line 3082 "term.c"
  {
#line 3084 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3087 "term.c"
    {
#line 3089 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3092 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3094 "term.c"
  }
#line 3096 "term.c"
}

#line 3099 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 3102 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3104 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 3106 "term.c"
{
#line 3108 "term.c"
  {
#line 3110 "term.c"
    MR_bool mercury__term__succeeded;

#line 3113 "term.c"
    {
#line 3115 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 3118 "term.c"
    return mercury__term__succeeded;
#line 3120 "term.c"
  }
#line 3122 "term.c"
}

#line 3125 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 3128 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 3130 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3132 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3134 "term.c"
{
#line 3136 "term.c"
  {
#line 3138 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3141 "term.c"
    {
#line 3143 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3146 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3148 "term.c"
  }
#line 3150 "term.c"
}

#line 3153 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 3156 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3158 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 3160 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 3162 "term.c"
{
#line 3164 "term.c"
  {
#line 3166 "term.c"
    MR_bool mercury__term__succeeded;

#line 3169 "term.c"
    {
#line 3171 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 3174 "term.c"
    return mercury__term__succeeded;
#line 3176 "term.c"
  }
#line 3178 "term.c"
}

#line 3181 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 3184 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3186 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 3188 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 3190 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 3192 "term.c"
{
#line 3194 "term.c"
  {
#line 3196 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 3199 "term.c"
    {
#line 3201 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 3204 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 3206 "term.c"
  }
#line 3208 "term.c"
}

#line 3211 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 3214 "term.c"
  MR_Box mercury__term__closure_arg,
#line 3216 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 3218 "term.c"
{
#line 3220 "term.c"
  {
#line 3222 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 3224 "term.c"
    MR_Box mercury__term__closure;
#line 3226 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 3229 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3231 "term.c"
    {
#line 3233 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 3236 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3238 "term.c"
    return mercury__term__wrapper_arg_2;
#line 3240 "term.c"
  }
#line 3242 "term.c"
}

#line 3245 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 3248 "term.c"
  MR_Box mercury__term__closure_arg,
#line 3250 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 3252 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 3254 "term.c"
{
#line 3256 "term.c"
  {
#line 3258 "term.c"
    MR_bool mercury__term__succeeded;
#line 3260 "term.c"
    MR_Box mercury__term__closure;
#line 3262 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 3265 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 3267 "term.c"
    {
#line 3269 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 3272 "term.c"
    if (mercury__term__succeeded)
#line 3274 "term.c"
      {
#line 3276 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 3278 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 3280 "term.c"
      }
#line 3282 "term.c"
    return mercury__term__succeeded;
#line 3284 "term.c"
  }
#line 3286 "term.c"
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

#line 799 "term.m"
static void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(
#line 799 "term.m"
  MR_Word mercury__term__Context_4,
#line 799 "term.m"
  MR_Word mercury__term__TypeInfo_5,
#line 799 "term.m"
  MR_Word * mercury__term__Term_6)
#line 799 "term.m"
{
#line 801 "term.m"
  {
#line 801 "term.m"
    MR_bool mercury__term__succeeded;
#line 801 "term.m"
    MR_Word mercury__term__TypeCtor_7;
#line 801 "term.m"
    MR_Word mercury__term__ArgTypes_8;
#line 801 "term.m"
    MR_String mercury__term__TypeName_9;
#line 801 "term.m"
    MR_String mercury__term__ModuleName_10;
#line 801 "term.m"
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
#line 3625 "term.c"

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
#line 3674 "term.c"

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
#line 3724 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_36  = TypeCtorModuleName;
	 mercury__term__ModuleName_10  = TypeCtorName;
	 mercury__term___Arity_6_37  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 805 "term.m"
    {
#line 805 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_95_104_111_54_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_3_p_in__list_0(mercury__term__Context_4, mercury__term__ArgTypes_8, &mercury__term__ArgTerms_11);
    }
#line 807 "term.m"
    mercury__term__succeeded = (strcmp(mercury__term__ModuleName_10, (MR_String) "builtin") == 0);
#line 809 "term.m"
    if (mercury__term__succeeded)
#line 808 "term.m"
      {
#line 808 "term.m"
        MR_Word mercury__term__V_15_15;

#line 808 "term.m"
        {
#line 808 "term.m"
          mercury__term__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 808 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_15_15, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 808 "term.m"
        }
#line 808 "term.m"
        {
#line 808 "term.m"
          MR_Word base;
#line 808 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 808 "term.m"
          *mercury__term__Term_6 = base;
#line 808 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 808 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 808 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 808 "term.m"
        }
#line 808 "term.m"
      }
#line 809 "term.m"
    else
#line 810 "term.m"
      {
#line 810 "term.m"
        MR_Word mercury__term__Arg1_12;
#line 810 "term.m"
        MR_Word mercury__term__Arg2_13;
#line 810 "term.m"
        MR_Word mercury__term__V_16_16;
#line 810 "term.m"
        MR_Word mercury__term__V_17_17;
#line 810 "term.m"
        MR_Word mercury__term__V_18_18;
#line 810 "term.m"
        MR_Word mercury__term__V_19_19;
#line 810 "term.m"
        MR_Word mercury__term__V_21_21;
#line 810 "term.m"
        MR_Word mercury__term__V_22_22;
#line 810 "term.m"
        MR_Word mercury__term__V_23_23;

#line 810 "term.m"
        {
#line 810 "term.m"
          mercury__term__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 810 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__ModuleName_10));
#line 810 "term.m"
        }
#line 810 "term.m"
        mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 810 "term.m"
        {
#line 810 "term.m"
          mercury__term__Arg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 810 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 0) = ((MR_Box) (mercury__term__V_16_16));
#line 810 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 1) = ((MR_Box) (mercury__term__V_17_17));
#line 810 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg1_12, 2) = ((MR_Box) (mercury__term__Context_4));
#line 810 "term.m"
        }
#line 811 "term.m"
        {
#line 811 "term.m"
          mercury__term__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 811 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_18_18, 0) = ((MR_Box) (mercury__term__TypeName_9));
#line 811 "term.m"
        }
#line 811 "term.m"
        {
#line 811 "term.m"
          mercury__term__Arg2_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 811 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 0) = ((MR_Box) (mercury__term__V_18_18));
#line 811 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 1) = ((MR_Box) (mercury__term__ArgTerms_11));
#line 811 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__Arg2_13, 2) = ((MR_Box) (mercury__term__Context_4));
#line 811 "term.m"
        }
#line 812 "term.m"
        mercury__term__V_19_19 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 812 "term.m"
        mercury__term__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "term.m"
        {
#line 812 "term.m"
          mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 0) = ((MR_Box) (mercury__term__Arg2_13));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_22_22, 1) = ((MR_Box) (mercury__term__V_23_23));
#line 812 "term.m"
        }
#line 812 "term.m"
        {
#line 812 "term.m"
          mercury__term__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__Arg1_12));
#line 812 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_21_21, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 812 "term.m"
        }
#line 812 "term.m"
        {
#line 812 "term.m"
          MR_Word base;
#line 812 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 812 "term.m"
          *mercury__term__Term_6 = base;
#line 812 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_19_19));
#line 812 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_21_21));
#line 812 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_4));
#line 812 "term.m"
        }
#line 810 "term.m"
      }
#line 801 "term.m"
  }
#line 799 "term.m"
}

#line 567 "term.m"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(
#line 567 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_165,
#line 567 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 567 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 567 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 567 "term.m"
  MR_Word mercury__term__Term_4,
#line 567 "term.m"
  MR_Word mercury__term__HeadVar__6_6,
#line 567 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 567 "term.m"
{
#line 573 "term.m"
  {
#line 573 "term.m"
    MR_bool mercury__term__succeeded;

#line 573 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 644 "term.m"
      {
#line 644 "term.m"
        MR_Word mercury__term__TypeCtorInfo_188_188;
#line 644 "term.m"
        MR_Word mercury__term__Arg_120;
#line 644 "term.m"
        MR_Word mercury__term__Value_122;
#line 644 "term.m"
        MR_Word mercury__term__Type_123;
#line 644 "term.m"
        MR_Word mercury__term__Univ_128;
#line 644 "term.m"
        MR_Word mercury__term__V_135_135;
#line 644 "term.m"
        MR_String mercury__term__V_136_136;
#line 644 "term.m"
        MR_Word mercury__term__V_137_137;
#line 644 "term.m"
        MR_Word mercury__term__V_138_138;
#line 644 "term.m"
        MR_Word mercury__term__V_139_139;
#line 644 "term.m"
        MR_String mercury__term__V_140_140;
#line 644 "term.m"
        MR_Word mercury__term__V_141_141;
#line 644 "term.m"
        MR_Word mercury__term__V_142_142;
#line 644 "term.m"
        MR_Word mercury__term__V_143_143;
#line 644 "term.m"
        MR_Word mercury__term__V_159_159;
#line 644 "term.m"
        MR_Word mercury__term__V_192_192;
#line 644 "term.m"
        MR_Word mercury__term__V_193_193;
#line 644 "term.m"
        MR_Word mercury__term__V_195_195;
#line 644 "term.m"
        MR_Word mercury__term__V_196_196;
#line 644 "term.m"
        MR_String mercury__term__V_197_197;
#line 648 "term.m"
        MR_Word mercury__term__V_121_121;
#line 649 "term.m"
        MR_Word mercury__term__V_124_124;
#line 652 "term.m"
        MR_Word mercury__term__V_191_191;
#line 651 "term.m"
        MR_Word mercury__term__V_194_194;

#line 644 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 644 "term.m"
        if (mercury__term__succeeded)
#line 644 "term.m"
          {
#line 644 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "term.m"
            if (mercury__term__succeeded)
#line 644 "term.m"
              {
#line 648 "term.m"
                mercury__term__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 648 "term.m"
                mercury__term__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 648 "term.m"
                mercury__term__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 648 "term.m"
                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_135_135)) == (MR_mktag((MR_Integer) 0)));
#line 648 "term.m"
                if (mercury__term__succeeded)
#line 648 "term.m"
                  {
#line 648 "term.m"
                    mercury__term__V_136_136 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_135_135, (MR_Integer) 0)));
#line 648 "term.m"
                    mercury__term__succeeded = (strcmp(mercury__term__V_136_136, (MR_String) "univ") == 0);
#line 644 "term.m"
                    if (mercury__term__succeeded)
#line 644 "term.m"
                      {
#line 648 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_137_137)) == (MR_mktag((MR_Integer) 1)));
#line 648 "term.m"
                        if (mercury__term__succeeded)
#line 648 "term.m"
                          {
#line 648 "term.m"
                            mercury__term__Arg_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 0)));
#line 648 "term.m"
                            mercury__term__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_137_137, (MR_Integer) 1)));
#line 648 "term.m"
                            mercury__term__succeeded = (mercury__term__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "term.m"
                            if (mercury__term__succeeded)
#line 644 "term.m"
                              {
#line 649 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Arg_120)) == (MR_mktag((MR_Integer) 0)));
#line 649 "term.m"
                                if (mercury__term__succeeded)
#line 649 "term.m"
                                  {
#line 649 "term.m"
                                    mercury__term__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 0)));
#line 649 "term.m"
                                    mercury__term__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 1)));
#line 649 "term.m"
                                    mercury__term__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Arg_120, (MR_Integer) 2)));
#line 649 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_139_139)) == (MR_mktag((MR_Integer) 0)));
#line 649 "term.m"
                                    if (mercury__term__succeeded)
#line 649 "term.m"
                                      {
#line 649 "term.m"
                                        mercury__term__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_139_139, (MR_Integer) 0)));
#line 649 "term.m"
                                        mercury__term__succeeded = (strcmp(mercury__term__V_140_140, (MR_String) ":") == 0);
#line 644 "term.m"
                                        if (mercury__term__succeeded)
#line 644 "term.m"
                                          {
#line 649 "term.m"
                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_141_141)) == (MR_mktag((MR_Integer) 1)));
#line 649 "term.m"
                                            if (mercury__term__succeeded)
#line 649 "term.m"
                                              {
#line 649 "term.m"
                                                mercury__term__Value_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 0)));
#line 649 "term.m"
                                                mercury__term__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_141_141, (MR_Integer) 1)));
#line 649 "term.m"
                                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_142_142)) == (MR_mktag((MR_Integer) 1)));
#line 649 "term.m"
                                                if (mercury__term__succeeded)
#line 649 "term.m"
                                                  {
#line 649 "term.m"
                                                    mercury__term__Type_123 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 0)));
#line 649 "term.m"
                                                    mercury__term__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_142_142, (MR_Integer) 1)));
#line 649 "term.m"
                                                    mercury__term__succeeded = (mercury__term__V_143_143 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "term.m"
                                                    if (mercury__term__succeeded)
#line 644 "term.m"
                                                      {
#line 652 "term.m"
                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Value_122)) == (MR_mktag((MR_Integer) 0)));
#line 652 "term.m"
                                                        if (mercury__term__succeeded)
#line 652 "term.m"
                                                          {
#line 652 "term.m"
                                                            mercury__term__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 0)));
#line 652 "term.m"
                                                            mercury__term__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 1)));
#line 652 "term.m"
                                                            mercury__term__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Value_122, (MR_Integer) 2)));
#line 651 "term.m"
                                                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Type_123)) == (MR_mktag((MR_Integer) 0)));
#line 651 "term.m"
                                                            if (mercury__term__succeeded)
#line 651 "term.m"
                                                              {
#line 651 "term.m"
                                                                mercury__term__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 0)));
#line 651 "term.m"
                                                                mercury__term__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 1)));
#line 651 "term.m"
                                                                mercury__term__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Type_123, (MR_Integer) 2)));
#line 652 "term.m"
                                                                mercury__term__succeeded = (mercury__term__V_192_192 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "term.m"
                                                                if (mercury__term__succeeded)
#line 644 "term.m"
                                                                  {
#line 659 "term.m"
                                                                    mercury__term__succeeded = (mercury__term__V_195_195 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 644 "term.m"
                                                                    if (mercury__term__succeeded)
#line 644 "term.m"
                                                                      {
#line 659 "term.m"
                                                                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_196_196)) == (MR_mktag((MR_Integer) 0)));
#line 659 "term.m"
                                                                        if (mercury__term__succeeded)
#line 659 "term.m"
                                                                          {
#line 659 "term.m"
                                                                            mercury__term__V_197_197 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_196_196, (MR_Integer) 0)));
#line 654 "term.m"
                                                                            if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 1))))
#line 651 "term.m"
                                                                              {
#line 651 "term.m"
                                                                                MR_Word mercury__term__TypeCtorInfo_185_185;
#line 651 "term.m"
                                                                                MR_Integer mercury__term__Int_126;

#line 651 "term.m"
                                                                                mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "int") == 0);
#line 651 "term.m"
                                                                                if (mercury__term__succeeded)
#line 651 "term.m"
                                                                                  {
#line 652 "term.m"
                                                                                    mercury__term__Int_126 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_193_193, (MR_Integer) 0)));
#line 4123 "term.c"
                                                                                    mercury__term__TypeCtorInfo_185_185 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 653 "term.m"
                                                                                    {
#line 653 "term.m"
                                                                                      mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_185_185, ((MR_Box) (mercury__term__Int_126)));
                                                                                    }
#line 653 "term.m"
                                                                                    mercury__term__succeeded = MR_TRUE;
#line 651 "term.m"
                                                                                  }
#line 651 "term.m"
                                                                              }
#line 654 "term.m"
                                                                            else
#line 654 "term.m"
                                                                              if (((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 2))))
#line 655 "term.m"
                                                                                {
#line 655 "term.m"
                                                                                  MR_Word mercury__term__TypeCtorInfo_186_186;
#line 655 "term.m"
                                                                                  MR_String mercury__term__String_130;

#line 655 "term.m"
                                                                                  mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "string") == 0);
#line 655 "term.m"
                                                                                  if (mercury__term__succeeded)
#line 655 "term.m"
                                                                                    {
#line 656 "term.m"
                                                                                      mercury__term__String_130 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_193_193, (MR_Integer) 0)));
#line 4155 "term.c"
                                                                                      mercury__term__TypeCtorInfo_186_186 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 657 "term.m"
                                                                                      {
#line 657 "term.m"
                                                                                        mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_186_186, ((MR_Box) (mercury__term__String_130)));
                                                                                      }
#line 657 "term.m"
                                                                                      mercury__term__succeeded = MR_TRUE;
#line 655 "term.m"
                                                                                    }
#line 655 "term.m"
                                                                                }
#line 654 "term.m"
                                                                              else
#line 654 "term.m"
                                                                                if (((((MR_tag((MR_Word) mercury__term__V_193_193)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 659 "term.m"
                                                                                  {
#line 659 "term.m"
                                                                                    MR_Word mercury__term__TypeCtorInfo_187_187;
#line 659 "term.m"
                                                                                    MR_Float mercury__term__Float_133;

#line 659 "term.m"
                                                                                    mercury__term__succeeded = (strcmp(mercury__term__V_197_197, (MR_String) "float") == 0);
#line 659 "term.m"
                                                                                    if (mercury__term__succeeded)
#line 659 "term.m"
                                                                                      {
#line 660 "term.m"
                                                                                        mercury__term__Float_133 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_193_193, (MR_Integer) 1)));
#line 4187 "term.c"
                                                                                        mercury__term__TypeCtorInfo_187_187 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 661 "term.m"
                                                                                        {
#line 661 "term.m"
                                                                                          mercury__term__Univ_128 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_187_187, MR_box_float(mercury__term__Float_133));
                                                                                        }
#line 661 "term.m"
                                                                                        mercury__term__succeeded = MR_TRUE;
#line 659 "term.m"
                                                                                      }
#line 659 "term.m"
                                                                                  }
#line 654 "term.m"
                                                                                else
#line 654 "term.m"
                                                                                  mercury__term__succeeded = MR_FALSE;
#line 644 "term.m"
                                                                            if (mercury__term__succeeded)
#line 644 "term.m"
                                                                              {
#line 4208 "term.c"
                                                                                mercury__term__TypeCtorInfo_188_188 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 665 "term.m"
                                                                                {
#line 665 "term.m"
                                                                                  mercury__term__V_159_159 = mercury__univ__univ_1_f_0(mercury__term__TypeCtorInfo_188_188, ((MR_Box) (mercury__term__Univ_128)));
                                                                                }
#line 665 "term.m"
                                                                                {
#line 665 "term.m"
                                                                                  MR_Word base;
#line 665 "term.m"
                                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 665 "term.m"
                                                                                  *mercury__term__HeadVar__7_7 = base;
#line 665 "term.m"
                                                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_159_159));
#line 665 "term.m"
                                                                                }
#line 665 "term.m"
                                                                                mercury__term__succeeded = MR_TRUE;
#line 644 "term.m"
                                                                              }
#line 659 "term.m"
                                                                          }
#line 644 "term.m"
                                                                      }
#line 644 "term.m"
                                                                  }
#line 651 "term.m"
                                                              }
#line 652 "term.m"
                                                          }
#line 644 "term.m"
                                                      }
#line 649 "term.m"
                                                  }
#line 649 "term.m"
                                              }
#line 644 "term.m"
                                          }
#line 649 "term.m"
                                      }
#line 649 "term.m"
                                  }
#line 644 "term.m"
                              }
#line 648 "term.m"
                          }
#line 644 "term.m"
                      }
#line 648 "term.m"
                  }
#line 644 "term.m"
              }
#line 644 "term.m"
          }
#line 644 "term.m"
      }
#line 573 "term.m"
    else
#line 573 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 594 "term.m"
        {
#line 594 "term.m"
          MR_Word mercury__term__TypeInfo_171_171;
#line 594 "term.m"
          MR_Word mercury__term__TypeCtorInfo_172_172;
#line 594 "term.m"
          MR_Word mercury__term__TypeInfo_173_173;
#line 594 "term.m"
          MR_Word mercury__term__ElemType_51;
#line 594 "term.m"
          MR_Word mercury__term__ArgList_56;
#line 594 "term.m"
          MR_Word mercury__term__TermContext_57;
#line 594 "term.m"
          MR_Word mercury__term__ListType_59;
#line 594 "term.m"
          MR_Word mercury__term__ArgContext_60;
#line 594 "term.m"
          MR_Word mercury__term__NewContext_61;
#line 594 "term.m"
          MR_Word mercury__term__ArgResult_62;
#line 594 "term.m"
          MR_Word mercury__term__V_68_68;
#line 594 "term.m"
          MR_Word mercury__term__V_69_69;
#line 594 "term.m"
          MR_String mercury__term__V_70_70;
#line 594 "term.m"
          MR_Word mercury__term__V_71_71;
#line 594 "term.m"
          MR_Word mercury__term__V_72_72;
#line 594 "term.m"
          MR_Integer mercury__term__V_77_77;
#line 605 "term.m"
          MR_Box mercury__term__Elem_58;
#line 606 "term.m"
          MR_Word mercury__term__V_73_73;

#line 593 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 594 "term.m"
          if (mercury__term__succeeded)
#line 594 "term.m"
            {
#line 593 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 593 "term.m"
              if (mercury__term__succeeded)
#line 593 "term.m"
                {
#line 593 "term.m"
                  mercury__term__ElemType_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 593 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 593 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "term.m"
                  if (mercury__term__succeeded)
#line 594 "term.m"
                    {
#line 599 "term.m"
                      mercury__term__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 599 "term.m"
                      mercury__term__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 599 "term.m"
                      mercury__term__TermContext_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 599 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_69_69)) == (MR_mktag((MR_Integer) 0)));
#line 599 "term.m"
                      if (mercury__term__succeeded)
#line 599 "term.m"
                        {
#line 599 "term.m"
                          mercury__term__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_69_69, (MR_Integer) 0)));
#line 599 "term.m"
                          mercury__term__succeeded = (strcmp(mercury__term__V_70_70, (MR_String) "array") == 0);
#line 594 "term.m"
                          if (mercury__term__succeeded)
#line 594 "term.m"
                            {
#line 599 "term.m"
                              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 599 "term.m"
                              if (mercury__term__succeeded)
#line 599 "term.m"
                                {
#line 599 "term.m"
                                  mercury__term__ArgList_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 0)));
#line 599 "term.m"
                                  mercury__term__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_71_71, (MR_Integer) 1)));
#line 599 "term.m"
                                  mercury__term__succeeded = (mercury__term__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "term.m"
                                  if (mercury__term__succeeded)
#line 594 "term.m"
                                    {
#line 605 "term.m"
                                      {
#line 605 "term.m"
                                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_171_171, mercury__term__ElemType_51);
                                      }
#line 4373 "term.c"
                                      mercury__term__TypeCtorInfo_172_172 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4375 "term.c"
                                      {
#line 4377 "term.c"
                                        mercury__term__TypeInfo_173_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4379 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4381 "term.c"
                                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_173_173, 1) = ((MR_Box) (mercury__term__TypeInfo_171_171));
#line 4383 "term.c"
                                      }
#line 606 "term.m"
                                      {
#line 606 "term.m"
                                        mercury__term__ListType_59 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_173_173);
                                      }
#line 607 "term.m"
                                      mercury__term__V_77_77 = (MR_Integer) 1;
#line 607 "term.m"
                                      {
#line 607 "term.m"
                                        mercury__term__ArgContext_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 607 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 607 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 1) = ((MR_Box) (mercury__term__V_77_77));
#line 607 "term.m"
                                        MR_hl_field(MR_mktag(0), mercury__term__ArgContext_60, 2) = ((MR_Box) (mercury__term__TermContext_57));
#line 607 "term.m"
                                      }
#line 608 "term.m"
                                      {
#line 608 "term.m"
                                        mercury__term__NewContext_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 0) = ((MR_Box) (mercury__term__ArgContext_60));
#line 608 "term.m"
                                        MR_hl_field(MR_mktag(1), mercury__term__NewContext_61, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 608 "term.m"
                                      }
#line 609 "term.m"
                                      {
#line 609 "term.m"
                                        mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_56, mercury__term__ListType_59, mercury__term__NewContext_61, &mercury__term__ArgResult_62);
                                      }
#line 617 "term.m"
                                      if (((MR_tag((MR_Word) mercury__term__ArgResult_62)) == (MR_mktag((MR_Integer) 1))))
#line 619 "term.m"
                                        *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_62;
#line 617 "term.m"
                                      else
#line 611 "term.m"
                                        {
#line 611 "term.m"
                                          MR_Word mercury__term__TypeInfo_174_174;
#line 611 "term.m"
                                          MR_Word mercury__term__TypeInfo_175_175;
#line 611 "term.m"
                                          MR_Word mercury__term__TypeCtorInfo_176_176;
#line 611 "term.m"
                                          MR_Word mercury__term__TypeInfo_177_177;
#line 611 "term.m"
                                          MR_Word mercury__term__ListUniv_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_62, (MR_Integer) 0)));
#line 611 "term.m"
                                          MR_Word mercury__term__List_65;
#line 611 "term.m"
                                          MR_ArrayPtr mercury__term__Array_66;
#line 611 "term.m"
                                          MR_Word mercury__term__V_80_80;
#line 612 "term.m"
                                          MR_Box mercury__term__Elem2_64;
#line 614 "term.m"
                                          MR_Box mercury__term__conv0_List_65;
#line 615 "term.m"
                                          MR_ArrayPtr mercury__term__conv1_Array_66;

#line 612 "term.m"
                                          {
#line 612 "term.m"
                                            mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_174_174, mercury__term__ElemType_51);
                                          }
#line 4455 "term.c"
                                          {
#line 4457 "term.c"
                                            mercury__term__TypeInfo_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4459 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_172_172));
#line 4461 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_175_175, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4463 "term.c"
                                          }
#line 614 "term.m"
                                          {
#line 614 "term.m"
                                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_175_175, mercury__term__ListUniv_63, &mercury__term__conv0_List_65);
                                          }
#line 614 "term.m"
                                          mercury__term__List_65 = ((MR_Word) mercury__term__conv0_List_65);
#line 615 "term.m"
                                          {
#line 615 "term.m"
                                            mercury__term__conv1_Array_66 = mercury__array__array_1_f_0(mercury__term__TypeInfo_174_174, mercury__term__List_65);
                                          }
#line 615 "term.m"
                                          mercury__term__Array_66 = (MR_ArrayPtr) mercury__term__conv1_Array_66;
#line 4479 "term.c"
                                          mercury__term__TypeCtorInfo_176_176 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 4481 "term.c"
                                          {
#line 4483 "term.c"
                                            mercury__term__TypeInfo_177_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4485 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_176_176));
#line 4487 "term.c"
                                            MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_177_177, 1) = ((MR_Box) (mercury__term__TypeInfo_174_174));
#line 4489 "term.c"
                                          }
#line 616 "term.m"
                                          {
#line 616 "term.m"
                                            mercury__term__V_80_80 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_177_177, ((MR_Box) (mercury__term__Array_66)));
                                          }
#line 616 "term.m"
                                          {
#line 616 "term.m"
                                            MR_Word base;
#line 616 "term.m"
                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 616 "term.m"
                                            *mercury__term__HeadVar__7_7 = base;
#line 616 "term.m"
                                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_80_80));
#line 616 "term.m"
                                          }
#line 611 "term.m"
                                        }
#line 617 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 594 "term.m"
                                    }
#line 599 "term.m"
                                }
#line 594 "term.m"
                            }
#line 599 "term.m"
                        }
#line 594 "term.m"
                    }
#line 593 "term.m"
                }
#line 594 "term.m"
            }
#line 594 "term.m"
        }
#line 573 "term.m"
      else
#line 573 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 589 "term.m"
          {
#line 589 "term.m"
            MR_Word mercury__term__TypeCtorInfo_170_170;
#line 589 "term.m"
            MR_Word mercury__term__Univ_45;
#line 589 "term.m"
            MR_String mercury__term__String_46;
#line 589 "term.m"
            MR_Word mercury__term__V_48_48;
#line 589 "term.m"
            MR_Word mercury__term__V_49_49;
#line 589 "term.m"
            MR_Box mercury__term__V_50_50;
#line 591 "term.m"
            MR_Word mercury__term__V_47_47;

#line 588 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 589 "term.m"
            if (mercury__term__succeeded)
#line 589 "term.m"
              {
#line 588 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "term.m"
                if (mercury__term__succeeded)
#line 589 "term.m"
                  {
#line 591 "term.m"
                    mercury__term__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 591 "term.m"
                    mercury__term__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 591 "term.m"
                    mercury__term__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 591 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_48_48)) == (MR_mktag((MR_Integer) 2)));
#line 591 "term.m"
                    if (mercury__term__succeeded)
#line 591 "term.m"
                      {
#line 591 "term.m"
                        mercury__term__String_46 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_48_48, (MR_Integer) 0)));
#line 591 "term.m"
                        mercury__term__succeeded = (mercury__term__V_49_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 589 "term.m"
                        if (mercury__term__succeeded)
#line 589 "term.m"
                          {
#line 592 "term.m"
                            {
#line 592 "term.m"
                              mercury__term__succeeded = mercury__bitmap__from_string_1_f_0(mercury__term__String_46, &mercury__term__V_50_50);
                            }
#line 589 "term.m"
                            if (mercury__term__succeeded)
#line 589 "term.m"
                              {
#line 4590 "term.c"
                                mercury__term__TypeCtorInfo_170_170 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 592 "term.m"
                                {
#line 592 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_170_170, ((MR_Box) (mercury__term__V_50_50)), &mercury__term__Univ_45);
                                }
#line 589 "term.m"
                                {
#line 589 "term.m"
                                  MR_Word base;
#line 589 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 589 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 589 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_45));
#line 589 "term.m"
                                }
#line 589 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 589 "term.m"
                              }
#line 589 "term.m"
                          }
#line 591 "term.m"
                      }
#line 589 "term.m"
                  }
#line 589 "term.m"
              }
#line 589 "term.m"
          }
#line 573 "term.m"
        else
#line 573 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 573 "term.m"
            if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 578 "term.m"
              {
#line 578 "term.m"
                MR_Word mercury__term__TypeCtorInfo_167_167;
#line 578 "term.m"
                MR_Word mercury__term__Univ_21;
#line 578 "term.m"
                MR_Integer mercury__term__Int_22;
#line 578 "term.m"
                MR_Word mercury__term__V_24_24;
#line 578 "term.m"
                MR_Word mercury__term__V_25_25;
#line 579 "term.m"
                MR_Word mercury__term__V_23_23;

#line 577 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "term.m"
                if (mercury__term__succeeded)
#line 578 "term.m"
                  {
#line 579 "term.m"
                    mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 579 "term.m"
                    mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 579 "term.m"
                    mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 579 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 579 "term.m"
                    if (mercury__term__succeeded)
#line 579 "term.m"
                      {
#line 579 "term.m"
                        mercury__term__Int_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__V_24_24, (MR_Integer) 0)));
#line 579 "term.m"
                        mercury__term__succeeded = (mercury__term__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "term.m"
                        if (mercury__term__succeeded)
#line 578 "term.m"
                          {
#line 4670 "term.c"
                            mercury__term__TypeCtorInfo_167_167 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 580 "term.m"
                            {
#line 580 "term.m"
                              mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_167_167, ((MR_Box) (mercury__term__Int_22)), &mercury__term__Univ_21);
                            }
#line 578 "term.m"
                            {
#line 578 "term.m"
                              MR_Word base;
#line 578 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 578 "term.m"
                              *mercury__term__HeadVar__7_7 = base;
#line 578 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_21));
#line 578 "term.m"
                            }
#line 578 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 578 "term.m"
                          }
#line 579 "term.m"
                      }
#line 578 "term.m"
                  }
#line 578 "term.m"
              }
#line 573 "term.m"
            else
#line 573 "term.m"
              if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 585 "term.m"
                {
#line 585 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_169_169;
#line 585 "term.m"
                  MR_Word mercury__term__Univ_37;
#line 585 "term.m"
                  MR_Float mercury__term__Float_38;
#line 585 "term.m"
                  MR_Word mercury__term__V_40_40;
#line 585 "term.m"
                  MR_Word mercury__term__V_41_41;
#line 586 "term.m"
                  MR_Word mercury__term__V_39_39;

#line 585 "term.m"
                  mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "term.m"
                  if (mercury__term__succeeded)
#line 585 "term.m"
                    {
#line 586 "term.m"
                      mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 586 "term.m"
                      mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 586 "term.m"
                      mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 586 "term.m"
                      mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 586 "term.m"
                      if (mercury__term__succeeded)
#line 586 "term.m"
                        {
#line 586 "term.m"
                          mercury__term__Float_38 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__V_40_40, (MR_Integer) 1)));
#line 586 "term.m"
                          mercury__term__succeeded = (mercury__term__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 585 "term.m"
                          if (mercury__term__succeeded)
#line 585 "term.m"
                            {
#line 4744 "term.c"
                              mercury__term__TypeCtorInfo_169_169 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 587 "term.m"
                              {
#line 587 "term.m"
                                mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_169_169, MR_box_float(mercury__term__Float_38), &mercury__term__Univ_37);
                              }
#line 585 "term.m"
                              {
#line 585 "term.m"
                                MR_Word base;
#line 585 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 585 "term.m"
                                *mercury__term__HeadVar__7_7 = base;
#line 585 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_37));
#line 585 "term.m"
                              }
#line 585 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 585 "term.m"
                            }
#line 586 "term.m"
                        }
#line 585 "term.m"
                    }
#line 585 "term.m"
                }
#line 573 "term.m"
              else
#line 573 "term.m"
                if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 582 "term.m"
                  {
#line 582 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_168_168;
#line 582 "term.m"
                    MR_Word mercury__term__Univ_29;
#line 582 "term.m"
                    MR_String mercury__term__String_30;
#line 582 "term.m"
                    MR_Word mercury__term__V_32_32;
#line 582 "term.m"
                    MR_Word mercury__term__V_33_33;
#line 583 "term.m"
                    MR_Word mercury__term__V_31_31;

#line 581 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "term.m"
                    if (mercury__term__succeeded)
#line 582 "term.m"
                      {
#line 583 "term.m"
                        mercury__term__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 583 "term.m"
                        mercury__term__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 583 "term.m"
                        mercury__term__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 583 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 583 "term.m"
                        if (mercury__term__succeeded)
#line 583 "term.m"
                          {
#line 583 "term.m"
                            mercury__term__String_30 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__V_32_32, (MR_Integer) 0)));
#line 583 "term.m"
                            mercury__term__succeeded = (mercury__term__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "term.m"
                            if (mercury__term__succeeded)
#line 582 "term.m"
                              {
#line 4818 "term.c"
                                mercury__term__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 584 "term.m"
                                {
#line 584 "term.m"
                                  mercury__univ__type_to_univ_2_p_1(mercury__term__TypeCtorInfo_168_168, ((MR_Box) (mercury__term__String_30)), &mercury__term__Univ_29);
                                }
#line 582 "term.m"
                                {
#line 582 "term.m"
                                  MR_Word base;
#line 582 "term.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 582 "term.m"
                                  *mercury__term__HeadVar__7_7 = base;
#line 582 "term.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_29));
#line 582 "term.m"
                                }
#line 582 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 582 "term.m"
                              }
#line 583 "term.m"
                          }
#line 582 "term.m"
                      }
#line 582 "term.m"
                  }
#line 573 "term.m"
                else
#line 573 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 573 "term.m"
                    {
#line 573 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_166_166;
#line 573 "term.m"
                      MR_Word mercury__term__Univ_11;
#line 573 "term.m"
                      MR_String mercury__term__FunctorName_12;
#line 573 "term.m"
                      MR_Char mercury__term__Char_14;
#line 573 "term.m"
                      MR_Word mercury__term__V_15_15;
#line 573 "term.m"
                      MR_Word mercury__term__V_16_16;
#line 573 "term.m"
                      MR_String mercury__term__V_17_17;
#line 574 "term.m"
                      MR_Word mercury__term__V_13_13;

#line 573 "term.m"
                      mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "term.m"
                      if (mercury__term__succeeded)
#line 573 "term.m"
                        {
#line 574 "term.m"
                          mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 574 "term.m"
                          mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 574 "term.m"
                          mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 574 "term.m"
                          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 574 "term.m"
                          if (mercury__term__succeeded)
#line 574 "term.m"
                            {
#line 574 "term.m"
                              mercury__term__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_15_15, (MR_Integer) 0)));
#line 574 "term.m"
                              mercury__term__succeeded = (mercury__term__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "term.m"
                              if (mercury__term__succeeded)
#line 573 "term.m"
                                {
#line 575 "term.m"
                                  mercury__term__V_17_17 = (MR_String) "";
#line 575 "term.m"
                                  {
#line 575 "term.m"
                                    mercury__term__succeeded = mercury__string__first_char_3_p_1(mercury__term__FunctorName_12, &mercury__term__Char_14, mercury__term__V_17_17);
                                  }
#line 573 "term.m"
                                  if (mercury__term__succeeded)
#line 573 "term.m"
                                    {
#line 4907 "term.c"
                                      mercury__term__TypeCtorInfo_166_166 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 576 "term.m"
                                      {
#line 576 "term.m"
                                        mercury__univ__type_to_univ_2_p_0(mercury__term__TypeCtorInfo_166_166, ((MR_Box) (MR_Word) (mercury__term__Char_14)), &mercury__term__Univ_11);
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
                                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Univ_11));
#line 573 "term.m"
                                      }
#line 573 "term.m"
                                      mercury__term__succeeded = MR_TRUE;
#line 573 "term.m"
                                    }
#line 573 "term.m"
                                }
#line 574 "term.m"
                            }
#line 573 "term.m"
                        }
#line 573 "term.m"
                    }
#line 573 "term.m"
                  else
#line 573 "term.m"
                    mercury__term__succeeded = MR_FALSE;
#line 573 "term.m"
          else
#line 573 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 622 "term.m"
              {
#line 622 "term.m"
                MR_Word mercury__term__TypeInfo_178_178;
#line 622 "term.m"
                MR_Word mercury__term__TypeCtorInfo_179_179;
#line 622 "term.m"
                MR_Word mercury__term__TypeInfo_180_180;
#line 622 "term.m"
                MR_Word mercury__term__ElemType_81;
#line 622 "term.m"
                MR_Word mercury__term__ArgList_86;
#line 622 "term.m"
                MR_Word mercury__term__TermContext_87;
#line 622 "term.m"
                MR_Word mercury__term__ListType_89;
#line 622 "term.m"
                MR_Word mercury__term__ArgContext_90;
#line 622 "term.m"
                MR_Word mercury__term__NewContext_91;
#line 622 "term.m"
                MR_Word mercury__term__ArgResult_92;
#line 622 "term.m"
                MR_Word mercury__term__V_98_98;
#line 622 "term.m"
                MR_Word mercury__term__V_99_99;
#line 622 "term.m"
                MR_String mercury__term__V_100_100;
#line 622 "term.m"
                MR_Word mercury__term__V_101_101;
#line 622 "term.m"
                MR_Word mercury__term__V_102_102;
#line 622 "term.m"
                MR_Integer mercury__term__V_107_107;
#line 626 "term.m"
                MR_Box mercury__term__Elem_88;
#line 627 "term.m"
                MR_Word mercury__term__V_103_103;

#line 621 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 622 "term.m"
                if (mercury__term__succeeded)
#line 622 "term.m"
                  {
#line 621 "term.m"
                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 621 "term.m"
                    if (mercury__term__succeeded)
#line 621 "term.m"
                      {
#line 621 "term.m"
                        mercury__term__ElemType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 621 "term.m"
                        mercury__term__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 621 "term.m"
                        mercury__term__succeeded = (mercury__term__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "term.m"
                        if (mercury__term__succeeded)
#line 622 "term.m"
                          {
#line 625 "term.m"
                            mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 625 "term.m"
                            mercury__term__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 625 "term.m"
                            mercury__term__TermContext_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));
#line 625 "term.m"
                            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_99_99)) == (MR_mktag((MR_Integer) 0)));
#line 625 "term.m"
                            if (mercury__term__succeeded)
#line 625 "term.m"
                              {
#line 625 "term.m"
                                mercury__term__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__V_99_99, (MR_Integer) 0)));
#line 625 "term.m"
                                mercury__term__succeeded = (strcmp(mercury__term__V_100_100, (MR_String) "version_array") == 0);
#line 622 "term.m"
                                if (mercury__term__succeeded)
#line 622 "term.m"
                                  {
#line 625 "term.m"
                                    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 625 "term.m"
                                    if (mercury__term__succeeded)
#line 625 "term.m"
                                      {
#line 625 "term.m"
                                        mercury__term__ArgList_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 0)));
#line 625 "term.m"
                                        mercury__term__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_101_101, (MR_Integer) 1)));
#line 625 "term.m"
                                        mercury__term__succeeded = (mercury__term__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "term.m"
                                        if (mercury__term__succeeded)
#line 622 "term.m"
                                          {
#line 626 "term.m"
                                            {
#line 626 "term.m"
                                              mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_178_178, mercury__term__ElemType_81);
                                            }
#line 5048 "term.c"
                                            mercury__term__TypeCtorInfo_179_179 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 5050 "term.c"
                                            {
#line 5052 "term.c"
                                              mercury__term__TypeInfo_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5054 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 5056 "term.c"
                                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_180_180, 1) = ((MR_Box) (mercury__term__TypeInfo_178_178));
#line 5058 "term.c"
                                            }
#line 627 "term.m"
                                            {
#line 627 "term.m"
                                              mercury__term__ListType_89 = mercury__type_desc__type_of_1_f_0(mercury__term__TypeInfo_180_180);
                                            }
#line 628 "term.m"
                                            mercury__term__V_107_107 = (MR_Integer) 1;
#line 628 "term.m"
                                            {
#line 628 "term.m"
                                              mercury__term__ArgContext_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 628 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 0) = ((MR_Box) (mercury__term__V_99_99));
#line 628 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 1) = ((MR_Box) (mercury__term__V_107_107));
#line 628 "term.m"
                                              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_90, 2) = ((MR_Box) (mercury__term__TermContext_87));
#line 628 "term.m"
                                            }
#line 629 "term.m"
                                            {
#line 629 "term.m"
                                              mercury__term__NewContext_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 0) = ((MR_Box) (mercury__term__ArgContext_90));
#line 629 "term.m"
                                              MR_hl_field(MR_mktag(1), mercury__term__NewContext_91, 1) = ((MR_Box) (mercury__term__HeadVar__6_6));
#line 629 "term.m"
                                            }
#line 630 "term.m"
                                            {
#line 630 "term.m"
                                              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_165, mercury__term__ArgList_86, mercury__term__ListType_89, mercury__term__NewContext_91, &mercury__term__ArgResult_92);
                                            }
#line 638 "term.m"
                                            if (((MR_tag((MR_Word) mercury__term__ArgResult_92)) == (MR_mktag((MR_Integer) 1))))
#line 640 "term.m"
                                              *mercury__term__HeadVar__7_7 = mercury__term__ArgResult_92;
#line 638 "term.m"
                                            else
#line 632 "term.m"
                                              {
#line 632 "term.m"
                                                MR_Word mercury__term__TypeInfo_181_181;
#line 632 "term.m"
                                                MR_Word mercury__term__TypeInfo_182_182;
#line 632 "term.m"
                                                MR_Word mercury__term__TypeCtorInfo_183_183;
#line 632 "term.m"
                                                MR_Word mercury__term__TypeInfo_184_184;
#line 632 "term.m"
                                                MR_Word mercury__term__ListUniv_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_92, (MR_Integer) 0)));
#line 632 "term.m"
                                                MR_Word mercury__term__List_95;
#line 632 "term.m"
                                                MR_Box mercury__term__Array_96;
#line 632 "term.m"
                                                MR_Word mercury__term__V_110_110;
#line 633 "term.m"
                                                MR_Box mercury__term__Elem2_94;
#line 635 "term.m"
                                                MR_Box mercury__term__conv2_List_95;

#line 633 "term.m"
                                                {
#line 633 "term.m"
                                                  mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_181_181, mercury__term__ElemType_81);
                                                }
#line 5128 "term.c"
                                                {
#line 5130 "term.c"
                                                  mercury__term__TypeInfo_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5132 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_179_179));
#line 5134 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_182_182, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 5136 "term.c"
                                                }
#line 635 "term.m"
                                                {
#line 635 "term.m"
                                                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_182_182, mercury__term__ListUniv_93, &mercury__term__conv2_List_95);
                                                }
#line 635 "term.m"
                                                mercury__term__List_95 = ((MR_Word) mercury__term__conv2_List_95);
#line 636 "term.m"
                                                {
#line 636 "term.m"
                                                  mercury__term__Array_96 = mercury__version_array__version_array_1_f_0(mercury__term__TypeInfo_181_181, mercury__term__List_95);
                                                }
#line 5150 "term.c"
                                                mercury__term__TypeCtorInfo_183_183 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 5152 "term.c"
                                                {
#line 5154 "term.c"
                                                  mercury__term__TypeInfo_184_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5156 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_183_183));
#line 5158 "term.c"
                                                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_184_184, 1) = ((MR_Box) (mercury__term__TypeInfo_181_181));
#line 5160 "term.c"
                                                }
#line 637 "term.m"
                                                {
#line 637 "term.m"
                                                  mercury__term__V_110_110 = mercury__univ__univ_1_f_0(mercury__term__TypeInfo_184_184, ((MR_Box) (mercury__term__Array_96)));
                                                }
#line 637 "term.m"
                                                {
#line 637 "term.m"
                                                  MR_Word base;
#line 637 "term.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 637 "term.m"
                                                  *mercury__term__HeadVar__7_7 = base;
#line 637 "term.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_110_110));
#line 637 "term.m"
                                                }
#line 632 "term.m"
                                              }
#line 638 "term.m"
                                            mercury__term__succeeded = MR_TRUE;
#line 622 "term.m"
                                          }
#line 625 "term.m"
                                      }
#line 622 "term.m"
                                  }
#line 625 "term.m"
                              }
#line 622 "term.m"
                          }
#line 621 "term.m"
                      }
#line 622 "term.m"
                  }
#line 622 "term.m"
              }
#line 573 "term.m"
            else
#line 573 "term.m"
              mercury__term__succeeded = MR_FALSE;
#line 573 "term.m"
    return mercury__term__succeeded;
#line 573 "term.m"
  }
#line 567 "term.m"
}

#line 439 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
#line 439 "term.m"
{
#line 1255 "term.m"
  {
#line 1255 "term.m"
    MR_bool mercury__term__succeeded;

#line 1255 "term.m"
  }
#line 439 "term.m"
}

#line 1158 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 1158 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1158 "term.m"
  MR_Integer mercury__term__X_4,
#line 1158 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 1158 "term.m"
{
#line 1167 "term.m"
  {
#line 1167 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 1167 "term.m"
    return MR_TRUE;
#line 1167 "term.m"
  }
#line 1158 "term.m"
}

#line 1157 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 1157 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 1157 "term.m"
  MR_Word mercury__term__X_4)
#line 1157 "term.m"
{
#line 1161 "term.m"
  {
#line 1161 "term.m"
    MR_bool mercury__term__succeeded;
#line 1161 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 1161 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1161 "term.m"
  }
#line 1157 "term.m"
}

#line 490 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 490 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 490 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 490 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 490 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 490 "term.m"
{
#line 490 "term.m"
  {
#line 490 "term.m"
    MR_bool mercury__term__succeeded;
#line 490 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 490 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 490 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 490 "term.m"
    if (mercury__term__succeeded)
#line 5296 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 490 "term.m"
    else
#line 490 "term.m"
      {
#line 490 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 490 "term.m"
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
#line 490 "term.m"
      }
#line 490 "term.m"
  }
#line 490 "term.m"
}

#line 490 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 490 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 490 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 490 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 490 "term.m"
{
#line 490 "term.m"
  {
#line 490 "term.m"
    MR_bool mercury__term__succeeded;
#line 490 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 490 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 490 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 490 "term.m"
    if (mercury__term__succeeded)
#line 490 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 490 "term.m"
    else
#line 490 "term.m"
      {
#line 490 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 490 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5371 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 490 "term.m"
      }
#line 490 "term.m"
    return mercury__term__succeeded;
#line 490 "term.m"
  }
#line 490 "term.m"
}

#line 493 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 493 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 493 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 493 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 493 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 493 "term.m"
{
#line 493 "term.m"
  {
#line 493 "term.m"
    MR_bool mercury__term__succeeded;
#line 493 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 493 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 493 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 493 "term.m"
    if (mercury__term__succeeded)
#line 5408 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 493 "term.m"
    else
#line 493 "term.m"
      {
#line 493 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 493 "term.m"
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
#line 493 "term.m"
      }
#line 493 "term.m"
  }
#line 493 "term.m"
}

#line 493 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 493 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 493 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 493 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 493 "term.m"
{
#line 493 "term.m"
  {
#line 493 "term.m"
    MR_bool mercury__term__succeeded;
#line 493 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 493 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 493 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 493 "term.m"
    if (mercury__term__succeeded)
#line 493 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
    else
#line 493 "term.m"
      {
#line 493 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 493 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 5483 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 493 "term.m"
      }
#line 493 "term.m"
    return mercury__term__succeeded;
#line 493 "term.m"
  }
#line 493 "term.m"
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
#line 493 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 493 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 493 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 493 "term.m"
    if (mercury__term__succeeded)
#line 493 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
    else
#line 493 "term.m"
      {
#line 493 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 493 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 5565 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 493 "term.m"
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
#line 5604 "term.c"
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
#line 5633 "term.c"
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
#line 5646 "term.c"
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
#line 5718 "term.c"
              {
#line 5720 "term.c"
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
#line 5744 "term.c"
              {
#line 5746 "term.c"
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
#line 5856 "term.c"
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
#line 5906 "term.c"
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
#line 5934 "term.c"
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
#line 5953 "term.c"
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
#line 5975 "term.c"
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
#line 5995 "term.c"
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
#line 6015 "term.c"
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
#line 493 "term.m"
          MR_Integer mercury__term__CastX_23;
#line 493 "term.m"
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
#line 493 "term.m"
              mercury__term__CastX_23 = (MR_Integer) mercury__term__V_11_11;
#line 493 "term.m"
              mercury__term__CastY_24 = (MR_Integer) mercury__term__V_13_13;
#line 493 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_23 == mercury__term__CastY_24);
#line 493 "term.m"
              if (mercury__term__succeeded)
#line 493 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
              else
#line 493 "term.m"
                {
#line 493 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;
#line 493 "term.m"
                  MR_Integer mercury__term__V_22_22 = (MR_Integer) mercury__term__V_13_13;

#line 6128 "term.c"
                  mercury__term__succeeded = (mercury__term__V_21_21 == mercury__term__V_22_22);
#line 493 "term.m"
                }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 6136 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 6138 "term.c"
                  {
#line 6140 "term.c"
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
#line 6186 "term.c"
              {
#line 6188 "term.c"
                mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeInfo_for_T_17, mercury__term__V_3_3, mercury__term__V_7_7);
              }
#line 93 "term.m"
              if (mercury__term__succeeded)
#line 93 "term.m"
                {
#line 6195 "term.c"
                  {
#line 6197 "term.c"
                    mercury__term__succeeded = mercury__type_desc____Unify____type_desc_0_0(mercury__term__V_4_4, mercury__term__V_8_8);
                  }
#line 93 "term.m"
                  if (mercury__term__succeeded)
#line 93 "term.m"
                    {
#line 6204 "term.c"
                      {
#line 6206 "term.c"
                        mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_9_9);
                      }
#line 93 "term.m"
                      if (mercury__term__succeeded)
#line 93 "term.m"
                        {
#line 6213 "term.c"
                          mercury__term__TypeInfo_20_20 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 6215 "term.c"
                          {
#line 6217 "term.c"
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
#line 6327 "term.c"
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
#line 6353 "term.c"
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
#line 6390 "term.c"
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

#line 6457 "term.c"
        {
#line 6459 "term.c"
          mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
        }
#line 107 "term.m"
        if (mercury__term__succeeded)
#line 107 "term.m"
          {
#line 6466 "term.c"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_7_7);
#line 107 "term.m"
            if (mercury__term__succeeded)
#line 6470 "term.c"
              {
#line 6472 "term.c"
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
#line 6512 "term.c"
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
#line 6545 "term.c"
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

#line 6564 "term.c"
                  {
#line 6566 "term.c"
                    mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6568 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 6570 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 6572 "term.c"
                  }
#line 32 "term.m"
                  {
#line 32 "term.m"
                    mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                  }
#line 6579 "term.c"
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
#line 6602 "term.c"
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
#line 6617 "term.c"
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
#line 6656 "term.c"
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
#line 6743 "term.c"
              {
#line 6745 "term.c"
                mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
              }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 32 "term.m"
                {
#line 6752 "term.c"
                  mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6754 "term.c"
                  {
#line 6756 "term.c"
                    mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6758 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 6760 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 6762 "term.c"
                  }
#line 6764 "term.c"
                  {
#line 6766 "term.c"
                    mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                  }
#line 32 "term.m"
                  if (mercury__term__succeeded)
#line 6771 "term.c"
                    {
#line 6773 "term.c"
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
#line 493 "term.m"
          MR_Integer mercury__term__CastX_22;
#line 493 "term.m"
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
#line 493 "term.m"
              mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 493 "term.m"
              mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 493 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 493 "term.m"
              if (mercury__term__succeeded)
#line 493 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
              else
#line 493 "term.m"
                {
#line 493 "term.m"
                  MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 493 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 6828 "term.c"
                  mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 493 "term.m"
                }
#line 32 "term.m"
              if (mercury__term__succeeded)
#line 6834 "term.c"
                {
#line 6836 "term.c"
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

#line 6946 "term.c"
    {
#line 6948 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6950 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 6952 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6954 "term.c"
    }
#line 6956 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 6958 "term.c"
    {
#line 6960 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6962 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 6964 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 6966 "term.c"
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

#line 7008 "term.c"
    {
#line 7010 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7012 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 7014 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7016 "term.c"
    }
#line 7018 "term.c"
    {
#line 7020 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7022 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 7024 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7026 "term.c"
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

#line 7132 "term.c"
    {
#line 7134 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7136 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 7138 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 7140 "term.c"
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

#line 7178 "term.c"
    {
#line 7180 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7182 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 7184 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 7186 "term.c"
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
#line 7336 "term.c"
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

#line 7370 "term.c"

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
#line 7399 "term.c"
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

#line 7479 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 50 "term.m"
        if (mercury__term__succeeded)
#line 7483 "term.c"
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
#line 7518 "term.c"
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

#line 7553 "term.c"

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
#line 7588 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
            else
#line 43 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7594 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7600 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 7604 "term.c"
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
#line 7619 "term.c"
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
#line 7658 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7664 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                  else
#line 7668 "term.c"
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
#line 7683 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
              else
#line 43 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7689 "term.c"
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

#line 7717 "term.c"

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
#line 7752 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "term.m"
                    else
#line 7756 "term.c"
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
#line 7771 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7777 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7783 "term.c"
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
#line 7820 "term.c"
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
#line 7833 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                else
#line 43 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7839 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                  else
#line 43 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7845 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "term.m"
                    else
#line 43 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7851 "term.c"
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

#line 7877 "term.c"

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
#line 7958 "term.c"
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
#line 7983 "term.c"
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
#line 8008 "term.c"
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
#line 8033 "term.c"
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
#line 8056 "term.c"
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

#line 1246 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 1246 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 1246 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 1246 "term.m"
{
#line 1248 "term.m"
  while (MR_TRUE)
#line 1248 "term.m"
    {
#line 1248 "term.m"
      /* tailcall optimized into a loop */
#line 1248 "term.m"
      {
#line 1248 "term.m"
        MR_bool mercury__term__succeeded;

#line 1248 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1248 "term.m"
        else
#line 1249 "term.m"
          {
#line 1249 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1249 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1249 "term.m"
            MR_Word mercury__term__Args_6;
#line 1243 "term.m"
            MR_Word mercury__term__V_5_5;
#line 1243 "term.m"
            MR_Word mercury__term__V_7_7;

#line 1243 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 1243 "term.m"
            if (mercury__term__succeeded)
#line 1243 "term.m"
              {
#line 1243 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 1243 "term.m"
                mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 1243 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 1244 "term.m"
                {
#line 1244 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__Args_6);
                }
#line 1249 "term.m"
                if (mercury__term__succeeded)
#line 1251 "term.m"
                  {
#line 1251 "term.m"
                    /* direct tailcall eliminated */
#line 1251 "term.m"
                    {
#line 1251 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 1251 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1251 "term.m"
                    }
#line 1251 "term.m"
                    continue;
#line 1251 "term.m"
                  }
#line 1243 "term.m"
              }
#line 1249 "term.m"
          }
#line 1248 "term.m"
        return mercury__term__succeeded;
#line 1248 "term.m"
      }
#line 1248 "term.m"
      break;
#line 1248 "term.m"
    }
#line 1246 "term.m"
}

#line 1233 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1233 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1233 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1233 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 1233 "term.m"
{
#line 1236 "term.m"
  while (MR_TRUE)
#line 1236 "term.m"
    {
#line 1236 "term.m"
      /* tailcall optimized into a loop */
#line 1236 "term.m"
      {
#line 1236 "term.m"
        MR_bool mercury__term__succeeded;

#line 1236 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1236 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1236 "term.m"
        else
#line 1237 "term.m"
          {
#line 1237 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1237 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1238 "term.m"
            {
#line 1238 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 1237 "term.m"
            if (mercury__term__succeeded)
#line 1239 "term.m"
              {
#line 1239 "term.m"
                /* direct tailcall eliminated */
#line 1239 "term.m"
                {
#line 1239 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1239 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1239 "term.m"
                }
#line 1239 "term.m"
                continue;
#line 1239 "term.m"
              }
#line 1237 "term.m"
          }
#line 1236 "term.m"
        return mercury__term__succeeded;
#line 1236 "term.m"
      }
#line 1236 "term.m"
      break;
#line 1236 "term.m"
    }
#line 1233 "term.m"
}

#line 1075 "term.m"
MR_bool MR_CALL 
mercury__term__substitute_corresponding_2_4_p_0(
#line 1075 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 1075 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1075 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1075 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1075 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1075 "term.m"
{
#line 1078 "term.m"
  while (MR_TRUE)
#line 1078 "term.m"
    {
#line 1078 "term.m"
      /* tailcall optimized into a loop */
#line 1078 "term.m"
      {
#line 1078 "term.m"
        MR_bool mercury__term__succeeded;

#line 1078 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "term.m"
          {
#line 1078 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1078 "term.m"
            if (mercury__term__succeeded)
#line 1078 "term.m"
              {
#line 1078 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1078 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1078 "term.m"
              }
#line 1078 "term.m"
          }
#line 1078 "term.m"
        else
#line 1079 "term.m"
          {
#line 1079 "term.m"
            MR_Word mercury__term__TypeCtorInfo_18_18;
#line 1079 "term.m"
            MR_Word mercury__term__TypeInfo_19_19;
#line 1079 "term.m"
            MR_Word mercury__term__TypeCtorInfo_20_20;
#line 1079 "term.m"
            MR_Word mercury__term__TypeInfo_21_21;
#line 1079 "term.m"
            MR_Word mercury__term__S_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1079 "term.m"
            MR_Word mercury__term__Ss_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1079 "term.m"
            MR_Word mercury__term__R_10;
#line 1079 "term.m"
            MR_Word mercury__term__Rs_11;
#line 1079 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;
#line 117 "map.opt"
            MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_15_15;

#line 1079 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "term.m"
            if (mercury__term__succeeded)
#line 1079 "term.m"
              {
#line 1079 "term.m"
                mercury__term__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1079 "term.m"
                mercury__term__Rs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 8310 "term.c"
                mercury__term__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8312 "term.c"
                mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 8314 "term.c"
                {
#line 8316 "term.c"
                  mercury__term__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8318 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_18_18));
#line 8320 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_17));
#line 8322 "term.c"
                }
#line 8324 "term.c"
                {
#line 8326 "term.c"
                  mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8328 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 8330 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_17));
#line 8332 "term.c"
                }
#line 117 "map.opt"
                {
#line 117 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TypeInfo_19_19, mercury__term__TypeInfo_21_21, mercury__term__S_8, ((MR_Box) (mercury__term__R_10)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_15_15);
                }
#line 117 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_15_15 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_15_15;
#line 1081 "term.m"
                {
#line 1081 "term.m"
                  /* direct tailcall eliminated */
#line 1081 "term.m"
                  {
#line 1081 "term.m"
                    MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Ss_9;
#line 1081 "term.m"
                    MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Rs_11;
#line 1081 "term.m"
                    MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 1081 "term.m"
                    mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1081 "term.m"
                    mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1081 "term.m"
                    mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1081 "term.m"
                  }
#line 1081 "term.m"
                  continue;
#line 1081 "term.m"
                }
#line 1079 "term.m"
              }
#line 1079 "term.m"
          }
#line 1078 "term.m"
        return mercury__term__succeeded;
#line 1078 "term.m"
      }
#line 1078 "term.m"
      break;
#line 1078 "term.m"
    }
#line 1075 "term.m"
}

#line 1000 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 1000 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 1000 "term.m"
  MR_Word mercury__term__Var_6,
#line 1000 "term.m"
  MR_Word mercury__term__BoundVar_7,
#line 1000 "term.m"
  MR_Word mercury__term__BoundVars_8,
#line 1000 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_13,
#line 1000 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_14)
#line 1000 "term.m"
{
#line 1007 "term.m"
  while (MR_TRUE)
#line 1007 "term.m"
    {
#line 1007 "term.m"
      /* tailcall optimized into a loop */
#line 1007 "term.m"
      {
#line 1007 "term.m"
        MR_bool mercury__term__succeeded;
#line 1007 "term.m"
        MR_Word mercury__term__BindingOfVar_10;
#line 1004 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1004 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 1004 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1004 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_BindingOfVar_10;

#line 8421 "term.c"
        {
#line 8423 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8425 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 8427 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8429 "term.c"
        }
#line 8431 "term.c"
        {
#line 8433 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8435 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 8437 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8439 "term.c"
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
#line 1007 "term.m"
        if (mercury__term__succeeded)
#line 1005 "term.m"
          {
#line 1005 "term.m"
            MR_Word mercury__term__Var2_11;
#line 1005 "term.m"
            MR_Word mercury__term__V_12_12;

#line 1005 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__BindingOfVar_10)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "term.m"
            if (mercury__term__succeeded)
#line 1005 "term.m"
              {
#line 1005 "term.m"
                mercury__term__Var2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__BindingOfVar_10, (MR_Integer) 0)));
#line 1005 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__BindingOfVar_10, (MR_Integer) 1)));
#line 1006 "term.m"
                /* direct tailcall eliminated */
#line 1006 "term.m"
                {
#line 1006 "term.m"
                  MR_Word mercury__term__Var__tmp_copy_6 = mercury__term__Var2_11;

#line 1006 "term.m"
                  mercury__term__Var_6 = mercury__term__Var__tmp_copy_6;
#line 1006 "term.m"
                }
#line 1006 "term.m"
                continue;
#line 1005 "term.m"
              }
#line 1005 "term.m"
          }
#line 1007 "term.m"
        else
#line 1010 "term.m"
          {
#line 493 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__Var_6;
#line 493 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundVar_7;

#line 493 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 493 "term.m"
            if (mercury__term__succeeded)
#line 493 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
            else
#line 493 "term.m"
              {
#line 493 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__Var_6;
#line 493 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundVar_7;

#line 8516 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 493 "term.m"
              }
#line 1010 "term.m"
            if (mercury__term__succeeded)
#line 1008 "term.m"
              {
#line 1008 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_14 = mercury__term__STATE_VARIABLE_Bindings_0_13;
#line 1008 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1008 "term.m"
              }
#line 1010 "term.m"
            else
#line 1011 "term.m"
              {
#line 1011 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 1011 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 1011 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 1011 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 1011 "term.m"
                MR_Word mercury__term__V_16_16;
#line 1011 "term.m"
                MR_Word mercury__term__V_18_18;
#line 1011 "term.m"
                MR_String mercury__term__V_39_39;
#line 1011 "term.m"
                MR_Integer mercury__term__V_40_40;
#line 1012 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_14;

#line 1011 "term.m"
                {
#line 1011 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__Var_6, mercury__term__BoundVars_8);
                }
#line 1011 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 1011 "term.m"
                if (mercury__term__succeeded)
#line 1011 "term.m"
                  {
#line 855 "term.m"
                    mercury__term__V_39_39 = (MR_String) "";
#line 855 "term.m"
                    mercury__term__V_40_40 = (MR_Integer) 0;
#line 8568 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 8570 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 855 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 1012 "term.m"
                    {
#line 1012 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundVar_7));
#line 1012 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 1012 "term.m"
                    }
#line 8584 "term.c"
                    {
#line 8586 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8588 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 8590 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8592 "term.c"
                    }
#line 8594 "term.c"
                    {
#line 8596 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8598 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 8600 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 8602 "term.c"
                    }
#line 1012 "term.m"
                    {
#line 1012 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__Var_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_13, &mercury__term__conv1_STATE_VARIABLE_Bindings_14);
                    }
#line 1012 "term.m"
                    *mercury__term__STATE_VARIABLE_Bindings_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_14;
#line 1012 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 1011 "term.m"
                  }
#line 1011 "term.m"
              }
#line 1010 "term.m"
          }
#line 1007 "term.m"
        return mercury__term__succeeded;
#line 1007 "term.m"
      }
#line 1007 "term.m"
      break;
#line 1007 "term.m"
    }
#line 1000 "term.m"
}

#line 832 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 832 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 832 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 832 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 832 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 832 "term.m"
{
#line 835 "term.m"
  while (MR_TRUE)
#line 835 "term.m"
    {
#line 835 "term.m"
      /* tailcall optimized into a loop */
#line 835 "term.m"
      {
#line 835 "term.m"
        MR_bool mercury__term__succeeded;

#line 835 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 835 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 835 "term.m"
        else
#line 836 "term.m"
          {
#line 836 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 836 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 837 "term.m"
            {
#line 837 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 827 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 829 "term.m"
              {
#line 829 "term.m"
                MR_Word mercury__term__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 829 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 829 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 830 "term.m"
                /* direct tailcall eliminated */
#line 830 "term.m"
                {
#line 830 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Args_22;
#line 830 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 830 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 830 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 830 "term.m"
                }
#line 830 "term.m"
                continue;
#line 829 "term.m"
              }
#line 827 "term.m"
            else
#line 827 "term.m"
              {
#line 827 "term.m"
                MR_Word mercury__term__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 827 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 828 "term.m"
                {
#line 828 "term.m"
                  MR_Word base;
#line 828 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 828 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_15));
#line 828 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 828 "term.m"
                }
#line 827 "term.m"
              }
#line 836 "term.m"
          }
#line 835 "term.m"
      }
#line 835 "term.m"
      break;
#line 835 "term.m"
    }
#line 832 "term.m"
}

#line 790 "term.m"
static void MR_CALL 
mercury__term__univ_list_to_term_list_2_p_0(
#line 790 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 790 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 790 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 790 "term.m"
{
#line 792 "term.m"
  {
#line 792 "term.m"
    MR_bool mercury__term__succeeded;

#line 792 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 792 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "term.m"
    else
#line 793 "term.m"
      {
#line 793 "term.m"
        MR_Word mercury__term__Value_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 793 "term.m"
        MR_Word mercury__term__Values_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 793 "term.m"
        MR_Word mercury__term__Term_5;
#line 793 "term.m"
        MR_Word mercury__term__Terms_6;

#line 794 "term.m"
        {
#line 794 "term.m"
          mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Value_3, &mercury__term__Term_5);
        }
#line 795 "term.m"
        {
#line 795 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Values_4, &mercury__term__Terms_6);
        }
#line 793 "term.m"
        {
#line 793 "term.m"
          MR_Word base;
#line 793 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 793 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_5));
#line 793 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_6));
#line 793 "term.m"
        }
#line 793 "term.m"
      }
#line 792 "term.m"
  }
#line 790 "term.m"
}

#line 740 "term.m"
static MR_bool MR_CALL 
mercury__term__univ_to_term_special_case_6_p_0(
#line 740 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_90,
#line 740 "term.m"
  MR_String mercury__term__HeadVar__1_1,
#line 740 "term.m"
  MR_String mercury__term__HeadVar__2_2,
#line 740 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 740 "term.m"
  MR_Word mercury__term__Univ_4,
#line 740 "term.m"
  MR_Word mercury__term__Context_5,
#line 740 "term.m"
  MR_Word * mercury__term__HeadVar__6_6)
#line 740 "term.m"
{
#line 745 "term.m"
  {
#line 745 "term.m"
    MR_bool mercury__term__succeeded;

#line 745 "term.m"
    if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "univ") == 0))
#line 761 "term.m"
      {
#line 761 "term.m"
        MR_Word mercury__term__TypeCtorInfo_96_96;
#line 761 "term.m"
        MR_Word mercury__term__TypeInfo_97_97;
#line 761 "term.m"
        MR_Word mercury__term__NestedUniv_39;
#line 761 "term.m"
        MR_Word mercury__term__ValueTerm_40;
#line 761 "term.m"
        MR_Word mercury__term__TypeTerm_41;
#line 761 "term.m"
        MR_Box mercury__term__NestedUnivValue_42;
#line 761 "term.m"
        MR_Word mercury__term__V_43_43;
#line 761 "term.m"
        MR_String mercury__term__V_44_44;
#line 761 "term.m"
        MR_Word mercury__term__V_45_45;
#line 761 "term.m"
        MR_Word mercury__term__V_46_46;
#line 761 "term.m"
        MR_Word mercury__term__V_47_47;
#line 761 "term.m"
        MR_String mercury__term__V_48_48;
#line 761 "term.m"
        MR_Word mercury__term__V_49_49;
#line 761 "term.m"
        MR_Word mercury__term__V_50_50;
#line 761 "term.m"
        MR_Word mercury__term__V_51_51;
#line 761 "term.m"
        MR_Word mercury__term__V_52_52;
#line 761 "term.m"
        MR_Word mercury__term__V_53_53;
#line 762 "term.m"
        MR_Box mercury__term__conv0_NestedUniv_39;

#line 761 "term.m"
        mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "univ") == 0);
#line 761 "term.m"
        if (mercury__term__succeeded)
#line 761 "term.m"
          {
#line 761 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "term.m"
            if (mercury__term__succeeded)
#line 761 "term.m"
              {
#line 8881 "term.c"
                mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 762 "term.m"
                {
#line 762 "term.m"
                  mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_96_96, mercury__term__Univ_4, &mercury__term__conv0_NestedUniv_39);
                }
#line 762 "term.m"
                mercury__term__NestedUniv_39 = ((MR_Word) mercury__term__conv0_NestedUniv_39);
#line 763 "term.m"
                mercury__term__V_44_44 = (MR_String) "univ";
#line 764 "term.m"
                mercury__term__V_48_48 = (MR_String) ":";
#line 764 "term.m"
                mercury__term__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "term.m"
                mercury__term__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "term.m"
                mercury__term__V_43_43 = (MR_Word) &mercury__term_scalar_common_5[1];
#line 764 "term.m"
                mercury__term__V_47_47 = (MR_Word) &mercury__term_scalar_common_5[2];
#line 765 "term.m"
                {
#line 765 "term.m"
                  mercury__term__V_53_53 = mercury__univ__univ_type_1_f_0(mercury__term__NestedUniv_39);
                }
#line 765 "term.m"
                {
#line 765 "term.m"
                  mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__V_53_53, &mercury__term__TypeTerm_41);
                }
#line 764 "term.m"
                {
#line 764 "term.m"
                  mercury__term__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 0) = ((MR_Box) (mercury__term__TypeTerm_41));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_50_50, 1) = ((MR_Box) (mercury__term__V_51_51));
#line 764 "term.m"
                }
#line 766 "term.m"
                {
#line 766 "term.m"
                  mercury__term__NestedUnivValue_42 = mercury__univ__univ_value_1_f_0(&mercury__term__TypeInfo_97_97, mercury__term__NestedUniv_39);
                }
#line 767 "term.m"
                {
#line 767 "term.m"
                  mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_97_97, mercury__term__TypeInfo_for_T_90, mercury__term__NestedUnivValue_42, &mercury__term__ValueTerm_40);
                }
#line 764 "term.m"
                {
#line 764 "term.m"
                  mercury__term__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 0) = ((MR_Box) (mercury__term__ValueTerm_40));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_49_49, 1) = ((MR_Box) (mercury__term__V_50_50));
#line 764 "term.m"
                }
#line 764 "term.m"
                {
#line 764 "term.m"
                  mercury__term__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 764 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 0) = ((MR_Box) (mercury__term__V_47_47));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 1) = ((MR_Box) (mercury__term__V_49_49));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_46_46, 2) = ((MR_Box) (mercury__term__Context_5));
#line 764 "term.m"
                }
#line 764 "term.m"
                {
#line 764 "term.m"
                  mercury__term__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 0) = ((MR_Box) (mercury__term__V_46_46));
#line 764 "term.m"
                  MR_hl_field(MR_mktag(1), mercury__term__V_45_45, 1) = ((MR_Box) (mercury__term__V_52_52));
#line 764 "term.m"
                }
#line 763 "term.m"
                {
#line 763 "term.m"
                  MR_Word base;
#line 763 "term.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 763 "term.m"
                  *mercury__term__HeadVar__6_6 = base;
#line 763 "term.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_43_43));
#line 763 "term.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_45_45));
#line 763 "term.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 763 "term.m"
                }
#line 763 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 761 "term.m"
              }
#line 761 "term.m"
          }
#line 761 "term.m"
      }
#line 745 "term.m"
    else
#line 745 "term.m"
      if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "array") == 0))
#line 773 "term.m"
        {
#line 773 "term.m"
          MR_Word mercury__term__TypeInfo_99_99;
#line 773 "term.m"
          MR_Word mercury__term__TypeCtorInfo_100_100;
#line 773 "term.m"
          MR_Word mercury__term__TypeInfo_101_101;
#line 773 "term.m"
          MR_Word mercury__term__TypeCtorInfo_102_102;
#line 773 "term.m"
          MR_Word mercury__term__TypeInfo_103_103;
#line 773 "term.m"
          MR_Word mercury__term__ElemType_60;
#line 773 "term.m"
          MR_Word mercury__term__ArgsTerm_64;
#line 773 "term.m"
          MR_Word mercury__term__List_66;
#line 773 "term.m"
          MR_ArrayPtr mercury__term__Array_67;
#line 773 "term.m"
          MR_Word mercury__term__V_68_68;
#line 773 "term.m"
          MR_Word mercury__term__V_69_69;
#line 773 "term.m"
          MR_String mercury__term__V_70_70;
#line 773 "term.m"
          MR_Word mercury__term__V_71_71;
#line 773 "term.m"
          MR_Word mercury__term__V_72_72;
#line 775 "term.m"
          MR_Box mercury__term__Elem_65;
#line 777 "term.m"
          MR_Box mercury__term__conv1_Array_67;

#line 773 "term.m"
          mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "array") == 0);
#line 773 "term.m"
          if (mercury__term__succeeded)
#line 773 "term.m"
            {
#line 773 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 773 "term.m"
              if (mercury__term__succeeded)
#line 773 "term.m"
                {
#line 773 "term.m"
                  mercury__term__ElemType_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 773 "term.m"
                  mercury__term__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 773 "term.m"
                  mercury__term__succeeded = (mercury__term__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "term.m"
                  if (mercury__term__succeeded)
#line 773 "term.m"
                    {
#line 774 "term.m"
                      mercury__term__V_70_70 = (MR_String) "array";
#line 774 "term.m"
                      mercury__term__V_72_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "term.m"
                      mercury__term__V_69_69 = (MR_Word) &mercury__term_scalar_common_5[3];
#line 775 "term.m"
                      {
#line 775 "term.m"
                        mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_99_99, mercury__term__ElemType_60);
                      }
#line 9060 "term.c"
                      mercury__term__TypeCtorInfo_100_100 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9062 "term.c"
                      mercury__term__TypeCtorInfo_102_102 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
#line 9064 "term.c"
                      {
#line 9066 "term.c"
                        mercury__term__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9068 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_100_100));
#line 9070 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 9072 "term.c"
                      }
#line 9074 "term.c"
                      {
#line 9076 "term.c"
                        mercury__term__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9078 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_102_102));
#line 9080 "term.c"
                        MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_103_103, 1) = ((MR_Box) (mercury__term__TypeInfo_99_99));
#line 9082 "term.c"
                      }
#line 777 "term.m"
                      {
#line 777 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_103_103, mercury__term__Univ_4, &mercury__term__conv1_Array_67);
                      }
#line 777 "term.m"
                      mercury__term__Array_67 = ((MR_ArrayPtr) mercury__term__conv1_Array_67);
#line 778 "term.m"
                      {
#line 778 "term.m"
                        mercury__array__to_list_2_p_0(mercury__term__TypeInfo_99_99, (MR_ArrayPtr) mercury__term__Array_67, &mercury__term__List_66);
                      }
#line 779 "term.m"
                      {
#line 779 "term.m"
                        mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_101_101, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_66)), &mercury__term__ArgsTerm_64);
                      }
#line 774 "term.m"
                      {
#line 774 "term.m"
                        mercury__term__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 0) = ((MR_Box) (mercury__term__ArgsTerm_64));
#line 774 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_71_71, 1) = ((MR_Box) (mercury__term__V_72_72));
#line 774 "term.m"
                      }
#line 774 "term.m"
                      {
#line 774 "term.m"
                        MR_Word base;
#line 774 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 774 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 774 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_69_69));
#line 774 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_71_71));
#line 774 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 774 "term.m"
                      }
#line 774 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 773 "term.m"
                    }
#line 773 "term.m"
                }
#line 773 "term.m"
            }
#line 773 "term.m"
        }
#line 745 "term.m"
      else
#line 745 "term.m"
        if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "bitmap") == 0))
#line 769 "term.m"
          {
#line 769 "term.m"
            MR_Word mercury__term__TypeCtorInfo_98_98;
#line 769 "term.m"
            MR_String mercury__term__BitmapStr_56;
#line 769 "term.m"
            MR_Box mercury__term__Bitmap_57;
#line 769 "term.m"
            MR_Word mercury__term__V_58_58;
#line 769 "term.m"
            MR_Word mercury__term__V_59_59;
#line 770 "term.m"
            MR_Box mercury__term__conv2_Bitmap_57;

#line 768 "term.m"
            mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "bitmap") == 0);
#line 769 "term.m"
            if (mercury__term__succeeded)
#line 769 "term.m"
              {
#line 768 "term.m"
                mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "term.m"
                if (mercury__term__succeeded)
#line 769 "term.m"
                  {
#line 769 "term.m"
                    mercury__term__V_59_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9170 "term.c"
                    mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
#line 770 "term.m"
                    {
#line 770 "term.m"
                      mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_98_98, mercury__term__Univ_4, &mercury__term__conv2_Bitmap_57);
                    }
#line 770 "term.m"
                    mercury__term__Bitmap_57 = ((MR_Box) mercury__term__conv2_Bitmap_57);
#line 771 "term.m"
                    {
#line 771 "term.m"
                      mercury__term__BitmapStr_56 = mercury__bitmap__to_string_1_f_0(mercury__term__Bitmap_57);
                    }
#line 769 "term.m"
                    {
#line 769 "term.m"
                      mercury__term__V_58_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "term.m"
                      MR_hl_field(MR_mktag(2), mercury__term__V_58_58, 0) = ((MR_Box) (mercury__term__BitmapStr_56));
#line 769 "term.m"
                    }
#line 769 "term.m"
                    {
#line 769 "term.m"
                      MR_Word base;
#line 769 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 769 "term.m"
                      *mercury__term__HeadVar__6_6 = base;
#line 769 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_58_58));
#line 769 "term.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_59_59));
#line 769 "term.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 769 "term.m"
                    }
#line 769 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 769 "term.m"
                  }
#line 769 "term.m"
              }
#line 769 "term.m"
          }
#line 745 "term.m"
        else
#line 745 "term.m"
          if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 745 "term.m"
            {
#line 750 "term.m"
              mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "term.m"
              if (mercury__term__succeeded)
#line 745 "term.m"
                {
#line 745 "term.m"
                  if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "int") == 0))
#line 745 "term.m"
                    {
#line 745 "term.m"
                      MR_Word mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 745 "term.m"
                      MR_Integer mercury__term__Int_9;
#line 745 "term.m"
                      MR_Word mercury__term__V_10_10;
#line 745 "term.m"
                      MR_Word mercury__term__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "term.m"
                      MR_Box mercury__term__conv3_Int_9;

#line 746 "term.m"
                      {
#line 746 "term.m"
                        mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_91_91, mercury__term__Univ_4, &mercury__term__conv3_Int_9);
                      }
#line 746 "term.m"
                      mercury__term__Int_9 = ((MR_Integer) mercury__term__conv3_Int_9);
#line 745 "term.m"
                      {
#line 745 "term.m"
                        mercury__term__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "term.m"
                        MR_hl_field(MR_mktag(1), mercury__term__V_10_10, 0) = ((MR_Box) (mercury__term__Int_9));
#line 745 "term.m"
                      }
#line 745 "term.m"
                      {
#line 745 "term.m"
                        MR_Word base;
#line 745 "term.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 745 "term.m"
                        *mercury__term__HeadVar__6_6 = base;
#line 745 "term.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_10_10));
#line 745 "term.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_11_11));
#line 745 "term.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 745 "term.m"
                      }
#line 745 "term.m"
                      mercury__term__succeeded = MR_TRUE;
#line 745 "term.m"
                    }
#line 745 "term.m"
                  else
#line 745 "term.m"
                    if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "float") == 0))
#line 748 "term.m"
                      {
#line 748 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_92_92 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 748 "term.m"
                        MR_Float mercury__term__Float_14;
#line 748 "term.m"
                        MR_Word mercury__term__V_15_15;
#line 748 "term.m"
                        MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 749 "term.m"
                        MR_Box mercury__term__conv4_Float_14;

#line 749 "term.m"
                        {
#line 749 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_92_92, mercury__term__Univ_4, &mercury__term__conv4_Float_14);
                        }
#line 749 "term.m"
                        mercury__term__Float_14 = MR_unbox_float(mercury__term__conv4_Float_14);
#line 748 "term.m"
                        {
#line 748 "term.m"
                          mercury__term__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 748 "term.m"
                          MR_hl_field(MR_mktag(3), mercury__term__V_15_15, 1) = MR_box_float(mercury__term__Float_14);
#line 748 "term.m"
                        }
#line 748 "term.m"
                        {
#line 748 "term.m"
                          MR_Word base;
#line 748 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "term.m"
                          *mercury__term__HeadVar__6_6 = base;
#line 748 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_15_15));
#line 748 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_16_16));
#line 748 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 748 "term.m"
                        }
#line 748 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 748 "term.m"
                      }
#line 745 "term.m"
                    else
#line 745 "term.m"
                      if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "string") == 0))
#line 755 "term.m"
                        {
#line 755 "term.m"
                          MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 755 "term.m"
                          MR_String mercury__term__String_25;
#line 755 "term.m"
                          MR_Word mercury__term__V_26_26;
#line 755 "term.m"
                          MR_Word mercury__term__V_27_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "term.m"
                          MR_Box mercury__term__conv5_String_25;

#line 756 "term.m"
                          {
#line 756 "term.m"
                            mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_94_94, mercury__term__Univ_4, &mercury__term__conv5_String_25);
                          }
#line 756 "term.m"
                          mercury__term__String_25 = ((MR_String) mercury__term__conv5_String_25);
#line 755 "term.m"
                          {
#line 755 "term.m"
                            mercury__term__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "term.m"
                            MR_hl_field(MR_mktag(2), mercury__term__V_26_26, 0) = ((MR_Box) (mercury__term__String_25));
#line 755 "term.m"
                          }
#line 755 "term.m"
                          {
#line 755 "term.m"
                            MR_Word base;
#line 755 "term.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 755 "term.m"
                            *mercury__term__HeadVar__6_6 = base;
#line 755 "term.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_26_26));
#line 755 "term.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_27_27));
#line 755 "term.m"
                            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 755 "term.m"
                          }
#line 755 "term.m"
                          mercury__term__succeeded = MR_TRUE;
#line 755 "term.m"
                        }
#line 745 "term.m"
                      else
#line 745 "term.m"
                        if ((strcmp(mercury__term__HeadVar__2_2, (MR_String) "character") == 0))
#line 751 "term.m"
                          {
#line 751 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 751 "term.m"
                            MR_String mercury__term__CharName_19;
#line 751 "term.m"
                            MR_Char mercury__term__Character_20;
#line 751 "term.m"
                            MR_Word mercury__term__V_21_21;
#line 751 "term.m"
                            MR_Word mercury__term__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 752 "term.m"
                            MR_Box mercury__term__conv6_Character_20;

#line 752 "term.m"
                            {
#line 752 "term.m"
                              mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_93_93, mercury__term__Univ_4, &mercury__term__conv6_Character_20);
                            }
#line 752 "term.m"
                            mercury__term__Character_20 = ((MR_Char) (MR_Word) mercury__term__conv6_Character_20);
#line 753 "term.m"
                            {
#line 753 "term.m"
                              mercury__string__char_to_string_2_p_0(mercury__term__Character_20, &mercury__term__CharName_19);
                            }
#line 751 "term.m"
                            {
#line 751 "term.m"
                              mercury__term__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 751 "term.m"
                              MR_hl_field(MR_mktag(0), mercury__term__V_21_21, 0) = ((MR_Box) (mercury__term__CharName_19));
#line 751 "term.m"
                            }
#line 751 "term.m"
                            {
#line 751 "term.m"
                              MR_Word base;
#line 751 "term.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 751 "term.m"
                              *mercury__term__HeadVar__6_6 = base;
#line 751 "term.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_21_21));
#line 751 "term.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_22_22));
#line 751 "term.m"
                              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 751 "term.m"
                            }
#line 751 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 751 "term.m"
                          }
#line 745 "term.m"
                        else
#line 745 "term.m"
                          mercury__term__succeeded = MR_FALSE;
#line 745 "term.m"
                }
#line 745 "term.m"
            }
#line 745 "term.m"
          else
#line 745 "term.m"
            if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "type_desc") == 0))
#line 758 "term.m"
              {
#line 758 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95;
#line 758 "term.m"
                MR_Word mercury__term__Term_30;
#line 758 "term.m"
                MR_Word mercury__term__TypeInfo_31;
#line 758 "term.m"
                MR_Word mercury__term__V_32_32;
#line 758 "term.m"
                MR_String mercury__term__V_33_33;
#line 758 "term.m"
                MR_Word mercury__term__V_34_34;
#line 758 "term.m"
                MR_Word mercury__term__V_35_35;
#line 759 "term.m"
                MR_Box mercury__term__conv7_TypeInfo_31;

#line 757 "term.m"
                mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "type_desc") == 0);
#line 758 "term.m"
                if (mercury__term__succeeded)
#line 758 "term.m"
                  {
#line 757 "term.m"
                    mercury__term__succeeded = (mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "term.m"
                    if (mercury__term__succeeded)
#line 758 "term.m"
                      {
#line 758 "term.m"
                        mercury__term__V_33_33 = (MR_String) "type_info";
#line 758 "term.m"
                        mercury__term__V_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9490 "term.c"
                        mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
#line 758 "term.m"
                        mercury__term__V_32_32 = (MR_Word) &mercury__term_scalar_common_5[4];
#line 759 "term.m"
                        {
#line 759 "term.m"
                          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeCtorInfo_95_95, mercury__term__Univ_4, &mercury__term__conv7_TypeInfo_31);
                        }
#line 759 "term.m"
                        mercury__term__TypeInfo_31 = ((MR_Word) mercury__term__conv7_TypeInfo_31);
#line 760 "term.m"
                        {
#line 760 "term.m"
                          mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_105_110_102_111_95_116_111_95_116_101_114_109_95_95_91_49_93_95_48_3_p_0(mercury__term__Context_5, mercury__term__TypeInfo_31, &mercury__term__Term_30);
                        }
#line 758 "term.m"
                        {
#line 758 "term.m"
                          mercury__term__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 0) = ((MR_Box) (mercury__term__Term_30));
#line 758 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_34_34, 1) = ((MR_Box) (mercury__term__V_35_35));
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
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_32_32));
#line 758 "term.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_34_34));
#line 758 "term.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 758 "term.m"
                        }
#line 758 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 758 "term.m"
                      }
#line 758 "term.m"
                  }
#line 758 "term.m"
              }
#line 745 "term.m"
            else
#line 745 "term.m"
              if ((strcmp(mercury__term__HeadVar__1_1, (MR_String) "version_array") == 0))
#line 782 "term.m"
                {
#line 782 "term.m"
                  MR_Word mercury__term__TypeInfo_104_104;
#line 782 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_105_105;
#line 782 "term.m"
                  MR_Word mercury__term__TypeInfo_106_106;
#line 782 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_107_107;
#line 782 "term.m"
                  MR_Word mercury__term__TypeInfo_108_108;
#line 782 "term.m"
                  MR_Word mercury__term__ElemType_75;
#line 782 "term.m"
                  MR_Word mercury__term__ArgsTerm_79;
#line 782 "term.m"
                  MR_Word mercury__term__List_81;
#line 782 "term.m"
                  MR_Box mercury__term__Array_82;
#line 782 "term.m"
                  MR_Word mercury__term__V_83_83;
#line 782 "term.m"
                  MR_Word mercury__term__V_84_84;
#line 782 "term.m"
                  MR_String mercury__term__V_85_85;
#line 782 "term.m"
                  MR_Word mercury__term__V_86_86;
#line 782 "term.m"
                  MR_Word mercury__term__V_87_87;
#line 784 "term.m"
                  MR_Box mercury__term__Elem_80;
#line 786 "term.m"
                  MR_Box mercury__term__conv8_Array_82;

#line 781 "term.m"
                  mercury__term__succeeded = (strcmp(mercury__term__HeadVar__2_2, (MR_String) "version_array") == 0);
#line 782 "term.m"
                  if (mercury__term__succeeded)
#line 782 "term.m"
                    {
#line 781 "term.m"
                      mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 781 "term.m"
                      if (mercury__term__succeeded)
#line 781 "term.m"
                        {
#line 781 "term.m"
                          mercury__term__ElemType_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 781 "term.m"
                          mercury__term__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 781 "term.m"
                          mercury__term__succeeded = (mercury__term__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "term.m"
                          if (mercury__term__succeeded)
#line 782 "term.m"
                            {
#line 783 "term.m"
                              mercury__term__V_85_85 = (MR_String) "version_array";
#line 783 "term.m"
                              mercury__term__V_87_87 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 783 "term.m"
                              mercury__term__V_84_84 = (MR_Word) &mercury__term_scalar_common_5[5];
#line 784 "term.m"
                              {
#line 784 "term.m"
                                mercury__type_desc__has_type_2_p_0(&mercury__term__TypeInfo_104_104, mercury__term__ElemType_75);
                              }
#line 9612 "term.c"
                              mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 9614 "term.c"
                              mercury__term__TypeCtorInfo_107_107 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
#line 9616 "term.c"
                              {
#line 9618 "term.c"
                                mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9620 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9622 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9624 "term.c"
                              }
#line 9626 "term.c"
                              {
#line 9628 "term.c"
                                mercury__term__TypeInfo_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9630 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_107_107));
#line 9632 "term.c"
                                MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_108_108, 1) = ((MR_Box) (mercury__term__TypeInfo_104_104));
#line 9634 "term.c"
                              }
#line 786 "term.m"
                              {
#line 786 "term.m"
                                mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_108_108, mercury__term__Univ_4, &mercury__term__conv8_Array_82);
                              }
#line 786 "term.m"
                              mercury__term__Array_82 = ((MR_Box) mercury__term__conv8_Array_82);
#line 787 "term.m"
                              {
#line 787 "term.m"
                                mercury__term__List_81 = mercury__version_array__to_list_1_f_0(mercury__term__TypeInfo_104_104, mercury__term__Array_82);
                              }
#line 788 "term.m"
                              {
#line 788 "term.m"
                                mercury__term__type_to_term_2_p_0(mercury__term__TypeInfo_106_106, mercury__term__TypeInfo_for_T_90, ((MR_Box) (mercury__term__List_81)), &mercury__term__ArgsTerm_79);
                              }
#line 783 "term.m"
                              {
#line 783 "term.m"
                                mercury__term__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 783 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 0) = ((MR_Box) (mercury__term__ArgsTerm_79));
#line 783 "term.m"
                                MR_hl_field(MR_mktag(1), mercury__term__V_86_86, 1) = ((MR_Box) (mercury__term__V_87_87));
#line 783 "term.m"
                              }
#line 783 "term.m"
                              {
#line 783 "term.m"
                                MR_Word base;
#line 783 "term.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 783 "term.m"
                                *mercury__term__HeadVar__6_6 = base;
#line 783 "term.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_84_84));
#line 783 "term.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__V_86_86));
#line 783 "term.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 783 "term.m"
                              }
#line 783 "term.m"
                              mercury__term__succeeded = MR_TRUE;
#line 782 "term.m"
                            }
#line 781 "term.m"
                        }
#line 782 "term.m"
                    }
#line 782 "term.m"
                }
#line 745 "term.m"
              else
#line 745 "term.m"
                mercury__term__succeeded = MR_FALSE;
#line 745 "term.m"
    return mercury__term__succeeded;
#line 745 "term.m"
  }
#line 740 "term.m"
}

#line 671 "term.m"
static MR_bool MR_CALL 
mercury__term__term_list_to_univ_list_7_p_0(
#line 671 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 671 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 671 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 671 "term.m"
  MR_Word mercury__term__Functor_3,
#line 671 "term.m"
  MR_Integer mercury__term__ArgNum_4,
#line 671 "term.m"
  MR_Word mercury__term__PrevContext_5,
#line 671 "term.m"
  MR_Word mercury__term__TermContext_6,
#line 671 "term.m"
  MR_Word * mercury__term__HeadVar__7_7)
#line 671 "term.m"
{
#line 676 "term.m"
  {
#line 676 "term.m"
    MR_bool mercury__term__succeeded;

#line 676 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "term.m"
      {
#line 676 "term.m"
        MR_Word mercury__term__V_12_12;

#line 676 "term.m"
        mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "term.m"
        if (mercury__term__succeeded)
#line 676 "term.m"
          {
#line 676 "term.m"
            mercury__term__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 676 "term.m"
            *mercury__term__HeadVar__7_7 = (MR_Word) &mercury__term_scalar_common_5[0];
#line 676 "term.m"
            mercury__term__succeeded = MR_TRUE;
#line 676 "term.m"
          }
#line 676 "term.m"
      }
#line 676 "term.m"
    else
#line 678 "term.m"
      {
#line 678 "term.m"
        MR_Word mercury__term__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 678 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 678 "term.m"
        MR_Word mercury__term__Type_15;
#line 678 "term.m"
        MR_Word mercury__term__Types_16;
#line 678 "term.m"
        MR_Word mercury__term__ArgContext_22;
#line 678 "term.m"
        MR_Word mercury__term__NewContext_23;
#line 678 "term.m"
        MR_Word mercury__term__ArgResult_24;

#line 678 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 678 "term.m"
        if (mercury__term__succeeded)
#line 678 "term.m"
          {
#line 678 "term.m"
            mercury__term__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 678 "term.m"
            mercury__term__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 679 "term.m"
            {
#line 679 "term.m"
              mercury__term__ArgContext_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 679 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 0) = ((MR_Box) (mercury__term__Functor_3));
#line 679 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 1) = ((MR_Box) (mercury__term__ArgNum_4));
#line 679 "term.m"
              MR_hl_field(MR_mktag(0), mercury__term__ArgContext_22, 2) = ((MR_Box) (mercury__term__TermContext_6));
#line 679 "term.m"
            }
#line 680 "term.m"
            {
#line 680 "term.m"
              mercury__term__NewContext_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 0) = ((MR_Box) (mercury__term__ArgContext_22));
#line 680 "term.m"
              MR_hl_field(MR_mktag(1), mercury__term__NewContext_23, 1) = ((MR_Box) (mercury__term__PrevContext_5));
#line 680 "term.m"
            }
#line 681 "term.m"
            {
#line 681 "term.m"
              mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerm_13, mercury__term__Type_15, mercury__term__NewContext_23, &mercury__term__ArgResult_24);
            }
#line 693 "term.m"
            if (((MR_tag((MR_Word) mercury__term__ArgResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 695 "term.m"
              {
#line 695 "term.m"
                *mercury__term__HeadVar__7_7 = (MR_Word) mercury__term__ArgResult_24;
#line 695 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 695 "term.m"
              }
#line 693 "term.m"
            else
#line 683 "term.m"
              {
#line 683 "term.m"
                MR_Word mercury__term__Arg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgResult_24, (MR_Integer) 0)));
#line 683 "term.m"
                MR_Word mercury__term__RestResult_26;
#line 683 "term.m"
                MR_Integer mercury__term__V_29_29 = (mercury__term__ArgNum_4 + (MR_Integer) 1);

#line 684 "term.m"
                {
#line 684 "term.m"
                  mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__ArgTerms_14, mercury__term__Types_16, mercury__term__Functor_3, mercury__term__V_29_29, mercury__term__PrevContext_5, mercury__term__TermContext_6, &mercury__term__RestResult_26);
                }
#line 683 "term.m"
                if (mercury__term__succeeded)
#line 683 "term.m"
                  {
#line 689 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__RestResult_26)) == (MR_mktag((MR_Integer) 1))))
#line 691 "term.m"
                      *mercury__term__HeadVar__7_7 = mercury__term__RestResult_26;
#line 689 "term.m"
                    else
#line 687 "term.m"
                      {
#line 687 "term.m"
                        MR_Word mercury__term__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__RestResult_26, (MR_Integer) 0)));
#line 687 "term.m"
                        MR_Word mercury__term__V_31_31;

#line 688 "term.m"
                        {
#line 688 "term.m"
                          mercury__term__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 0) = ((MR_Box) (mercury__term__Arg_25));
#line 688 "term.m"
                          MR_hl_field(MR_mktag(1), mercury__term__V_31_31, 1) = ((MR_Box) (mercury__term__Rest_27));
#line 688 "term.m"
                        }
#line 688 "term.m"
                        {
#line 688 "term.m"
                          MR_Word base;
#line 688 "term.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 688 "term.m"
                          *mercury__term__HeadVar__7_7 = base;
#line 688 "term.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_31_31));
#line 688 "term.m"
                        }
#line 687 "term.m"
                      }
#line 689 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 683 "term.m"
                  }
#line 683 "term.m"
              }
#line 678 "term.m"
          }
#line 678 "term.m"
      }
#line 676 "term.m"
    return mercury__term__succeeded;
#line 676 "term.m"
  }
#line 671 "term.m"
}

#line 526 "term.m"
static void MR_CALL 
mercury__term__try_term_to_univ_2_4_p_0(
#line 526 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_34,
#line 526 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 526 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 526 "term.m"
  MR_Word mercury__term__Context_3,
#line 526 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 526 "term.m"
{
#line 530 "term.m"
  {
#line 530 "term.m"
    MR_bool mercury__term__succeeded;

#line 530 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 532 "term.m"
      {
#line 532 "term.m"
        MR_Word mercury__term__Functor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "term.m"
        MR_Word mercury__term__TermContext_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 542 "term.m"
        MR_Word mercury__term__SpecialCaseResult_19;
#line 535 "term.m"
        MR_Word mercury__term__TypeCtor_17;
#line 535 "term.m"
        MR_Word mercury__term__TypeArgs_18;
#line 535 "term.m"
        MR_String mercury__term__V_29_29;
#line 535 "term.m"
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
#line 9961 "term.c"

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
#line 10010 "term.c"

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
#line 10060 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term___ModuleName_5_44  = TypeCtorModuleName;
	 mercury__term__V_30_30  = TypeCtorName;
	 mercury__term___Arity_6_45  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 536 "term.m"
        {
#line 536 "term.m"
          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_117_110_105_118_95_115_112_101_99_105_97_108_95_99_97_115_101_95_95_91_54_93_95_48_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__V_29_29, mercury__term__V_30_30, mercury__term__TypeArgs_18, mercury__term__HeadVar__1_1, mercury__term__Context_3, &mercury__term__SpecialCaseResult_19);
        }
#line 542 "term.m"
        if (mercury__term__succeeded)
#line 541 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__SpecialCaseResult_19;
#line 542 "term.m"
        else
#line 560 "term.m"
          {
#line 560 "term.m"
            MR_Integer mercury__term__FunctorNumber_22;
#line 560 "term.m"
            MR_Word mercury__term__ArgsResult_24;
#line 543 "term.m"
            MR_Word mercury__term__TypeCtorInfo_35_35;
#line 543 "term.m"
            MR_Word mercury__term__TypeInfo_36_36;
#line 543 "term.m"
            MR_String mercury__term__FunctorName_20;
#line 543 "term.m"
            MR_Integer mercury__term__Arity_21;
#line 543 "term.m"
            MR_Word mercury__term__ArgTypes_23;
#line 543 "term.m"
            MR_Integer mercury__term__V_31_31;
#line 543 "term.m"
            MR_Integer mercury__term__V_5_48;
#line 543 "term.m"
            MR_Integer mercury__term__N_11_54;

#line 543 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Functor_14)) == (MR_mktag((MR_Integer) 0)));
#line 543 "term.m"
            if (mercury__term__succeeded)
#line 543 "term.m"
              {
#line 543 "term.m"
                mercury__term__FunctorName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__Functor_14, (MR_Integer) 0)));
#line 10111 "term.c"
                mercury__term__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 77 "list.opt"
                mercury__term__V_5_48 = (MR_Integer) 0;
#line 10115 "term.c"
                {
#line 10117 "term.c"
                  mercury__term__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10119 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_35_35));
#line 10121 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_36_36, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_34));
#line 10123 "term.c"
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
#line 10147 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__N_11_54  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 543 "term.m"
                if (mercury__term__succeeded)
#line 543 "term.m"
                  {
#line 208 "construct.opt"
                    {
#line 208 "construct.opt"
                      mercury__term__succeeded = mercury__construct__find_functor_2_6_p_0(mercury__term__HeadVar__2_2, mercury__term__FunctorName_20, mercury__term__Arity_21, mercury__term__N_11_54, &mercury__term__FunctorNumber_22, &mercury__term__ArgTypes_23);
                    }
#line 543 "term.m"
                    if (mercury__term__succeeded)
#line 543 "term.m"
                      {
#line 546 "term.m"
                        mercury__term__V_31_31 = (MR_Integer) 1;
#line 546 "term.m"
                        {
#line 546 "term.m"
                          mercury__term__succeeded = mercury__term__term_list_to_univ_list_7_p_0(mercury__term__TypeInfo_for_T_34, mercury__term__ArgTerms_15, mercury__term__ArgTypes_23, mercury__term__Functor_14, mercury__term__V_31_31, mercury__term__Context_3, mercury__term__TermContext_16, &mercury__term__ArgsResult_24);
                        }
#line 543 "term.m"
                      }
#line 543 "term.m"
                  }
#line 543 "term.m"
              }
#line 560 "term.m"
            if (mercury__term__succeeded)
#line 556 "term.m"
              if (((MR_tag((MR_Word) mercury__term__ArgsResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 558 "term.m"
                *mercury__term__HeadVar__4_4 = (MR_Word) mercury__term__ArgsResult_24;
#line 556 "term.m"
              else
#line 550 "term.m"
                {
#line 550 "term.m"
                  MR_Word mercury__term__ArgValues_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__ArgsResult_24, (MR_Integer) 0)));
#line 553 "term.m"
                  MR_Word mercury__term__Value_26;

#line 551 "term.m"
                  {
#line 551 "term.m"
                    mercury__term__succeeded = mercury__construct__construct_3_f_0(mercury__term__HeadVar__2_2, mercury__term__FunctorNumber_22, mercury__term__ArgValues_25, &mercury__term__Value_26);
                  }
#line 553 "term.m"
                  if (mercury__term__succeeded)
#line 552 "term.m"
                    {
#line 552 "term.m"
                      MR_Word base;
#line 552 "term.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 552 "term.m"
                      *mercury__term__HeadVar__4_4 = base;
#line 552 "term.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Value_26));
#line 552 "term.m"
                    }
#line 553 "term.m"
                  else
#line 554 "term.m"
                    {
#line 554 "term.m"
                      {
#line 554 "term.m"
                        mercury__require__error_1_p_0((MR_String) "term_to_type: construct/3 failed");
#line 554 "term.m"
                        return;
                      }
#line 554 "term.m"
                    }
#line 550 "term.m"
                }
#line 560 "term.m"
            else
#line 563 "term.m"
              {
#line 563 "term.m"
                MR_Word mercury__term__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_term_to_type_arg_context_0;
#line 563 "term.m"
                MR_Word mercury__term__RevContext_28;
#line 563 "term.m"
                MR_Word mercury__term__V_33_33;

#line 563 "term.m"
                {
#line 563 "term.m"
                  mercury__list__reverse_2_p_0(mercury__term__TypeCtorInfo_37_37, mercury__term__Context_3, &mercury__term__RevContext_28);
                }
#line 564 "term.m"
                {
#line 564 "term.m"
                  mercury__term__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 564 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 0) = ((MR_Box) (mercury__term__HeadVar__1_1));
#line 564 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 1) = ((MR_Box) (mercury__term__HeadVar__2_2));
#line 564 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 2) = ((MR_Box) (mercury__term__TermContext_16));
#line 564 "term.m"
                  MR_hl_field(MR_mktag(0), mercury__term__V_33_33, 3) = ((MR_Box) (mercury__term__RevContext_28));
#line 564 "term.m"
                }
#line 564 "term.m"
                {
#line 564 "term.m"
                  MR_Word base;
#line 564 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "term.m"
                  *mercury__term__HeadVar__4_4 = base;
#line 564 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_33_33));
#line 564 "term.m"
                }
#line 563 "term.m"
              }
#line 560 "term.m"
          }
#line 532 "term.m"
      }
#line 530 "term.m"
    else
#line 530 "term.m"
      {
#line 530 "term.m"
        MR_Word mercury__term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "term.m"
        MR_Word mercury__term__V_9_9;
#line 530 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 531 "term.m"
        {
#line 531 "term.m"
          mercury__term__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 0) = ((MR_Box) (mercury__term__Var_5));
#line 531 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_9_9, 1) = ((MR_Box) (mercury__term__Context_3));
#line 531 "term.m"
        }
#line 531 "term.m"
        {
#line 531 "term.m"
          MR_Word base;
#line 531 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 531 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_9_9));
#line 531 "term.m"
        }
#line 530 "term.m"
      }
#line 530 "term.m"
  }
#line 526 "term.m"
}

#line 472 "term.m"
MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
#line 472 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 472 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 472 "term.m"
{
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;
#line 1171 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1171 "term.m"
    return mercury__term__V_3;
#line 1171 "term.m"
  }
#line 472 "term.m"
}

#line 470 "term.m"
MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
#line 470 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 470 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 470 "term.m"
{
#line 1169 "term.m"
  {
#line 1169 "term.m"
    MR_bool mercury__term__succeeded;
#line 1169 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 1169 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1169 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 1169 "term.m"
    return mercury__term__HeadVar__2_2;
#line 1169 "term.m"
  }
#line 470 "term.m"
}

#line 454 "term.m"
void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
#line 454 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 454 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 454 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 454 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 454 "term.m"
{
#line 1267 "term.m"
  {
#line 1267 "term.m"
    MR_bool mercury__term__succeeded;

#line 1267 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1267 "term.m"
  }
#line 454 "term.m"
}

#line 453 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
#line 453 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 453 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 453 "term.m"
  MR_Word mercury__term__VS1_3)
#line 453 "term.m"
{
#line 1267 "term.m"
  {
#line 1267 "term.m"
    MR_bool mercury__term__succeeded;
#line 1267 "term.m"
    MR_Word mercury__term__VS2_4 = mercury__term__VS1_3;

#line 1267 "term.m"
    return mercury__term__VS2_4;
#line 1267 "term.m"
  }
#line 453 "term.m"
}

#line 449 "term.m"
void MR_CALL 
mercury__term__coerce_var_2_p_0(
#line 449 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 449 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 449 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 449 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 449 "term.m"
{
#line 1265 "term.m"
  {
#line 1265 "term.m"
    MR_bool mercury__term__succeeded;

#line 1265 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1265 "term.m"
  }
#line 449 "term.m"
}

#line 448 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
#line 448 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 448 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 448 "term.m"
  MR_Word mercury__term__V1_3)
#line 448 "term.m"
{
#line 1265 "term.m"
  {
#line 1265 "term.m"
    MR_bool mercury__term__succeeded;
#line 1265 "term.m"
    MR_Word mercury__term__V2_4 = mercury__term__V1_3;

#line 1265 "term.m"
    return mercury__term__V2_4;
#line 1265 "term.m"
  }
#line 448 "term.m"
}

#line 444 "term.m"
void MR_CALL 
mercury__term__coerce_2_p_0(
#line 444 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 444 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 444 "term.m"
  MR_Word mercury__term__A_3,
#line 444 "term.m"
  MR_Word * mercury__term__B_4)
#line 444 "term.m"
{
#line 1263 "term.m"
  {
#line 1263 "term.m"
    MR_bool mercury__term__succeeded;

#line 1263 "term.m"
    *mercury__term__B_4 = mercury__term__A_3;
#line 1263 "term.m"
  }
#line 444 "term.m"
}

#line 443 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
#line 443 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 443 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 443 "term.m"
  MR_Word mercury__term__T1_3)
#line 443 "term.m"
{
#line 1263 "term.m"
  {
#line 1263 "term.m"
    MR_bool mercury__term__succeeded;
#line 1263 "term.m"
    MR_Word mercury__term__T2_4 = mercury__term__T1_3;

#line 1263 "term.m"
    return mercury__term__T2_4;
#line 1263 "term.m"
  }
#line 443 "term.m"
}

#line 439 "term.m"
void MR_CALL 
mercury__term__generic_term_1_p_0(
#line 439 "term.m"
  MR_Word mercury__term__HeadVar__1_2)
#line 439 "term.m"
{
#line 1255 "term.m"
  {
#line 1255 "term.m"
    MR_bool mercury__term__succeeded;

#line 1255 "term.m"
    {
#line 1255 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1255 "term.m"
      return;
    }
#line 1255 "term.m"
  }
#line 439 "term.m"
}

#line 430 "term.m"
void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
#line 430 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 430 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 430 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 430 "term.m"
{
#line 1221 "term.m"
  {
#line 1221 "term.m"
    MR_bool mercury__term__succeeded;

#line 1221 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "term.m"
    else
#line 1222 "term.m"
      {
#line 1222 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1222 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1222 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1222 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1222 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 1222 "term.m"
        {
#line 1222 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1222 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1222 "term.m"
        }
#line 1223 "term.m"
        {
#line 1223 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1222 "term.m"
        {
#line 1222 "term.m"
          MR_Word base;
#line 1222 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1222 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1222 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1222 "term.m"
        }
#line 1222 "term.m"
      }
#line 1221 "term.m"
  }
#line 430 "term.m"
}

#line 429 "term.m"
MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
#line 429 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 429 "term.m"
  MR_Word mercury__term__Vs_3)
#line 429 "term.m"
{
#line 1369 "term.m"
  {
#line 1369 "term.m"
    MR_bool mercury__term__succeeded;
#line 1369 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1369 "term.m"
    {
#line 1369 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1369 "term.m"
    return mercury__term__Ts_4;
#line 1369 "term.m"
  }
#line 429 "term.m"
}

#line 424 "term.m"
MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
#line 424 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 424 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 424 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 424 "term.m"
{
#line 1217 "term.m"
  {
#line 1217 "term.m"
    MR_bool mercury__term__succeeded;

#line 1217 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "term.m"
      {
#line 1217 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1217 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1217 "term.m"
      }
#line 1217 "term.m"
    else
#line 1218 "term.m"
      {
#line 1218 "term.m"
        MR_Word mercury__term__Var_3;
#line 1218 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1218 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1218 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1218 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1218 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1218 "term.m"
        if (mercury__term__succeeded)
#line 1218 "term.m"
          {
#line 1218 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1218 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1219 "term.m"
            {
#line 1219 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1218 "term.m"
            if (mercury__term__succeeded)
#line 1218 "term.m"
              {
#line 1218 "term.m"
                {
#line 1218 "term.m"
                  MR_Word base;
#line 1218 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1218 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1218 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1218 "term.m"
                }
#line 1218 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1218 "term.m"
              }
#line 1218 "term.m"
          }
#line 1218 "term.m"
      }
#line 1217 "term.m"
    return mercury__term__succeeded;
#line 1217 "term.m"
  }
#line 424 "term.m"
}

#line 420 "term.m"
MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
#line 420 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 420 "term.m"
  MR_Word mercury__term__Ts_3)
#line 420 "term.m"
{
#line 1364 "term.m"
  {
#line 1364 "term.m"
    MR_bool mercury__term__succeeded;
#line 1364 "term.m"
    MR_Word mercury__term__Vs_4;
#line 1364 "term.m"
    MR_Word mercury__term__Vs0_5;

#line 1362 "term.m"
    {
#line 1362 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts_3, &mercury__term__Vs0_5);
    }
#line 1364 "term.m"
    if (mercury__term__succeeded)
#line 1363 "term.m"
      mercury__term__Vs_4 = mercury__term__Vs0_5;
#line 1364 "term.m"
    else
#line 1365 "term.m"
      {
#line 1365 "term.m"
        {
#line 1365 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.term_list_to_var_list: not all vars");
        }
#line 1365 "term.m"
      }
#line 1364 "term.m"
    return mercury__term__Vs_4;
#line 1364 "term.m"
  }
#line 420 "term.m"
}

#line 415 "term.m"
void MR_CALL 
mercury__term__context_init_3_p_0(
#line 415 "term.m"
  MR_String mercury__term__File_4,
#line 415 "term.m"
  MR_Integer mercury__term__LineNumber_5,
#line 415 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 415 "term.m"
{
#line 856 "term.m"
  {
#line 856 "term.m"
    MR_bool mercury__term__succeeded;

#line 856 "term.m"
    {
#line 856 "term.m"
      MR_Word base;
#line 856 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 856 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 856 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 856 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 856 "term.m"
    }
#line 856 "term.m"
  }
#line 415 "term.m"
}

#line 414 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
#line 414 "term.m"
  MR_String mercury__term__S_4,
#line 414 "term.m"
  MR_Integer mercury__term__N_5)
#line 414 "term.m"
{
#line 856 "term.m"
  {
#line 856 "term.m"
    MR_bool mercury__term__succeeded;
#line 856 "term.m"
    MR_Word mercury__term__C_6;

#line 856 "term.m"
    {
#line 856 "term.m"
      mercury__term__C_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 856 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 0) = ((MR_Box) (mercury__term__S_4));
#line 856 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__C_6, 1) = ((MR_Box) (mercury__term__N_5));
#line 856 "term.m"
    }
#line 856 "term.m"
    return mercury__term__C_6;
#line 856 "term.m"
  }
#line 414 "term.m"
}

#line 413 "term.m"
void MR_CALL 
mercury__term__context_init_1_p_0(
#line 413 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 413 "term.m"
{
#line 855 "term.m"
  {
#line 855 "term.m"
    MR_bool mercury__term__succeeded;

#line 855 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 855 "term.m"
  }
#line 413 "term.m"
}

#line 412 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 412 "term.m"
{
#line 855 "term.m"
  {
#line 855 "term.m"
    MR_bool mercury__term__succeeded;
#line 855 "term.m"
    MR_Word mercury__term__C_2 = (MR_Word) &mercury__term_scalar_common_1[3];

#line 855 "term.m"
    return mercury__term__C_2;
#line 855 "term.m"
  }
#line 412 "term.m"
}

#line 407 "term.m"
void MR_CALL 
mercury__term__context_file_2_p_0(
#line 407 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 407 "term.m"
  MR_String * mercury__term__FileName_3)
#line 407 "term.m"
{
#line 854 "term.m"
  {
#line 854 "term.m"
    MR_bool mercury__term__succeeded;
#line 854 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 854 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 854 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 854 "term.m"
  }
#line 407 "term.m"
}

#line 406 "term.m"
MR_String MR_CALL 
mercury__term__context_file_1_f_0(
#line 406 "term.m"
  MR_Word mercury__term__C_3)
#line 406 "term.m"
{
#line 854 "term.m"
  {
#line 854 "term.m"
    MR_bool mercury__term__succeeded;
#line 854 "term.m"
    MR_String mercury__term__S_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));
#line 854 "term.m"
    MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));

#line 854 "term.m"
    return mercury__term__S_4;
#line 854 "term.m"
  }
#line 406 "term.m"
}

#line 402 "term.m"
void MR_CALL 
mercury__term__context_line_2_p_0(
#line 402 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 402 "term.m"
  MR_Integer * mercury__term__LineNumber_4)
#line 402 "term.m"
{
#line 853 "term.m"
  {
#line 853 "term.m"
    MR_bool mercury__term__succeeded;
#line 853 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 853 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 853 "term.m"
  }
#line 402 "term.m"
}

#line 401 "term.m"
MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
#line 401 "term.m"
  MR_Word mercury__term__C_3)
#line 401 "term.m"
{
#line 853 "term.m"
  {
#line 853 "term.m"
    MR_bool mercury__term__succeeded;
#line 853 "term.m"
    MR_Integer mercury__term__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 1)));
#line 853 "term.m"
    MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__C_3, (MR_Integer) 0)));

#line 853 "term.m"
    return mercury__term__N_4;
#line 853 "term.m"
  }
#line 401 "term.m"
}

#line 395 "term.m"
void MR_CALL 
mercury__term__var_to_int_2_p_0(
#line 395 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 395 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 395 "term.m"
  MR_Integer * mercury__term__Var_3)
#line 395 "term.m"
{
#line 1161 "term.m"
  {
#line 1161 "term.m"
    MR_bool mercury__term__succeeded;

#line 1161 "term.m"
    *mercury__term__Var_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 1161 "term.m"
  }
#line 395 "term.m"
}

#line 394 "term.m"
MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
#line 394 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 394 "term.m"
  MR_Word mercury__term__V_3)
#line 394 "term.m"
{
#line 1161 "term.m"
  {
#line 1161 "term.m"
    MR_bool mercury__term__succeeded;
#line 1161 "term.m"
    MR_Integer mercury__term__N_4 = (MR_Integer) mercury__term__V_3;

#line 1161 "term.m"
    return mercury__term__N_4;
#line 1161 "term.m"
  }
#line 394 "term.m"
}

#line 382 "term.m"
MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
#line 382 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 382 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 382 "term.m"
{
#line 1152 "term.m"
  {
#line 1152 "term.m"
    MR_bool mercury__term__succeeded;
#line 1152 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1152 "term.m"
    return mercury__term__V_3;
#line 1152 "term.m"
  }
#line 382 "term.m"
}

#line 376 "term.m"
void MR_CALL 
mercury__term__create_var_3_p_0(
#line 376 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 376 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 376 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 376 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 376 "term.m"
{
#line 1146 "term.m"
  {
#line 1146 "term.m"
    MR_bool mercury__term__succeeded;
#line 1146 "term.m"
    MR_Integer mercury__term__V_4;
#line 1146 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 1148 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 1146 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 1146 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 1146 "term.m"
  }
#line 376 "term.m"
}

#line 371 "term.m"
MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
#line 371 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 371 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 371 "term.m"
{
#line 1144 "term.m"
  {
#line 1144 "term.m"
    MR_bool mercury__term__succeeded;
#line 1144 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 1144 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 1144 "term.m"
    return mercury__term__succeeded;
#line 1144 "term.m"
  }
#line 371 "term.m"
}

#line 370 "term.m"
void MR_CALL 
mercury__term__init_var_supply_1_p_0(
#line 370 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 370 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 370 "term.m"
{
#line 1144 "term.m"
  {
#line 1144 "term.m"
    MR_bool mercury__term__succeeded;

#line 1144 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 1144 "term.m"
  }
#line 370 "term.m"
}

#line 368 "term.m"
MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
#line 368 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3)
#line 368 "term.m"
{
#line 1144 "term.m"
  {
#line 1144 "term.m"
    MR_bool mercury__term__succeeded;
#line 1144 "term.m"
    MR_Word mercury__term__VS_2 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 1144 "term.m"
    return mercury__term__VS_2;
#line 1144 "term.m"
  }
#line 368 "term.m"
}

#line 357 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
#line 357 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 357 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 357 "term.m"
{
#line 1243 "term.m"
  {
#line 1243 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1243 "term.m"
    MR_Word mercury__term__Args_3;
#line 1243 "term.m"
    MR_Word mercury__term__V_2_2;
#line 1243 "term.m"
    MR_Word mercury__term__V_4_4;

#line 1243 "term.m"
    if (mercury__term__succeeded)
#line 1243 "term.m"
      {
#line 1243 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1243 "term.m"
        mercury__term__Args_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1243 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1244 "term.m"
        {
#line 1244 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Args_3);
        }
#line 1243 "term.m"
      }
#line 1243 "term.m"
    return mercury__term__succeeded;
#line 1243 "term.m"
  }
#line 357 "term.m"
}

#line 353 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
#line 353 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 353 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 353 "term.m"
  MR_Word mercury__term__Bindings_2)
#line 353 "term.m"
{
#line 1227 "term.m"
  while (MR_TRUE)
#line 1227 "term.m"
    {
#line 1227 "term.m"
      /* tailcall optimized into a loop */
#line 1227 "term.m"
      {
#line 1227 "term.m"
        MR_bool mercury__term__succeeded;

#line 1227 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1230 "term.m"
          {
#line 1230 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1230 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1231 "term.m"
            {
#line 1231 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 1230 "term.m"
          }
#line 1227 "term.m"
        else
#line 1227 "term.m"
          {
#line 1227 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1227 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 1227 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1227 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 1227 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1227 "term.m"
            MR_Word mercury__term__Binding_6;
#line 1227 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 11251 "term.c"
            {
#line 11253 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11255 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 11257 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 11259 "term.c"
            }
#line 11261 "term.c"
            {
#line 11263 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11265 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 11267 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 11269 "term.c"
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
#line 1227 "term.m"
            if (mercury__term__succeeded)
#line 1229 "term.m"
              {
#line 1229 "term.m"
                /* direct tailcall eliminated */
#line 1229 "term.m"
                {
#line 1229 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 1229 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1229 "term.m"
                }
#line 1229 "term.m"
                continue;
#line 1229 "term.m"
              }
#line 1227 "term.m"
          }
#line 1227 "term.m"
        return mercury__term__succeeded;
#line 1227 "term.m"
      }
#line 1227 "term.m"
      break;
#line 1227 "term.m"
    }
#line 353 "term.m"
}

#line 347 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
#line 347 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 347 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 347 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 347 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 347 "term.m"
{
#line 1210 "term.m"
  {
#line 1210 "term.m"
    MR_bool mercury__term__succeeded;

#line 1210 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1210 "term.m"
    else
#line 1211 "term.m"
      {
#line 1211 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1211 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1211 "term.m"
        MR_Word mercury__term__Var_8;
#line 1211 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1206 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1204 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1204 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 11361 "term.c"
        {
#line 11363 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11365 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 11367 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 11369 "term.c"
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
#line 1206 "term.m"
        if (mercury__term__succeeded)
#line 1205 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1206 "term.m"
        else
#line 1207 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1213 "term.m"
        {
#line 1213 "term.m"
          mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1211 "term.m"
        {
#line 1211 "term.m"
          MR_Word base;
#line 1211 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1211 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1211 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1211 "term.m"
        }
#line 1211 "term.m"
      }
#line 1210 "term.m"
  }
#line 347 "term.m"
}

#line 345 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
#line 345 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 345 "term.m"
  MR_Word mercury__term__M_4,
#line 345 "term.m"
  MR_Word mercury__term__Vs0_5)
#line 345 "term.m"
{
#line 1344 "term.m"
  {
#line 1344 "term.m"
    MR_bool mercury__term__succeeded;
#line 1344 "term.m"
    MR_Word mercury__term__Vs_6;

#line 1344 "term.m"
    {
#line 1344 "term.m"
      mercury__term__apply_variable_renaming_to_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__M_4, mercury__term__Vs0_5, &mercury__term__Vs_6);
    }
#line 1344 "term.m"
    return mercury__term__Vs_6;
#line 1344 "term.m"
  }
#line 345 "term.m"
}

#line 340 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
#line 340 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 340 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 340 "term.m"
  MR_Word mercury__term__Var0_5,
#line 340 "term.m"
  MR_Word * mercury__term__Var_6)
#line 340 "term.m"
{
#line 1206 "term.m"
  {
#line 1206 "term.m"
    MR_bool mercury__term__succeeded;
#line 1206 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1204 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1204 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 39 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 11476 "term.c"
    {
#line 11478 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11480 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 11482 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 11484 "term.c"
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
#line 1206 "term.m"
    if (mercury__term__succeeded)
#line 1205 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1206 "term.m"
    else
#line 1207 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1206 "term.m"
  }
#line 340 "term.m"
}

#line 338 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
#line 338 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 338 "term.m"
  MR_Word mercury__term__M_4,
#line 338 "term.m"
  MR_Word mercury__term__V0_5)
#line 338 "term.m"
{
#line 1206 "term.m"
  {
#line 1206 "term.m"
    MR_bool mercury__term__succeeded;
#line 1206 "term.m"
    MR_Word mercury__term__V_6;
#line 1206 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1204 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1204 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 39 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 11540 "term.c"
    {
#line 11542 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11544 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 11546 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 11548 "term.c"
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
#line 1206 "term.m"
    if (mercury__term__succeeded)
#line 1205 "term.m"
      mercury__term__V_6 = mercury__term__NewVar_11;
#line 1206 "term.m"
    else
#line 1207 "term.m"
      mercury__term__V_6 = mercury__term__V0_5;
#line 1206 "term.m"
    return mercury__term__V_6;
#line 1206 "term.m"
  }
#line 338 "term.m"
}

#line 333 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
#line 333 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 333 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 333 "term.m"
  MR_Word mercury__term__Renaming_2,
#line 333 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 333 "term.m"
{
#line 1198 "term.m"
  {
#line 1198 "term.m"
    MR_bool mercury__term__succeeded;

#line 1198 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1198 "term.m"
    else
#line 1199 "term.m"
      {
#line 1199 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1199 "term.m"
        MR_Word mercury__term__Term_8;
#line 1199 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1200 "term.m"
        {
#line 1200 "term.m"
          mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__Renaming_2, &mercury__term__Term_8);
        }
#line 1201 "term.m"
        {
#line 1201 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__Renaming_2, &mercury__term__Terms_9);
        }
#line 1199 "term.m"
        {
#line 1199 "term.m"
          MR_Word base;
#line 1199 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1199 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1199 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1199 "term.m"
        }
#line 1199 "term.m"
      }
#line 1198 "term.m"
  }
#line 333 "term.m"
}

#line 331 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
#line 331 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 331 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 331 "term.m"
  MR_Word mercury__term__M_5)
#line 331 "term.m"
{
#line 1341 "term.m"
  {
#line 1341 "term.m"
    MR_bool mercury__term__succeeded;
#line 1341 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1341 "term.m"
    {
#line 1341 "term.m"
      mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__M_5, &mercury__term__Ts2_6);
    }
#line 1341 "term.m"
    return mercury__term__Ts2_6;
#line 1341 "term.m"
  }
#line 331 "term.m"
}

#line 326 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
#line 326 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 326 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 326 "term.m"
  MR_Word mercury__term__Renaming_2,
#line 326 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 326 "term.m"
{
#line 1192 "term.m"
  {
#line 1192 "term.m"
    MR_bool mercury__term__succeeded;

#line 1192 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1192 "term.m"
      {
#line 1192 "term.m"
        MR_Word mercury__term__Const_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1192 "term.m"
        MR_Word mercury__term__Args0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1192 "term.m"
        MR_Word mercury__term__Cont_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1192 "term.m"
        MR_Word mercury__term__Args_8;

#line 1193 "term.m"
        {
#line 1193 "term.m"
          mercury__term__apply_variable_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Args0_5, mercury__term__Renaming_2, &mercury__term__Args_8);
        }
#line 1192 "term.m"
        {
#line 1192 "term.m"
          MR_Word base;
#line 1192 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1192 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Const_4));
#line 1192 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_8));
#line 1192 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Cont_6));
#line 1192 "term.m"
        }
#line 1192 "term.m"
      }
#line 1192 "term.m"
    else
#line 1195 "term.m"
      {
#line 1195 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1195 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1195 "term.m"
        MR_Word mercury__term__Var_12;
#line 1206 "term.m"
        MR_Word mercury__term__NewVar_17;
#line 1204 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1204 "term.m"
        MR_Word mercury__term__TypeInfo_10_19;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_NewVar_17;

#line 11749 "term.c"
        {
#line 11751 "term.c"
          mercury__term__TypeInfo_10_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11753 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_18));
#line 11755 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_13));
#line 11757 "term.c"
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
#line 1206 "term.m"
        if (mercury__term__succeeded)
#line 1205 "term.m"
          mercury__term__Var_12 = mercury__term__NewVar_17;
#line 1206 "term.m"
        else
#line 1207 "term.m"
          mercury__term__Var_12 = mercury__term__Var0_9;
#line 1195 "term.m"
        {
#line 1195 "term.m"
          MR_Word base;
#line 1195 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1195 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_12));
#line 1195 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1195 "term.m"
        }
#line 1195 "term.m"
      }
#line 1192 "term.m"
  }
#line 326 "term.m"
}

#line 325 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
#line 325 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 325 "term.m"
  MR_Word mercury__term__T1_4,
#line 325 "term.m"
  MR_Word mercury__term__M_5)
#line 325 "term.m"
{
#line 1338 "term.m"
  {
#line 1338 "term.m"
    MR_bool mercury__term__succeeded;
#line 1338 "term.m"
    MR_Word mercury__term__T2_6;

#line 1338 "term.m"
    {
#line 1338 "term.m"
      mercury__term__apply_variable_renaming_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__M_5, &mercury__term__T2_6);
    }
#line 1338 "term.m"
    return mercury__term__T2_6;
#line 1338 "term.m"
  }
#line 325 "term.m"
}

#line 319 "term.m"
void MR_CALL 
mercury__term__relabel_variables_4_p_0(
#line 319 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 319 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 319 "term.m"
  MR_Word mercury__term__OldVar_2,
#line 319 "term.m"
  MR_Word mercury__term__NewVar_3,
#line 319 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 319 "term.m"
{
#line 1186 "term.m"
  {
#line 1186 "term.m"
    MR_bool mercury__term__succeeded;

#line 1186 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "term.m"
    else
#line 1187 "term.m"
      {
#line 1187 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1187 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1187 "term.m"
        MR_Word mercury__term__Term_11;
#line 1187 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1188 "term.m"
        {
#line 1188 "term.m"
          mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Term_11);
        }
#line 1189 "term.m"
        {
#line 1189 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Terms_12);
        }
#line 1187 "term.m"
        {
#line 1187 "term.m"
          MR_Word base;
#line 1187 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1187 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1187 "term.m"
        }
#line 1187 "term.m"
      }
#line 1186 "term.m"
  }
#line 319 "term.m"
}

#line 318 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
#line 318 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 318 "term.m"
  MR_Word mercury__term__Ts1_5,
#line 318 "term.m"
  MR_Word mercury__term__V1_6,
#line 318 "term.m"
  MR_Word mercury__term__V2_7)
#line 318 "term.m"
{
#line 1335 "term.m"
  {
#line 1335 "term.m"
    MR_bool mercury__term__succeeded;
#line 1335 "term.m"
    MR_Word mercury__term__Ts2_8;

#line 1335 "term.m"
    {
#line 1335 "term.m"
      mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Ts1_5, mercury__term__V1_6, mercury__term__V2_7, &mercury__term__Ts2_8);
    }
#line 1335 "term.m"
    return mercury__term__Ts2_8;
#line 1335 "term.m"
  }
#line 318 "term.m"
}

#line 312 "term.m"
void MR_CALL 
mercury__term__relabel_variable_4_p_0(
#line 312 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_16,
#line 312 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 312 "term.m"
  MR_Word mercury__term__OldVar_2,
#line 312 "term.m"
  MR_Word mercury__term__NewVar_3,
#line 312 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 312 "term.m"
{
#line 1176 "term.m"
  {
#line 1176 "term.m"
    MR_bool mercury__term__succeeded;

#line 1176 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1176 "term.m"
      {
#line 1176 "term.m"
        MR_Word mercury__term__Const_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1176 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1176 "term.m"
        MR_Word mercury__term__Cont_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1176 "term.m"
        MR_Word mercury__term__Terms_10;

#line 1177 "term.m"
        {
#line 1177 "term.m"
          mercury__term__relabel_variables_4_p_0(mercury__term__TypeInfo_for_T_16, mercury__term__Terms0_6, mercury__term__OldVar_2, mercury__term__NewVar_3, &mercury__term__Terms_10);
        }
#line 1176 "term.m"
        {
#line 1176 "term.m"
          MR_Word base;
#line 1176 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1176 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Const_5));
#line 1176 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Terms_10));
#line 1176 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Cont_7));
#line 1176 "term.m"
        }
#line 1176 "term.m"
      }
#line 1176 "term.m"
    else
#line 1179 "term.m"
      {
#line 1179 "term.m"
        MR_Word mercury__term__Var0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1179 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1179 "term.m"
        MR_Word mercury__term__Var_15;
#line 493 "term.m"
        MR_Integer mercury__term__CastX_19 = (MR_Integer) mercury__term__Var0_11;
#line 493 "term.m"
        MR_Integer mercury__term__CastY_20 = (MR_Integer) mercury__term__OldVar_2;

#line 493 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_19 == mercury__term__CastY_20);
#line 493 "term.m"
        if (mercury__term__succeeded)
#line 493 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
        else
#line 493 "term.m"
          {
#line 493 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var0_11;
#line 493 "term.m"
            MR_Integer mercury__term__V_18_18 = (MR_Integer) mercury__term__OldVar_2;

#line 12019 "term.c"
            mercury__term__succeeded = (mercury__term__V_17_17 == mercury__term__V_18_18);
#line 493 "term.m"
          }
#line 1182 "term.m"
        if (mercury__term__succeeded)
#line 1181 "term.m"
          mercury__term__Var_15 = mercury__term__NewVar_3;
#line 1182 "term.m"
        else
#line 1183 "term.m"
          mercury__term__Var_15 = mercury__term__Var0_11;
#line 1179 "term.m"
        {
#line 1179 "term.m"
          MR_Word base;
#line 1179 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1179 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_15));
#line 1179 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_12));
#line 1179 "term.m"
        }
#line 1179 "term.m"
      }
#line 1176 "term.m"
  }
#line 312 "term.m"
}

#line 311 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
#line 311 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 311 "term.m"
  MR_Word mercury__term__T1_5,
#line 311 "term.m"
  MR_Word mercury__term__V1_6,
#line 311 "term.m"
  MR_Word mercury__term__V2_7)
#line 311 "term.m"
{
#line 1332 "term.m"
  {
#line 1332 "term.m"
    MR_bool mercury__term__succeeded;
#line 1332 "term.m"
    MR_Word mercury__term__T2_8;

#line 1332 "term.m"
    {
#line 1332 "term.m"
      mercury__term__relabel_variable_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__T1_5, mercury__term__V1_6, mercury__term__V2_7, &mercury__term__T2_8);
    }
#line 1332 "term.m"
    return mercury__term__T2_8;
#line 1332 "term.m"
  }
#line 311 "term.m"
}

#line 303 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
#line 303 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 303 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 303 "term.m"
  MR_Word mercury__term__Y_6,
#line 303 "term.m"
  MR_Word mercury__term__Bindings_7)
#line 303 "term.m"
{
#line 1035 "term.m"
  while (MR_TRUE)
#line 1035 "term.m"
    {
#line 1035 "term.m"
      /* tailcall optimized into a loop */
#line 1035 "term.m"
      {
#line 1035 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1035 "term.m"
        MR_Word mercury__term__Term_4;
#line 1035 "term.m"
        MR_Word mercury__term__Terms_5;

#line 1035 "term.m"
        if (mercury__term__succeeded)
#line 1035 "term.m"
          {
#line 1035 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1035 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1036 "term.m"
            {
#line 1036 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Y_6, mercury__term__Bindings_7);
            }
#line 1038 "term.m"
            if (mercury__term__succeeded)
#line 1037 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1038 "term.m"
            else
#line 1039 "term.m"
              {
#line 1039 "term.m"
                /* direct tailcall eliminated */
#line 1039 "term.m"
                {
#line 1039 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1039 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1039 "term.m"
                }
#line 1039 "term.m"
                continue;
#line 1039 "term.m"
              }
#line 1035 "term.m"
          }
#line 1035 "term.m"
        return mercury__term__succeeded;
#line 1035 "term.m"
      }
#line 1035 "term.m"
      break;
#line 1035 "term.m"
    }
#line 303 "term.m"
}

#line 299 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
#line 299 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 299 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 299 "term.m"
  MR_Word mercury__term__Y_2,
#line 299 "term.m"
  MR_Word mercury__term__Bindings_3)
#line 299 "term.m"
{
#line 1025 "term.m"
  while (MR_TRUE)
#line 1025 "term.m"
    {
#line 1025 "term.m"
      /* tailcall optimized into a loop */
#line 1025 "term.m"
      {
#line 1025 "term.m"
        MR_bool mercury__term__succeeded;

#line 1025 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1032 "term.m"
          {
#line 1032 "term.m"
            MR_Word mercury__term__As_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1032 "term.m"
            MR_Word mercury__term___F_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "term.m"
            MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1033 "term.m"
            {
#line 1033 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__As_10, mercury__term__Y_2, mercury__term__Bindings_3);
            }
#line 1032 "term.m"
          }
#line 1025 "term.m"
        else
#line 1025 "term.m"
          {
#line 1025 "term.m"
            MR_Word mercury__term__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "term.m"
            MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_4;
#line 493 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Y_2;

#line 493 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 493 "term.m"
            if (mercury__term__succeeded)
#line 493 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
            else
#line 493 "term.m"
              {
#line 493 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_4;
#line 493 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Y_2;

#line 12231 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 493 "term.m"
              }
#line 1028 "term.m"
            if (mercury__term__succeeded)
#line 1027 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1028 "term.m"
            else
#line 1029 "term.m"
              {
#line 1029 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1029 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 1029 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1029 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 1029 "term.m"
                MR_Word mercury__term__BindingOfX_8;
#line 39 "map.opt"
                MR_Box mercury__term__conv0_BindingOfX_8;

#line 12256 "term.c"
                {
#line 12258 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12260 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12262 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12264 "term.c"
                }
#line 12266 "term.c"
                {
#line 12268 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12270 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 12272 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12274 "term.c"
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
#line 1029 "term.m"
                if (mercury__term__succeeded)
#line 1030 "term.m"
                  {
#line 1030 "term.m"
                    /* direct tailcall eliminated */
#line 1030 "term.m"
                    {
#line 1030 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_8;

#line 1030 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1030 "term.m"
                    }
#line 1030 "term.m"
                    continue;
#line 1030 "term.m"
                  }
#line 1029 "term.m"
              }
#line 1025 "term.m"
          }
#line 1025 "term.m"
        return mercury__term__succeeded;
#line 1025 "term.m"
      }
#line 1025 "term.m"
      break;
#line 1025 "term.m"
    }
#line 299 "term.m"
}

#line 292 "term.m"
void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
#line 292 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 292 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 292 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 292 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 292 "term.m"
{
#line 1137 "term.m"
  {
#line 1137 "term.m"
    MR_bool mercury__term__succeeded;

#line 1137 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1137 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "term.m"
    else
#line 1138 "term.m"
      {
#line 1138 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1138 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1138 "term.m"
        MR_Word mercury__term__Term_8;
#line 1138 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1139 "term.m"
        {
#line 1139 "term.m"
          mercury__term__apply_renaming_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1140 "term.m"
        {
#line 1140 "term.m"
          mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1138 "term.m"
        {
#line 1138 "term.m"
          MR_Word base;
#line 1138 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1138 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1138 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1138 "term.m"
        }
#line 1138 "term.m"
      }
#line 1137 "term.m"
  }
#line 292 "term.m"
}

#line 291 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
#line 291 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 291 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 291 "term.m"
  MR_Word mercury__term__R_5)
#line 291 "term.m"
{
#line 1329 "term.m"
  {
#line 1329 "term.m"
    MR_bool mercury__term__succeeded;
#line 1329 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1329 "term.m"
    {
#line 1329 "term.m"
      mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__R_5, &mercury__term__Ts2_6);
    }
#line 1329 "term.m"
    return mercury__term__Ts2_6;
#line 1329 "term.m"
  }
#line 291 "term.m"
}

#line 287 "term.m"
void MR_CALL 
mercury__term__apply_renaming_3_p_0(
#line 287 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 287 "term.m"
  MR_Word mercury__term__Term0_4,
#line 287 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 287 "term.m"
  MR_Word * mercury__term__Term_6)
#line 287 "term.m"
{
#line 1131 "term.m"
  {
#line 1131 "term.m"
    MR_bool mercury__term__succeeded;

#line 1131 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1132 "term.m"
      {
#line 1132 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1132 "term.m"
        MR_Word mercury__term__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1132 "term.m"
        MR_Word mercury__term__Args_12;
#line 1132 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));

#line 1133 "term.m"
        {
#line 1133 "term.m"
          mercury__term__apply_renaming_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Args0_11, mercury__term__Renaming_5, &mercury__term__Args_12);
        }
#line 1134 "term.m"
        {
#line 1134 "term.m"
          MR_Word base;
#line 1134 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1134 "term.m"
          *mercury__term__Term_6 = base;
#line 1134 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1134 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_12));
#line 1134 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1134 "term.m"
        }
#line 1132 "term.m"
      }
#line 1131 "term.m"
    else
#line 1125 "term.m"
      {
#line 1125 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1125 "term.m"
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1128 "term.m"
        MR_Word mercury__term__ReplacementVar_9;
#line 1126 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1126 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_ReplacementVar_9;

#line 12492 "term.c"
        {
#line 12494 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12496 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12498 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12500 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_16_16, (MR_Word) mercury__term__Renaming_5, mercury__term__Var_7, &mercury__term__conv0_ReplacementVar_9);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__ReplacementVar_9 = ((MR_Word) mercury__term__conv0_ReplacementVar_9);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 1128 "term.m"
        if (mercury__term__succeeded)
#line 1127 "term.m"
          {
#line 1127 "term.m"
            MR_Word base;
#line 1127 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "term.m"
            *mercury__term__Term_6 = base;
#line 1127 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_9));
#line 1127 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
#line 1127 "term.m"
          }
#line 1128 "term.m"
        else
#line 1129 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1125 "term.m"
      }
#line 1131 "term.m"
  }
#line 287 "term.m"
}

#line 286 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
#line 286 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 286 "term.m"
  MR_Word mercury__term__T1_4,
#line 286 "term.m"
  MR_Word mercury__term__R_5)
#line 286 "term.m"
{
#line 1326 "term.m"
  {
#line 1326 "term.m"
    MR_bool mercury__term__succeeded;
#line 1326 "term.m"
    MR_Word mercury__term__T2_6;

#line 1326 "term.m"
    {
#line 1326 "term.m"
      mercury__term__apply_renaming_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__R_5, &mercury__term__T2_6);
    }
#line 1326 "term.m"
    return mercury__term__T2_6;
#line 1326 "term.m"
  }
#line 286 "term.m"
}

#line 279 "term.m"
void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
#line 279 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 279 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 279 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 279 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 279 "term.m"
{
#line 1118 "term.m"
  {
#line 1118 "term.m"
    MR_bool mercury__term__succeeded;

#line 1118 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1118 "term.m"
    else
#line 1119 "term.m"
      {
#line 1119 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1119 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1119 "term.m"
        MR_Word mercury__term__Term_8;
#line 1119 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1120 "term.m"
        {
#line 1120 "term.m"
          mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1121 "term.m"
        {
#line 1121 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1119 "term.m"
        {
#line 1119 "term.m"
          MR_Word base;
#line 1119 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1119 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1119 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1119 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1119 "term.m"
        }
#line 1119 "term.m"
      }
#line 1118 "term.m"
  }
#line 279 "term.m"
}

#line 277 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
#line 277 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 277 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 277 "term.m"
  MR_Word mercury__term__S_5)
#line 277 "term.m"
{
#line 1323 "term.m"
  {
#line 1323 "term.m"
    MR_bool mercury__term__succeeded;
#line 1323 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1323 "term.m"
    {
#line 1323 "term.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__S_5, &mercury__term__Ts2_6);
    }
#line 1323 "term.m"
    return mercury__term__Ts2_6;
#line 1323 "term.m"
  }
#line 277 "term.m"
}

#line 272 "term.m"
void MR_CALL 
mercury__term__apply_substitution_3_p_0(
#line 272 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 272 "term.m"
  MR_Word mercury__term__Term0_4,
#line 272 "term.m"
  MR_Word mercury__term__Substitution_5,
#line 272 "term.m"
  MR_Word * mercury__term__Term_6)
#line 272 "term.m"
{
#line 1112 "term.m"
  {
#line 1112 "term.m"
    MR_bool mercury__term__succeeded;

#line 1112 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_4)) == (MR_mktag((MR_Integer) 0))))
#line 1113 "term.m"
      {
#line 1113 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1113 "term.m"
        MR_Word mercury__term__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1113 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_4, (MR_Integer) 2)));
#line 1113 "term.m"
        MR_Word mercury__term__Args_13;

#line 1114 "term.m"
        {
#line 1114 "term.m"
          mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Args0_11, mercury__term__Substitution_5, &mercury__term__Args_13);
        }
#line 1115 "term.m"
        {
#line 1115 "term.m"
          MR_Word base;
#line 1115 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "term.m"
          *mercury__term__Term_6 = base;
#line 1115 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1115 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_13));
#line 1115 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1115 "term.m"
        }
#line 1113 "term.m"
      }
#line 1112 "term.m"
    else
#line 1106 "term.m"
      {
#line 1106 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 0)));
#line 1106 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_4, (MR_Integer) 1)));
#line 1109 "term.m"
        MR_Word mercury__term__ReplacementTerm_9;
#line 1107 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1107 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1107 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1107 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 39 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 12745 "term.c"
        {
#line 12747 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12749 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 12751 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12753 "term.c"
        }
#line 12755 "term.c"
        {
#line 12757 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12759 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 12761 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 12763 "term.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Substitution_5, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
        }
#line 39 "map.opt"
        if (mercury__term__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
#line 39 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 1109 "term.m"
        if (mercury__term__succeeded)
#line 1108 "term.m"
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
#line 1109 "term.m"
        else
#line 1110 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_4;
#line 1106 "term.m"
      }
#line 1112 "term.m"
  }
#line 272 "term.m"
}

#line 271 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
#line 271 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 271 "term.m"
  MR_Word mercury__term__T1_4,
#line 271 "term.m"
  MR_Word mercury__term__S_5)
#line 271 "term.m"
{
#line 1320 "term.m"
  {
#line 1320 "term.m"
    MR_bool mercury__term__succeeded;
#line 1320 "term.m"
    MR_Word mercury__term__T2_6;

#line 1320 "term.m"
    {
#line 1320 "term.m"
      mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__S_5, &mercury__term__T2_6);
    }
#line 1320 "term.m"
    return mercury__term__T2_6;
#line 1320 "term.m"
  }
#line 271 "term.m"
}

#line 264 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
#line 264 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 264 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 264 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 264 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 264 "term.m"
{
#line 1096 "term.m"
  {
#line 1096 "term.m"
    MR_bool mercury__term__succeeded;

#line 1096 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1096 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1096 "term.m"
    else
#line 1098 "term.m"
      {
#line 1098 "term.m"
        MR_Word mercury__term__Term0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1098 "term.m"
        MR_Word mercury__term__Terms0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "term.m"
        MR_Word mercury__term__Term_8;
#line 1098 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1099 "term.m"
        {
#line 1099 "term.m"
          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Term0_5, mercury__term__HeadVar__2_2, &mercury__term__Term_8);
        }
#line 1100 "term.m"
        {
#line 1100 "term.m"
          mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Terms0_6, mercury__term__HeadVar__2_2, &mercury__term__Terms_9);
        }
#line 1098 "term.m"
        {
#line 1098 "term.m"
          MR_Word base;
#line 1098 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1098 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1098 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1098 "term.m"
        }
#line 1098 "term.m"
      }
#line 1096 "term.m"
  }
#line 264 "term.m"
}

#line 262 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
#line 262 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 262 "term.m"
  MR_Word mercury__term__Ts1_4,
#line 262 "term.m"
  MR_Word mercury__term__S_5)
#line 262 "term.m"
{
#line 1317 "term.m"
  {
#line 1317 "term.m"
    MR_bool mercury__term__succeeded;
#line 1317 "term.m"
    MR_Word mercury__term__Ts2_6;

#line 1317 "term.m"
    {
#line 1317 "term.m"
      mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Ts1_4, mercury__term__S_5, &mercury__term__Ts2_6);
    }
#line 1317 "term.m"
    return mercury__term__Ts2_6;
#line 1317 "term.m"
  }
#line 262 "term.m"
}

#line 257 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
#line 257 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 257 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 257 "term.m"
  MR_Word mercury__term__Substitution_2,
#line 257 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 257 "term.m"
{
#line 1085 "term.m"
  while (MR_TRUE)
#line 1085 "term.m"
    {
#line 1085 "term.m"
      /* tailcall optimized into a loop */
#line 1085 "term.m"
      {
#line 1085 "term.m"
        MR_bool mercury__term__succeeded;

#line 1085 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1093 "term.m"
          {
#line 1093 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1093 "term.m"
            MR_Word mercury__term__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1093 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1093 "term.m"
            MR_Word mercury__term__Args_14;

#line 1094 "term.m"
            {
#line 1094 "term.m"
              mercury__term__apply_rec_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Args0_11, mercury__term__Substitution_2, &mercury__term__Args_14);
            }
#line 1093 "term.m"
            {
#line 1093 "term.m"
              MR_Word base;
#line 1093 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "term.m"
              *mercury__term__HeadVar__3_3 = base;
#line 1093 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1093 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_14));
#line 1093 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1093 "term.m"
            }
#line 1093 "term.m"
          }
#line 1085 "term.m"
        else
#line 1085 "term.m"
          {
#line 1085 "term.m"
            MR_Word mercury__term__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1085 "term.m"
            MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1089 "term.m"
            MR_Word mercury__term__Replacement_9;
#line 1086 "term.m"
            MR_Word mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1086 "term.m"
            MR_Word mercury__term__TypeInfo_17_17;
#line 1086 "term.m"
            MR_Word mercury__term__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1086 "term.m"
            MR_Word mercury__term__TypeInfo_19_19;
#line 39 "map.opt"
            MR_Box mercury__term__conv0_Replacement_9;

#line 13002 "term.c"
            {
#line 13004 "term.c"
              mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13006 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 13008 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 13010 "term.c"
            }
#line 13012 "term.c"
            {
#line 13014 "term.c"
              mercury__term__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13016 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_18_18));
#line 13018 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_19_19, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 13020 "term.c"
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
#line 1089 "term.m"
            if (mercury__term__succeeded)
#line 1088 "term.m"
              {
#line 1088 "term.m"
                /* direct tailcall eliminated */
#line 1088 "term.m"
                {
#line 1088 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Replacement_9;

#line 1088 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1088 "term.m"
                }
#line 1088 "term.m"
                continue;
#line 1088 "term.m"
              }
#line 1089 "term.m"
            else
#line 1090 "term.m"
              *mercury__term__HeadVar__3_3 = mercury__term__HeadVar__1_1;
#line 1085 "term.m"
          }
#line 1085 "term.m"
      }
#line 1085 "term.m"
      break;
#line 1085 "term.m"
    }
#line 257 "term.m"
}

#line 256 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
#line 256 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 256 "term.m"
  MR_Word mercury__term__T1_4,
#line 256 "term.m"
  MR_Word mercury__term__S_5)
#line 256 "term.m"
{
#line 1314 "term.m"
  {
#line 1314 "term.m"
    MR_bool mercury__term__succeeded;
#line 1314 "term.m"
    MR_Word mercury__term__T2_6;

#line 1314 "term.m"
    {
#line 1314 "term.m"
      mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__T1_4, mercury__term__S_5, &mercury__term__T2_6);
    }
#line 1314 "term.m"
    return mercury__term__T2_6;
#line 1314 "term.m"
  }
#line 256 "term.m"
}

#line 248 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
#line 248 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_12,
#line 248 "term.m"
  MR_Word mercury__term__Ss_5,
#line 248 "term.m"
  MR_Word mercury__term__Rs_6,
#line 248 "term.m"
  MR_Word mercury__term__TermList0_7,
#line 248 "term.m"
  MR_Word * mercury__term__TermList_8)
#line 248 "term.m"
{
#line 1067 "term.m"
  {
#line 1067 "term.m"
    MR_bool mercury__term__succeeded;
#line 1067 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1071 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1069 "term.m"
    {
#line 1069 "term.m"
      mercury__term__succeeded = mercury__term__substitute_corresponding_2_4_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Ss_5, mercury__term__Rs_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1071 "term.m"
    if (mercury__term__succeeded)
#line 1070 "term.m"
      {
#line 1070 "term.m"
        mercury__term__apply_substitution_to_list_3_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__TermList0_7, mercury__term__Subst_10, mercury__term__TermList_8);
#line 1070 "term.m"
        return;
      }
#line 1071 "term.m"
    else
#line 1072 "term.m"
      {
#line 1072 "term.m"
        {
#line 1072 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.substitute_corresponding_list: different length lists");
#line 1072 "term.m"
          return;
        }
#line 1072 "term.m"
      }
#line 1067 "term.m"
  }
#line 248 "term.m"
}

#line 246 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
#line 246 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 246 "term.m"
  MR_Word mercury__term__Vs_5,
#line 246 "term.m"
  MR_Word mercury__term__Ts1_6,
#line 246 "term.m"
  MR_Word mercury__term__Ts2_7)
#line 246 "term.m"
{
#line 1311 "term.m"
  {
#line 1311 "term.m"
    MR_bool mercury__term__succeeded;
#line 1311 "term.m"
    MR_Word mercury__term__Ts3_8;

#line 1311 "term.m"
    {
#line 1311 "term.m"
      mercury__term__substitute_corresponding_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vs_5, mercury__term__Ts1_6, mercury__term__Ts2_7, &mercury__term__Ts3_8);
    }
#line 1311 "term.m"
    return mercury__term__Ts3_8;
#line 1311 "term.m"
  }
#line 246 "term.m"
}

#line 241 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
#line 241 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_12,
#line 241 "term.m"
  MR_Word mercury__term__Ss_5,
#line 241 "term.m"
  MR_Word mercury__term__Rs_6,
#line 241 "term.m"
  MR_Word mercury__term__Term0_7,
#line 241 "term.m"
  MR_Word * mercury__term__Term_8)
#line 241 "term.m"
{
#line 1059 "term.m"
  {
#line 1059 "term.m"
    MR_bool mercury__term__succeeded;
#line 1059 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1061 "term.m"
    {
#line 1061 "term.m"
      mercury__term__succeeded = mercury__term__substitute_corresponding_2_4_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Ss_5, mercury__term__Rs_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1063 "term.m"
    if (mercury__term__succeeded)
#line 1062 "term.m"
      {
#line 1062 "term.m"
        mercury__term__apply_substitution_3_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Term0_7, mercury__term__Subst_10, mercury__term__Term_8);
#line 1062 "term.m"
        return;
      }
#line 1063 "term.m"
    else
#line 1064 "term.m"
      {
#line 1064 "term.m"
        {
#line 1064 "term.m"
          mercury__require__error_1_p_0((MR_String) "term.substitute_corresponding: different length lists");
#line 1064 "term.m"
          return;
        }
#line 1064 "term.m"
      }
#line 1059 "term.m"
  }
#line 241 "term.m"
}

#line 239 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
#line 239 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 239 "term.m"
  MR_Word mercury__term__Vs_5,
#line 239 "term.m"
  MR_Word mercury__term__T1s_6,
#line 239 "term.m"
  MR_Word mercury__term__T_7)
#line 239 "term.m"
{
#line 1308 "term.m"
  {
#line 1308 "term.m"
    MR_bool mercury__term__succeeded;
#line 1308 "term.m"
    MR_Word mercury__term__T2_8;

#line 1308 "term.m"
    {
#line 1308 "term.m"
      mercury__term__substitute_corresponding_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vs_5, mercury__term__T1s_6, mercury__term__T_7, &mercury__term__T2_8);
    }
#line 1308 "term.m"
    return mercury__term__T2_8;
#line 1308 "term.m"
  }
#line 239 "term.m"
}

#line 229 "term.m"
void MR_CALL 
mercury__term__substitute_list_4_p_0(
#line 229 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 229 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 229 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 229 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 229 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 229 "term.m"
{
#line 1054 "term.m"
  {
#line 1054 "term.m"
    MR_bool mercury__term__succeeded;

#line 1054 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "term.m"
    else
#line 1055 "term.m"
      {
#line 1055 "term.m"
        MR_Word mercury__term__Term0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1055 "term.m"
        MR_Word mercury__term__Terms0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1055 "term.m"
        MR_Word mercury__term__Term_11;
#line 1055 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1056 "term.m"
        {
#line 1056 "term.m"
          mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Term0_7, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Term_11);
        }
#line 1057 "term.m"
        {
#line 1057 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__Terms0_8, mercury__term__HeadVar__2_2, mercury__term__HeadVar__3_3, &mercury__term__Terms_12);
        }
#line 1055 "term.m"
        {
#line 1055 "term.m"
          MR_Word base;
#line 1055 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1055 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1055 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1055 "term.m"
        }
#line 1055 "term.m"
      }
#line 1054 "term.m"
  }
#line 229 "term.m"
}

#line 228 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
#line 228 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 228 "term.m"
  MR_Word mercury__term__Ts1_5,
#line 228 "term.m"
  MR_Word mercury__term__V_6,
#line 228 "term.m"
  MR_Word mercury__term__T_7)
#line 228 "term.m"
{
#line 1305 "term.m"
  {
#line 1305 "term.m"
    MR_bool mercury__term__succeeded;
#line 1305 "term.m"
    MR_Word mercury__term__Ts2_8;

#line 1305 "term.m"
    {
#line 1305 "term.m"
      mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Ts1_5, mercury__term__V_6, mercury__term__T_7, &mercury__term__Ts2_8);
    }
#line 1305 "term.m"
    return mercury__term__Ts2_8;
#line 1305 "term.m"
  }
#line 228 "term.m"
}

#line 223 "term.m"
void MR_CALL 
mercury__term__substitute_4_p_0(
#line 223 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 223 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 223 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 223 "term.m"
  MR_Word mercury__term__Replacement_3,
#line 223 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 223 "term.m"
{
#line 1044 "term.m"
  {
#line 1044 "term.m"
    MR_bool mercury__term__succeeded;

#line 1044 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1051 "term.m"
      {
#line 1051 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1051 "term.m"
        MR_Word mercury__term__Args0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1051 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1051 "term.m"
        MR_Word mercury__term__Args_16;

#line 1052 "term.m"
        {
#line 1052 "term.m"
          mercury__term__substitute_list_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__Args0_12, mercury__term__HeadVar__2_2, mercury__term__Replacement_3, &mercury__term__Args_16);
        }
#line 1051 "term.m"
        {
#line 1051 "term.m"
          MR_Word base;
#line 1051 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1051 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1051 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1051 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__Args_16));
#line 1051 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1051 "term.m"
        }
#line 1051 "term.m"
      }
#line 1044 "term.m"
    else
#line 1044 "term.m"
      {
#line 1044 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1044 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "term.m"
        MR_Integer mercury__term__CastX_20 = (MR_Integer) mercury__term__Var_6;
#line 493 "term.m"
        MR_Integer mercury__term__CastY_21 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 493 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_20 == mercury__term__CastY_21);
#line 493 "term.m"
        if (mercury__term__succeeded)
#line 493 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
        else
#line 493 "term.m"
          {
#line 493 "term.m"
            MR_Integer mercury__term__V_18_18 = (MR_Integer) mercury__term__Var_6;
#line 493 "term.m"
            MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 13461 "term.c"
            mercury__term__succeeded = (mercury__term__V_18_18 == mercury__term__V_19_19);
#line 493 "term.m"
          }
#line 1047 "term.m"
        if (mercury__term__succeeded)
#line 1046 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__Replacement_3;
#line 1047 "term.m"
        else
#line 1048 "term.m"
          *mercury__term__HeadVar__4_4 = mercury__term__HeadVar__1_1;
#line 1044 "term.m"
      }
#line 1044 "term.m"
  }
#line 223 "term.m"
}

#line 222 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
#line 222 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 222 "term.m"
  MR_Word mercury__term__T1_5,
#line 222 "term.m"
  MR_Word mercury__term__V_6,
#line 222 "term.m"
  MR_Word mercury__term__T2_7)
#line 222 "term.m"
{
#line 1302 "term.m"
  {
#line 1302 "term.m"
    MR_bool mercury__term__succeeded;
#line 1302 "term.m"
    MR_Word mercury__term__T3_8;

#line 1302 "term.m"
    {
#line 1302 "term.m"
      mercury__term__substitute_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__T1_5, mercury__term__V_6, mercury__term__T2_7, &mercury__term__T3_8);
    }
#line 1302 "term.m"
    return mercury__term__T3_8;
#line 1302 "term.m"
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
#line 1016 "term.m"
  {
#line 1016 "term.m"
    MR_bool mercury__term__succeeded;
#line 1016 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 1016 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 1016 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 825 "term.m"
    {
#line 825 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 48 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1021 "term.m"
    {
#line 1021 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 1016 "term.m"
    return mercury__term__succeeded;
#line 1016 "term.m"
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
  MR_Word mercury__term__BoundVars_3,
#line 207 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_4,
#line 207 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_5)
#line 207 "term.m"
{
#line 995 "term.m"
  while (MR_TRUE)
#line 995 "term.m"
    {
#line 995 "term.m"
      /* tailcall optimized into a loop */
#line 995 "term.m"
      {
#line 995 "term.m"
        MR_bool mercury__term__succeeded;

#line 995 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "term.m"
          {
#line 995 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "term.m"
            if (mercury__term__succeeded)
#line 995 "term.m"
              {
#line 995 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 995 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 995 "term.m"
              }
#line 995 "term.m"
          }
#line 995 "term.m"
        else
#line 996 "term.m"
          {
#line 996 "term.m"
            MR_Word mercury__term__X_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 996 "term.m"
            MR_Word mercury__term__Xs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 996 "term.m"
            MR_Word mercury__term__Y_12;
#line 996 "term.m"
            MR_Word mercury__term__Ys_13;
#line 996 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Bindings_18_18;

#line 996 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 996 "term.m"
            if (mercury__term__succeeded)
#line 996 "term.m"
              {
#line 996 "term.m"
                mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 996 "term.m"
                mercury__term__Ys_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 997 "term.m"
                {
#line 997 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__X_10, mercury__term__Y_12, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__STATE_VARIABLE_Bindings_18_18);
                }
#line 996 "term.m"
                if (mercury__term__succeeded)
#line 998 "term.m"
                  {
#line 998 "term.m"
                    /* direct tailcall eliminated */
#line 998 "term.m"
                    {
#line 998 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Xs_11;
#line 998 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Ys_13;
#line 998 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Bindings_18_18;

#line 998 "term.m"
                      mercury__term__STATE_VARIABLE_Bindings_0_4 = mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_4;
#line 998 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 998 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 998 "term.m"
                    }
#line 998 "term.m"
                    continue;
#line 998 "term.m"
                  }
#line 996 "term.m"
              }
#line 996 "term.m"
          }
#line 995 "term.m"
        return mercury__term__succeeded;
#line 995 "term.m"
      }
#line 995 "term.m"
      break;
#line 995 "term.m"
    }
#line 207 "term.m"
}

#line 201 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
#line 201 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_69,
#line 201 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 201 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 201 "term.m"
  MR_Word mercury__term__BoundVars_3,
#line 201 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_4,
#line 201 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_5)
#line 201 "term.m"
{
#line 922 "term.m"
  while (MR_TRUE)
#line 922 "term.m"
    {
#line 922 "term.m"
      /* tailcall optimized into a loop */
#line 922 "term.m"
      {
#line 922 "term.m"
        MR_bool mercury__term__succeeded;

#line 922 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 922 "term.m"
          {
#line 922 "term.m"
            MR_Word mercury__term__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 922 "term.m"
            MR_Word mercury__term__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 972 "term.m"
            MR_Word mercury__term__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 922 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 983 "term.m"
              {
#line 983 "term.m"
                MR_Word mercury__term__TypeCtorInfo_118_118 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 983 "term.m"
                MR_Word mercury__term__TypeInfo_119_119;
#line 983 "term.m"
                MR_Word mercury__term__FY_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 983 "term.m"
                MR_Word mercury__term__AsY_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 983 "term.m"
                MR_Integer mercury__term__ArityX_64;
#line 983 "term.m"
                MR_Integer mercury__term__ArityY_65;
#line 982 "term.m"
                MR_Word mercury__term___CY_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));

#line 13731 "term.c"
                {
#line 13733 "term.c"
                  mercury__term__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13735 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_119_119, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_118_118));
#line 13737 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_119_119, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13739 "term.c"
                }
#line 984 "term.m"
                {
#line 984 "term.m"
                  mercury__list__length_2_p_0(mercury__term__TypeInfo_119_119, (MR_Word) mercury__term__V_123_123, &mercury__term__ArityX_64);
                }
#line 985 "term.m"
                {
#line 985 "term.m"
                  mercury__list__length_2_p_0(mercury__term__TypeInfo_119_119, (MR_Word) mercury__term__AsY_60, &mercury__term__ArityY_65);
                }
#line 987 "term.m"
                {
#line 987 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_124_124, mercury__term__FY_59);
                }
#line 983 "term.m"
                if (mercury__term__succeeded)
#line 983 "term.m"
                  {
#line 988 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_64 == mercury__term__ArityY_65);
#line 983 "term.m"
                    if (mercury__term__succeeded)
#line 990 "term.m"
                      {
#line 990 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_123_123, mercury__term__AsY_60, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                      }
#line 983 "term.m"
                  }
#line 983 "term.m"
              }
#line 922 "term.m"
            else
#line 972 "term.m"
              {
#line 972 "term.m"
                MR_Word mercury__term__X_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "term.m"
                MR_Word mercury__term__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 976 "term.m"
                MR_Word mercury__term__BindingOfX_49;
#line 973 "term.m"
                MR_Word mercury__term__TypeCtorInfo_108_108 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 973 "term.m"
                MR_Word mercury__term__TypeInfo_109_109;
#line 973 "term.m"
                MR_Word mercury__term__TypeCtorInfo_110_110 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 973 "term.m"
                MR_Word mercury__term__TypeInfo_111_111;
#line 973 "term.m"
                MR_Box mercury__term__conv0_BindingOfX_49;

#line 13794 "term.c"
                {
#line 13796 "term.c"
                  mercury__term__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13798 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_109_109, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_108_108));
#line 13800 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_109_109, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13802 "term.c"
                }
#line 13804 "term.c"
                {
#line 13806 "term.c"
                  mercury__term__TypeInfo_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13808 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_111_111, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_110_110));
#line 13810 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_111_111, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13812 "term.c"
                }
#line 973 "term.m"
                {
#line 973 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_109_109, mercury__term__TypeInfo_111_111, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__X_45, &mercury__term__conv0_BindingOfX_49);
                }
#line 973 "term.m"
                if (mercury__term__succeeded)
#line 973 "term.m"
                  {
#line 973 "term.m"
                    mercury__term__BindingOfX_49 = ((MR_Word) mercury__term__conv0_BindingOfX_49);
#line 973 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 973 "term.m"
                  }
#line 976 "term.m"
                if (mercury__term__succeeded)
#line 974 "term.m"
                  {
#line 974 "term.m"
                    /* direct tailcall eliminated */
#line 974 "term.m"
                    {
#line 974 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfX_49;

#line 974 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 974 "term.m"
                    }
#line 974 "term.m"
                    continue;
#line 974 "term.m"
                  }
#line 976 "term.m"
                else
#line 977 "term.m"
                  {
#line 977 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_114_114;
#line 977 "term.m"
                    MR_Word mercury__term__TypeInfo_115_115;
#line 977 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_116_116;
#line 977 "term.m"
                    MR_Word mercury__term__TypeInfo_117_117;
#line 979 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_5;

#line 977 "term.m"
                    {
#line 977 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_123_123, mercury__term__X_45, mercury__term__STATE_VARIABLE_Bindings_0_4);
                    }
#line 977 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 977 "term.m"
                    if (mercury__term__succeeded)
#line 977 "term.m"
                      {
#line 978 "term.m"
                        {
#line 978 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__X_45, mercury__term__BoundVars_3);
                        }
#line 978 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 977 "term.m"
                        if (mercury__term__succeeded)
#line 977 "term.m"
                          {
#line 13885 "term.c"
                            mercury__term__TypeCtorInfo_114_114 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 13887 "term.c"
                            mercury__term__TypeCtorInfo_116_116 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 13889 "term.c"
                            {
#line 13891 "term.c"
                              mercury__term__TypeInfo_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13893 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_115_115, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_114_114));
#line 13895 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_115_115, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13897 "term.c"
                            }
#line 13899 "term.c"
                            {
#line 13901 "term.c"
                              mercury__term__TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13903 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_117_117, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_116_116));
#line 13905 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_117_117, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13907 "term.c"
                            }
#line 979 "term.m"
                            {
#line 979 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_115_115, mercury__term__TypeInfo_117_117, mercury__term__X_45, ((MR_Box) (mercury__term__HeadVar__1_1)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv1_STATE_VARIABLE_Bindings_5);
                            }
#line 979 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_5;
#line 979 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 977 "term.m"
                          }
#line 977 "term.m"
                      }
#line 977 "term.m"
                  }
#line 972 "term.m"
              }
#line 922 "term.m"
          }
#line 922 "term.m"
        else
#line 922 "term.m"
          {
#line 922 "term.m"
            MR_Word mercury__term__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 921 "term.m"
            MR_Word mercury__term__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 922 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
              {
#line 962 "term.m"
                MR_Word mercury__term__As_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 962 "term.m"
                MR_Word mercury__term__F_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 962 "term.m"
                MR_Word mercury__term__C_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 966 "term.m"
                MR_Word mercury__term__BindingOfX_35;
#line 963 "term.m"
                MR_Word mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 963 "term.m"
                MR_Word mercury__term__TypeInfo_99_99;
#line 963 "term.m"
                MR_Word mercury__term__TypeCtorInfo_100_100 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 963 "term.m"
                MR_Word mercury__term__TypeInfo_101_101;
#line 963 "term.m"
                MR_Box mercury__term__conv2_BindingOfX_35;

#line 13960 "term.c"
                {
#line 13962 "term.c"
                  mercury__term__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13964 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_98_98));
#line 13966 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13968 "term.c"
                }
#line 13970 "term.c"
                {
#line 13972 "term.c"
                  mercury__term__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13974 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_100_100));
#line 13976 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_101_101, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 13978 "term.c"
                }
#line 963 "term.m"
                {
#line 963 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_99_99, mercury__term__TypeInfo_101_101, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__V_126_126, &mercury__term__conv2_BindingOfX_35);
                }
#line 963 "term.m"
                if (mercury__term__succeeded)
#line 963 "term.m"
                  {
#line 963 "term.m"
                    mercury__term__BindingOfX_35 = ((MR_Word) mercury__term__conv2_BindingOfX_35);
#line 963 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 963 "term.m"
                  }
#line 966 "term.m"
                if (mercury__term__succeeded)
#line 964 "term.m"
                  {
#line 964 "term.m"
                    /* direct tailcall eliminated */
#line 964 "term.m"
                    {
#line 964 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_35;

#line 964 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 964 "term.m"
                    }
#line 964 "term.m"
                    continue;
#line 964 "term.m"
                  }
#line 966 "term.m"
                else
#line 967 "term.m"
                  {
#line 967 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_104_104;
#line 967 "term.m"
                    MR_Word mercury__term__TypeInfo_105_105;
#line 967 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_106_106;
#line 967 "term.m"
                    MR_Word mercury__term__TypeInfo_107_107;
#line 969 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Bindings_5;

#line 967 "term.m"
                    {
#line 967 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__As_31, mercury__term__V_126_126, mercury__term__STATE_VARIABLE_Bindings_0_4);
                    }
#line 967 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 967 "term.m"
                    if (mercury__term__succeeded)
#line 967 "term.m"
                      {
#line 968 "term.m"
                        {
#line 968 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__BoundVars_3);
                        }
#line 968 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 967 "term.m"
                        if (mercury__term__succeeded)
#line 967 "term.m"
                          {
#line 14051 "term.c"
                            mercury__term__TypeCtorInfo_104_104 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14053 "term.c"
                            mercury__term__TypeCtorInfo_106_106 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14055 "term.c"
                            {
#line 14057 "term.c"
                              mercury__term__TypeInfo_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14059 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_105_105, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_104_104));
#line 14061 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_105_105, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14063 "term.c"
                            }
#line 14065 "term.c"
                            {
#line 14067 "term.c"
                              mercury__term__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14069 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_107_107, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_106_106));
#line 14071 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_107_107, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14073 "term.c"
                            }
#line 969 "term.m"
                            {
#line 969 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_105_105, mercury__term__TypeInfo_107_107, mercury__term__V_126_126, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv3_STATE_VARIABLE_Bindings_5);
                            }
#line 969 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Bindings_5;
#line 969 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 967 "term.m"
                          }
#line 967 "term.m"
                      }
#line 967 "term.m"
                  }
#line 962 "term.m"
              }
#line 922 "term.m"
            else
#line 922 "term.m"
              {
#line 922 "term.m"
                MR_Word mercury__term__Y_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 921 "term.m"
                MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 923 "term.m"
                {
#line 923 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__BoundVars_3);
                }
#line 925 "term.m"
                if (mercury__term__succeeded)
#line 924 "term.m"
                  {
#line 924 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__Y_9, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                  }
#line 925 "term.m"
                else
#line 927 "term.m"
                  {
#line 925 "term.m"
                    {
#line 925 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__BoundVars_3);
                    }
#line 927 "term.m"
                    if (mercury__term__succeeded)
#line 926 "term.m"
                      {
#line 926 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__V_126_126, mercury__term__BoundVars_3, mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__STATE_VARIABLE_Bindings_5);
                      }
#line 927 "term.m"
                    else
#line 942 "term.m"
                      {
#line 942 "term.m"
                        MR_Word mercury__term__TypeInfo_75_75;
#line 942 "term.m"
                        MR_Word mercury__term__TypeInfo_77_77;
#line 942 "term.m"
                        MR_Word mercury__term__BindingOfX_13;
#line 927 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 927 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_76_76 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 927 "term.m"
                        MR_Box mercury__term__conv4_BindingOfX_13;

#line 14146 "term.c"
                        {
#line 14148 "term.c"
                          mercury__term__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14150 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_74_74));
#line 14152 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14154 "term.c"
                        }
#line 14156 "term.c"
                        {
#line 14158 "term.c"
                          mercury__term__TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14160 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_77_77, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_76_76));
#line 14162 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_77_77, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14164 "term.c"
                        }
#line 927 "term.m"
                        {
#line 927 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__V_126_126, &mercury__term__conv4_BindingOfX_13);
                        }
#line 927 "term.m"
                        if (mercury__term__succeeded)
#line 927 "term.m"
                          {
#line 927 "term.m"
                            mercury__term__BindingOfX_13 = ((MR_Word) mercury__term__conv4_BindingOfX_13);
#line 927 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 927 "term.m"
                          }
#line 942 "term.m"
                        if (mercury__term__succeeded)
#line 932 "term.m"
                          {
#line 932 "term.m"
                            MR_Word mercury__term__BindingOfY_14;
#line 928 "term.m"
                            MR_Box mercury__term__conv5_BindingOfY_14;

#line 928 "term.m"
                            {
#line 928 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__Y_9, &mercury__term__conv5_BindingOfY_14);
                            }
#line 928 "term.m"
                            if (mercury__term__succeeded)
#line 928 "term.m"
                              {
#line 928 "term.m"
                                mercury__term__BindingOfY_14 = ((MR_Word) mercury__term__conv5_BindingOfY_14);
#line 928 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 928 "term.m"
                              }
#line 932 "term.m"
                            if (mercury__term__succeeded)
#line 931 "term.m"
                              {
#line 931 "term.m"
                                /* direct tailcall eliminated */
#line 931 "term.m"
                                {
#line 931 "term.m"
                                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_13;
#line 931 "term.m"
                                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfY_14;

#line 931 "term.m"
                                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 931 "term.m"
                                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 931 "term.m"
                                }
#line 931 "term.m"
                                continue;
#line 931 "term.m"
                              }
#line 932 "term.m"
                            else
#line 933 "term.m"
                              {
#line 933 "term.m"
                                MR_Word mercury__term__SubstBindingOfX_15;
#line 935 "term.m"
                                MR_Word mercury__term__V_120_120;
#line 935 "term.m"
                                MR_Word mercury__term__V_16_16;

#line 933 "term.m"
                                {
#line 933 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__BindingOfX_13, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__SubstBindingOfX_15);
                                }
#line 935 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfX_15)) == (MR_mktag((MR_Integer) 1)));
#line 935 "term.m"
                                if (mercury__term__succeeded)
#line 935 "term.m"
                                  {
#line 935 "term.m"
                                    mercury__term__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_15, (MR_Integer) 0)));
#line 935 "term.m"
                                    mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_15, (MR_Integer) 1)));
#line 935 "term.m"
                                    {
#line 935 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__Y_9, mercury__term__V_120_120);
                                    }
#line 935 "term.m"
                                  }
#line 937 "term.m"
                                if (mercury__term__succeeded)
#line 935 "term.m"
                                  {
#line 935 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 935 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 935 "term.m"
                                  }
#line 937 "term.m"
                                else
#line 938 "term.m"
                                  {
#line 939 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Bindings_5;

#line 938 "term.m"
                                    {
#line 938 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__SubstBindingOfX_15, mercury__term__Y_9, mercury__term__STATE_VARIABLE_Bindings_0_4);
                                    }
#line 938 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 938 "term.m"
                                    if (mercury__term__succeeded)
#line 938 "term.m"
                                      {
#line 939 "term.m"
                                        {
#line 939 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_75_75, mercury__term__TypeInfo_77_77, mercury__term__Y_9, ((MR_Box) (mercury__term__SubstBindingOfX_15)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv6_STATE_VARIABLE_Bindings_5);
                                        }
#line 939 "term.m"
                                        *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Bindings_5;
#line 939 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 938 "term.m"
                                      }
#line 938 "term.m"
                                  }
#line 933 "term.m"
                              }
#line 932 "term.m"
                          }
#line 942 "term.m"
                        else
#line 952 "term.m"
                          {
#line 952 "term.m"
                            MR_Word mercury__term__TypeInfo_87_87;
#line 952 "term.m"
                            MR_Word mercury__term__TypeInfo_89_89;
#line 952 "term.m"
                            MR_Word mercury__term__BindingOfY_27;
#line 943 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 943 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_88_88 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 943 "term.m"
                            MR_Box mercury__term__conv7_BindingOfY_27;

#line 14323 "term.c"
                            {
#line 14325 "term.c"
                              mercury__term__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14327 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_86_86));
#line 14329 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14331 "term.c"
                            }
#line 14333 "term.c"
                            {
#line 14335 "term.c"
                              mercury__term__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14337 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_88_88));
#line 14339 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14341 "term.c"
                            }
#line 943 "term.m"
                            {
#line 943 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_87_87, mercury__term__TypeInfo_89_89, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, mercury__term__Y_9, &mercury__term__conv7_BindingOfY_27);
                            }
#line 943 "term.m"
                            if (mercury__term__succeeded)
#line 943 "term.m"
                              {
#line 943 "term.m"
                                mercury__term__BindingOfY_27 = ((MR_Word) mercury__term__conv7_BindingOfY_27);
#line 943 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 943 "term.m"
                              }
#line 952 "term.m"
                            if (mercury__term__succeeded)
#line 944 "term.m"
                              {
#line 944 "term.m"
                                MR_Word mercury__term__SubstBindingOfY_17;
#line 946 "term.m"
                                MR_Word mercury__term__V_121_121;
#line 946 "term.m"
                                MR_Word mercury__term__V_18_18;

#line 944 "term.m"
                                {
#line 944 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__BindingOfY_27, mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__SubstBindingOfY_17);
                                }
#line 946 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfY_17)) == (MR_mktag((MR_Integer) 1)));
#line 946 "term.m"
                                if (mercury__term__succeeded)
#line 946 "term.m"
                                  {
#line 946 "term.m"
                                    mercury__term__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_17, (MR_Integer) 0)));
#line 946 "term.m"
                                    mercury__term__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_17, (MR_Integer) 1)));
#line 946 "term.m"
                                    {
#line 946 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__V_121_121);
                                    }
#line 946 "term.m"
                                  }
#line 948 "term.m"
                                if (mercury__term__succeeded)
#line 946 "term.m"
                                  {
#line 946 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 946 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 946 "term.m"
                                  }
#line 948 "term.m"
                                else
#line 949 "term.m"
                                  {
#line 950 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Bindings_5;

#line 949 "term.m"
                                    {
#line 949 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__SubstBindingOfY_17, mercury__term__V_126_126, mercury__term__STATE_VARIABLE_Bindings_0_4);
                                    }
#line 949 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 949 "term.m"
                                    if (mercury__term__succeeded)
#line 949 "term.m"
                                      {
#line 950 "term.m"
                                        {
#line 950 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_87_87, mercury__term__TypeInfo_89_89, mercury__term__V_126_126, ((MR_Box) (mercury__term__SubstBindingOfY_17)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv8_STATE_VARIABLE_Bindings_5);
                                        }
#line 950 "term.m"
                                        *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Bindings_5;
#line 950 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 949 "term.m"
                                      }
#line 949 "term.m"
                                  }
#line 944 "term.m"
                              }
#line 952 "term.m"
                            else
#line 956 "term.m"
                              {
#line 954 "term.m"
                                {
#line 954 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_69, mercury__term__V_126_126, mercury__term__Y_9);
                                }
#line 956 "term.m"
                                if (mercury__term__succeeded)
#line 954 "term.m"
                                  *mercury__term__STATE_VARIABLE_Bindings_5 = mercury__term__STATE_VARIABLE_Bindings_0_4;
#line 956 "term.m"
                                else
#line 957 "term.m"
                                  {
#line 957 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 957 "term.m"
                                    MR_Word mercury__term__TypeInfo_95_95;
#line 957 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_96_96;
#line 957 "term.m"
                                    MR_Word mercury__term__TypeInfo_97_97;
#line 957 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Bindings_5;

#line 14462 "term.c"
                                    {
#line 14464 "term.c"
                                      mercury__term__TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14466 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_94_94));
#line 14468 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14470 "term.c"
                                    }
#line 14472 "term.c"
                                    mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14474 "term.c"
                                    {
#line 14476 "term.c"
                                      mercury__term__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14478 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_96_96));
#line 14480 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_69));
#line 14482 "term.c"
                                    }
#line 957 "term.m"
                                    {
#line 957 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_69, mercury__term__TypeInfo_95_95, mercury__term__TypeInfo_97_97, mercury__term__V_126_126, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_4, &mercury__term__conv9_STATE_VARIABLE_Bindings_5);
                                    }
#line 957 "term.m"
                                    *mercury__term__STATE_VARIABLE_Bindings_5 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Bindings_5;
#line 957 "term.m"
                                  }
#line 956 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 956 "term.m"
                              }
#line 952 "term.m"
                          }
#line 942 "term.m"
                      }
#line 927 "term.m"
                  }
#line 922 "term.m"
              }
#line 922 "term.m"
          }
#line 922 "term.m"
        return mercury__term__succeeded;
#line 922 "term.m"
      }
#line 922 "term.m"
      break;
#line 922 "term.m"
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
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_3,
#line 192 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_4)
#line 192 "term.m"
{
#line 916 "term.m"
  while (MR_TRUE)
#line 916 "term.m"
    {
#line 916 "term.m"
      /* tailcall optimized into a loop */
#line 916 "term.m"
      {
#line 916 "term.m"
        MR_bool mercury__term__succeeded;

#line 916 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 916 "term.m"
          {
#line 916 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "term.m"
            if (mercury__term__succeeded)
#line 916 "term.m"
              {
#line 916 "term.m"
                *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 916 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 916 "term.m"
              }
#line 916 "term.m"
          }
#line 916 "term.m"
        else
#line 917 "term.m"
          {
#line 917 "term.m"
            MR_Word mercury__term__X_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 917 "term.m"
            MR_Word mercury__term__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "term.m"
            MR_Word mercury__term__Y_10;
#line 917 "term.m"
            MR_Word mercury__term__Ys_11;
#line 917 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Bindings_15_15;

#line 917 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 917 "term.m"
            if (mercury__term__succeeded)
#line 917 "term.m"
              {
#line 917 "term.m"
                mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 917 "term.m"
                mercury__term__Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 918 "term.m"
                {
#line 918 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__X_8, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__STATE_VARIABLE_Bindings_15_15);
                }
#line 917 "term.m"
                if (mercury__term__succeeded)
#line 919 "term.m"
                  {
#line 919 "term.m"
                    /* direct tailcall eliminated */
#line 919 "term.m"
                    {
#line 919 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Xs_9;
#line 919 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Ys_11;
#line 919 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Bindings_15_15;

#line 919 "term.m"
                      mercury__term__STATE_VARIABLE_Bindings_0_3 = mercury__term__STATE_VARIABLE_Bindings_0__tmp_copy_3;
#line 919 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 919 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 919 "term.m"
                    }
#line 919 "term.m"
                    continue;
#line 919 "term.m"
                  }
#line 917 "term.m"
              }
#line 917 "term.m"
          }
#line 916 "term.m"
        return mercury__term__succeeded;
#line 916 "term.m"
      }
#line 916 "term.m"
      break;
#line 916 "term.m"
    }
#line 192 "term.m"
}

#line 186 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
#line 186 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_59,
#line 186 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 186 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 186 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Bindings_0_3,
#line 186 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Bindings_4)
#line 186 "term.m"
{
#line 860 "term.m"
  while (MR_TRUE)
#line 860 "term.m"
    {
#line 860 "term.m"
      /* tailcall optimized into a loop */
#line 860 "term.m"
      {
#line 860 "term.m"
        MR_bool mercury__term__succeeded;

#line 860 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 860 "term.m"
          {
#line 860 "term.m"
            MR_Word mercury__term__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 860 "term.m"
            MR_Word mercury__term__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 905 "term.m"
            MR_Word mercury__term__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 860 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 913 "term.m"
              {
#line 913 "term.m"
                MR_Word mercury__term__AsY_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 913 "term.m"
                MR_Word mercury__term__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 913 "term.m"
                MR_Word mercury__term__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));

#line 913 "term.m"
                {
#line 913 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_105_105, mercury__term__V_102_102);
                }
#line 913 "term.m"
                if (mercury__term__succeeded)
#line 914 "term.m"
                  {
#line 914 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_104_104, mercury__term__AsY_53, mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__STATE_VARIABLE_Bindings_4);
                  }
#line 913 "term.m"
              }
#line 860 "term.m"
            else
#line 905 "term.m"
              {
#line 905 "term.m"
                MR_Word mercury__term__X_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 905 "term.m"
                MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 908 "term.m"
                MR_Word mercury__term__BindingOfX_43;
#line 906 "term.m"
                MR_Word mercury__term__TypeCtorInfo_92_92 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 906 "term.m"
                MR_Word mercury__term__TypeInfo_93_93;
#line 906 "term.m"
                MR_Word mercury__term__TypeCtorInfo_94_94 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 906 "term.m"
                MR_Word mercury__term__TypeInfo_95_95;
#line 906 "term.m"
                MR_Box mercury__term__conv0_BindingOfX_43;

#line 14717 "term.c"
                {
#line 14719 "term.c"
                  mercury__term__TypeInfo_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14721 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_93_93, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_92_92));
#line 14723 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_93_93, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14725 "term.c"
                }
#line 14727 "term.c"
                {
#line 14729 "term.c"
                  mercury__term__TypeInfo_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14731 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_94_94));
#line 14733 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_95_95, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14735 "term.c"
                }
#line 906 "term.m"
                {
#line 906 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_93_93, mercury__term__TypeInfo_95_95, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__X_40, &mercury__term__conv0_BindingOfX_43);
                }
#line 906 "term.m"
                if (mercury__term__succeeded)
#line 906 "term.m"
                  {
#line 906 "term.m"
                    mercury__term__BindingOfX_43 = ((MR_Word) mercury__term__conv0_BindingOfX_43);
#line 906 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 906 "term.m"
                  }
#line 908 "term.m"
                if (mercury__term__succeeded)
#line 907 "term.m"
                  {
#line 907 "term.m"
                    /* direct tailcall eliminated */
#line 907 "term.m"
                    {
#line 907 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfX_43;

#line 907 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 907 "term.m"
                    }
#line 907 "term.m"
                    continue;
#line 907 "term.m"
                  }
#line 908 "term.m"
                else
#line 909 "term.m"
                  {
#line 909 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_96_96;
#line 909 "term.m"
                    MR_Word mercury__term__TypeInfo_97_97;
#line 909 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_98_98;
#line 909 "term.m"
                    MR_Word mercury__term__TypeInfo_99_99;
#line 910 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Bindings_4;

#line 909 "term.m"
                    {
#line 909 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_104_104, mercury__term__X_40, mercury__term__STATE_VARIABLE_Bindings_0_3);
                    }
#line 909 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 909 "term.m"
                    if (mercury__term__succeeded)
#line 909 "term.m"
                      {
#line 14797 "term.c"
                        mercury__term__TypeCtorInfo_96_96 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14799 "term.c"
                        mercury__term__TypeCtorInfo_98_98 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14801 "term.c"
                        {
#line 14803 "term.c"
                          mercury__term__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14805 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_96_96));
#line 14807 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_97_97, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14809 "term.c"
                        }
#line 14811 "term.c"
                        {
#line 14813 "term.c"
                          mercury__term__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14815 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_98_98));
#line 14817 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_99_99, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14819 "term.c"
                        }
#line 910 "term.m"
                        {
#line 910 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_97_97, mercury__term__TypeInfo_99_99, mercury__term__X_40, ((MR_Box) (mercury__term__HeadVar__1_1)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv1_STATE_VARIABLE_Bindings_4);
                        }
#line 910 "term.m"
                        *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Bindings_4;
#line 910 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 909 "term.m"
                      }
#line 909 "term.m"
                  }
#line 905 "term.m"
              }
#line 860 "term.m"
          }
#line 860 "term.m"
        else
#line 860 "term.m"
          {
#line 860 "term.m"
            MR_Word mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 860 "term.m"
            MR_Word mercury__term__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 860 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 897 "term.m"
              {
#line 897 "term.m"
                MR_Word mercury__term__As_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 897 "term.m"
                MR_Word mercury__term__F_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 897 "term.m"
                MR_Word mercury__term__C_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 900 "term.m"
                MR_Word mercury__term__BindingOfX_30;
#line 898 "term.m"
                MR_Word mercury__term__TypeCtorInfo_84_84 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 898 "term.m"
                MR_Word mercury__term__TypeInfo_85_85;
#line 898 "term.m"
                MR_Word mercury__term__TypeCtorInfo_86_86 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 898 "term.m"
                MR_Word mercury__term__TypeInfo_87_87;
#line 898 "term.m"
                MR_Box mercury__term__conv2_BindingOfX_30;

#line 14870 "term.c"
                {
#line 14872 "term.c"
                  mercury__term__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14874 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_85_85, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_84_84));
#line 14876 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_85_85, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14878 "term.c"
                }
#line 14880 "term.c"
                {
#line 14882 "term.c"
                  mercury__term__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14884 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_86_86));
#line 14886 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_87_87, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14888 "term.c"
                }
#line 898 "term.m"
                {
#line 898 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_85_85, mercury__term__TypeInfo_87_87, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__V_107_107, &mercury__term__conv2_BindingOfX_30);
                }
#line 898 "term.m"
                if (mercury__term__succeeded)
#line 898 "term.m"
                  {
#line 898 "term.m"
                    mercury__term__BindingOfX_30 = ((MR_Word) mercury__term__conv2_BindingOfX_30);
#line 898 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 898 "term.m"
                  }
#line 900 "term.m"
                if (mercury__term__succeeded)
#line 899 "term.m"
                  {
#line 899 "term.m"
                    /* direct tailcall eliminated */
#line 899 "term.m"
                    {
#line 899 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_30;

#line 899 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 899 "term.m"
                    }
#line 899 "term.m"
                    continue;
#line 899 "term.m"
                  }
#line 900 "term.m"
                else
#line 901 "term.m"
                  {
#line 901 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_88_88;
#line 901 "term.m"
                    MR_Word mercury__term__TypeInfo_89_89;
#line 901 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_90_90;
#line 901 "term.m"
                    MR_Word mercury__term__TypeInfo_91_91;
#line 902 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Bindings_4;

#line 901 "term.m"
                    {
#line 901 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__As_27, mercury__term__V_107_107, mercury__term__STATE_VARIABLE_Bindings_0_3);
                    }
#line 901 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 901 "term.m"
                    if (mercury__term__succeeded)
#line 901 "term.m"
                      {
#line 14950 "term.c"
                        mercury__term__TypeCtorInfo_88_88 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 14952 "term.c"
                        mercury__term__TypeCtorInfo_90_90 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 14954 "term.c"
                        {
#line 14956 "term.c"
                          mercury__term__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14958 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_88_88));
#line 14960 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_89_89, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14962 "term.c"
                        }
#line 14964 "term.c"
                        {
#line 14966 "term.c"
                          mercury__term__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14968 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_91_91, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_90_90));
#line 14970 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_91_91, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 14972 "term.c"
                        }
#line 902 "term.m"
                        {
#line 902 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_89_89, mercury__term__TypeInfo_91_91, mercury__term__V_107_107, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv3_STATE_VARIABLE_Bindings_4);
                        }
#line 902 "term.m"
                        *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Bindings_4;
#line 902 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 901 "term.m"
                      }
#line 901 "term.m"
                  }
#line 897 "term.m"
              }
#line 860 "term.m"
            else
#line 860 "term.m"
              {
#line 860 "term.m"
                MR_Word mercury__term__Y_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 860 "term.m"
                MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 876 "term.m"
                MR_Word mercury__term__TypeInfo_61_61;
#line 876 "term.m"
                MR_Word mercury__term__TypeInfo_63_63;
#line 876 "term.m"
                MR_Word mercury__term__BindingOfX_11;
#line 861 "term.m"
                MR_Word mercury__term__TypeCtorInfo_60_60 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 861 "term.m"
                MR_Word mercury__term__TypeCtorInfo_62_62 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 861 "term.m"
                MR_Box mercury__term__conv4_BindingOfX_11;

#line 15010 "term.c"
                {
#line 15012 "term.c"
                  mercury__term__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15014 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_61_61, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_60_60));
#line 15016 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_61_61, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15018 "term.c"
                }
#line 15020 "term.c"
                {
#line 15022 "term.c"
                  mercury__term__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15024 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_63_63, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_62_62));
#line 15026 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_63_63, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15028 "term.c"
                }
#line 861 "term.m"
                {
#line 861 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__V_107_107, &mercury__term__conv4_BindingOfX_11);
                }
#line 861 "term.m"
                if (mercury__term__succeeded)
#line 861 "term.m"
                  {
#line 861 "term.m"
                    mercury__term__BindingOfX_11 = ((MR_Word) mercury__term__conv4_BindingOfX_11);
#line 861 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 861 "term.m"
                  }
#line 876 "term.m"
                if (mercury__term__succeeded)
#line 866 "term.m"
                  {
#line 866 "term.m"
                    MR_Word mercury__term__BindingOfY_12;
#line 862 "term.m"
                    MR_Box mercury__term__conv5_BindingOfY_12;

#line 862 "term.m"
                    {
#line 862 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__Y_8, &mercury__term__conv5_BindingOfY_12);
                    }
#line 862 "term.m"
                    if (mercury__term__succeeded)
#line 862 "term.m"
                      {
#line 862 "term.m"
                        mercury__term__BindingOfY_12 = ((MR_Word) mercury__term__conv5_BindingOfY_12);
#line 862 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 862 "term.m"
                      }
#line 866 "term.m"
                    if (mercury__term__succeeded)
#line 865 "term.m"
                      {
#line 865 "term.m"
                        /* direct tailcall eliminated */
#line 865 "term.m"
                        {
#line 865 "term.m"
                          MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__BindingOfX_11;
#line 865 "term.m"
                          MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__BindingOfY_12;

#line 865 "term.m"
                          mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 865 "term.m"
                          mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 865 "term.m"
                        }
#line 865 "term.m"
                        continue;
#line 865 "term.m"
                      }
#line 866 "term.m"
                    else
#line 868 "term.m"
                      {
#line 868 "term.m"
                        MR_Word mercury__term__SubstBindingOfX_13;
#line 869 "term.m"
                        MR_Word mercury__term__V_100_100;
#line 869 "term.m"
                        MR_Word mercury__term__V_14_14;

#line 868 "term.m"
                        {
#line 868 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__BindingOfX_11, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__SubstBindingOfX_13);
                        }
#line 869 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfX_13)) == (MR_mktag((MR_Integer) 1)));
#line 869 "term.m"
                        if (mercury__term__succeeded)
#line 869 "term.m"
                          {
#line 869 "term.m"
                            mercury__term__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_13, (MR_Integer) 0)));
#line 869 "term.m"
                            mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfX_13, (MR_Integer) 1)));
#line 869 "term.m"
                            {
#line 869 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__Y_8, mercury__term__V_100_100);
                            }
#line 869 "term.m"
                          }
#line 871 "term.m"
                        if (mercury__term__succeeded)
#line 869 "term.m"
                          {
#line 869 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 869 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 869 "term.m"
                          }
#line 871 "term.m"
                        else
#line 872 "term.m"
                          {
#line 873 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Bindings_4;

#line 872 "term.m"
                            {
#line 872 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__SubstBindingOfX_13, mercury__term__Y_8, mercury__term__STATE_VARIABLE_Bindings_0_3);
                            }
#line 872 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 872 "term.m"
                            if (mercury__term__succeeded)
#line 872 "term.m"
                              {
#line 873 "term.m"
                                {
#line 873 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_61_61, mercury__term__TypeInfo_63_63, mercury__term__Y_8, ((MR_Box) (mercury__term__SubstBindingOfX_13)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv6_STATE_VARIABLE_Bindings_4);
                                }
#line 873 "term.m"
                                *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Bindings_4;
#line 873 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 872 "term.m"
                              }
#line 872 "term.m"
                          }
#line 868 "term.m"
                      }
#line 866 "term.m"
                  }
#line 876 "term.m"
                else
#line 886 "term.m"
                  {
#line 886 "term.m"
                    MR_Word mercury__term__TypeInfo_73_73;
#line 886 "term.m"
                    MR_Word mercury__term__TypeInfo_75_75;
#line 886 "term.m"
                    MR_Word mercury__term__BindingOfY_23;
#line 877 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_72_72 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 877 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_74_74 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 877 "term.m"
                    MR_Box mercury__term__conv7_BindingOfY_23;

#line 15187 "term.c"
                    {
#line 15189 "term.c"
                      mercury__term__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15191 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_73_73, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_72_72));
#line 15193 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_73_73, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15195 "term.c"
                    }
#line 15197 "term.c"
                    {
#line 15199 "term.c"
                      mercury__term__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15201 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_74_74));
#line 15203 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_75_75, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15205 "term.c"
                    }
#line 877 "term.m"
                    {
#line 877 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_73_73, mercury__term__TypeInfo_75_75, (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, mercury__term__Y_8, &mercury__term__conv7_BindingOfY_23);
                    }
#line 877 "term.m"
                    if (mercury__term__succeeded)
#line 877 "term.m"
                      {
#line 877 "term.m"
                        mercury__term__BindingOfY_23 = ((MR_Word) mercury__term__conv7_BindingOfY_23);
#line 877 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 877 "term.m"
                      }
#line 886 "term.m"
                    if (mercury__term__succeeded)
#line 879 "term.m"
                      {
#line 879 "term.m"
                        MR_Word mercury__term__SubstBindingOfY_15;
#line 880 "term.m"
                        MR_Word mercury__term__V_101_101;
#line 880 "term.m"
                        MR_Word mercury__term__V_16_16;

#line 879 "term.m"
                        {
#line 879 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__BindingOfY_23, mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__SubstBindingOfY_15);
                        }
#line 880 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstBindingOfY_15)) == (MR_mktag((MR_Integer) 1)));
#line 880 "term.m"
                        if (mercury__term__succeeded)
#line 880 "term.m"
                          {
#line 880 "term.m"
                            mercury__term__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_15, (MR_Integer) 0)));
#line 880 "term.m"
                            mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstBindingOfY_15, (MR_Integer) 1)));
#line 880 "term.m"
                            {
#line 880 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_107_107, mercury__term__V_101_101);
                            }
#line 880 "term.m"
                          }
#line 882 "term.m"
                        if (mercury__term__succeeded)
#line 880 "term.m"
                          {
#line 880 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 880 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 880 "term.m"
                          }
#line 882 "term.m"
                        else
#line 883 "term.m"
                          {
#line 884 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Bindings_4;

#line 883 "term.m"
                            {
#line 883 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__SubstBindingOfY_15, mercury__term__V_107_107, mercury__term__STATE_VARIABLE_Bindings_0_3);
                            }
#line 883 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 883 "term.m"
                            if (mercury__term__succeeded)
#line 883 "term.m"
                              {
#line 884 "term.m"
                                {
#line 884 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_73_73, mercury__term__TypeInfo_75_75, mercury__term__V_107_107, ((MR_Box) (mercury__term__SubstBindingOfY_15)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv8_STATE_VARIABLE_Bindings_4);
                                }
#line 884 "term.m"
                                *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Bindings_4;
#line 884 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 883 "term.m"
                              }
#line 883 "term.m"
                          }
#line 879 "term.m"
                      }
#line 886 "term.m"
                    else
#line 891 "term.m"
                      {
#line 889 "term.m"
                        {
#line 889 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_59, mercury__term__V_107_107, mercury__term__Y_8);
                        }
#line 891 "term.m"
                        if (mercury__term__succeeded)
#line 889 "term.m"
                          *mercury__term__STATE_VARIABLE_Bindings_4 = mercury__term__STATE_VARIABLE_Bindings_0_3;
#line 891 "term.m"
                        else
#line 892 "term.m"
                          {
#line 892 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_80_80 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 892 "term.m"
                            MR_Word mercury__term__TypeInfo_81_81;
#line 892 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_82_82;
#line 892 "term.m"
                            MR_Word mercury__term__TypeInfo_83_83;
#line 892 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Bindings_4;

#line 15326 "term.c"
                            {
#line 15328 "term.c"
                              mercury__term__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15330 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_81_81, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_80_80));
#line 15332 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_81_81, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15334 "term.c"
                            }
#line 15336 "term.c"
                            mercury__term__TypeCtorInfo_82_82 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 15338 "term.c"
                            {
#line 15340 "term.c"
                              mercury__term__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15342 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_83_83, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_82_82));
#line 15344 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_83_83, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_59));
#line 15346 "term.c"
                            }
#line 892 "term.m"
                            {
#line 892 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_59, mercury__term__TypeInfo_81_81, mercury__term__TypeInfo_83_83, mercury__term__V_107_107, ((MR_Box) (mercury__term__HeadVar__2_2)), (MR_Word) mercury__term__STATE_VARIABLE_Bindings_0_3, &mercury__term__conv9_STATE_VARIABLE_Bindings_4);
                            }
#line 892 "term.m"
                            *mercury__term__STATE_VARIABLE_Bindings_4 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Bindings_4;
#line 892 "term.m"
                          }
#line 891 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 891 "term.m"
                      }
#line 886 "term.m"
                  }
#line 860 "term.m"
              }
#line 860 "term.m"
          }
#line 860 "term.m"
        return mercury__term__succeeded;
#line 860 "term.m"
      }
#line 860 "term.m"
      break;
#line 860 "term.m"
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
#line 846 "term.m"
  while (MR_TRUE)
#line 846 "term.m"
    {
#line 846 "term.m"
      /* tailcall optimized into a loop */
#line 846 "term.m"
      {
#line 846 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 846 "term.m"
        MR_Word mercury__term__V_10_10;
#line 846 "term.m"
        MR_Word mercury__term__V_11_11;

#line 846 "term.m"
        if (mercury__term__succeeded)
#line 846 "term.m"
          {
#line 846 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 843 "term.m"
              {
#line 843 "term.m"
                MR_Word mercury__term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 843 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 843 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 844 "term.m"
                {
#line 844 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__Args_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 843 "term.m"
              }
#line 842 "term.m"
            else
#line 842 "term.m"
              {
#line 842 "term.m"
                MR_Word mercury__term__V_13_13;

#line 842 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 842 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 842 "term.m"
                {
#line 842 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 842 "term.m"
              }
#line 849 "term.m"
            {
#line 849 "term.m"
              /* direct tailcall eliminated */
#line 849 "term.m"
              {
#line 849 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 849 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 849 "term.m"
              }
#line 849 "term.m"
              continue;
#line 849 "term.m"
            }
#line 846 "term.m"
          }
#line 846 "term.m"
      }
#line 846 "term.m"
      break;
#line 846 "term.m"
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
#line 846 "term.m"
  while (MR_TRUE)
#line 846 "term.m"
    {
#line 846 "term.m"
      /* tailcall optimized into a loop */
#line 846 "term.m"
      {
#line 846 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 846 "term.m"
        MR_Word mercury__term__V_10_10;
#line 846 "term.m"
        MR_Word mercury__term__V_11_11;

#line 846 "term.m"
        if (mercury__term__succeeded)
#line 846 "term.m"
          {
#line 846 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 847 "term.m"
            {
#line 847 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 846 "term.m"
            if (!(mercury__term__succeeded))
#line 849 "term.m"
              {
#line 849 "term.m"
                /* direct tailcall eliminated */
#line 849 "term.m"
                {
#line 849 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 849 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 849 "term.m"
                }
#line 849 "term.m"
                continue;
#line 849 "term.m"
              }
#line 846 "term.m"
          }
#line 846 "term.m"
        return mercury__term__succeeded;
#line 846 "term.m"
      }
#line 846 "term.m"
      break;
#line 846 "term.m"
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
#line 842 "term.m"
  {
#line 842 "term.m"
    MR_bool mercury__term__succeeded;

#line 842 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 843 "term.m"
      {
#line 843 "term.m"
        MR_Word mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 843 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 843 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 844 "term.m"
        {
#line 844 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__Args_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 844 "term.m"
          return;
        }
#line 843 "term.m"
      }
#line 842 "term.m"
    else
#line 842 "term.m"
      {
#line 842 "term.m"
        MR_Word mercury__term__V_4_4;

#line 842 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "term.m"
        {
#line 842 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 842 "term.m"
          return;
        }
#line 842 "term.m"
      }
#line 842 "term.m"
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
#line 842 "term.m"
  {
#line 842 "term.m"
    MR_bool mercury__term__succeeded;

#line 842 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 843 "term.m"
      {
#line 843 "term.m"
        MR_Word mercury__term__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 843 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 843 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 844 "term.m"
        {
#line 844 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Args_6, mercury__term__Var_2);
        }
#line 843 "term.m"
      }
#line 842 "term.m"
    else
#line 842 "term.m"
      {
#line 842 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 493 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 493 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 493 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 493 "term.m"
        if (mercury__term__succeeded)
#line 493 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 493 "term.m"
        else
#line 493 "term.m"
          {
#line 493 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 493 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 15678 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 493 "term.m"
          }
#line 842 "term.m"
      }
#line 842 "term.m"
    return mercury__term__succeeded;
#line 842 "term.m"
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
#line 824 "term.m"
  {
#line 824 "term.m"
    MR_bool mercury__term__succeeded;
#line 824 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 825 "term.m"
    {
#line 825 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 825 "term.m"
      return;
    }
#line 824 "term.m"
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
#line 824 "term.m"
  {
#line 824 "term.m"
    MR_bool mercury__term__succeeded;
#line 824 "term.m"
    MR_Word mercury__term__Vs_4;
#line 824 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 825 "term.m"
    {
#line 825 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Ts_3, mercury__term__V_8_8, &mercury__term__Vs_4);
    }
#line 824 "term.m"
    return mercury__term__Vs_4;
#line 824 "term.m"
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
#line 827 "term.m"
  {
#line 827 "term.m"
    MR_bool mercury__term__succeeded;

#line 827 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 829 "term.m"
      {
#line 829 "term.m"
        MR_Word mercury__term__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 829 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 829 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 830 "term.m"
        {
#line 830 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__Args_11, mercury__term__STATE_VARIABLE_Vars_0_2, mercury__term__STATE_VARIABLE_Vars_3);
#line 830 "term.m"
          return;
        }
#line 829 "term.m"
      }
#line 827 "term.m"
    else
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 828 "term.m"
        {
#line 828 "term.m"
          MR_Word base;
#line 828 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_4));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_2));
#line 828 "term.m"
        }
#line 827 "term.m"
      }
#line 827 "term.m"
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
#line 827 "term.m"
  {
#line 827 "term.m"
    MR_bool mercury__term__succeeded;
#line 827 "term.m"
    MR_Word mercury__term__Vs2_6;

#line 827 "term.m"
    if (((MR_tag((MR_Word) mercury__term__T_4)) == (MR_mktag((MR_Integer) 0))))
#line 829 "term.m"
      {
#line 829 "term.m"
        MR_Word mercury__term__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 1)));
#line 829 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 0)));
#line 829 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_4, (MR_Integer) 2)));

#line 830 "term.m"
        {
#line 830 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Args_15, mercury__term__Vs1_5, &mercury__term__Vs2_6);
        }
#line 829 "term.m"
      }
#line 827 "term.m"
    else
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_4, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_4, (MR_Integer) 1)));

#line 828 "term.m"
        {
#line 828 "term.m"
          mercury__term__Vs2_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs2_6, 0) = ((MR_Box) (mercury__term__Var_8));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs2_6, 1) = ((MR_Box) (mercury__term__Vs1_5));
#line 828 "term.m"
        }
#line 827 "term.m"
      }
#line 827 "term.m"
    return mercury__term__Vs2_6;
#line 827 "term.m"
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
#line 821 "term.m"
  {
#line 821 "term.m"
    MR_bool mercury__term__succeeded;
#line 821 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 827 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 829 "term.m"
      {
#line 829 "term.m"
        MR_Word mercury__term__Args_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 829 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 829 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 830 "term.m"
        {
#line 830 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Args_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 830 "term.m"
          return;
        }
#line 829 "term.m"
      }
#line 827 "term.m"
    else
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 828 "term.m"
        {
#line 828 "term.m"
          MR_Word base;
#line 828 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "term.m"
          *mercury__term__Vars_4 = base;
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_7));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 828 "term.m"
        }
#line 827 "term.m"
      }
#line 821 "term.m"
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
#line 821 "term.m"
  {
#line 821 "term.m"
    MR_bool mercury__term__succeeded;
#line 821 "term.m"
    MR_Word mercury__term__Vs_4;
#line 821 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 827 "term.m"
    if (((MR_tag((MR_Word) mercury__term__T_3)) == (MR_mktag((MR_Integer) 0))))
#line 829 "term.m"
      {
#line 829 "term.m"
        MR_Word mercury__term__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 1)));
#line 829 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 0)));
#line 829 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__T_3, (MR_Integer) 2)));

#line 830 "term.m"
        {
#line 830 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Args_16, mercury__term__V_8_8, &mercury__term__Vs_4);
        }
#line 829 "term.m"
      }
#line 827 "term.m"
    else
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_Word mercury__term__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_3, (MR_Integer) 0)));
#line 827 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__T_3, (MR_Integer) 1)));

#line 828 "term.m"
        {
#line 828 "term.m"
          mercury__term__Vs_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs_4, 0) = ((MR_Box) (mercury__term__Var_9));
#line 828 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vs_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 828 "term.m"
        }
#line 827 "term.m"
      }
#line 821 "term.m"
    return mercury__term__Vs_4;
#line 821 "term.m"
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
#line 716 "term.m"
  {
#line 716 "term.m"
    MR_bool mercury__term__succeeded;
#line 716 "term.m"
    MR_Word mercury__term__TypeInfo_6_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 716 "term.m"
    MR_Word mercury__term__Context_5 = (MR_Word) &mercury__term_scalar_common_1[3];
#line 716 "term.m"
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
#line 16069 "term.c"

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
#line 16093 "term.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__term__V_7_7  = Functors;
#line 67 "construct.opt"
	}
mercury__term__succeeded  = SUCCESS_INDICATOR;
}
#line 724 "term.m"
    if (mercury__term__succeeded)
#line 721 "term.m"
      {
#line 721 "term.m"
        MR_Word mercury__term__TypeInfo_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 721 "term.m"
        MR_String mercury__term__FunctorString_8;
#line 721 "term.m"
        MR_Word mercury__term__FunctorArgs_10;
#line 721 "term.m"
        MR_Word mercury__term__TermArgs_11;
#line 721 "term.m"
        MR_Box mercury__term__V_18_18 = (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 1));
#line 721 "term.m"
        MR_Word mercury__term__V_20_20;
#line 720 "term.m"
        MR_Integer mercury__term___FunctorArity_9;

#line 720 "term.m"
        {
#line 720 "term.m"
          mercury__deconstruct__deconstruct_5_p_1(mercury__term__TypeInfo_27_27, mercury__term__V_18_18, (MR_Integer) 1, &mercury__term__FunctorString_8, &mercury__term___FunctorArity_9, &mercury__term__FunctorArgs_10);
        }
#line 722 "term.m"
        {
#line 722 "term.m"
          mercury__term__univ_list_to_term_list_2_p_0(mercury__term__TypeInfo_26_26, mercury__term__FunctorArgs_10, &mercury__term__TermArgs_11);
        }
#line 723 "term.m"
        {
#line 723 "term.m"
          mercury__term__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 723 "term.m"
          MR_hl_field(MR_mktag(0), mercury__term__V_20_20, 0) = ((MR_Box) (mercury__term__FunctorString_8));
#line 723 "term.m"
        }
#line 723 "term.m"
        {
#line 723 "term.m"
          MR_Word base;
#line 723 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 723 "term.m"
          *mercury__term__Term_4 = base;
#line 723 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__V_20_20));
#line 723 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__TermArgs_11));
#line 723 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_5));
#line 723 "term.m"
        }
#line 721 "term.m"
      }
#line 724 "term.m"
    else
#line 733 "term.m"
      {
#line 733 "term.m"
        MR_Word mercury__term__SpecialCaseTerm_16;
#line 726 "term.m"
        MR_Word mercury__term__TypeCtor_12;
#line 726 "term.m"
        MR_Word mercury__term__TypeArgs_13;
#line 726 "term.m"
        MR_String mercury__term__TypeName_14;
#line 726 "term.m"
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
#line 16204 "term.c"

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
#line 16253 "term.c"

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
#line 16303 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__ModuleName_15  = TypeCtorModuleName;
	 mercury__term___Name_5_43  = TypeCtorName;
	 mercury__term___Arity_6_44  = TypeCtorArity;
#line 142 "type_desc.opt"
}
#line 729 "term.m"
        {
#line 729 "term.m"
          mercury__term__succeeded = mercury__term__univ_to_term_special_case_6_p_0(mercury__term__TypeInfo_26_26, mercury__term__ModuleName_15, mercury__term__TypeName_14, mercury__term__TypeArgs_13, mercury__term__Univ_3, mercury__term__Context_5, &mercury__term__SpecialCaseTerm_16);
        }
#line 733 "term.m"
        if (mercury__term__succeeded)
#line 732 "term.m"
          *mercury__term__Term_4 = mercury__term__SpecialCaseTerm_16;
#line 733 "term.m"
        else
#line 735 "term.m"
          {
#line 735 "term.m"
            MR_Word mercury__term__TypeInfo_6_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Univ_3, (MR_Integer) 0)));
#line 735 "term.m"
            MR_String mercury__term__Message_17;
#line 735 "term.m"
            MR_String mercury__term__V_22_22;
#line 735 "term.m"
            MR_String mercury__term__V_23_23;
#line 735 "term.m"
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
#line 16366 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_24_24  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 735 "term.m"
            {
#line 735 "term.m"
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
              mercury__string__append_3_p_2((MR_String) "term.type_to_term: unknown type \140", mercury__term__V_22_22, &mercury__term__Message_17);
            }
#line 736 "term.m"
            {
#line 736 "term.m"
              mercury__require__error_1_p_0(mercury__term__Message_17);
#line 736 "term.m"
              return;
            }
#line 735 "term.m"
          }
#line 733 "term.m"
      }
#line 716 "term.m"
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
#line 1290 "term.m"
  {
#line 1290 "term.m"
    MR_bool mercury__term__succeeded;
#line 1290 "term.m"
    MR_Word mercury__term__T_4;

#line 1290 "term.m"
    {
#line 1290 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__U_3, &mercury__term__T_4);
    }
#line 1290 "term.m"
    return mercury__term__T_4;
#line 1290 "term.m"
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
#line 712 "term.m"
  {
#line 712 "term.m"
    MR_bool mercury__term__succeeded;
#line 712 "term.m"
    MR_Word mercury__term__Univ_5;

#line 713 "term.m"
    {
#line 713 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_6, mercury__term__Val_3, &mercury__term__Univ_5);
    }
#line 714 "term.m"
    {
#line 714 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_7_7, mercury__term__Univ_5, mercury__term__Term_4);
#line 714 "term.m"
      return;
    }
#line 712 "term.m"
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
#line 712 "term.m"
  {
#line 712 "term.m"
    MR_bool mercury__term__succeeded;
#line 712 "term.m"
    MR_Word mercury__term__T2_4;
#line 712 "term.m"
    MR_Word mercury__term__Univ_9;

#line 713 "term.m"
    {
#line 713 "term.m"
      mercury__univ__type_to_univ_2_p_1(mercury__term__TypeInfo_for_T_5, mercury__term__T1_3, &mercury__term__Univ_9);
    }
#line 714 "term.m"
    {
#line 714 "term.m"
      mercury__term__univ_to_term_2_p_0(mercury__term__TypeInfo_6_6, mercury__term__Univ_9, &mercury__term__T2_4);
    }
#line 712 "term.m"
    return mercury__term__T2_4;
#line 712 "term.m"
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
#line 701 "term.m"
  {
#line 701 "term.m"
    MR_bool mercury__term__succeeded;
#line 701 "term.m"
    MR_Box mercury__term__X1_5;
#line 505 "term.m"
    MR_Word mercury__term__V_19_19;

#line 506 "term.m"
    {
#line 506 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_15_15, mercury__term__TypeInfo_for_T_16, mercury__term__Term_3, &mercury__term__V_19_19);
    }
#line 506 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 506 "term.m"
    if (mercury__term__succeeded)
#line 506 "term.m"
      {
#line 506 "term.m"
        mercury__term__X1_5 = (MR_hl_field(MR_mktag(0), mercury__term__V_19_19, (MR_Integer) 0));
#line 700 "term.m"
        *mercury__term__X_4 = mercury__term__X1_5;
#line 506 "term.m"
      }
#line 506 "term.m"
    else
#line 703 "term.m"
      {
#line 1243 "term.m"
        MR_Word mercury__term__Args_21;
#line 1243 "term.m"
        MR_Word mercury__term__V_20_20;
#line 1243 "term.m"
        MR_Word mercury__term__V_22_22;

#line 1243 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1243 "term.m"
        if (mercury__term__succeeded)
#line 1243 "term.m"
          {
#line 1243 "term.m"
            mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1243 "term.m"
            mercury__term__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 1243 "term.m"
            mercury__term__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1244 "term.m"
            {
#line 1244 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_15_15, mercury__term__Args_21);
            }
#line 1243 "term.m"
          }
#line 701 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 703 "term.m"
        if (mercury__term__succeeded)
#line 702 "term.m"
          {
#line 702 "term.m"
            {
#line 702 "term.m"
              mercury__require__error_1_p_0((MR_String) "term.det_term_to_type failed, because the term wasn\'t ground");
#line 702 "term.m"
              return;
            }
#line 702 "term.m"
          }
#line 703 "term.m"
        else
#line 706 "term.m"
          {
#line 706 "term.m"
            MR_String mercury__term__Message_6;
#line 706 "term.m"
            MR_String mercury__term__V_9_9;
#line 706 "term.m"
            MR_String mercury__term__V_11_11;
#line 706 "term.m"
            MR_String mercury__term__V_12_12;
#line 706 "term.m"
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
#line 16631 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_13_13  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 706 "term.m"
            {
#line 706 "term.m"
              mercury__term__V_12_12 = mercury__type_desc__type_name_1_f_0(mercury__term__V_13_13);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2(mercury__term__V_12_12, (MR_String) "\'", &mercury__term__V_11_11);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "the term wasn\'t a valid term for type \140", mercury__term__V_11_11, &mercury__term__V_9_9);
            }
#line 406 "string.opt"
            {
#line 406 "string.opt"
              mercury__string__append_3_p_2((MR_String) "term.det_term_to_type failed, due to a type error:\n", mercury__term__V_9_9, &mercury__term__Message_6);
            }
#line 707 "term.m"
            {
#line 707 "term.m"
              mercury__require__error_1_p_0(mercury__term__Message_6);
#line 707 "term.m"
              return;
            }
#line 706 "term.m"
          }
#line 703 "term.m"
      }
#line 701 "term.m"
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
#line 1284 "term.m"
  {
#line 1284 "term.m"
    MR_bool mercury__term__succeeded;
#line 1284 "term.m"
    MR_Box mercury__term__T2_4;

#line 1284 "term.m"
    {
#line 1284 "term.m"
      mercury__term__det_term_to_type_2_p_0(mercury__term__TypeInfo_5_5, mercury__term__TypeInfo_for_T_6, mercury__term__T1_3, &mercury__term__T2_4);
    }
#line 1284 "term.m"
    return mercury__term__T2_4;
#line 1284 "term.m"
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
#line 505 "term.m"
  {
#line 505 "term.m"
    MR_bool mercury__term__succeeded;
#line 505 "term.m"
    MR_Word mercury__term__V_5_5;

#line 506 "term.m"
    {
#line 506 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_6, mercury__term__TypeInfo_for_T_7, mercury__term__Term_3, &mercury__term__V_5_5);
    }
#line 506 "term.m"
    mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_5_5)) == (MR_mktag((MR_Integer) 0)));
#line 506 "term.m"
    if (mercury__term__succeeded)
#line 506 "term.m"
      *mercury__term__Val_4 = (MR_hl_field(MR_mktag(0), mercury__term__V_5_5, (MR_Integer) 0));
#line 505 "term.m"
    return mercury__term__succeeded;
#line 505 "term.m"
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
#line 508 "term.m"
  {
#line 508 "term.m"
    MR_bool mercury__term__succeeded;
#line 508 "term.m"
    MR_Word mercury__term__UnivResult_6;
#line 508 "term.m"
    MR_Word mercury__term__V_10_10;
#line 508 "term.m"
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
#line 16794 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_10_10  = TypeInfo;
#line 56 "type_desc.opt"
}
#line 524 "term.m"
    mercury__term__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 524 "term.m"
    {
#line 524 "term.m"
      mercury__term__try_term_to_univ_2_4_p_0(mercury__term__TypeInfo_for_U_11, mercury__term__Term_3, mercury__term__V_10_10, mercury__term__V_17_17, &mercury__term__UnivResult_6);
    }
#line 515 "term.m"
    if (((MR_tag((MR_Word) mercury__term__UnivResult_6)) == (MR_mktag((MR_Integer) 1))))
#line 517 "term.m"
      *mercury__term__Result_4 = mercury__term__UnivResult_6;
#line 515 "term.m"
    else
#line 511 "term.m"
      {
#line 511 "term.m"
        MR_Word mercury__term__Univ_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__UnivResult_6, (MR_Integer) 0)));
#line 511 "term.m"
        MR_Box mercury__term__Val_8;

#line 512 "term.m"
        {
#line 512 "term.m"
          mercury__univ__det_univ_to_type_2_p_0(mercury__term__TypeInfo_for_T_12, mercury__term__Univ_7, &mercury__term__Val_8);
        }
#line 514 "term.m"
        {
#line 514 "term.m"
          MR_Word base;
#line 514 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 514 "term.m"
          *mercury__term__Result_4 = base;
#line 514 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = mercury__term__Val_8;
#line 514 "term.m"
        }
#line 511 "term.m"
      }
#line 508 "term.m"
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
#line 1281 "term.m"
  {
#line 1281 "term.m"
    MR_bool mercury__term__succeeded;
#line 1281 "term.m"
    MR_Word mercury__term__TTTR_4;

#line 1281 "term.m"
    {
#line 1281 "term.m"
      mercury__term__try_term_to_type_2_p_0(mercury__term__TypeInfo_for_U_5, mercury__term__TypeInfo_for_T_6, mercury__term__T_3, &mercury__term__TTTR_4);
    }
#line 1281 "term.m"
    return mercury__term__TTTR_4;
#line 1281 "term.m"
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
#line 500 "term.m"
  {
#line 500 "term.m"
    MR_bool mercury__term__succeeded;
#line 500 "term.m"
    MR_Word mercury__term__Context_4;

#line 500 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 499 "term.m"
      {
#line 499 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 499 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 499 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 499 "term.m"
      }
#line 500 "term.m"
    else
#line 500 "term.m"
      {
#line 500 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 500 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 500 "term.m"
      }
#line 500 "term.m"
    return mercury__term__Context_4;
#line 500 "term.m"
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
