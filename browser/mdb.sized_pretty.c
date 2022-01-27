/*
** Automatically generated from `sized_pretty.m'
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


/* :- module mdb.sized_pretty. */
/* :- implementation. */

/*
INIT mercury__mdb__sized_pretty__init
ENDINIT
*/

#include "mdb.sized_pretty.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pprint.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"




#line 81 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 84 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 87 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 90 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1];

#line 93 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0;

#line 96 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1];

#line 99 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0;

#line 102 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0;

#line 105 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 108 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3];

#line 111 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1;

#line 114 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1];

#line 117 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1];

#line 120 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2];

#line 123 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2];

#line 126 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2];

#line 129 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1];

#line 132 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0;

#line 135 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0;

#line 138 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1];

#line 141 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1];

#line 144 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1];

#line 147 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5];

#line 150 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0;

#line 153 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1;

#line 156 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3];

#line 159 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1;

#line 162 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1];

#line 165 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1];

#line 168 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2];

#line 171 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2];

#line 174 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2];

#line 177 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1];

#line 180 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0;

#line 183 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1];

#line 186 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1;

#line 189 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1];

#line 192 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1];

#line 195 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2];

#line 198 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2];

#line 201 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2];

#line 204 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2];

#line 207 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4];

#line 210 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2;

#line 213 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1;

#line 216 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1];

#line 219 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1];

#line 222 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3];

#line 225 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1;

#line 228 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 231 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 233 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 236 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 239 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 241 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 243 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 246 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 249 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 251 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 254 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 257 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 259 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 261 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 264 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 267 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 269 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 271 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 274 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 277 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 279 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 281 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 283 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 286 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 289 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 291 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 294 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 297 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 299 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 301 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 304 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 307 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 309 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 312 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 315 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 317 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 319 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 322 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 325 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 327 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 329 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 332 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 335 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 337 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 339 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 341 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 344 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 347 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 349 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 351 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 354 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 357 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 359 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 361 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 363 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 366 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 369 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 371 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 374 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 377 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 379 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 381 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 384 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 387 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 389 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 391 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 393 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 396 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 399 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 401 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 403 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 405 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 408 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 411 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 413 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 415 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 418 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 421 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 423 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 425 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 427 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 429 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 431 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 433 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 435 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 437 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 439 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 441 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 444 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 447 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 449 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 451 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 453 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 456 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 459 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 461 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 463 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 465 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 468 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 471 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 473 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 475 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 478 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 481 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 483 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 485 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 487 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 489 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 491 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 493 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 495 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 497 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 499 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 501 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 504 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 507 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 509 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 511 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 513 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 516 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 519 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 521 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 523 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 525 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 528 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 531 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 533 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 535 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 538 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 541 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 543 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 545 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 547 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 549 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 551 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 553 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 555 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 557 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 559 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 561 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 564 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 567 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 569 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 571 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 574 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 577 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 580 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 583 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 585 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 587 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 590 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 593 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 595 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 597 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 600 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 603 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 606 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 609 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 611 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 613 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 616 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 619 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 621 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 623 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 626 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 629 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 632 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 635 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 637 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 639 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 723 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_100_95_115_112_108_105_116_95_49_48_95_95_91_49_44_32_50_44_32_54_93_95_48_10_p_0(
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 723 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9);

#line 722 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(
#line 722 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1);

#line 721 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 720 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 810 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(
#line 810 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1);

#line 809 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 808 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1036 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_105_122_101_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 203 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 203 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1);

#line 203 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 641 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(
#line 641 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_45);

#line 476 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__second_pass__476__1_2_f_0(
#line 476 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56,
#line 476 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_67);

#line 723 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 723 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9);

#line 722 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 722 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1);

#line 721 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 720 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 811 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 811 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9);

#line 810 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 810 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1);

#line 809 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 808 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1038 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 1038 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__10_10);

#line 1037 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 1037 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1037 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1036 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 1035 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 714 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 714 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 714 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 716 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

#line 715 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 715 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 715 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 802 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 802 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 802 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 804 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

#line 803 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 803 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 803 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1029 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 1029 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1029 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1031 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void);

#line 1030 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 1030 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1030 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 819 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0(
#line 819 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 819 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0(
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 220 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0(
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_44,
#line 220 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 220 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0(
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_21,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 235 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0(
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_6,
#line 235 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 235 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0(
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_5,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 203 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0(
#line 203 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1);

#line 203 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0(void);

#line 206 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0(
#line 206 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 206 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0(
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 209 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0(
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_20,
#line 209 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 209 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0(
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_13,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 658 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0(
#line 658 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 658 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0(
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 731 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0(
#line 731 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3);

#line 731 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0(
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2);

#line 1047 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__get_arg_length_3_p_0(
#line 1047 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1047 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__2_2,
#line 1047 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__3_3);

#line 646 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__handle_arg_2_p_0(
#line 646 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_7,
#line 646 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 646 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__2_2);

#line 641 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_2(
#line 641 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 641 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1);

#line 634 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_1(
#line 634 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 634 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 634 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__wrapper_arg_2);

#line 629 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0(
#line 629 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_34,
#line 629 "sized_pretty.m"
  MR_String mdb__sized_pretty__Functor_1,
#line 629 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__2_2,
#line 629 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 629 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__4_4);

#line 600 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0(
#line 600 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_51,
#line 600 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 600 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__Doc_2);

#line 539 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__process_args_7_p_0(
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40,
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_1,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_2,
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__ArgLimit_4,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__SplitLimit_5,
#line 539 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__6_6,
#line 539 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__7_7);

#line 503 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__check_args_6_p_0(
#line 503 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_1,
#line 503 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__ArgLimit_3,
#line 503 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__4_4,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__STATE_VARIABLE_Used_0_5,
#line 503 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__STATE_VARIABLE_Used_6);

#line 476 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__second_pass_5_p_0_1(
#line 476 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 476 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1);

#line 448 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__second_pass_5_p_0(
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56,
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__OldSizeTerm_7,
#line 448 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_8,
#line 448 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_9,
#line 448 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__NewSizeTerm_10);

#line 380 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__annotate_args_with_size_10_p_0(
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_1,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__MaybeInitArgLimit_3,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_4,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_5,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__6_6,
#line 380 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__SoFar_7,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__8_8,
#line 380 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__Exact_9,
#line 380 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__10_10);

#line 331 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0(
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12,
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserTerm_7,
#line 331 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_8,
#line 331 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_9,
#line 331 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__SizedTerm2_10);

#line 268 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__measured_split_10_p_0(
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 268 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3,
#line 268 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__4_4,
#line 268 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__7_7,
#line 268 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__9_9,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__10_10);

#line 251 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__maximum_functors_2_f_0(
#line 251 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4,
#line 251 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 251 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2);

#line 246 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__subtract_measures_3_f_0(
#line 246 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3);

#line 245 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__add_measures_3_f_0(
#line 245 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3);

#line 241 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__compare_measures_2_f_0(
#line 241 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_4,
#line 241 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 241 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2);

#line 240 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__zero_measure_0_f_0(
#line 240 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_2);

#line 239 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__max_measure_2_f_0(
#line 239 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_4,
#line 239 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 239 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2);


static /* final */ const MR_Box mdb__sized_pretty_scalar_common_1[3][2];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_2[1][4];

static /* final */ const MR_Integer mdb__sized_pretty_scalar_common_3[2][2];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_4[2][6];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_5[1][5];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_6[1][3];

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_7[2][1];




static /* final */ const MR_Box mdb__sized_pretty_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__size_count__arity0__)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0__)),
    ((MR_Box) (&mdb__sized_pretty_scalar_common_1[0])),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0)),
    ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0))
  },
};

static /* final */ const MR_Integer mdb__sized_pretty_scalar_common_3[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67663
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__sized_pretty_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__sized_pretty_scalar_common_3[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__sized_pretty_scalar_common_5[0])),
    ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__sized_pretty_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 1457 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1465 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1474 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1482 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1] = {
  (MR_Integer) 0
};

#line 1487 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 = {
  (MR_String) "char_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1494 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_char_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____char_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____char_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "char_count",
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0
  },
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0
};

#line 1515 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1] = {
  (MR_Integer) 0
};

#line 1520 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 = {
  (MR_String) "functor_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1527 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____functor_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____functor_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "functor_count",
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0
  },
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0
};

#line 1548 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0 = {
  (MR_String) "not_deconstructed",
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

#line 1563 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1571 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1578 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1 = {
  (MR_String) "deconstructed",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1,
  NULL,
  NULL,
  NULL
};

#line 1593 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1598 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1
};

#line 1603 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1
  }
};

#line 1617 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1623 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1629 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "maybe_deconstructed",
  {
    mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1
  },
  {
    mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1
};

#line 1650 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1655 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 = {
  (MR_String) "measure_params",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1662 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_params",
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0
  },
  {
    &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0
};

#line 1683 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 = {
  (MR_String) "no_measure_params",
  (MR_Integer) 0
};

#line 1689 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1694 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1699 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1704 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_no_measure_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__sized_pretty____Unify____no_measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____no_measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "no_measure_params",
  {
    mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0
  },
  {
    mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0
};

#line 1725 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_args_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_args_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_args_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_args",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1746 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1755 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0 = {
  (MR_String) "exact",
  (MR_Integer) 5,
  (MR_Integer) 18,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0,
  NULL,
  NULL,
  NULL
};

#line 1770 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1778 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1
};

#line 1785 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1 = {
  (MR_String) "at_least",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1,
  NULL,
  NULL,
  NULL
};

#line 1800 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1805 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1
};

#line 1810 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1
  }
};

#line 1824 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1830 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1836 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_term_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_term_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_term",
  {
    mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1
  },
  {
    mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1
};

#line 1857 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1862 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0 = {
  (MR_String) "line_count",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0,
  NULL,
  NULL,
  NULL
};

#line 1877 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1882 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1 = {
  (MR_String) "character_count",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1,
  NULL,
  NULL,
  NULL
};

#line 1897 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1902 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1
};

#line 1907 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1
  }
};

#line 1921 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1927 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1933 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_count",
  {
    mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0
  },
  {
    mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0
};

#line 1954 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

#line 1967 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

#line 1980 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure_with_params__arity2__mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0__[9] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 4)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001))
};

#line 1993 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__size_count__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

#line 2005 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__char_count__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

#line 2017 "mdb.sized_pretty.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__sized_pretty__measure__arity1__mdb__sized_pretty__functor_count__arity0__[8] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001)),
  ((MR_Box) (mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001))
};

#line 2029 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2] = {
  (MR_String) "T",
  (MR_String) "MeasureParams"
};

#line 2035 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4] = {
  {
    (MR_String) "add_measures",
    (MR_Integer) 4,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "subtract_measures",
    (MR_Integer) 4,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "maximum_functors",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "measured_split",
    (MR_Integer) 10,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 2059 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_with_params",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2
};

#line 2070 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2078 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1] = {
  (MR_TypeClassConstraint) &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1
};

#line 2083 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_with_params_2 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 2091 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1] = {
  (MR_String) "T"
};

#line 2096 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3] = {
  {
    (MR_String) "max_measure",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "zero_measure",
    (MR_Integer) 1,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "compare_measures",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 2115 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1
};

#line 2126 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2134 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 2137 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2139 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2141 "mdb.sized_pretty.c"
{
#line 2143 "mdb.sized_pretty.c"
  {
#line 2145 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2148 "mdb.sized_pretty.c"
    {
#line 2150 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____char_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2153 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2155 "mdb.sized_pretty.c"
  }
#line 2157 "mdb.sized_pretty.c"
}

#line 2160 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 2163 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2165 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2167 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2169 "mdb.sized_pretty.c"
{
#line 2171 "mdb.sized_pretty.c"
  {
#line 2173 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2176 "mdb.sized_pretty.c"
    {
#line 2178 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____char_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2181 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2183 "mdb.sized_pretty.c"
  }
#line 2185 "mdb.sized_pretty.c"
}

#line 2188 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 2191 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2193 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2195 "mdb.sized_pretty.c"
{
#line 2197 "mdb.sized_pretty.c"
  {
#line 2199 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2202 "mdb.sized_pretty.c"
    {
#line 2204 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____functor_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2207 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2209 "mdb.sized_pretty.c"
  }
#line 2211 "mdb.sized_pretty.c"
}

#line 2214 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 2217 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2219 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2221 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2223 "mdb.sized_pretty.c"
{
#line 2225 "mdb.sized_pretty.c"
  {
#line 2227 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2230 "mdb.sized_pretty.c"
    {
#line 2232 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____functor_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2235 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2237 "mdb.sized_pretty.c"
  }
#line 2239 "mdb.sized_pretty.c"
}

#line 2242 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 2245 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2247 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2249 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2251 "mdb.sized_pretty.c"
{
#line 2253 "mdb.sized_pretty.c"
  {
#line 2255 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2258 "mdb.sized_pretty.c"
    {
#line 2260 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2263 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2265 "mdb.sized_pretty.c"
  }
#line 2267 "mdb.sized_pretty.c"
}

#line 2270 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 2273 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2275 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2277 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2279 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2281 "mdb.sized_pretty.c"
{
#line 2283 "mdb.sized_pretty.c"
  {
#line 2285 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2288 "mdb.sized_pretty.c"
    {
#line 2290 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2293 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2295 "mdb.sized_pretty.c"
  }
#line 2297 "mdb.sized_pretty.c"
}

#line 2300 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 2303 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2305 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2307 "mdb.sized_pretty.c"
{
#line 2309 "mdb.sized_pretty.c"
  {
#line 2311 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2314 "mdb.sized_pretty.c"
    {
#line 2316 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____measure_params_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2319 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2321 "mdb.sized_pretty.c"
  }
#line 2323 "mdb.sized_pretty.c"
}

#line 2326 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 2329 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2331 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2333 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2335 "mdb.sized_pretty.c"
{
#line 2337 "mdb.sized_pretty.c"
  {
#line 2339 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2342 "mdb.sized_pretty.c"
    {
#line 2344 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2347 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2349 "mdb.sized_pretty.c"
  }
#line 2351 "mdb.sized_pretty.c"
}

#line 2354 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 2357 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2359 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2361 "mdb.sized_pretty.c"
{
#line 2363 "mdb.sized_pretty.c"
  {
#line 2365 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2368 "mdb.sized_pretty.c"
    {
#line 2370 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____no_measure_params_0_0();
    }
#line 2373 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2375 "mdb.sized_pretty.c"
  }
#line 2377 "mdb.sized_pretty.c"
}

#line 2380 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 2383 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2385 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2387 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2389 "mdb.sized_pretty.c"
{
#line 2391 "mdb.sized_pretty.c"
  {
#line 2393 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2396 "mdb.sized_pretty.c"
    {
#line 2398 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____no_measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1);
    }
#line 2401 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2403 "mdb.sized_pretty.c"
  }
#line 2405 "mdb.sized_pretty.c"
}

#line 2408 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 2411 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2413 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2415 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2417 "mdb.sized_pretty.c"
{
#line 2419 "mdb.sized_pretty.c"
  {
#line 2421 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2424 "mdb.sized_pretty.c"
    {
#line 2426 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2429 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2431 "mdb.sized_pretty.c"
  }
#line 2433 "mdb.sized_pretty.c"
}

#line 2436 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 2439 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2441 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2443 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2445 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2447 "mdb.sized_pretty.c"
{
#line 2449 "mdb.sized_pretty.c"
  {
#line 2451 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2454 "mdb.sized_pretty.c"
    {
#line 2456 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2459 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2461 "mdb.sized_pretty.c"
  }
#line 2463 "mdb.sized_pretty.c"
}

#line 2466 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 2469 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2471 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2473 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2475 "mdb.sized_pretty.c"
{
#line 2477 "mdb.sized_pretty.c"
  {
#line 2479 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2482 "mdb.sized_pretty.c"
    {
#line 2484 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2487 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2489 "mdb.sized_pretty.c"
  }
#line 2491 "mdb.sized_pretty.c"
}

#line 2494 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 2497 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2499 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2501 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2503 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2505 "mdb.sized_pretty.c"
{
#line 2507 "mdb.sized_pretty.c"
  {
#line 2509 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2512 "mdb.sized_pretty.c"
    {
#line 2514 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2517 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2519 "mdb.sized_pretty.c"
  }
#line 2521 "mdb.sized_pretty.c"
}

#line 2524 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 2527 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2529 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2531 "mdb.sized_pretty.c"
{
#line 2533 "mdb.sized_pretty.c"
  {
#line 2535 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2538 "mdb.sized_pretty.c"
    {
#line 2540 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2543 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2545 "mdb.sized_pretty.c"
  }
#line 2547 "mdb.sized_pretty.c"
}

#line 2550 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 2553 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2555 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2557 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2559 "mdb.sized_pretty.c"
{
#line 2561 "mdb.sized_pretty.c"
  {
#line 2563 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2566 "mdb.sized_pretty.c"
    {
#line 2568 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2571 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2573 "mdb.sized_pretty.c"
  }
#line 2575 "mdb.sized_pretty.c"
}

#line 2578 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2581 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2583 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2585 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2587 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2589 "mdb.sized_pretty.c"
{
#line 2591 "mdb.sized_pretty.c"
  {
#line 2593 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2595 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2597 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2600 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2602 "mdb.sized_pretty.c"
    {
#line 2604 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2607 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2609 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2611 "mdb.sized_pretty.c"
  }
#line 2613 "mdb.sized_pretty.c"
}

#line 2616 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2619 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2621 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2623 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2625 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2627 "mdb.sized_pretty.c"
{
#line 2629 "mdb.sized_pretty.c"
  {
#line 2631 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2633 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2635 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2638 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2640 "mdb.sized_pretty.c"
    {
#line 2642 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2645 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2647 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2649 "mdb.sized_pretty.c"
  }
#line 2651 "mdb.sized_pretty.c"
}

#line 2654 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2657 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2659 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2661 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2663 "mdb.sized_pretty.c"
{
#line 2665 "mdb.sized_pretty.c"
  {
#line 2667 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2669 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2671 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2674 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2676 "mdb.sized_pretty.c"
    {
#line 2678 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2681 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2683 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2685 "mdb.sized_pretty.c"
  }
#line 2687 "mdb.sized_pretty.c"
}

#line 2690 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2693 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2695 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2697 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2699 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2701 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2703 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2705 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2707 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2709 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2711 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2713 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2715 "mdb.sized_pretty.c"
{
#line 2717 "mdb.sized_pretty.c"
  {
#line 2719 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2721 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv3_HeadVar__7_7;
#line 2723 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__8_8;
#line 2725 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__9_9;
#line 2727 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__10_10;

#line 2730 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2732 "mdb.sized_pretty.c"
    {
#line 2734 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv3_HeadVar__7_7, &mdb__sized_pretty__conv2_HeadVar__8_8, &mdb__sized_pretty__conv1_HeadVar__9_9, &mdb__sized_pretty__conv0_HeadVar__10_10);
    }
#line 2737 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv3_HeadVar__7_7));
#line 2739 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__8_8));
#line 2741 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__9_9));
#line 2743 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_10 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__10_10));
#line 2745 "mdb.sized_pretty.c"
  }
#line 2747 "mdb.sized_pretty.c"
}

#line 2750 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2753 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2755 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2757 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2759 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2761 "mdb.sized_pretty.c"
{
#line 2763 "mdb.sized_pretty.c"
  {
#line 2765 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2767 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2769 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2772 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2774 "mdb.sized_pretty.c"
    {
#line 2776 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2779 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2781 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2783 "mdb.sized_pretty.c"
  }
#line 2785 "mdb.sized_pretty.c"
}

#line 2788 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2791 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2793 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2795 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2797 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2799 "mdb.sized_pretty.c"
{
#line 2801 "mdb.sized_pretty.c"
  {
#line 2803 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2805 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2807 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2810 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2812 "mdb.sized_pretty.c"
    {
#line 2814 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2817 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2819 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2821 "mdb.sized_pretty.c"
  }
#line 2823 "mdb.sized_pretty.c"
}

#line 2826 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2829 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2831 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2833 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2835 "mdb.sized_pretty.c"
{
#line 2837 "mdb.sized_pretty.c"
  {
#line 2839 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2841 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2843 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2846 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2848 "mdb.sized_pretty.c"
    {
#line 2850 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 2853 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2855 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2857 "mdb.sized_pretty.c"
  }
#line 2859 "mdb.sized_pretty.c"
}

#line 2862 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2865 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2867 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2869 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2871 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2873 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2875 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2877 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2879 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2881 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2883 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2885 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2887 "mdb.sized_pretty.c"
{
#line 2889 "mdb.sized_pretty.c"
  {
#line 2891 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2893 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 2895 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 2897 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 2900 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2902 "mdb.sized_pretty.c"
    {
#line 2904 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 2907 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 2909 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 2911 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 2913 "mdb.sized_pretty.c"
  }
#line 2915 "mdb.sized_pretty.c"
}

#line 2918 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2921 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2923 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2925 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2927 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2929 "mdb.sized_pretty.c"
{
#line 2931 "mdb.sized_pretty.c"
  {
#line 2933 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2935 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2937 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2940 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2942 "mdb.sized_pretty.c"
    {
#line 2944 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2947 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2949 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2951 "mdb.sized_pretty.c"
  }
#line 2953 "mdb.sized_pretty.c"
}

#line 2956 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2959 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2961 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2963 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2965 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2967 "mdb.sized_pretty.c"
{
#line 2969 "mdb.sized_pretty.c"
  {
#line 2971 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2973 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2975 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2978 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2980 "mdb.sized_pretty.c"
    {
#line 2982 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2985 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2987 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2989 "mdb.sized_pretty.c"
  }
#line 2991 "mdb.sized_pretty.c"
}

#line 2994 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2997 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2999 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3001 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3003 "mdb.sized_pretty.c"
{
#line 3005 "mdb.sized_pretty.c"
  {
#line 3007 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3009 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3011 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3014 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3016 "mdb.sized_pretty.c"
    {
#line 3018 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 3021 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3023 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3025 "mdb.sized_pretty.c"
  }
#line 3027 "mdb.sized_pretty.c"
}

#line 3030 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 3033 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3035 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3037 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 3039 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 3041 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 3043 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 3045 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 3047 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 3049 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 3051 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 3053 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 3055 "mdb.sized_pretty.c"
{
#line 3057 "mdb.sized_pretty.c"
  {
#line 3059 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3061 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 3063 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 3065 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 3068 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3070 "mdb.sized_pretty.c"
    {
#line 3072 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 3075 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 3077 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 3079 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 3081 "mdb.sized_pretty.c"
  }
#line 3083 "mdb.sized_pretty.c"
}

#line 3086 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3089 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3091 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3093 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3095 "mdb.sized_pretty.c"
{
#line 3097 "mdb.sized_pretty.c"
  {
#line 3099 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3101 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3103 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3106 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3108 "mdb.sized_pretty.c"
    {
#line 3110 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3113 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3115 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3117 "mdb.sized_pretty.c"
  }
#line 3119 "mdb.sized_pretty.c"
}

#line 3122 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3125 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3127 "mdb.sized_pretty.c"
{
#line 3129 "mdb.sized_pretty.c"
  {
#line 3131 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3133 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3135 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3138 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3140 "mdb.sized_pretty.c"
    {
#line 3142 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3145 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3147 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3149 "mdb.sized_pretty.c"
  }
#line 3151 "mdb.sized_pretty.c"
}

#line 3154 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3157 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3159 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3161 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3163 "mdb.sized_pretty.c"
{
#line 3165 "mdb.sized_pretty.c"
  {
#line 3167 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3169 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3171 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3174 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3176 "mdb.sized_pretty.c"
    {
#line 3178 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3181 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3183 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3185 "mdb.sized_pretty.c"
  }
#line 3187 "mdb.sized_pretty.c"
}

#line 3190 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3193 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3195 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3197 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3199 "mdb.sized_pretty.c"
{
#line 3201 "mdb.sized_pretty.c"
  {
#line 3203 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3205 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3207 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3210 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3212 "mdb.sized_pretty.c"
    {
#line 3214 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3217 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3219 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3221 "mdb.sized_pretty.c"
  }
#line 3223 "mdb.sized_pretty.c"
}

#line 3226 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3229 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3231 "mdb.sized_pretty.c"
{
#line 3233 "mdb.sized_pretty.c"
  {
#line 3235 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3237 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3239 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3242 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3244 "mdb.sized_pretty.c"
    {
#line 3246 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3249 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3251 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3253 "mdb.sized_pretty.c"
  }
#line 3255 "mdb.sized_pretty.c"
}

#line 3258 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3261 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3263 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3265 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3267 "mdb.sized_pretty.c"
{
#line 3269 "mdb.sized_pretty.c"
  {
#line 3271 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3273 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3275 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3278 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3280 "mdb.sized_pretty.c"
    {
#line 3282 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3285 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3287 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3289 "mdb.sized_pretty.c"
  }
#line 3291 "mdb.sized_pretty.c"
}

#line 3294 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3297 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3299 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3301 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3303 "mdb.sized_pretty.c"
{
#line 3305 "mdb.sized_pretty.c"
  {
#line 3307 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3309 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3311 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3314 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3316 "mdb.sized_pretty.c"
    {
#line 3318 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3321 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3323 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3325 "mdb.sized_pretty.c"
  }
#line 3327 "mdb.sized_pretty.c"
}

#line 3330 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3333 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3335 "mdb.sized_pretty.c"
{
#line 3337 "mdb.sized_pretty.c"
  {
#line 3339 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3341 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3343 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3346 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3348 "mdb.sized_pretty.c"
    {
#line 3350 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3353 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3355 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3357 "mdb.sized_pretty.c"
  }
#line 3359 "mdb.sized_pretty.c"
}

#line 3362 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3365 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3367 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3369 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3371 "mdb.sized_pretty.c"
{
#line 3373 "mdb.sized_pretty.c"
  {
#line 3375 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3377 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3379 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3382 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3384 "mdb.sized_pretty.c"
    {
#line 3386 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3389 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3391 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3393 "mdb.sized_pretty.c"
  }
#line 3395 "mdb.sized_pretty.c"
}

#line 723 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_100_95_115_112_108_105_116_95_49_48_95_95_91_49_44_32_50_44_32_54_93_95_48_10_p_0(
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 723 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9)
#line 723 "sized_pretty.m"
{
#line 698 "sized_pretty.m"
  {
#line 698 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 698 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__Limit_17 = (MR_Integer) mdb__sized_pretty__HeadVar__4_4;

#line 698 "sized_pretty.m"
    *mdb__sized_pretty__HeadVar__7_7 = (MR_Word) ((MR_Box) ((MR_Integer) 1));
#line 698 "sized_pretty.m"
    *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 699 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__HeadVar__5_5 == (MR_Integer) 0);
#line 704 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 702 "sized_pretty.m"
      {
#line 703 "sized_pretty.m"
        MR_Box mdb__sized_pretty__conv0_HeadVar__8_8;

#line 703 "sized_pretty.m"
        {
#line 703 "sized_pretty.m"
          mercury__builtin__cc_multi_equal_2_p_0((MR_Word) &mdb__sized_pretty_scalar_common_1[2], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__sized_pretty__conv0_HeadVar__8_8);
        }
#line 703 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__8_8 = ((MR_Word) mdb__sized_pretty__conv0_HeadVar__8_8);
#line 702 "sized_pretty.m"
      }
#line 704 "sized_pretty.m"
    else
#line 707 "sized_pretty.m"
      {
#line 705 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_21_21 = (mdb__sized_pretty__HeadVar__5_5 + (MR_Integer) 1);

#line 705 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Limit_17 <= mdb__sized_pretty__V_21_21);
#line 707 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 706 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 707 "sized_pretty.m"
        else
#line 708 "sized_pretty.m"
          {
#line 708 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__RoundUp_19;
#line 708 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_23_23;
#line 708 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_24_24 = (mdb__sized_pretty__Limit_17 + mdb__sized_pretty__HeadVar__5_5);
#line 708 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_26_26;

#line 708 "sized_pretty.m"
            mdb__sized_pretty__V_23_23 = (mdb__sized_pretty__V_24_24 - (MR_Integer) 1);
#line 708 "sized_pretty.m"
            {
#line 708 "sized_pretty.m"
              mdb__sized_pretty__RoundUp_19 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_23_23, mdb__sized_pretty__HeadVar__5_5);
            }
#line 709 "sized_pretty.m"
            mdb__sized_pretty__V_26_26 = (MR_Word) mdb__sized_pretty__RoundUp_19;
#line 709 "sized_pretty.m"
            {
#line 709 "sized_pretty.m"
              MR_Word base;
#line 709 "sized_pretty.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 709 "sized_pretty.m"
              *mdb__sized_pretty__HeadVar__8_8 = base;
#line 709 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_26_26));
#line 709 "sized_pretty.m"
            }
#line 708 "sized_pretty.m"
          }
#line 707 "sized_pretty.m"
      }
#line 698 "sized_pretty.m"
  }
#line 723 "sized_pretty.m"
}

#line 722 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(
#line 722 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1)
#line 722 "sized_pretty.m"
{
#line 675 "sized_pretty.m"
  {
#line 675 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 675 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__HeadVar__3_3 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;

#line 675 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 675 "sized_pretty.m"
  }
#line 722 "sized_pretty.m"
}

#line 721 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 721 "sized_pretty.m"
{
#line 670 "sized_pretty.m"
  {
#line 670 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 670 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;
#line 670 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_6 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 670 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_7 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 670 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_8_8 = (mdb__sized_pretty__A_6 - mdb__sized_pretty__B_7);

#line 671 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__4_4 = (MR_Word) mdb__sized_pretty__V_8_8;
#line 670 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 670 "sized_pretty.m"
  }
#line 721 "sized_pretty.m"
}

#line 720 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 720 "sized_pretty.m"
{
#line 664 "sized_pretty.m"
  {
#line 664 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 664 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;
#line 664 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_6 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 664 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_7 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 664 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_8_8 = (mdb__sized_pretty__A_6 + mdb__sized_pretty__B_7);

#line 665 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__4_4 = (MR_Word) mdb__sized_pretty__V_8_8;
#line 664 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 664 "sized_pretty.m"
  }
#line 720 "sized_pretty.m"
}

#line 810 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(
#line 810 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1)
#line 810 "sized_pretty.m"
{
#line 746 "sized_pretty.m"
  {
#line 746 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 746 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;
#line 746 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__N_6 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 746 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_7_7 = (mdb__sized_pretty__N_6 + (MR_Integer) 2);

#line 748 "sized_pretty.m"
    {
#line 748 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__3_3 = mercury__int__div_2_f_0(mdb__sized_pretty__V_7_7, (MR_Integer) 3);
    }
#line 746 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 746 "sized_pretty.m"
  }
#line 810 "sized_pretty.m"
}

#line 809 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 809 "sized_pretty.m"
{
#line 741 "sized_pretty.m"
  {
#line 741 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 741 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;
#line 741 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_6 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 741 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_7 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 741 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_8_8 = (mdb__sized_pretty__A_6 - mdb__sized_pretty__B_7);

#line 742 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__4_4 = (MR_Word) mdb__sized_pretty__V_8_8;
#line 741 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 741 "sized_pretty.m"
  }
#line 809 "sized_pretty.m"
}

#line 808 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 808 "sized_pretty.m"
{
#line 736 "sized_pretty.m"
  {
#line 736 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 736 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;
#line 736 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_6 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 736 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_7 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 736 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_8_8 = (mdb__sized_pretty__A_6 + mdb__sized_pretty__B_7);

#line 736 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__4_4 = (MR_Word) mdb__sized_pretty__V_8_8;
#line 736 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 736 "sized_pretty.m"
  }
#line 808 "sized_pretty.m"
}

#line 1036 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_105_122_101_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 1036 "sized_pretty.m"
{
#line 866 "sized_pretty.m"
  {
#line 866 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 866 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 866 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 866 "sized_pretty.m"
      {
#line 866 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 866 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 866 "sized_pretty.m"
          {
#line 866 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 866 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__CharDiff_9 = (mdb__sized_pretty__V_35_35 - mdb__sized_pretty__B_6);

#line 868 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__CharDiff_9 < (MR_Integer) 0);
#line 870 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 869 "sized_pretty.m"
              {
#line 869 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__sized_pretty_scalar_common_7[0]);
#line 869 "sized_pretty.m"
              }
#line 870 "sized_pretty.m"
            else
#line 871 "sized_pretty.m"
              {
#line 871 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 871 "sized_pretty.m"
                MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__CharDiff_9));
#line 871 "sized_pretty.m"
              }
#line 866 "sized_pretty.m"
          }
#line 866 "sized_pretty.m"
        else
#line 874 "sized_pretty.m"
          {
#line 874 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 875 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__B_13 == (MR_Integer) 0);
#line 877 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 876 "sized_pretty.m"
              mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__HeadVar__1_1;
#line 877 "sized_pretty.m"
            else
#line 878 "sized_pretty.m"
              {
#line 878 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__sized_pretty_scalar_common_7[0]);
#line 878 "sized_pretty.m"
              }
#line 874 "sized_pretty.m"
          }
#line 866 "sized_pretty.m"
      }
#line 866 "sized_pretty.m"
    else
#line 866 "sized_pretty.m"
      {
#line 866 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 866 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 881 "sized_pretty.m"
          {
#line 881 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 882 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__B_18 == (MR_Integer) 0);
#line 884 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 883 "sized_pretty.m"
              mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__HeadVar__1_1;
#line 884 "sized_pretty.m"
            else
#line 887 "sized_pretty.m"
              {
#line 885 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_21_21 = (mdb__sized_pretty__V_36_36 - (MR_Integer) 1);

#line 885 "sized_pretty.m"
                mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_21_21 >= (MR_Integer) 0);
#line 887 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 886 "sized_pretty.m"
                  {
#line 886 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_24_24 = (mdb__sized_pretty__V_36_36 - (MR_Integer) 1);

#line 886 "sized_pretty.m"
                    {
#line 886 "sized_pretty.m"
                      mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 886 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__V_24_24));
#line 886 "sized_pretty.m"
                    }
#line 886 "sized_pretty.m"
                  }
#line 887 "sized_pretty.m"
                else
#line 888 "sized_pretty.m"
                  {
#line 888 "sized_pretty.m"
                    mdb__sized_pretty__HeadVar__4_4 = (MR_Word) &mdb__sized_pretty_scalar_common_7[0];
#line 888 "sized_pretty.m"
                  }
#line 887 "sized_pretty.m"
              }
#line 881 "sized_pretty.m"
          }
#line 866 "sized_pretty.m"
        else
#line 892 "sized_pretty.m"
          {
#line 892 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 893 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_31_31 = (mdb__sized_pretty__V_36_36 - mdb__sized_pretty__B_28);

#line 893 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_31_31 >= (MR_Integer) 0);
#line 895 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 894 "sized_pretty.m"
              {
#line 894 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_33_33 = (mdb__sized_pretty__V_36_36 - mdb__sized_pretty__B_28);

#line 894 "sized_pretty.m"
                {
#line 894 "sized_pretty.m"
                  mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 894 "sized_pretty.m"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__V_33_33));
#line 894 "sized_pretty.m"
                }
#line 894 "sized_pretty.m"
              }
#line 895 "sized_pretty.m"
            else
#line 896 "sized_pretty.m"
              {
#line 896 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) &mdb__sized_pretty_scalar_common_7[0];
#line 896 "sized_pretty.m"
              }
#line 892 "sized_pretty.m"
          }
#line 866 "sized_pretty.m"
      }
#line 866 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 866 "sized_pretty.m"
  }
#line 1036 "sized_pretty.m"
}

#line 203 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 203 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1)
#line 203 "sized_pretty.m"
{
#line 203 "sized_pretty.m"
  {
#line 203 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 203 "sized_pretty.m"
    *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 203 "sized_pretty.m"
  }
#line 203 "sized_pretty.m"
}

#line 203 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 203 "sized_pretty.m"
{
#line 203 "sized_pretty.m"
  {
#line 203 "sized_pretty.m"
    return MR_TRUE;
#line 203 "sized_pretty.m"
  }
#line 203 "sized_pretty.m"
}

#line 641 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(
#line 641 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_45)
#line 641 "sized_pretty.m"
{
#line 641 "sized_pretty.m"
  {
#line 641 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 641 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__2_46;
#line 641 "sized_pretty.m"
    MR_Box mdb__sized_pretty__conv0_HeadVar__2_46;

#line 641 "sized_pretty.m"
    {
#line 641 "sized_pretty.m"
      mdb__sized_pretty__conv0_HeadVar__2_46 = mercury__std_util__id_1_f_0((MR_Word) &mercury__pprint__pprint__type_ctor_info_doc_0, ((MR_Box) (mdb__sized_pretty__HeadVar__1_45)));
    }
#line 641 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__2_46 = ((MR_Word) mdb__sized_pretty__conv0_HeadVar__2_46);
#line 641 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__2_46;
#line 641 "sized_pretty.m"
  }
#line 641 "sized_pretty.m"
}

#line 476 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__IntroducedFrom__func__second_pass__476__1_2_f_0(
#line 476 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56,
#line 476 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_67)
#line 476 "sized_pretty.m"
{
#line 476 "sized_pretty.m"
  {
#line 476 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 476 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_68;
#line 3935 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__TypeInfo_70_70;

#line 3938 "mdb.sized_pretty.c"
    {
#line 3940 "mdb.sized_pretty.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_70_70);
    }
#line 585 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__2_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 585 "sized_pretty.m"
      mdb__sized_pretty__HeadVar__3_68 = (MR_Integer) 0;
#line 585 "sized_pretty.m"
    else
#line 586 "sized_pretty.m"
      {
#line 586 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Term_75;
#line 586 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_67, (MR_Integer) 0)));
#line 586 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_74_74 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_85_85, (MR_Integer) 0));

#line 586 "sized_pretty.m"
        mdb__sized_pretty__Term_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_85_85, (MR_Integer) 1)));
#line 590 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__Term_75)) == (MR_mktag((MR_Integer) 1))))
#line 592 "sized_pretty.m"
          mdb__sized_pretty__HeadVar__3_68 = (MR_Integer) 0;
#line 590 "sized_pretty.m"
        else
#line 589 "sized_pretty.m"
          mdb__sized_pretty__HeadVar__3_68 = (MR_Integer) 1;
#line 586 "sized_pretty.m"
      }
#line 476 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_68;
#line 476 "sized_pretty.m"
  }
#line 476 "sized_pretty.m"
}

#line 723 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 723 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 723 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 723 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9)
#line 723 "sized_pretty.m"
{
#line 698 "sized_pretty.m"
  {
#line 698 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 698 "sized_pretty.m"
    {
#line 698 "sized_pretty.m"
      mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_100_95_115_112_108_105_116_95_49_48_95_95_91_49_44_32_50_44_32_54_93_95_48_10_p_0(mdb__sized_pretty__HeadVar__4_4, mdb__sized_pretty__HeadVar__5_5, mdb__sized_pretty__HeadVar__7_7, mdb__sized_pretty__HeadVar__8_8, mdb__sized_pretty__HeadVar__9_9);
#line 698 "sized_pretty.m"
      return;
    }
#line 698 "sized_pretty.m"
  }
#line 723 "sized_pretty.m"
}

#line 722 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 722 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1)
#line 722 "sized_pretty.m"
{
#line 675 "sized_pretty.m"
  {
#line 675 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 675 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;

#line 675 "sized_pretty.m"
    {
#line 675 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(mdb__sized_pretty__HeadVar__1_1);
    }
#line 675 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 675 "sized_pretty.m"
  }
#line 722 "sized_pretty.m"
}

#line 721 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 721 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 721 "sized_pretty.m"
{
#line 670 "sized_pretty.m"
  {
#line 670 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 670 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 670 "sized_pretty.m"
    {
#line 670 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 670 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 670 "sized_pretty.m"
  }
#line 721 "sized_pretty.m"
}

#line 720 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 720 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 720 "sized_pretty.m"
{
#line 664 "sized_pretty.m"
  {
#line 664 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 664 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 664 "sized_pretty.m"
    {
#line 664 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_102_117_110_99_116_111_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 664 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 664 "sized_pretty.m"
  }
#line 720 "sized_pretty.m"
}

#line 811 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 811 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 811 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 811 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9)
#line 811 "sized_pretty.m"
{
#line 771 "sized_pretty.m"
  {
#line 771 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 771 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__Limit_17 = (MR_Integer) mdb__sized_pretty__HeadVar__4_4;
#line 771 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__FunctorSize_18;
#line 771 "sized_pretty.m"
    MR_String mdb__sized_pretty__Functor_19;
#line 771 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Args_21;
#line 771 "sized_pretty.m"
    MR_Word mdb__sized_pretty__MaybeReturn_22;
#line 771 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__TotalLength_23;
#line 772 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_20_20;

#line 770 "sized_pretty.m"
    *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 772 "sized_pretty.m"
    {
#line 772 "sized_pretty.m"
      mdb__browser_info__deconstruct_browser_term_cc_6_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, &mdb__sized_pretty__Functor_19, &mdb__sized_pretty__V_20_20, &mdb__sized_pretty__Args_21, &mdb__sized_pretty__MaybeReturn_22);
    }
#line 777 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__6_6 == (MR_Integer) 0))
#line 779 "sized_pretty.m"
      mdb__sized_pretty__TotalLength_23 = (MR_Integer) 0;
#line 777 "sized_pretty.m"
    else
#line 776 "sized_pretty.m"
      {
#line 776 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_24_24;

#line 776 "sized_pretty.m"
        {
#line 776 "sized_pretty.m"
          mdb__sized_pretty__get_arg_length_3_p_0(mdb__sized_pretty__Args_21, &mdb__sized_pretty__TotalLength_23, &mdb__sized_pretty__V_24_24);
        }
#line 776 "sized_pretty.m"
      }
#line 785 "sized_pretty.m"
    if ((mdb__sized_pretty__MaybeReturn_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 786 "sized_pretty.m"
      {
#line 786 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_27_27;
#line 786 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_28_28;

#line 788 "sized_pretty.m"
        {
#line 788 "sized_pretty.m"
          mdb__sized_pretty__V_27_27 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_19);
        }
#line 788 "sized_pretty.m"
        mdb__sized_pretty__V_28_28 = ((MR_Integer) 2 * mdb__sized_pretty__HeadVar__5_5);
#line 788 "sized_pretty.m"
        mdb__sized_pretty__FunctorSize_18 = (mdb__sized_pretty__V_27_27 + mdb__sized_pretty__V_28_28);
#line 786 "sized_pretty.m"
      }
#line 785 "sized_pretty.m"
    else
#line 782 "sized_pretty.m"
      {
#line 782 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_30_30;
#line 782 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_31_31;
#line 782 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_32_32;

#line 784 "sized_pretty.m"
        {
#line 784 "sized_pretty.m"
          mdb__sized_pretty__V_31_31 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_19);
        }
#line 784 "sized_pretty.m"
        mdb__sized_pretty__V_32_32 = ((MR_Integer) 2 * mdb__sized_pretty__HeadVar__5_5);
#line 784 "sized_pretty.m"
        mdb__sized_pretty__V_30_30 = (mdb__sized_pretty__V_31_31 + mdb__sized_pretty__V_32_32);
#line 784 "sized_pretty.m"
        mdb__sized_pretty__FunctorSize_18 = (mdb__sized_pretty__V_30_30 + (MR_Integer) 3);
#line 782 "sized_pretty.m"
      }
#line 770 "sized_pretty.m"
    *mdb__sized_pretty__HeadVar__7_7 = (MR_Word) mdb__sized_pretty__FunctorSize_18;
#line 790 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__HeadVar__5_5 == (MR_Integer) 0);
#line 792 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 791 "sized_pretty.m"
      *mdb__sized_pretty__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 792 "sized_pretty.m"
    else
#line 795 "sized_pretty.m"
      {
#line 793 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_35_35 = (mdb__sized_pretty__FunctorSize_18 + mdb__sized_pretty__TotalLength_23);

#line 793 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Limit_17 <= mdb__sized_pretty__V_35_35);
#line 795 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 794 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "sized_pretty.m"
        else
#line 796 "sized_pretty.m"
          {
#line 796 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__RoundUp_26;
#line 796 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_36_36;
#line 796 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_37_37 = (mdb__sized_pretty__Limit_17 + mdb__sized_pretty__HeadVar__5_5);
#line 796 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_38_38;

#line 796 "sized_pretty.m"
            mdb__sized_pretty__V_36_36 = (mdb__sized_pretty__V_37_37 - mdb__sized_pretty__FunctorSize_18);
#line 796 "sized_pretty.m"
            {
#line 796 "sized_pretty.m"
              mdb__sized_pretty__RoundUp_26 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_36_36, mdb__sized_pretty__HeadVar__5_5);
            }
#line 797 "sized_pretty.m"
            mdb__sized_pretty__V_38_38 = (MR_Word) mdb__sized_pretty__RoundUp_26;
#line 797 "sized_pretty.m"
            {
#line 797 "sized_pretty.m"
              MR_Word base;
#line 797 "sized_pretty.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "sized_pretty.m"
              *mdb__sized_pretty__HeadVar__8_8 = base;
#line 797 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_38_38));
#line 797 "sized_pretty.m"
            }
#line 796 "sized_pretty.m"
          }
#line 795 "sized_pretty.m"
      }
#line 771 "sized_pretty.m"
  }
#line 811 "sized_pretty.m"
}

#line 810 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 810 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1)
#line 810 "sized_pretty.m"
{
#line 746 "sized_pretty.m"
  {
#line 746 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 746 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;

#line 746 "sized_pretty.m"
    {
#line 746 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_97_120_105_109_117_109_95_102_117_110_99_116_111_114_115_95_50_95_95_91_50_93_95_48_2_f_0(mdb__sized_pretty__HeadVar__1_1);
    }
#line 746 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 746 "sized_pretty.m"
  }
#line 810 "sized_pretty.m"
}

#line 809 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 809 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 809 "sized_pretty.m"
{
#line 741 "sized_pretty.m"
  {
#line 741 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 741 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 741 "sized_pretty.m"
    {
#line 741 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 741 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 741 "sized_pretty.m"
  }
#line 809 "sized_pretty.m"
}

#line 808 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 808 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 808 "sized_pretty.m"
{
#line 736 "sized_pretty.m"
  {
#line 736 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 736 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 736 "sized_pretty.m"
    {
#line 736 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_99_104_97_114_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_97_100_100_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 736 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 736 "sized_pretty.m"
  }
#line 808 "sized_pretty.m"
}

#line 1038 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__4_4,
#line 1038 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 1038 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__7_7,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__9_9,
#line 1038 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__10_10)
#line 1038 "sized_pretty.m"
{
#line 946 "sized_pretty.m"
  {
#line 946 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__LineWidth_21 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;
#line 946 "sized_pretty.m"
    MR_String mdb__sized_pretty__Functor_22;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__ActualArity_23;
#line 946 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Args_24;
#line 946 "sized_pretty.m"
    MR_Word mdb__sized_pretty__MaybeReturn_25;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__FSize_26;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__TotalLength_27;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__MaxLength_29;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_39_39;
#line 946 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_40_40;

#line 949 "sized_pretty.m"
    {
#line 949 "sized_pretty.m"
      mdb__browser_info__deconstruct_browser_term_cc_6_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, &mdb__sized_pretty__Functor_22, &mdb__sized_pretty__ActualArity_23, &mdb__sized_pretty__Args_24, &mdb__sized_pretty__MaybeReturn_25);
    }
#line 951 "sized_pretty.m"
    {
#line 951 "sized_pretty.m"
      mdb__sized_pretty__V_39_39 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_22);
    }
#line 951 "sized_pretty.m"
    mdb__sized_pretty__V_40_40 = ((MR_Integer) 2 * mdb__sized_pretty__ActualArity_23);
#line 951 "sized_pretty.m"
    mdb__sized_pretty__FSize_26 = (mdb__sized_pretty__V_39_39 + mdb__sized_pretty__V_40_40);
#line 956 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__6_6 == (MR_Integer) 0))
#line 957 "sized_pretty.m"
      {
#line 958 "sized_pretty.m"
        mdb__sized_pretty__TotalLength_27 = (MR_Integer) 0;
#line 959 "sized_pretty.m"
        mdb__sized_pretty__MaxLength_29 = (MR_Integer) 0;
#line 957 "sized_pretty.m"
      }
#line 956 "sized_pretty.m"
    else
#line 953 "sized_pretty.m"
      {
#line 953 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__MaxArgLength_28;
#line 953 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_42_42;
#line 953 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_43_43;

#line 954 "sized_pretty.m"
        {
#line 954 "sized_pretty.m"
          mdb__sized_pretty__get_arg_length_3_p_0(mdb__sized_pretty__Args_24, &mdb__sized_pretty__TotalLength_27, &mdb__sized_pretty__MaxArgLength_28);
        }
#line 955 "sized_pretty.m"
        {
#line 955 "sized_pretty.m"
          mdb__sized_pretty__V_43_43 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_22);
        }
#line 955 "sized_pretty.m"
        mdb__sized_pretty__V_42_42 = (mdb__sized_pretty__V_43_43 + (MR_Integer) 1);
#line 955 "sized_pretty.m"
        {
#line 955 "sized_pretty.m"
          mercury__int__max_3_p_0(mdb__sized_pretty__MaxArgLength_28, mdb__sized_pretty__V_42_42, &mdb__sized_pretty__MaxLength_29);
        }
#line 953 "sized_pretty.m"
      }
#line 961 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__HeadVar__5_5 == (MR_Integer) 0);
#line 966 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 962 "sized_pretty.m"
      {
#line 962 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 963 "sized_pretty.m"
        {
#line 963 "sized_pretty.m"
          MR_Word base;
#line 963 "sized_pretty.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__7_7 = base;
#line 963 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__FSize_26));
#line 963 "sized_pretty.m"
        }
#line 964 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 965 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__10_10 = mdb__sized_pretty__HeadVar__3_3;
#line 962 "sized_pretty.m"
      }
#line 966 "sized_pretty.m"
    else
#line 981 "sized_pretty.m"
      {
#line 981 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__LineLimit_30;
#line 968 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_45_45;
#line 968 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_46_46;
#line 968 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_47_47;
#line 968 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_48_48;

#line 968 "sized_pretty.m"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 968 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 968 "sized_pretty.m"
          {
#line 968 "sized_pretty.m"
            mdb__sized_pretty__LineLimit_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, (MR_Integer) 0)));
#line 971 "sized_pretty.m"
            mdb__sized_pretty__V_46_46 = (MR_Integer) 1;
#line 971 "sized_pretty.m"
            mdb__sized_pretty__V_45_45 = (mdb__sized_pretty__HeadVar__5_5 + mdb__sized_pretty__V_46_46);
#line 971 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__LineLimit_30 >= mdb__sized_pretty__V_45_45);
#line 968 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 968 "sized_pretty.m"
              {
#line 974 "sized_pretty.m"
                mdb__sized_pretty__V_48_48 = (MR_Integer) 2;
#line 974 "sized_pretty.m"
                mdb__sized_pretty__V_47_47 = (mdb__sized_pretty__LineWidth_21 - mdb__sized_pretty__V_48_48);
#line 974 "sized_pretty.m"
                mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_47_47 >= mdb__sized_pretty__MaxLength_29);
#line 968 "sized_pretty.m"
              }
#line 968 "sized_pretty.m"
          }
#line 981 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 976 "sized_pretty.m"
          {
#line 976 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__Line_31;
#line 976 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_49_49 = (mdb__sized_pretty__LineLimit_30 - (MR_Integer) 1);
#line 976 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_51_51;
#line 976 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_53_53;

#line 976 "sized_pretty.m"
            {
#line 976 "sized_pretty.m"
              mdb__sized_pretty__Line_31 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_49_49, mdb__sized_pretty__HeadVar__5_5);
            }
#line 977 "sized_pretty.m"
            {
#line 977 "sized_pretty.m"
              mdb__sized_pretty__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 977 "sized_pretty.m"
              MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_51_51, 0) = ((MR_Box) (mdb__sized_pretty__Line_31));
#line 977 "sized_pretty.m"
            }
#line 977 "sized_pretty.m"
            {
#line 977 "sized_pretty.m"
              MR_Word base;
#line 977 "sized_pretty.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 977 "sized_pretty.m"
              *mdb__sized_pretty__HeadVar__8_8 = base;
#line 977 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_51_51));
#line 977 "sized_pretty.m"
            }
#line 978 "sized_pretty.m"
            *mdb__sized_pretty__HeadVar__7_7 = (MR_Word) &mdb__sized_pretty_scalar_common_7[1];
#line 979 "sized_pretty.m"
            *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 980 "sized_pretty.m"
            mdb__sized_pretty__V_53_53 = (mdb__sized_pretty__LineWidth_21 - (MR_Integer) 2);
#line 980 "sized_pretty.m"
            *mdb__sized_pretty__HeadVar__10_10 = (MR_Word) mdb__sized_pretty__V_53_53;
#line 976 "sized_pretty.m"
          }
#line 981 "sized_pretty.m"
        else
#line 996 "sized_pretty.m"
          {
#line 982 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_55_55;
#line 982 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_56_56;
#line 982 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_57_57;
#line 982 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_58_58;
#line 982 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__LineLimit_78;

#line 982 "sized_pretty.m"
            mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 982 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 982 "sized_pretty.m"
              {
#line 982 "sized_pretty.m"
                mdb__sized_pretty__LineLimit_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, (MR_Integer) 0)));
#line 983 "sized_pretty.m"
                mdb__sized_pretty__V_55_55 = (MR_Integer) 0;
#line 983 "sized_pretty.m"
                mdb__sized_pretty__succeeded = (mdb__sized_pretty__LineLimit_78 > mdb__sized_pretty__V_55_55);
#line 982 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 982 "sized_pretty.m"
                  {
#line 988 "sized_pretty.m"
                    mdb__sized_pretty__V_58_58 = (MR_Integer) 3;
#line 988 "sized_pretty.m"
                    mdb__sized_pretty__V_56_56 = (mdb__sized_pretty__LineWidth_21 - mdb__sized_pretty__V_58_58);
#line 988 "sized_pretty.m"
                    mdb__sized_pretty__V_57_57 = (mdb__sized_pretty__FSize_26 + mdb__sized_pretty__TotalLength_27);
#line 988 "sized_pretty.m"
                    mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_56_56 >= mdb__sized_pretty__V_57_57);
#line 982 "sized_pretty.m"
                  }
#line 982 "sized_pretty.m"
              }
#line 996 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 991 "sized_pretty.m"
              {
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__Char_32;
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_59_59;
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_60_60;
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_61_61;
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_62_62 = (mdb__sized_pretty__LineWidth_21 - (MR_Integer) 3);
#line 991 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_65_65;
#line 991 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_66_66;

#line 991 "sized_pretty.m"
                mdb__sized_pretty__V_61_61 = (mdb__sized_pretty__V_62_62 - mdb__sized_pretty__FSize_26);
#line 991 "sized_pretty.m"
                mdb__sized_pretty__V_60_60 = (mdb__sized_pretty__V_61_61 + mdb__sized_pretty__HeadVar__5_5);
#line 991 "sized_pretty.m"
                mdb__sized_pretty__V_59_59 = (mdb__sized_pretty__V_60_60 - (MR_Integer) 1);
#line 991 "sized_pretty.m"
                {
#line 991 "sized_pretty.m"
                  mdb__sized_pretty__Char_32 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_59_59, mdb__sized_pretty__HeadVar__5_5);
                }
#line 992 "sized_pretty.m"
                {
#line 992 "sized_pretty.m"
                  mdb__sized_pretty__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_65_65, 0) = ((MR_Box) (mdb__sized_pretty__Char_32));
#line 992 "sized_pretty.m"
                }
#line 992 "sized_pretty.m"
                {
#line 992 "sized_pretty.m"
                  MR_Word base;
#line 992 "sized_pretty.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 992 "sized_pretty.m"
                  *mdb__sized_pretty__HeadVar__8_8 = base;
#line 992 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_65_65));
#line 992 "sized_pretty.m"
                }
#line 993 "sized_pretty.m"
                {
#line 993 "sized_pretty.m"
                  MR_Word base;
#line 993 "sized_pretty.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 993 "sized_pretty.m"
                  *mdb__sized_pretty__HeadVar__7_7 = base;
#line 993 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__FSize_26));
#line 993 "sized_pretty.m"
                }
#line 994 "sized_pretty.m"
                mdb__sized_pretty__V_66_66 = (mdb__sized_pretty__LineWidth_21 - (MR_Integer) 3);
#line 994 "sized_pretty.m"
                {
#line 994 "sized_pretty.m"
                  MR_Word base;
#line 994 "sized_pretty.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "sized_pretty.m"
                  *mdb__sized_pretty__HeadVar__9_9 = base;
#line 994 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_66_66));
#line 994 "sized_pretty.m"
                }
#line 995 "sized_pretty.m"
                *mdb__sized_pretty__HeadVar__10_10 = mdb__sized_pretty__HeadVar__3_3;
#line 991 "sized_pretty.m"
              }
#line 996 "sized_pretty.m"
            else
#line 1005 "sized_pretty.m"
              {
#line 1005 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__CharLimit_33;
#line 997 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_68_68;

#line 997 "sized_pretty.m"
                mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 997 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 997 "sized_pretty.m"
                  {
#line 997 "sized_pretty.m"
                    mdb__sized_pretty__CharLimit_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__4_4, (MR_Integer) 0)));
#line 998 "sized_pretty.m"
                    mdb__sized_pretty__V_68_68 = (mdb__sized_pretty__FSize_26 + mdb__sized_pretty__TotalLength_27);
#line 998 "sized_pretty.m"
                    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CharLimit_33 >= mdb__sized_pretty__V_68_68);
#line 997 "sized_pretty.m"
                  }
#line 1005 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 1000 "sized_pretty.m"
                  {
#line 1000 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_69_69;
#line 1000 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_70_70;
#line 1000 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_71_71 = (mdb__sized_pretty__CharLimit_33 - mdb__sized_pretty__FSize_26);
#line 1000 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_73_73;
#line 1000 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__Char_79;

#line 1000 "sized_pretty.m"
                    mdb__sized_pretty__V_70_70 = (mdb__sized_pretty__V_71_71 + mdb__sized_pretty__HeadVar__5_5);
#line 1000 "sized_pretty.m"
                    mdb__sized_pretty__V_69_69 = (mdb__sized_pretty__V_70_70 - (MR_Integer) 1);
#line 1000 "sized_pretty.m"
                    {
#line 1000 "sized_pretty.m"
                      mdb__sized_pretty__Char_79 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_69_69, mdb__sized_pretty__HeadVar__5_5);
                    }
#line 1001 "sized_pretty.m"
                    {
#line 1001 "sized_pretty.m"
                      mdb__sized_pretty__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_73_73, 0) = ((MR_Box) (mdb__sized_pretty__Char_79));
#line 1001 "sized_pretty.m"
                    }
#line 1001 "sized_pretty.m"
                    {
#line 1001 "sized_pretty.m"
                      MR_Word base;
#line 1001 "sized_pretty.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "sized_pretty.m"
                      *mdb__sized_pretty__HeadVar__8_8 = base;
#line 1001 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_73_73));
#line 1001 "sized_pretty.m"
                    }
#line 1002 "sized_pretty.m"
                    {
#line 1002 "sized_pretty.m"
                      MR_Word base;
#line 1002 "sized_pretty.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "sized_pretty.m"
                      *mdb__sized_pretty__HeadVar__7_7 = base;
#line 1002 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__FSize_26));
#line 1002 "sized_pretty.m"
                    }
#line 1003 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 1004 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__10_10 = mdb__sized_pretty__HeadVar__3_3;
#line 1000 "sized_pretty.m"
                  }
#line 1005 "sized_pretty.m"
                else
#line 1006 "sized_pretty.m"
                  {
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__FuncSuffixChars_35;
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__FunctorLength_36;
#line 1006 "sized_pretty.m"
                    MR_String mdb__sized_pretty__ArityStr_37;
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__ArityChars_38;
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_74_74;
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_75_75;
#line 1006 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_76_76;

#line 1006 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1014 "sized_pretty.m"
                    if ((mdb__sized_pretty__MaybeReturn_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1016 "sized_pretty.m"
                      mdb__sized_pretty__FuncSuffixChars_35 = (MR_Integer) 0;
#line 1014 "sized_pretty.m"
                    else
#line 1013 "sized_pretty.m"
                      mdb__sized_pretty__FuncSuffixChars_35 = (MR_Integer) 2;
#line 1018 "sized_pretty.m"
                    {
#line 1018 "sized_pretty.m"
                      mdb__sized_pretty__FunctorLength_36 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_22);
                    }
#line 1019 "sized_pretty.m"
                    {
#line 1019 "sized_pretty.m"
                      mercury__string__int_to_string_2_p_0(mdb__sized_pretty__HeadVar__5_5, &mdb__sized_pretty__ArityStr_37);
                    }
#line 1020 "sized_pretty.m"
                    {
#line 1020 "sized_pretty.m"
                      mercury__string__length_2_p_1(mdb__sized_pretty__ArityStr_37, &mdb__sized_pretty__ArityChars_38);
                    }
#line 1021 "sized_pretty.m"
                    mdb__sized_pretty__V_76_76 = (mdb__sized_pretty__FunctorLength_36 + (MR_Integer) 1);
#line 1022 "sized_pretty.m"
                    mdb__sized_pretty__V_75_75 = (mdb__sized_pretty__V_76_76 + mdb__sized_pretty__ArityChars_38);
#line 1022 "sized_pretty.m"
                    mdb__sized_pretty__V_74_74 = (mdb__sized_pretty__V_75_75 + mdb__sized_pretty__FuncSuffixChars_35);
#line 1021 "sized_pretty.m"
                    {
#line 1021 "sized_pretty.m"
                      MR_Word base;
#line 1021 "sized_pretty.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "sized_pretty.m"
                      *mdb__sized_pretty__HeadVar__7_7 = base;
#line 1021 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_74_74));
#line 1021 "sized_pretty.m"
                    }
#line 1023 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__9_9 = mdb__sized_pretty__HeadVar__4_4;
#line 1024 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__10_10 = mdb__sized_pretty__HeadVar__3_3;
#line 1006 "sized_pretty.m"
                  }
#line 1005 "sized_pretty.m"
              }
#line 996 "sized_pretty.m"
          }
#line 981 "sized_pretty.m"
      }
#line 946 "sized_pretty.m"
  }
#line 1038 "sized_pretty.m"
}

#line 1037 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(
#line 1037 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1037 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 1037 "sized_pretty.m"
{
#line 901 "sized_pretty.m"
  {
#line 901 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 901 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;

#line 901 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 901 "sized_pretty.m"
      {
#line 901 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_7_7 = (mdb__sized_pretty__N_4 + (MR_Integer) 2);

#line 903 "sized_pretty.m"
        {
#line 903 "sized_pretty.m"
          return mdb__sized_pretty__HeadVar__3_3 = mercury__int__div_2_f_0(mdb__sized_pretty__V_7_7, (MR_Integer) 3);
        }
#line 901 "sized_pretty.m"
      }
#line 901 "sized_pretty.m"
    else
#line 905 "sized_pretty.m"
      {
#line 905 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 905 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__LineWidth_11 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 905 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Area_13 = (mdb__sized_pretty__N_10 * mdb__sized_pretty__LineWidth_11);
#line 905 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_14_14 = (mdb__sized_pretty__Area_13 + (MR_Integer) 2);

#line 910 "sized_pretty.m"
        {
#line 910 "sized_pretty.m"
          return mdb__sized_pretty__HeadVar__3_3 = mercury__int__div_2_f_0(mdb__sized_pretty__V_14_14, (MR_Integer) 3);
        }
#line 905 "sized_pretty.m"
      }
#line 901 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 901 "sized_pretty.m"
  }
#line 1037 "sized_pretty.m"
}

#line 1036 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1036 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 1036 "sized_pretty.m"
{
#line 866 "sized_pretty.m"
  {
#line 866 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 866 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 866 "sized_pretty.m"
    {
#line 866 "sized_pretty.m"
      return mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_119_105_116_104_95_112_97_114_97_109_115_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_105_122_101_95_99_111_117_110_116_95_95_97_114_105_116_121_48_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_95_97_114_105_116_121_48_95_95_95_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_115_117_98_116_114_97_99_116_95_109_101_97_115_117_114_101_115_95_51_95_95_91_51_93_95_48_3_f_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 866 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 866 "sized_pretty.m"
  }
#line 1036 "sized_pretty.m"
}

#line 1035 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 1035 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 1035 "sized_pretty.m"
{
#line 825 "sized_pretty.m"
  {
#line 825 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 825 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__4_4;

#line 825 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 825 "sized_pretty.m"
      {
#line 825 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 825 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 825 "sized_pretty.m"
          {
#line 825 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 825 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__LineWidth_9 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;
#line 825 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__CharSum_10 = (mdb__sized_pretty__V_30_30 + mdb__sized_pretty__B_6);

#line 828 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__CharSum_10 > mdb__sized_pretty__LineWidth_9);
#line 830 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 829 "sized_pretty.m"
              {
#line 829 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) &mdb__sized_pretty_scalar_common_7[1];
#line 829 "sized_pretty.m"
              }
#line 830 "sized_pretty.m"
            else
#line 831 "sized_pretty.m"
              {
#line 831 "sized_pretty.m"
                mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "sized_pretty.m"
                MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__CharSum_10));
#line 831 "sized_pretty.m"
              }
#line 825 "sized_pretty.m"
          }
#line 825 "sized_pretty.m"
        else
#line 834 "sized_pretty.m"
          {
#line 834 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 835 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_30_30 > (MR_Integer) 0);
#line 837 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 836 "sized_pretty.m"
              {
#line 836 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_17_17 = (mdb__sized_pretty__B_13 + (MR_Integer) 1);

#line 836 "sized_pretty.m"
                {
#line 836 "sized_pretty.m"
                  mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 836 "sized_pretty.m"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__V_17_17));
#line 836 "sized_pretty.m"
                }
#line 836 "sized_pretty.m"
              }
#line 837 "sized_pretty.m"
            else
#line 838 "sized_pretty.m"
              mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__HeadVar__2_2;
#line 834 "sized_pretty.m"
          }
#line 825 "sized_pretty.m"
      }
#line 825 "sized_pretty.m"
    else
#line 825 "sized_pretty.m"
      {
#line 825 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 825 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 841 "sized_pretty.m"
          {
#line 841 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 842 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__B_20 > (MR_Integer) 0);
#line 844 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 843 "sized_pretty.m"
              {
#line 843 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_24_24 = (mdb__sized_pretty__V_31_31 + (MR_Integer) 1);

#line 843 "sized_pretty.m"
                {
#line 843 "sized_pretty.m"
                  mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 843 "sized_pretty.m"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__V_24_24));
#line 843 "sized_pretty.m"
                }
#line 843 "sized_pretty.m"
              }
#line 844 "sized_pretty.m"
            else
#line 845 "sized_pretty.m"
              mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__HeadVar__1_1;
#line 841 "sized_pretty.m"
          }
#line 825 "sized_pretty.m"
        else
#line 848 "sized_pretty.m"
          {
#line 848 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__B_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 848 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_29_29 = (mdb__sized_pretty__V_31_31 + mdb__sized_pretty__B_27);

#line 848 "sized_pretty.m"
            {
#line 848 "sized_pretty.m"
              mdb__sized_pretty__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 848 "sized_pretty.m"
              MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__4_4, 0) = ((MR_Box) (mdb__sized_pretty__V_29_29));
#line 848 "sized_pretty.m"
            }
#line 848 "sized_pretty.m"
          }
#line 825 "sized_pretty.m"
      }
#line 825 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__4_4;
#line 825 "sized_pretty.m"
  }
#line 1035 "sized_pretty.m"
}

#line 714 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 714 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 714 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 714 "sized_pretty.m"
{
#line 680 "sized_pretty.m"
  {
#line 680 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 680 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 680 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_5 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 680 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 681 "sized_pretty.m"
    {
#line 681 "sized_pretty.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__A_5, mdb__sized_pretty__B_6);
    }
#line 680 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 680 "sized_pretty.m"
  }
#line 714 "sized_pretty.m"
}

#line 716 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
#line 716 "sized_pretty.m"
{
#line 690 "sized_pretty.m"
  {
#line 690 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 690 "sized_pretty.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 690 "sized_pretty.m"
  }
#line 716 "sized_pretty.m"
}

#line 715 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 715 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 715 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 715 "sized_pretty.m"
{
#line 685 "sized_pretty.m"
  {
#line 685 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 685 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 685 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_4 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 685 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_5 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 685 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__Max_6;

#line 686 "sized_pretty.m"
    {
#line 686 "sized_pretty.m"
      mercury__int__max_3_p_0(mdb__sized_pretty__A_4, mdb__sized_pretty__B_5, &mdb__sized_pretty__Max_6);
    }
#line 685 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__3_3 = (MR_Word) mdb__sized_pretty__Max_6;
#line 685 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 685 "sized_pretty.m"
  }
#line 715 "sized_pretty.m"
}

#line 802 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 802 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 802 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 802 "sized_pretty.m"
{
#line 752 "sized_pretty.m"
  {
#line 752 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 752 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 752 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_5 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 752 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 753 "sized_pretty.m"
    {
#line 753 "sized_pretty.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__A_5, mdb__sized_pretty__B_6);
    }
#line 752 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 752 "sized_pretty.m"
  }
#line 802 "sized_pretty.m"
}

#line 804 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
#line 804 "sized_pretty.m"
{
#line 762 "sized_pretty.m"
  {
#line 762 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 762 "sized_pretty.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 762 "sized_pretty.m"
  }
#line 804 "sized_pretty.m"
}

#line 803 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 803 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 803 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 803 "sized_pretty.m"
{
#line 757 "sized_pretty.m"
  {
#line 757 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 757 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 757 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__A_4 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 757 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__B_5 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 757 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__Max_6;

#line 758 "sized_pretty.m"
    {
#line 758 "sized_pretty.m"
      mercury__int__max_3_p_0(mdb__sized_pretty__A_4, mdb__sized_pretty__B_5, &mdb__sized_pretty__Max_6);
    }
#line 757 "sized_pretty.m"
    mdb__sized_pretty__HeadVar__3_3 = (MR_Word) mdb__sized_pretty__Max_6;
#line 757 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 757 "sized_pretty.m"
  }
#line 803 "sized_pretty.m"
}

#line 1029 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(
#line 1029 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1029 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 1029 "sized_pretty.m"
{
#line 914 "sized_pretty.m"
  {
#line 914 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 914 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;

#line 914 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 914 "sized_pretty.m"
      {
#line 914 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 914 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 914 "sized_pretty.m"
          {
#line 914 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__C2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 915 "sized_pretty.m"
            {
#line 915 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__V_16_16, mdb__sized_pretty__C2_5);
            }
#line 914 "sized_pretty.m"
          }
#line 914 "sized_pretty.m"
        else
#line 917 "sized_pretty.m"
          mdb__sized_pretty__HeadVar__3_3 = (MR_Integer) 1;
#line 914 "sized_pretty.m"
      }
#line 914 "sized_pretty.m"
    else
#line 914 "sized_pretty.m"
      {
#line 914 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 914 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 919 "sized_pretty.m"
          mdb__sized_pretty__HeadVar__3_3 = (MR_Integer) 2;
#line 914 "sized_pretty.m"
        else
#line 921 "sized_pretty.m"
          {
#line 921 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__L2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 922 "sized_pretty.m"
            {
#line 922 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__V_17_17, mdb__sized_pretty__L2_12);
            }
#line 921 "sized_pretty.m"
          }
#line 914 "sized_pretty.m"
      }
#line 914 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 914 "sized_pretty.m"
  }
#line 1029 "sized_pretty.m"
}

#line 1031 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0(void)
#line 1031 "sized_pretty.m"
{
#line 935 "sized_pretty.m"
  {
#line 935 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 935 "sized_pretty.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &mdb__sized_pretty_scalar_common_7[0]);
#line 935 "sized_pretty.m"
  }
#line 1031 "sized_pretty.m"
}

#line 1030 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(
#line 1030 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1030 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 1030 "sized_pretty.m"
{
#line 929 "sized_pretty.m"
  {
#line 929 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 929 "sized_pretty.m"
    MR_Word mdb__sized_pretty__HeadVar__3_3;

#line 914 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 914 "sized_pretty.m"
      {
#line 914 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_7_7;
#line 914 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__C2_9;
#line 914 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 5399 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 5401 "mdb.sized_pretty.c"
        if (mdb__sized_pretty__succeeded)
#line 5403 "mdb.sized_pretty.c"
          {
#line 5405 "mdb.sized_pretty.c"
            mdb__sized_pretty__C2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 915 "sized_pretty.m"
            {
#line 915 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_7_7, mdb__sized_pretty__V_20_20, mdb__sized_pretty__C2_9);
            }
#line 927 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_7_7 == (MR_Integer) 2);
#line 5414 "mdb.sized_pretty.c"
          }
#line 914 "sized_pretty.m"
      }
#line 914 "sized_pretty.m"
    else
#line 914 "sized_pretty.m"
      {
#line 914 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));

#line 914 "sized_pretty.m"
        if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 919 "sized_pretty.m"
          mdb__sized_pretty__succeeded = MR_TRUE;
#line 914 "sized_pretty.m"
        else
#line 921 "sized_pretty.m"
          {
#line 921 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__L2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 921 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_28_28;

#line 922 "sized_pretty.m"
            {
#line 922 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_28_28, mdb__sized_pretty__V_21_21, mdb__sized_pretty__L2_16);
            }
#line 927 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_28_28 == (MR_Integer) 2);
#line 921 "sized_pretty.m"
          }
#line 914 "sized_pretty.m"
      }
#line 929 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 928 "sized_pretty.m"
      mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__HeadVar__1_1;
#line 929 "sized_pretty.m"
    else
#line 930 "sized_pretty.m"
      mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__HeadVar__2_2;
#line 929 "sized_pretty.m"
    return mdb__sized_pretty__HeadVar__3_3;
#line 929 "sized_pretty.m"
  }
#line 1030 "sized_pretty.m"
}

#line 819 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0(
#line 819 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 819 "sized_pretty.m"
{
#line 819 "sized_pretty.m"
  {
#line 819 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 819 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_12 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 819 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_13 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 819 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_12 == mdb__sized_pretty__CastY_13);
#line 819 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 5488 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 819 "sized_pretty.m"
    else
#line 819 "sized_pretty.m"
      if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 819 "sized_pretty.m"
        {
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 819 "sized_pretty.m"
          if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 819 "sized_pretty.m"
            {
#line 819 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));

#line 819 "sized_pretty.m"
              {
#line 819 "sized_pretty.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_16_16, mdb__sized_pretty__V_11_11);
#line 819 "sized_pretty.m"
                return;
              }
#line 819 "sized_pretty.m"
            }
#line 819 "sized_pretty.m"
          else
#line 5517 "mdb.sized_pretty.c"
            *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 2;
#line 819 "sized_pretty.m"
        }
#line 819 "sized_pretty.m"
      else
#line 819 "sized_pretty.m"
        {
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 819 "sized_pretty.m"
          if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5530 "mdb.sized_pretty.c"
            *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 1;
#line 819 "sized_pretty.m"
          else
#line 819 "sized_pretty.m"
            {
#line 819 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));

#line 819 "sized_pretty.m"
              {
#line 819 "sized_pretty.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_17_17, mdb__sized_pretty__V_5_5);
#line 819 "sized_pretty.m"
                return;
              }
#line 819 "sized_pretty.m"
            }
#line 819 "sized_pretty.m"
        }
#line 819 "sized_pretty.m"
  }
#line 819 "sized_pretty.m"
}

#line 819 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0(
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 819 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 819 "sized_pretty.m"
{
#line 819 "sized_pretty.m"
  {
#line 819 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 819 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_7 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 819 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_8 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 819 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_7 == mdb__sized_pretty__CastY_8);
#line 819 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 819 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 819 "sized_pretty.m"
    else
#line 819 "sized_pretty.m"
      if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 819 "sized_pretty.m"
        {
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_6_6;

#line 819 "sized_pretty.m"
          mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 819 "sized_pretty.m"
          if (mdb__sized_pretty__succeeded)
#line 819 "sized_pretty.m"
            {
#line 819 "sized_pretty.m"
              mdb__sized_pretty__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 5598 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_5_5 == mdb__sized_pretty__V_6_6);
#line 819 "sized_pretty.m"
            }
#line 819 "sized_pretty.m"
        }
#line 819 "sized_pretty.m"
      else
#line 819 "sized_pretty.m"
        {
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 819 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_4_4;

#line 819 "sized_pretty.m"
          mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 819 "sized_pretty.m"
          if (mdb__sized_pretty__succeeded)
#line 819 "sized_pretty.m"
            {
#line 819 "sized_pretty.m"
              mdb__sized_pretty__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 5621 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_3_3 == mdb__sized_pretty__V_4_4);
#line 819 "sized_pretty.m"
            }
#line 819 "sized_pretty.m"
        }
#line 819 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 819 "sized_pretty.m"
  }
#line 819 "sized_pretty.m"
}

#line 220 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0(
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_44,
#line 220 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 220 "sized_pretty.m"
{
#line 220 "sized_pretty.m"
  {
#line 220 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 220 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_42 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 220 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_43 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 220 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_42 == mdb__sized_pretty__CastY_43);
#line 220 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 5660 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "sized_pretty.m"
    else
#line 220 "sized_pretty.m"
      if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 220 "sized_pretty.m"
        {
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 220 "sized_pretty.m"
          if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 220 "sized_pretty.m"
            {
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
              MR_Box mdb__sized_pretty__V_38_38 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 1));
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_40_40;

#line 220 "sized_pretty.m"
              {
#line 220 "sized_pretty.m"
                mdb__browser_term____Compare____browser_term_0_0(&mdb__sized_pretty__V_40_40, mdb__sized_pretty__V_61_61, mdb__sized_pretty__V_37_37);
              }
#line 5693 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_40_40 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
              mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_40_40;
#line 220 "sized_pretty.m"
              else
#line 220 "sized_pretty.m"
                {
#line 220 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_41_41;

#line 220 "sized_pretty.m"
                  {
#line 220 "sized_pretty.m"
                    mercury__builtin__compare_3_p_0(mdb__sized_pretty__TypeInfo_for_T_44, &mdb__sized_pretty__V_41_41, mdb__sized_pretty__V_60_60, mdb__sized_pretty__V_38_38);
                  }
#line 5713 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_41_41 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
                  mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_41_41;
#line 220 "sized_pretty.m"
                  else
#line 220 "sized_pretty.m"
                    {
#line 220 "sized_pretty.m"
                      mdb__sized_pretty____Compare____maybe_deconstructed_1_0(mdb__sized_pretty__TypeInfo_for_T_44, mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_59_59, mdb__sized_pretty__V_39_39);
#line 220 "sized_pretty.m"
                      return;
                    }
#line 220 "sized_pretty.m"
                }
#line 220 "sized_pretty.m"
            }
#line 220 "sized_pretty.m"
          else
#line 5736 "mdb.sized_pretty.c"
            *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 2;
#line 220 "sized_pretty.m"
        }
#line 220 "sized_pretty.m"
      else
#line 220 "sized_pretty.m"
        {
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 4)));
#line 220 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 220 "sized_pretty.m"
          if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5757 "mdb.sized_pretty.c"
            *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 1;
#line 220 "sized_pretty.m"
          else
#line 220 "sized_pretty.m"
            {
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
              MR_Box mdb__sized_pretty__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 1));
#line 220 "sized_pretty.m"
              MR_String mdb__sized_pretty__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 3)));
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 4)));
#line 220 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_14_14;

#line 220 "sized_pretty.m"
              {
#line 220 "sized_pretty.m"
                mdb__browser_term____Compare____browser_term_0_0(&mdb__sized_pretty__V_14_14, mdb__sized_pretty__V_66_66, mdb__sized_pretty__V_9_9);
              }
#line 5781 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_14_14 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
              mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_14_14;
#line 220 "sized_pretty.m"
              else
#line 220 "sized_pretty.m"
                {
#line 220 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_15_15;

#line 220 "sized_pretty.m"
                  {
#line 220 "sized_pretty.m"
                    mercury__builtin__compare_3_p_0(mdb__sized_pretty__TypeInfo_for_T_44, &mdb__sized_pretty__V_15_15, mdb__sized_pretty__V_65_65, mdb__sized_pretty__V_10_10);
                  }
#line 5801 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_15_15 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
                  mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_15_15;
#line 220 "sized_pretty.m"
                  else
#line 220 "sized_pretty.m"
                    {
#line 220 "sized_pretty.m"
                      MR_Word mdb__sized_pretty__V_16_16;

#line 220 "sized_pretty.m"
                      {
#line 220 "sized_pretty.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__sized_pretty__V_16_16, mdb__sized_pretty__V_64_64, mdb__sized_pretty__V_11_11);
                      }
#line 5821 "mdb.sized_pretty.c"
                      mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_16_16 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
                      mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
                      if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                        *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_16_16;
#line 220 "sized_pretty.m"
                      else
#line 220 "sized_pretty.m"
                        {
#line 220 "sized_pretty.m"
                          MR_Word mdb__sized_pretty__V_17_17;

#line 220 "sized_pretty.m"
                          {
#line 220 "sized_pretty.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_17_17, mdb__sized_pretty__V_63_63, mdb__sized_pretty__V_12_12);
                          }
#line 5841 "mdb.sized_pretty.c"
                          mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_17_17 == (MR_Integer) 0);
#line 220 "sized_pretty.m"
                          mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 220 "sized_pretty.m"
                          if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                            *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_17_17;
#line 220 "sized_pretty.m"
                          else
#line 220 "sized_pretty.m"
                            {
#line 220 "sized_pretty.m"
                              MR_Word mdb__sized_pretty__TypeInfo_52_52;
#line 220 "sized_pretty.m"
                              MR_Word mdb__sized_pretty__TypeInfo_54_54;
#line 220 "sized_pretty.m"
                              MR_Word mdb__sized_pretty__TypeInfo_56_56;

#line 5860 "mdb.sized_pretty.c"
                              {
#line 5862 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5864 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 5866 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5868 "mdb.sized_pretty.c"
                              }
#line 5870 "mdb.sized_pretty.c"
                              {
#line 5872 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5874 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5876 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5878 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_52_52));
#line 5880 "mdb.sized_pretty.c"
                              }
#line 5882 "mdb.sized_pretty.c"
                              {
#line 5884 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5886 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 5888 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_54_54));
#line 5890 "mdb.sized_pretty.c"
                              }
#line 220 "sized_pretty.m"
                              {
#line 220 "sized_pretty.m"
                                mercury__list____Compare____list_1_0(mdb__sized_pretty__TypeInfo_56_56, mdb__sized_pretty__HeadVar__1_1, (MR_Word) mdb__sized_pretty__V_62_62, (MR_Word) mdb__sized_pretty__V_13_13);
#line 220 "sized_pretty.m"
                                return;
                              }
#line 220 "sized_pretty.m"
                            }
#line 220 "sized_pretty.m"
                        }
#line 220 "sized_pretty.m"
                    }
#line 220 "sized_pretty.m"
                }
#line 220 "sized_pretty.m"
            }
#line 220 "sized_pretty.m"
        }
#line 220 "sized_pretty.m"
  }
#line 220 "sized_pretty.m"
}

#line 220 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0(
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_21,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 220 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 220 "sized_pretty.m"
{
#line 220 "sized_pretty.m"
  {
#line 220 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 220 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_19 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 220 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_20 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 220 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_19 == mdb__sized_pretty__CastY_20);
#line 220 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 220 "sized_pretty.m"
    else
#line 220 "sized_pretty.m"
      if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 220 "sized_pretty.m"
        {
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_14_14 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_16_16;
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_17_17;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_18_18;

#line 220 "sized_pretty.m"
          mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 220 "sized_pretty.m"
          if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
            {
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 5973 "mdb.sized_pretty.c"
              {
#line 5975 "mdb.sized_pretty.c"
                mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_13_13, mdb__sized_pretty__V_16_16);
              }
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                {
#line 5982 "mdb.sized_pretty.c"
                  {
#line 5984 "mdb.sized_pretty.c"
                    mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_14_14, mdb__sized_pretty__V_17_17);
                  }
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 5989 "mdb.sized_pretty.c"
                    {
#line 5991 "mdb.sized_pretty.c"
                      return mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_15_15, mdb__sized_pretty__V_18_18);
                    }
#line 220 "sized_pretty.m"
                }
#line 220 "sized_pretty.m"
            }
#line 220 "sized_pretty.m"
        }
#line 220 "sized_pretty.m"
      else
#line 220 "sized_pretty.m"
        {
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_24_24;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_25_25;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_26_26;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_27_27;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_28_28;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_29_29;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1));
#line 220 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 3)));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 4)));
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_8_8;
#line 220 "sized_pretty.m"
          MR_Box mdb__sized_pretty__V_9_9;
#line 220 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_10_10;
#line 220 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_11_11;
#line 220 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_12_12;

#line 220 "sized_pretty.m"
          mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 220 "sized_pretty.m"
          if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
            {
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 3)));
#line 220 "sized_pretty.m"
              mdb__sized_pretty__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 4)));
#line 6053 "mdb.sized_pretty.c"
              {
#line 6055 "mdb.sized_pretty.c"
                mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_3_3, mdb__sized_pretty__V_8_8);
              }
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                {
#line 6062 "mdb.sized_pretty.c"
                  {
#line 6064 "mdb.sized_pretty.c"
                    mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_9_9);
                  }
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                    {
#line 6071 "mdb.sized_pretty.c"
                      mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_10_10) == 0);
#line 220 "sized_pretty.m"
                      if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                        {
#line 6077 "mdb.sized_pretty.c"
                          mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_11_11);
#line 220 "sized_pretty.m"
                          if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                            {
#line 6083 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_28_28 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6085 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6087 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_24_24 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6089 "mdb.sized_pretty.c"
                              {
#line 6091 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6093 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_24_24));
#line 6095 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6097 "mdb.sized_pretty.c"
                              }
#line 6099 "mdb.sized_pretty.c"
                              {
#line 6101 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6103 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_26_26));
#line 6105 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6107 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_25_25));
#line 6109 "mdb.sized_pretty.c"
                              }
#line 6111 "mdb.sized_pretty.c"
                              {
#line 6113 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6115 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_28_28));
#line 6117 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_27_27));
#line 6119 "mdb.sized_pretty.c"
                              }
#line 6121 "mdb.sized_pretty.c"
                              {
#line 6123 "mdb.sized_pretty.c"
                                return mdb__sized_pretty__succeeded = mercury__list____Unify____list_1_0(mdb__sized_pretty__TypeInfo_29_29, (MR_Word) mdb__sized_pretty__V_7_7, (MR_Word) mdb__sized_pretty__V_12_12);
                              }
#line 220 "sized_pretty.m"
                            }
#line 220 "sized_pretty.m"
                        }
#line 220 "sized_pretty.m"
                    }
#line 220 "sized_pretty.m"
                }
#line 220 "sized_pretty.m"
            }
#line 220 "sized_pretty.m"
        }
#line 220 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 220 "sized_pretty.m"
  }
#line 220 "sized_pretty.m"
}

#line 235 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0(
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_6,
#line 235 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 235 "sized_pretty.m"
{
#line 235 "sized_pretty.m"
  {
#line 235 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_8_8;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_10_10;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_12_12;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Cast_HeadVar1_4 = mdb__sized_pretty__HeadVar__2_2;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Cast_HeadVar2_5 = mdb__sized_pretty__HeadVar__3_3;

#line 6173 "mdb.sized_pretty.c"
    {
#line 6175 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6177 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6179 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6181 "mdb.sized_pretty.c"
    }
#line 6183 "mdb.sized_pretty.c"
    {
#line 6185 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6187 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6189 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6191 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_8_8));
#line 6193 "mdb.sized_pretty.c"
    }
#line 6195 "mdb.sized_pretty.c"
    {
#line 6197 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6199 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6201 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_10_10));
#line 6203 "mdb.sized_pretty.c"
    }
#line 235 "sized_pretty.m"
    {
#line 235 "sized_pretty.m"
      mercury__list____Compare____list_1_0(mdb__sized_pretty__TypeInfo_12_12, mdb__sized_pretty__HeadVar__1_1, (MR_Word) mdb__sized_pretty__Cast_HeadVar1_4, (MR_Word) mdb__sized_pretty__Cast_HeadVar2_5);
#line 235 "sized_pretty.m"
      return;
    }
#line 235 "sized_pretty.m"
  }
#line 235 "sized_pretty.m"
}

#line 235 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0(
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_5,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 235 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 235 "sized_pretty.m"
{
#line 235 "sized_pretty.m"
  {
#line 235 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_7_7;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_9_9;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeInfo_11_11;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Cast_HeadVar1_3 = mdb__sized_pretty__HeadVar__1_1;
#line 235 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Cast_HeadVar2_4 = mdb__sized_pretty__HeadVar__2_2;

#line 6243 "mdb.sized_pretty.c"
    {
#line 6245 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6247 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6249 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6251 "mdb.sized_pretty.c"
    }
#line 6253 "mdb.sized_pretty.c"
    {
#line 6255 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6257 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6259 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6261 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_7_7));
#line 6263 "mdb.sized_pretty.c"
    }
#line 6265 "mdb.sized_pretty.c"
    {
#line 6267 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6269 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6271 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_9_9));
#line 6273 "mdb.sized_pretty.c"
    }
#line 235 "sized_pretty.m"
    {
#line 235 "sized_pretty.m"
      return mdb__sized_pretty__succeeded = mercury__list____Unify____list_1_0(mdb__sized_pretty__TypeInfo_11_11, (MR_Word) mdb__sized_pretty__Cast_HeadVar1_3, (MR_Word) mdb__sized_pretty__Cast_HeadVar2_4);
    }
#line 235 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 235 "sized_pretty.m"
  }
#line 235 "sized_pretty.m"
}

#line 203 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0(
#line 203 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1)
#line 203 "sized_pretty.m"
{
#line 203 "sized_pretty.m"
  {
#line 203 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 203 "sized_pretty.m"
    {
#line 203 "sized_pretty.m"
      mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__sized_pretty__HeadVar__1_1);
#line 203 "sized_pretty.m"
      return;
    }
#line 203 "sized_pretty.m"
  }
#line 203 "sized_pretty.m"
}

#line 203 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0(void)
#line 203 "sized_pretty.m"
{
#line 203 "sized_pretty.m"
  {
#line 203 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 203 "sized_pretty.m"
    {
#line 203 "sized_pretty.m"
      return mdb__sized_pretty__succeeded = mdb__sized_pretty__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_115_105_122_101_100_95_112_114_101_116_116_121_95_95_110_111_95_109_101_97_115_117_114_101_95_112_97_114_97_109_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 203 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 203 "sized_pretty.m"
  }
#line 203 "sized_pretty.m"
}

#line 206 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0(
#line 206 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 206 "sized_pretty.m"
{
#line 206 "sized_pretty.m"
  {
#line 206 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 206 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 206 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_7 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 206 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_6 == mdb__sized_pretty__CastY_7);
#line 206 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 6357 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 206 "sized_pretty.m"
    else
#line 206 "sized_pretty.m"
      {
#line 206 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 206 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_5_5 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 206 "sized_pretty.m"
        {
#line 206 "sized_pretty.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_5_5);
#line 206 "sized_pretty.m"
          return;
        }
#line 206 "sized_pretty.m"
      }
#line 206 "sized_pretty.m"
  }
#line 206 "sized_pretty.m"
}

#line 206 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0(
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 206 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 206 "sized_pretty.m"
{
#line 206 "sized_pretty.m"
  {
#line 206 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 206 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_5 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 206 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 206 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_5 == mdb__sized_pretty__CastY_6);
#line 206 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 206 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 206 "sized_pretty.m"
    else
#line 206 "sized_pretty.m"
      {
#line 206 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_3_3 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 206 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 6415 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_3_3 == mdb__sized_pretty__V_4_4);
#line 206 "sized_pretty.m"
      }
#line 206 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 206 "sized_pretty.m"
  }
#line 206 "sized_pretty.m"
}

#line 209 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0(
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_20,
#line 209 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 209 "sized_pretty.m"
{
#line 209 "sized_pretty.m"
  {
#line 209 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 209 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_18 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 209 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_19 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 209 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_18 == mdb__sized_pretty__CastY_19);
#line 209 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 6452 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "sized_pretty.m"
    else
#line 209 "sized_pretty.m"
      if ((mdb__sized_pretty__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "sized_pretty.m"
        if ((mdb__sized_pretty__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "sized_pretty.m"
        else
#line 6464 "mdb.sized_pretty.c"
          *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 1;
#line 209 "sized_pretty.m"
      else
#line 209 "sized_pretty.m"
        {
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 209 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));

#line 209 "sized_pretty.m"
          if ((mdb__sized_pretty__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6479 "mdb.sized_pretty.c"
            *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 2;
#line 209 "sized_pretty.m"
          else
#line 209 "sized_pretty.m"
            {
#line 209 "sized_pretty.m"
              MR_String mdb__sized_pretty__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));
#line 209 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 1)));
#line 209 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 2)));
#line 209 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_16_16;

#line 209 "sized_pretty.m"
              {
#line 209 "sized_pretty.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__sized_pretty__V_16_16, mdb__sized_pretty__V_33_33, mdb__sized_pretty__V_13_13);
              }
#line 6499 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_16_16 == (MR_Integer) 0);
#line 209 "sized_pretty.m"
              mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 209 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_16_16;
#line 209 "sized_pretty.m"
              else
#line 209 "sized_pretty.m"
                {
#line 209 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_17_17;

#line 209 "sized_pretty.m"
                  {
#line 209 "sized_pretty.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_17_17, mdb__sized_pretty__V_32_32, mdb__sized_pretty__V_14_14);
                  }
#line 6519 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_17_17 == (MR_Integer) 0);
#line 209 "sized_pretty.m"
                  mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 209 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                    *mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__V_17_17;
#line 209 "sized_pretty.m"
                  else
#line 209 "sized_pretty.m"
                    {
#line 209 "sized_pretty.m"
                      MR_Word mdb__sized_pretty__TypeInfo_24_24;
#line 209 "sized_pretty.m"
                      MR_Word mdb__sized_pretty__TypeInfo_26_26;
#line 209 "sized_pretty.m"
                      MR_Word mdb__sized_pretty__TypeInfo_28_28;

#line 6538 "mdb.sized_pretty.c"
                      {
#line 6540 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6542 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6544 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6546 "mdb.sized_pretty.c"
                      }
#line 6548 "mdb.sized_pretty.c"
                      {
#line 6550 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6552 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6554 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6556 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_24_24));
#line 6558 "mdb.sized_pretty.c"
                      }
#line 6560 "mdb.sized_pretty.c"
                      {
#line 6562 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6564 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6566 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_26_26));
#line 6568 "mdb.sized_pretty.c"
                      }
#line 209 "sized_pretty.m"
                      {
#line 209 "sized_pretty.m"
                        mercury__list____Compare____list_1_0(mdb__sized_pretty__TypeInfo_28_28, mdb__sized_pretty__HeadVar__1_1, (MR_Word) mdb__sized_pretty__V_31_31, (MR_Word) mdb__sized_pretty__V_15_15);
#line 209 "sized_pretty.m"
                        return;
                      }
#line 209 "sized_pretty.m"
                    }
#line 209 "sized_pretty.m"
                }
#line 209 "sized_pretty.m"
            }
#line 209 "sized_pretty.m"
        }
#line 209 "sized_pretty.m"
  }
#line 209 "sized_pretty.m"
}

#line 209 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0(
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_13,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 209 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 209 "sized_pretty.m"
{
#line 209 "sized_pretty.m"
  {
#line 209 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 209 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_11 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 209 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_12 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 209 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_11 == mdb__sized_pretty__CastY_12);
#line 209 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 209 "sized_pretty.m"
    else
#line 209 "sized_pretty.m"
      if ((mdb__sized_pretty__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "sized_pretty.m"
        {
#line 209 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__CastX_3 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 209 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__CastY_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 209 "sized_pretty.m"
          mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastY_4 == mdb__sized_pretty__CastX_3);
#line 209 "sized_pretty.m"
        }
#line 209 "sized_pretty.m"
      else
#line 209 "sized_pretty.m"
        {
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_14_14;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_15_15;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_16_16;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_17_17;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeCtorInfo_18_18;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__TypeInfo_19_19;
#line 209 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 2)));
#line 209 "sized_pretty.m"
          MR_String mdb__sized_pretty__V_8_8;
#line 209 "sized_pretty.m"
          MR_Integer mdb__sized_pretty__V_9_9;
#line 209 "sized_pretty.m"
          MR_Word mdb__sized_pretty__V_10_10;

#line 209 "sized_pretty.m"
          mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 209 "sized_pretty.m"
          if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
            {
#line 209 "sized_pretty.m"
              mdb__sized_pretty__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "sized_pretty.m"
              mdb__sized_pretty__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "sized_pretty.m"
              mdb__sized_pretty__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 2)));
#line 6672 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_8_8) == 0);
#line 209 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                {
#line 6678 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_9_9);
#line 209 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                    {
#line 6684 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_18_18 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6686 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6688 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_14_14 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6690 "mdb.sized_pretty.c"
                      {
#line 6692 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6694 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_14_14));
#line 6696 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6698 "mdb.sized_pretty.c"
                      }
#line 6700 "mdb.sized_pretty.c"
                      {
#line 6702 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6704 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_16_16));
#line 6706 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6708 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_15_15));
#line 6710 "mdb.sized_pretty.c"
                      }
#line 6712 "mdb.sized_pretty.c"
                      {
#line 6714 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6716 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_18_18));
#line 6718 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_17_17));
#line 6720 "mdb.sized_pretty.c"
                      }
#line 6722 "mdb.sized_pretty.c"
                      {
#line 6724 "mdb.sized_pretty.c"
                        return mdb__sized_pretty__succeeded = mercury__list____Unify____list_1_0(mdb__sized_pretty__TypeInfo_19_19, (MR_Word) mdb__sized_pretty__V_7_7, (MR_Word) mdb__sized_pretty__V_10_10);
                      }
#line 209 "sized_pretty.m"
                    }
#line 209 "sized_pretty.m"
                }
#line 209 "sized_pretty.m"
            }
#line 209 "sized_pretty.m"
        }
#line 209 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 209 "sized_pretty.m"
  }
#line 209 "sized_pretty.m"
}

#line 658 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0(
#line 658 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 658 "sized_pretty.m"
{
#line 658 "sized_pretty.m"
  {
#line 658 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 658 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 658 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_7 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 658 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_6 == mdb__sized_pretty__CastY_7);
#line 658 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 6766 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 658 "sized_pretty.m"
    else
#line 658 "sized_pretty.m"
      {
#line 658 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 658 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_5_5 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 658 "sized_pretty.m"
        {
#line 658 "sized_pretty.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_5_5);
#line 658 "sized_pretty.m"
          return;
        }
#line 658 "sized_pretty.m"
      }
#line 658 "sized_pretty.m"
  }
#line 658 "sized_pretty.m"
}

#line 658 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0(
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 658 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 658 "sized_pretty.m"
{
#line 658 "sized_pretty.m"
  {
#line 658 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 658 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_5 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 658 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 658 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_5 == mdb__sized_pretty__CastY_6);
#line 658 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 658 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 658 "sized_pretty.m"
    else
#line 658 "sized_pretty.m"
      {
#line 658 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_3_3 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 658 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 6824 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_3_3 == mdb__sized_pretty__V_4_4);
#line 658 "sized_pretty.m"
      }
#line 658 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 658 "sized_pretty.m"
  }
#line 658 "sized_pretty.m"
}

#line 731 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0(
#line 731 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__1_1,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3)
#line 731 "sized_pretty.m"
{
#line 731 "sized_pretty.m"
  {
#line 731 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 731 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 731 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_7 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 731 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_6 == mdb__sized_pretty__CastY_7);
#line 731 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 6859 "mdb.sized_pretty.c"
      *mdb__sized_pretty__HeadVar__1_1 = (MR_Integer) 0;
#line 731 "sized_pretty.m"
    else
#line 731 "sized_pretty.m"
      {
#line 731 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;
#line 731 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_5_5 = (MR_Integer) mdb__sized_pretty__HeadVar__3_3;

#line 731 "sized_pretty.m"
        {
#line 731 "sized_pretty.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_5_5);
#line 731 "sized_pretty.m"
          return;
        }
#line 731 "sized_pretty.m"
      }
#line 731 "sized_pretty.m"
  }
#line 731 "sized_pretty.m"
}

#line 731 "sized_pretty.m"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0(
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 731 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2)
#line 731 "sized_pretty.m"
{
#line 731 "sized_pretty.m"
  {
#line 731 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 731 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastX_5 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 731 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__CastY_6 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 731 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__CastX_5 == mdb__sized_pretty__CastY_6);
#line 731 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 731 "sized_pretty.m"
      mdb__sized_pretty__succeeded = MR_TRUE;
#line 731 "sized_pretty.m"
    else
#line 731 "sized_pretty.m"
      {
#line 731 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_3_3 = (MR_Integer) mdb__sized_pretty__HeadVar__1_1;
#line 731 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_4_4 = (MR_Integer) mdb__sized_pretty__HeadVar__2_2;

#line 6917 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_3_3 == mdb__sized_pretty__V_4_4);
#line 731 "sized_pretty.m"
      }
#line 731 "sized_pretty.m"
    return mdb__sized_pretty__succeeded;
#line 731 "sized_pretty.m"
  }
#line 731 "sized_pretty.m"
}

#line 1047 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__get_arg_length_3_p_0(
#line 1047 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 1047 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__2_2,
#line 1047 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__3_3)
#line 1047 "sized_pretty.m"
{
#line 1049 "sized_pretty.m"
  {
#line 1049 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 1049 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "sized_pretty.m"
      {
#line 1049 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__2_2 = (MR_Integer) 0;
#line 1049 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__3_3 = (MR_Integer) 0;
#line 1049 "sized_pretty.m"
      }
#line 1049 "sized_pretty.m"
    else
#line 1050 "sized_pretty.m"
      {
#line 1050 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeInfo_21_21;
#line 1050 "sized_pretty.m"
        MR_Word mdb__sized_pretty__HeadUniv_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 1050 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1)));
#line 1050 "sized_pretty.m"
        MR_String mdb__sized_pretty__Functor_8;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Arity_9;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Correction_10;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Length_13;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__RestTotalLength_14;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__RestMaxLength_15;
#line 1050 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_16_16;
#line 1050 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_20_20;

#line 1051 "sized_pretty.m"
        {
#line 1051 "sized_pretty.m"
          mdb__sized_pretty__V_16_16 = mercury__univ__univ_value_1_f_0(&mdb__sized_pretty__TypeInfo_21_21, mdb__sized_pretty__HeadUniv_4);
        }
#line 1051 "sized_pretty.m"
        {
#line 1051 "sized_pretty.m"
          mercury__deconstruct__functor_4_p_2(mdb__sized_pretty__TypeInfo_21_21, mdb__sized_pretty__V_16_16, (MR_Integer) 2, &mdb__sized_pretty__Functor_8, &mdb__sized_pretty__Arity_9);
        }
#line 1055 "sized_pretty.m"
        if ((mdb__sized_pretty__Rest_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "sized_pretty.m"
          mdb__sized_pretty__Correction_10 = (MR_Integer) 2;
#line 1055 "sized_pretty.m"
        else
#line 1057 "sized_pretty.m"
          mdb__sized_pretty__Correction_10 = (MR_Integer) 3;
#line 1059 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Arity_9 == (MR_Integer) 0);
#line 1061 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 1060 "sized_pretty.m"
          {
#line 1060 "sized_pretty.m"
            mdb__sized_pretty__Length_13 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_8);
          }
#line 1061 "sized_pretty.m"
        else
#line 1065 "sized_pretty.m"
          {
#line 1065 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_18_18;

#line 1065 "sized_pretty.m"
            {
#line 1065 "sized_pretty.m"
              mdb__sized_pretty__V_18_18 = mercury__string__length_1_f_0(mdb__sized_pretty__Functor_8);
            }
#line 1065 "sized_pretty.m"
            mdb__sized_pretty__Length_13 = (mdb__sized_pretty__V_18_18 + (MR_Integer) 2);
#line 1065 "sized_pretty.m"
          }
#line 1068 "sized_pretty.m"
        mdb__sized_pretty__V_20_20 = (mdb__sized_pretty__Length_13 + mdb__sized_pretty__Correction_10);
#line 1069 "sized_pretty.m"
        {
#line 1069 "sized_pretty.m"
          mdb__sized_pretty__get_arg_length_3_p_0(mdb__sized_pretty__Rest_5, &mdb__sized_pretty__RestTotalLength_14, &mdb__sized_pretty__RestMaxLength_15);
        }
#line 1067 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__2_2 = (mdb__sized_pretty__Length_13 + mdb__sized_pretty__RestTotalLength_14);
#line 1068 "sized_pretty.m"
        {
#line 1068 "sized_pretty.m"
          mercury__int__max_3_p_0(mdb__sized_pretty__V_20_20, mdb__sized_pretty__RestMaxLength_15, mdb__sized_pretty__HeadVar__3_3);
#line 1068 "sized_pretty.m"
          return;
        }
#line 1050 "sized_pretty.m"
      }
#line 1049 "sized_pretty.m"
  }
#line 1047 "sized_pretty.m"
}

#line 646 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__handle_arg_2_p_0(
#line 646 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_7,
#line 646 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 646 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__2_2)
#line 646 "sized_pretty.m"
{
#line 649 "sized_pretty.m"
  {
#line 649 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 649 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "sized_pretty.m"
      {
#line 651 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__2_2 = mercury__pprint__nil_0_f_0();
      }
#line 649 "sized_pretty.m"
    else
#line 649 "sized_pretty.m"
      {
#line 649 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Arg_Term_4;
#line 649 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 649 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_6_6, (MR_Integer) 0));

#line 649 "sized_pretty.m"
        mdb__sized_pretty__Arg_Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_6_6, (MR_Integer) 1)));
#line 650 "sized_pretty.m"
        {
#line 650 "sized_pretty.m"
          mdb__sized_pretty__to_doc_sized_2_p_0(mdb__sized_pretty__TypeInfo_for_T_7, mdb__sized_pretty__Arg_Term_4, mdb__sized_pretty__HeadVar__2_2);
#line 650 "sized_pretty.m"
          return;
        }
#line 649 "sized_pretty.m"
      }
#line 649 "sized_pretty.m"
  }
#line 646 "sized_pretty.m"
}

#line 641 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_2(
#line 641 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 641 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1)
#line 641 "sized_pretty.m"
{
#line 641 "sized_pretty.m"
  {
#line 641 "sized_pretty.m"
    MR_Box mdb__sized_pretty__wrapper_arg_2;
#line 641 "sized_pretty.m"
    MR_Box mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 641 "sized_pretty.m"
    MR_Word mdb__sized_pretty__conv1_HeadVar__2_46;

#line 641 "sized_pretty.m"
    {
#line 641 "sized_pretty.m"
      mdb__sized_pretty__conv1_HeadVar__2_46 = mdb__sized_pretty__IntroducedFrom__func__to_doc_sized_2__641__1_1_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 641 "sized_pretty.m"
    mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__2_46));
#line 641 "sized_pretty.m"
    return mdb__sized_pretty__wrapper_arg_2;
#line 641 "sized_pretty.m"
  }
#line 641 "sized_pretty.m"
}

#line 634 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0_1(
#line 634 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 634 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 634 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__wrapper_arg_2)
#line 634 "sized_pretty.m"
{
#line 634 "sized_pretty.m"
  {
#line 634 "sized_pretty.m"
    MR_Box mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 634 "sized_pretty.m"
    MR_Word mdb__sized_pretty__conv0_HeadVar__2_2;

#line 634 "sized_pretty.m"
    {
#line 634 "sized_pretty.m"
      mdb__sized_pretty__handle_arg_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__closure, (MR_Integer) 3))), ((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__2_2);
    }
#line 634 "sized_pretty.m"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__2_2));
#line 634 "sized_pretty.m"
  }
#line 634 "sized_pretty.m"
}

#line 629 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_4_p_0(
#line 629 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_34,
#line 629 "sized_pretty.m"
  MR_String mdb__sized_pretty__Functor_1,
#line 629 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__2_2,
#line 629 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 629 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__4_4)
#line 629 "sized_pretty.m"
{
#line 632 "sized_pretty.m"
  {
#line 632 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 632 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 632 "sized_pretty.m"
      {
#line 632 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__4_4 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_1);
      }
#line 632 "sized_pretty.m"
    else
#line 633 "sized_pretty.m"
      {
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeInfo_38_38;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeInfo_40_40;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeInfo_42_42;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeCtorInfo_43_43;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Args_12;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__NewArgs_13;
#line 633 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_14_14;
#line 636 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_16_16;
#line 636 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_17_17;
#line 636 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_48_48;

#line 634 "sized_pretty.m"
        {
#line 634 "sized_pretty.m"
          mdb__sized_pretty__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 634 "sized_pretty.m"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_14_14, 0) = ((MR_Box) (&mdb__sized_pretty_scalar_common_4[1]));
#line 634 "sized_pretty.m"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_14_14, 1) = ((MR_Box) (mdb__sized_pretty__to_doc_sized_2_4_p_0_1));
#line 634 "sized_pretty.m"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 634 "sized_pretty.m"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_14_14, 3) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 634 "sized_pretty.m"
        }
#line 7225 "mdb.sized_pretty.c"
        {
#line 7227 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7229 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7231 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7233 "mdb.sized_pretty.c"
        }
#line 7235 "mdb.sized_pretty.c"
        {
#line 7237 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7239 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7241 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7243 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_38_38));
#line 7245 "mdb.sized_pretty.c"
        }
#line 7247 "mdb.sized_pretty.c"
        {
#line 7249 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7251 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7253 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_40_40));
#line 7255 "mdb.sized_pretty.c"
        }
#line 7257 "mdb.sized_pretty.c"
        mdb__sized_pretty__TypeCtorInfo_43_43 = (MR_Word) &mercury__pprint__pprint__type_ctor_info_doc_0;
#line 634 "sized_pretty.m"
        {
#line 634 "sized_pretty.m"
          mercury__list__map_3_p_1(mdb__sized_pretty__TypeInfo_42_42, mdb__sized_pretty__TypeCtorInfo_43_43, (MR_Word) mdb__sized_pretty__V_14_14, (MR_Word) mdb__sized_pretty__HeadVar__3_3, &mdb__sized_pretty__Args_12);
        }
#line 635 "sized_pretty.m"
        {
#line 635 "sized_pretty.m"
          mercury__list__remove_adjacent_dups_2_p_0(mdb__sized_pretty__TypeCtorInfo_43_43, mdb__sized_pretty__Args_12, &mdb__sized_pretty__NewArgs_13);
        }
#line 636 "sized_pretty.m"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__NewArgs_13)) == (MR_mktag((MR_Integer) 1)));
#line 636 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 636 "sized_pretty.m"
          {
#line 636 "sized_pretty.m"
            mdb__sized_pretty__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__NewArgs_13, (MR_Integer) 0)));
#line 636 "sized_pretty.m"
            mdb__sized_pretty__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__NewArgs_13, (MR_Integer) 1)));
#line 636 "sized_pretty.m"
            {
#line 636 "sized_pretty.m"
              mdb__sized_pretty__V_48_48 = mercury__pprint__nil_0_f_0();
            }
#line 636 "sized_pretty.m"
            {
#line 636 "sized_pretty.m"
              mdb__sized_pretty__succeeded = mercury__pprint____Unify____doc_0_0(mdb__sized_pretty__V_16_16, mdb__sized_pretty__V_48_48);
            }
#line 636 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 636 "sized_pretty.m"
              mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 636 "sized_pretty.m"
          }
#line 638 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 637 "sized_pretty.m"
          {
#line 637 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_18_18;
#line 637 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_19_19;
#line 637 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_20_20;
#line 637 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_22_22;
#line 637 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_23_23;

#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              mdb__sized_pretty__V_19_19 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_1);
            }
#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              mdb__sized_pretty__V_20_20 = mercury__pprint__text_1_f_0((MR_String) "/");
            }
#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              mdb__sized_pretty__V_18_18 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_19_19, mdb__sized_pretty__V_20_20);
            }
#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              mdb__sized_pretty__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_23_23, 0) = ((MR_Box) (mdb__sized_pretty__HeadVar__2_2));
#line 637 "sized_pretty.m"
            }
#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              mdb__sized_pretty__V_22_22 = mercury__pprint__poly_1_f_0(mdb__sized_pretty__V_23_23);
            }
#line 637 "sized_pretty.m"
            {
#line 637 "sized_pretty.m"
              *mdb__sized_pretty__HeadVar__4_4 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_18_18, mdb__sized_pretty__V_22_22);
            }
#line 637 "sized_pretty.m"
          }
#line 638 "sized_pretty.m"
        else
#line 639 "sized_pretty.m"
          {
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__TypeClassInfo_for_doc_44;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_24_24;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_25_25;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_26_26;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_27_27;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_29_29;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_30_30;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_31_31;
#line 639 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_33_33;

#line 639 "sized_pretty.m"
            {
#line 639 "sized_pretty.m"
              mdb__sized_pretty__V_24_24 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_1);
            }
#line 7373 "mdb.sized_pretty.c"
            mdb__sized_pretty__TypeClassInfo_for_doc_44 = (MR_Word) &mdb__sized_pretty_scalar_common_1[1];
#line 641 "sized_pretty.m"
            {
#line 641 "sized_pretty.m"
              mdb__sized_pretty__V_30_30 = mercury__pprint__line_0_f_0();
            }
#line 641 "sized_pretty.m"
            {
#line 641 "sized_pretty.m"
              mdb__sized_pretty__V_33_33 = mercury__pprint__comma_space_line_0_f_0();
            }
#line 641 "sized_pretty.m"
            {
#line 641 "sized_pretty.m"
              mdb__sized_pretty__V_31_31 = mercury__pprint__separated_3_f_0(mdb__sized_pretty__TypeCtorInfo_43_43, mdb__sized_pretty__TypeClassInfo_for_doc_44, (MR_Word) &mdb__sized_pretty_scalar_common_6[0], ((MR_Box) (mdb__sized_pretty__V_33_33)), mdb__sized_pretty__Args_12);
            }
#line 641 "sized_pretty.m"
            {
#line 641 "sized_pretty.m"
              mdb__sized_pretty__V_29_29 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_30_30, mdb__sized_pretty__V_31_31);
            }
#line 640 "sized_pretty.m"
            {
#line 640 "sized_pretty.m"
              mdb__sized_pretty__V_27_27 = mercury__pprint__nest_2_f_0(mdb__sized_pretty__TypeClassInfo_for_doc_44, (MR_Integer) 2, ((MR_Box) (mdb__sized_pretty__V_29_29)));
            }
#line 640 "sized_pretty.m"
            {
#line 640 "sized_pretty.m"
              mdb__sized_pretty__V_26_26 = mercury__pprint__group_1_f_0(mdb__sized_pretty__TypeClassInfo_for_doc_44, ((MR_Box) (mdb__sized_pretty__V_27_27)));
            }
#line 640 "sized_pretty.m"
            {
#line 640 "sized_pretty.m"
              mdb__sized_pretty__V_25_25 = mercury__pprint__parentheses_1_f_0(mdb__sized_pretty__TypeClassInfo_for_doc_44, ((MR_Box) (mdb__sized_pretty__V_26_26)));
            }
#line 639 "sized_pretty.m"
            {
#line 639 "sized_pretty.m"
              *mdb__sized_pretty__HeadVar__4_4 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_24_24, mdb__sized_pretty__V_25_25);
            }
#line 639 "sized_pretty.m"
          }
#line 633 "sized_pretty.m"
      }
#line 632 "sized_pretty.m"
  }
#line 629 "sized_pretty.m"
}

#line 600 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__to_doc_sized_2_p_0(
#line 600 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeInfo_for_T_51,
#line 600 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 600 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__Doc_2)
#line 600 "sized_pretty.m"
{
#line 602 "sized_pretty.m"
  {
#line 602 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 602 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 602 "sized_pretty.m"
      {
#line 602 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 2)));
#line 602 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 602 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_55_55 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1));

#line 602 "sized_pretty.m"
        if ((mdb__sized_pretty__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "sized_pretty.m"
          if (((MR_tag((MR_Word) mdb__sized_pretty__V_56_56)) == (MR_mktag((MR_Integer) 0))))
#line 604 "sized_pretty.m"
            {
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__TypeInfo_52_52;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__Univ_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_56_56, (MR_Integer) 0)));
#line 604 "sized_pretty.m"
              MR_String mdb__sized_pretty__Functor_7;
#line 604 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__Arity_8;
#line 604 "sized_pretty.m"
              MR_Box mdb__sized_pretty__V_28_28;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_30_30;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_31_31;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_32_32;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_34_34;
#line 604 "sized_pretty.m"
              MR_Word mdb__sized_pretty__V_35_35;

#line 605 "sized_pretty.m"
              {
#line 605 "sized_pretty.m"
                mdb__sized_pretty__V_28_28 = mercury__univ__univ_value_1_f_0(&mdb__sized_pretty__TypeInfo_52_52, mdb__sized_pretty__Univ_6);
              }
#line 605 "sized_pretty.m"
              {
#line 605 "sized_pretty.m"
                mercury__deconstruct__functor_4_p_2(mdb__sized_pretty__TypeInfo_52_52, mdb__sized_pretty__V_28_28, (MR_Integer) 2, &mdb__sized_pretty__Functor_7, &mdb__sized_pretty__Arity_8);
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                mdb__sized_pretty__V_31_31 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_7);
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                mdb__sized_pretty__V_32_32 = mercury__pprint__text_1_f_0((MR_String) "/");
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                mdb__sized_pretty__V_30_30 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_31_31, mdb__sized_pretty__V_32_32);
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                mdb__sized_pretty__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "sized_pretty.m"
                MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_35_35, 0) = ((MR_Box) (mdb__sized_pretty__Arity_8));
#line 606 "sized_pretty.m"
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                mdb__sized_pretty__V_34_34 = mercury__pprint__poly_1_f_0(mdb__sized_pretty__V_35_35);
              }
#line 606 "sized_pretty.m"
              {
#line 606 "sized_pretty.m"
                *mdb__sized_pretty__Doc_2 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_30_30, mdb__sized_pretty__V_34_34);
              }
#line 604 "sized_pretty.m"
            }
#line 607 "sized_pretty.m"
          else
#line 608 "sized_pretty.m"
            {
#line 608 "sized_pretty.m"
              MR_Word mdb__sized_pretty__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_56_56, (MR_Integer) 1)));
#line 608 "sized_pretty.m"
              MR_Word mdb__sized_pretty__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_56_56, (MR_Integer) 2)));
#line 608 "sized_pretty.m"
              MR_String mdb__sized_pretty__Functor_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_56_56, (MR_Integer) 0)));
#line 608 "sized_pretty.m"
              MR_Integer mdb__sized_pretty__Arity_37;

#line 609 "sized_pretty.m"
              {
#line 609 "sized_pretty.m"
                mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__sized_pretty__Args_9, &mdb__sized_pretty__Arity_37);
              }
#line 614 "sized_pretty.m"
              if ((mdb__sized_pretty__MaybeReturn_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "sized_pretty.m"
                {
#line 615 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_13_13;
#line 615 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_14_14;
#line 615 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_15_15;
#line 615 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_17_17;
#line 615 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_18_18;

#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    mdb__sized_pretty__V_14_14 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_36);
                  }
#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    mdb__sized_pretty__V_15_15 = mercury__pprint__text_1_f_0((MR_String) "/");
                  }
#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    mdb__sized_pretty__V_13_13 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_14_14, mdb__sized_pretty__V_15_15);
                  }
#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    mdb__sized_pretty__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 616 "sized_pretty.m"
                    MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_18_18, 0) = ((MR_Box) (mdb__sized_pretty__Arity_37));
#line 616 "sized_pretty.m"
                  }
#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    mdb__sized_pretty__V_17_17 = mercury__pprint__poly_1_f_0(mdb__sized_pretty__V_18_18);
                  }
#line 616 "sized_pretty.m"
                  {
#line 616 "sized_pretty.m"
                    *mdb__sized_pretty__Doc_2 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_13_13, mdb__sized_pretty__V_17_17);
                  }
#line 615 "sized_pretty.m"
                }
#line 614 "sized_pretty.m"
              else
#line 611 "sized_pretty.m"
                {
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_19_19;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_20_20;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_21_21;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_22_22;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_24_24;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_25_25;
#line 611 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_26_26;

#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
                    mdb__sized_pretty__V_21_21 = mercury__pprint__text_1_f_0(mdb__sized_pretty__Functor_36);
                  }
#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
                    mdb__sized_pretty__V_22_22 = mercury__pprint__text_1_f_0((MR_String) "/");
                  }
#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
                    mdb__sized_pretty__V_20_20 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_21_21, mdb__sized_pretty__V_22_22);
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    mdb__sized_pretty__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "sized_pretty.m"
                    MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_25_25, 0) = ((MR_Box) (mdb__sized_pretty__Arity_37));
#line 613 "sized_pretty.m"
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    mdb__sized_pretty__V_24_24 = mercury__pprint__poly_1_f_0(mdb__sized_pretty__V_25_25);
                  }
#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
                    mdb__sized_pretty__V_19_19 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_20_20, mdb__sized_pretty__V_24_24);
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    mdb__sized_pretty__V_26_26 = mercury__pprint__text_1_f_0((MR_String) "+1");
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    *mdb__sized_pretty__Doc_2 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_19_19, mdb__sized_pretty__V_26_26);
                  }
#line 611 "sized_pretty.m"
                }
#line 608 "sized_pretty.m"
            }
#line 602 "sized_pretty.m"
        else
#line 619 "sized_pretty.m"
          {
#line 619 "sized_pretty.m"
            MR_String mdb__sized_pretty__Functor_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_54_54, (MR_Integer) 0)));
#line 619 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__Arity_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_54_54, (MR_Integer) 1)));
#line 619 "sized_pretty.m"
            MR_Word mdb__sized_pretty__MaybeArgs_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_54_54, (MR_Integer) 2)));

#line 620 "sized_pretty.m"
            {
#line 620 "sized_pretty.m"
              mdb__sized_pretty__to_doc_sized_2_4_p_0(mdb__sized_pretty__TypeInfo_for_T_51, mdb__sized_pretty__Functor_40, mdb__sized_pretty__Arity_41, mdb__sized_pretty__MaybeArgs_42, mdb__sized_pretty__Doc_2);
#line 620 "sized_pretty.m"
              return;
            }
#line 619 "sized_pretty.m"
          }
#line 602 "sized_pretty.m"
      }
#line 602 "sized_pretty.m"
    else
#line 621 "sized_pretty.m"
      {
#line 621 "sized_pretty.m"
        MR_String mdb__sized_pretty__Functor_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 2)));
#line 621 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 3)));
#line 621 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeArgs_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 4)));
#line 621 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 0)));
#line 621 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_46_46 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__HeadVar__1_1, (MR_Integer) 1));

#line 622 "sized_pretty.m"
        {
#line 622 "sized_pretty.m"
          mdb__sized_pretty__to_doc_sized_2_4_p_0(mdb__sized_pretty__TypeInfo_for_T_51, mdb__sized_pretty__Functor_47, mdb__sized_pretty__Arity_48, mdb__sized_pretty__MaybeArgs_49, mdb__sized_pretty__Doc_2);
#line 622 "sized_pretty.m"
          return;
        }
#line 621 "sized_pretty.m"
      }
#line 602 "sized_pretty.m"
  }
#line 600 "sized_pretty.m"
}

#line 539 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__process_args_7_p_0(
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40,
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_1,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_2,
#line 539 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__3_3,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__ArgLimit_4,
#line 539 "sized_pretty.m"
  MR_Box mdb__sized_pretty__SplitLimit_5,
#line 539 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__6_6,
#line 539 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__7_7)
#line 539 "sized_pretty.m"
{
#line 543 "sized_pretty.m"
  {
#line 543 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 543 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "sized_pretty.m"
      {
#line 543 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_41;
#line 7740 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box);

#line 543 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7745 "mdb.sized_pretty.c"
        {
#line 7747 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_41);
        }
#line 7750 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7752 "mdb.sized_pretty.c"
        {
#line 7754 "mdb.sized_pretty.c"
          *mdb__sized_pretty__HeadVar__7_7 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_41));
        }
#line 543 "sized_pretty.m"
      }
#line 543 "sized_pretty.m"
    else
#line 545 "sized_pretty.m"
      {
#line 545 "sized_pretty.m"
        MR_Word mdb__sized_pretty__HeadArg_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 0)));
#line 545 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Rest_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__3_3, (MR_Integer) 1)));
#line 545 "sized_pretty.m"
        MR_Word mdb__sized_pretty__NewHeadArg_18;
#line 545 "sized_pretty.m"
        MR_Word mdb__sized_pretty__NewRest_19;
#line 545 "sized_pretty.m"
        MR_Box mdb__sized_pretty__RestSize_35;

#line 565 "sized_pretty.m"
        if ((mdb__sized_pretty__HeadArg_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "sized_pretty.m"
          mdb__sized_pretty__NewHeadArg_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "sized_pretty.m"
        else
#line 547 "sized_pretty.m"
          {
#line 547 "sized_pretty.m"
            MR_Word mdb__sized_pretty__X_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadArg_14, (MR_Integer) 0)));
#line 547 "sized_pretty.m"
            MR_Word mdb__sized_pretty__STerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__X_21, (MR_Integer) 1)));
#line 547 "sized_pretty.m"
            MR_Box mdb__sized_pretty__Size_24;
#line 547 "sized_pretty.m"
            MR_Word mdb__sized_pretty__BrowserTerm_25;
#line 548 "sized_pretty.m"
            MR_Box mdb__sized_pretty__V_22_22 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__X_21, (MR_Integer) 0));
#line 7792 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_44_44;
#line 7794 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_45_45;
#line 552 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_26_26;
#line 552 "sized_pretty.m"
            MR_Box mdb__sized_pretty__V_27_27;
#line 552 "sized_pretty.m"
            MR_String mdb__sized_pretty__V_28_28;
#line 552 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__V_29_29;
#line 552 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_30_30;

#line 7807 "mdb.sized_pretty.c"
            {
#line 7809 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_44_44);
            }
#line 7812 "mdb.sized_pretty.c"
            {
#line 7814 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_45_45);
            }
#line 7817 "mdb.sized_pretty.c"
            if (((MR_tag((MR_Word) mdb__sized_pretty__STerm_23)) == (MR_mktag((MR_Integer) 1))))
#line 427 "sized_pretty.m"
              {
#line 427 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_63_63;

#line 427 "sized_pretty.m"
                mdb__sized_pretty__BrowserTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__STerm_23, (MR_Integer) 0)));
#line 427 "sized_pretty.m"
                mdb__sized_pretty__Size_24 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__STerm_23, (MR_Integer) 1));
#line 427 "sized_pretty.m"
                mdb__sized_pretty__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__STerm_23, (MR_Integer) 2)));
#line 427 "sized_pretty.m"
              }
#line 7832 "mdb.sized_pretty.c"
            else
#line 426 "sized_pretty.m"
              {
#line 426 "sized_pretty.m"
                MR_String mdb__sized_pretty__V_58_58;
#line 426 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_59_59;
#line 426 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_60_60;

#line 426 "sized_pretty.m"
                mdb__sized_pretty__BrowserTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 0)));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__Size_24 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 1));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 2)));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 3)));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 4)));
#line 426 "sized_pretty.m"
              }
#line 552 "sized_pretty.m"
            mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__STerm_23)) == (MR_mktag((MR_Integer) 0)));
#line 552 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 552 "sized_pretty.m"
              {
#line 552 "sized_pretty.m"
                mdb__sized_pretty__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 0)));
#line 552 "sized_pretty.m"
                mdb__sized_pretty__V_27_27 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 1));
#line 552 "sized_pretty.m"
                mdb__sized_pretty__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 2)));
#line 552 "sized_pretty.m"
                mdb__sized_pretty__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 3)));
#line 552 "sized_pretty.m"
                mdb__sized_pretty__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_23, (MR_Integer) 4)));
#line 554 "sized_pretty.m"
                {
#line 554 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_46;
#line 554 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__V_37_37;
#line 7877 "mdb.sized_pretty.c"
                  MR_Box MR_CALL (* mdb__sized_pretty__func_1)(MR_Box, MR_Box, MR_Box);
#line 7879 "mdb.sized_pretty.c"
                  MR_Box mdb__sized_pretty__conv2_V_37_37;

#line 7882 "mdb.sized_pretty.c"
                  {
#line 7884 "mdb.sized_pretty.c"
                    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_46);
                  }
#line 7887 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_46, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7889 "mdb.sized_pretty.c"
                  {
#line 7891 "mdb.sized_pretty.c"
                    mdb__sized_pretty__conv2_V_37_37 = mdb__sized_pretty__func_1(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_46), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                  }
#line 7894 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_37_37 = ((MR_Word) mdb__sized_pretty__conv2_V_37_37);
#line 554 "sized_pretty.m"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_37_37 == (MR_Integer) 2);
#line 554 "sized_pretty.m"
                }
#line 555 "sized_pretty.m"
                if (!(mdb__sized_pretty__succeeded))
#line 556 "sized_pretty.m"
                  {
#line 556 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_48;
#line 556 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_36_36;
#line 7908 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);
#line 7910 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv4_V_36_36;

#line 7913 "mdb.sized_pretty.c"
                    {
#line 7915 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_48);
                    }
#line 7918 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7920 "mdb.sized_pretty.c"
                    {
#line 7922 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv4_V_36_36 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_48), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                    }
#line 7925 "mdb.sized_pretty.c"
                    mdb__sized_pretty__V_36_36 = ((MR_Word) mdb__sized_pretty__conv4_V_36_36);
#line 556 "sized_pretty.m"
                    mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_36_36 == (MR_Integer) 0);
#line 556 "sized_pretty.m"
                  }
#line 552 "sized_pretty.m"
              }
#line 560 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 559 "sized_pretty.m"
              mdb__sized_pretty__NewHeadArg_18 = mdb__sized_pretty__HeadArg_14;
#line 560 "sized_pretty.m"
            else
#line 561 "sized_pretty.m"
              {
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__TypeInfo_50_50;
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__TypeInfo_51_51;
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__TypeInfo_53_53;
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__NewSTerm_31;
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_38_38;
#line 561 "sized_pretty.m"
                MR_Word mdb__sized_pretty__conv5_V_38_38;

#line 7954 "mdb.sized_pretty.c"
                {
#line 7956 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_50_50);
                }
#line 7959 "mdb.sized_pretty.c"
                {
#line 7961 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_51_51);
                }
#line 7964 "mdb.sized_pretty.c"
                {
#line 7966 "mdb.sized_pretty.c"
                  mdb__sized_pretty__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7968 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7970 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_51_51));
#line 7972 "mdb.sized_pretty.c"
                }
#line 562 "sized_pretty.m"
                {
#line 562 "sized_pretty.m"
                  mdb__sized_pretty__annotate_with_size_5_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__BrowserTerm_25, mdb__sized_pretty__Params_2, mdb__sized_pretty__SplitLimit_5, &mdb__sized_pretty__NewSTerm_31);
                }
#line 561 "sized_pretty.m"
                {
#line 561 "sized_pretty.m"
                  mdb__sized_pretty__conv5_V_38_38 = mercury__pair__pair_2_f_0(mdb__sized_pretty__TypeInfo_50_50, mdb__sized_pretty__TypeInfo_53_53, mdb__sized_pretty__SplitLimit_5, ((MR_Box) (mdb__sized_pretty__NewSTerm_31)));
                }
#line 561 "sized_pretty.m"
                mdb__sized_pretty__V_38_38 = (MR_Word) mdb__sized_pretty__conv5_V_38_38;
#line 561 "sized_pretty.m"
                {
#line 561 "sized_pretty.m"
                  mdb__sized_pretty__NewHeadArg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 561 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), mdb__sized_pretty__NewHeadArg_18, 0) = ((MR_Box) (mdb__sized_pretty__V_38_38));
#line 561 "sized_pretty.m"
                }
#line 561 "sized_pretty.m"
              }
#line 547 "sized_pretty.m"
          }
#line 577 "sized_pretty.m"
        {
#line 577 "sized_pretty.m"
          mdb__sized_pretty__process_args_7_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__Params_2, mdb__sized_pretty__Rest_15, mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__SplitLimit_5, &mdb__sized_pretty__NewRest_19, &mdb__sized_pretty__RestSize_35);
        }
#line 545 "sized_pretty.m"
        {
#line 545 "sized_pretty.m"
          MR_Word base;
#line 545 "sized_pretty.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__6_6 = base;
#line 545 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__NewHeadArg_18));
#line 545 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__sized_pretty__NewRest_19));
#line 545 "sized_pretty.m"
        }
#line 573 "sized_pretty.m"
        if ((mdb__sized_pretty__NewHeadArg_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 575 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__7_7 = mdb__sized_pretty__RestSize_35;
#line 573 "sized_pretty.m"
        else
#line 570 "sized_pretty.m"
          {
#line 570 "sized_pretty.m"
            MR_Word mdb__sized_pretty__Term_33;
#line 570 "sized_pretty.m"
            MR_Box mdb__sized_pretty__NewSize_34;
#line 570 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__NewHeadArg_18, (MR_Integer) 0)));
#line 570 "sized_pretty.m"
            MR_Box mdb__sized_pretty__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_39_39, (MR_Integer) 0));
#line 8033 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8035 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 570 "sized_pretty.m"
            mdb__sized_pretty__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_39_39, (MR_Integer) 1)));
#line 8040 "mdb.sized_pretty.c"
            {
#line 8042 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_55_55);
            }
#line 426 "sized_pretty.m"
            if (((MR_tag((MR_Word) mdb__sized_pretty__Term_33)) == (MR_mktag((MR_Integer) 1))))
#line 427 "sized_pretty.m"
              {
#line 427 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__Term_33, (MR_Integer) 0)));
#line 427 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_79_79;

#line 427 "sized_pretty.m"
                mdb__sized_pretty__NewSize_34 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__Term_33, (MR_Integer) 1));
#line 427 "sized_pretty.m"
                mdb__sized_pretty__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__Term_33, (MR_Integer) 2)));
#line 427 "sized_pretty.m"
              }
#line 426 "sized_pretty.m"
            else
#line 426 "sized_pretty.m"
              {
#line 426 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__Term_33, (MR_Integer) 0)));
#line 426 "sized_pretty.m"
                MR_String mdb__sized_pretty__V_74_74;
#line 426 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_75_75;
#line 426 "sized_pretty.m"
                MR_Word mdb__sized_pretty__V_76_76;

#line 426 "sized_pretty.m"
                mdb__sized_pretty__NewSize_34 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__Term_33, (MR_Integer) 1));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__Term_33, (MR_Integer) 2)));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__Term_33, (MR_Integer) 3)));
#line 426 "sized_pretty.m"
                mdb__sized_pretty__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__Term_33, (MR_Integer) 4)));
#line 426 "sized_pretty.m"
              }
#line 8083 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8085 "mdb.sized_pretty.c"
            {
#line 8087 "mdb.sized_pretty.c"
              *mdb__sized_pretty__HeadVar__7_7 = mdb__sized_pretty__func_6(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40), mdb__sized_pretty__NewSize_34, mdb__sized_pretty__RestSize_35, mdb__sized_pretty__Params_2);
            }
#line 570 "sized_pretty.m"
          }
#line 545 "sized_pretty.m"
      }
#line 543 "sized_pretty.m"
  }
#line 539 "sized_pretty.m"
}

#line 503 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__check_args_6_p_0(
#line 503 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_1,
#line 503 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__ArgLimit_3,
#line 503 "sized_pretty.m"
  MR_Integer * mdb__sized_pretty__HeadVar__4_4,
#line 503 "sized_pretty.m"
  MR_Box mdb__sized_pretty__STATE_VARIABLE_Used_0_5,
#line 503 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__STATE_VARIABLE_Used_6)
#line 503 "sized_pretty.m"
{
#line 507 "sized_pretty.m"
  while (MR_TRUE)
#line 507 "sized_pretty.m"
    {
#line 507 "sized_pretty.m"
      /* tailcall optimized into a loop */
#line 507 "sized_pretty.m"
      {
#line 507 "sized_pretty.m"
        MR_bool mdb__sized_pretty__succeeded;

#line 507 "sized_pretty.m"
        if ((mdb__sized_pretty__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "sized_pretty.m"
          {
#line 507 "sized_pretty.m"
            *mdb__sized_pretty__HeadVar__4_4 = (MR_Integer) 0;
#line 507 "sized_pretty.m"
            *mdb__sized_pretty__STATE_VARIABLE_Used_6 = mdb__sized_pretty__STATE_VARIABLE_Used_0_5;
#line 507 "sized_pretty.m"
          }
#line 507 "sized_pretty.m"
        else
#line 508 "sized_pretty.m"
          {
#line 508 "sized_pretty.m"
            MR_Word mdb__sized_pretty__HeadArg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 508 "sized_pretty.m"
            MR_Word mdb__sized_pretty__Rest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1)));

#line 526 "sized_pretty.m"
            if ((mdb__sized_pretty__HeadArg_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "sized_pretty.m"
              {
#line 528 "sized_pretty.m"
                /* direct tailcall eliminated */
#line 528 "sized_pretty.m"
                {
#line 528 "sized_pretty.m"
                  MR_Word mdb__sized_pretty__HeadVar__2__tmp_copy_2 = mdb__sized_pretty__Rest_14;

#line 528 "sized_pretty.m"
                  mdb__sized_pretty__HeadVar__2_2 = mdb__sized_pretty__HeadVar__2__tmp_copy_2;
#line 528 "sized_pretty.m"
                }
#line 528 "sized_pretty.m"
                continue;
#line 528 "sized_pretty.m"
              }
#line 526 "sized_pretty.m"
            else
#line 510 "sized_pretty.m"
              {
#line 510 "sized_pretty.m"
                MR_Word mdb__sized_pretty__X_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadArg_13, (MR_Integer) 0)));
#line 510 "sized_pretty.m"
                MR_Word mdb__sized_pretty__STerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__X_18, (MR_Integer) 1)));
#line 511 "sized_pretty.m"
                MR_Box mdb__sized_pretty__V_19_19 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__X_18, (MR_Integer) 0));
#line 8177 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeInfo_42_42;

#line 8180 "mdb.sized_pretty.c"
                {
#line 8182 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_42_42);
                }
#line 8185 "mdb.sized_pretty.c"
                if (((MR_tag((MR_Word) mdb__sized_pretty__STerm_20)) == (MR_mktag((MR_Integer) 1))))
#line 524 "sized_pretty.m"
                  {
#line 524 "sized_pretty.m"
                    /* direct tailcall eliminated */
#line 524 "sized_pretty.m"
                    {
#line 524 "sized_pretty.m"
                      MR_Word mdb__sized_pretty__HeadVar__2__tmp_copy_2 = mdb__sized_pretty__Rest_14;

#line 524 "sized_pretty.m"
                      mdb__sized_pretty__HeadVar__2_2 = mdb__sized_pretty__HeadVar__2__tmp_copy_2;
#line 524 "sized_pretty.m"
                    }
#line 524 "sized_pretty.m"
                    continue;
#line 524 "sized_pretty.m"
                  }
#line 8204 "mdb.sized_pretty.c"
                else
#line 8206 "mdb.sized_pretty.c"
                  {
#line 8208 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__Size_53 = (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_20, (MR_Integer) 1));
#line 426 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_20, (MR_Integer) 0)));
#line 426 "sized_pretty.m"
                    MR_String mdb__sized_pretty__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_20, (MR_Integer) 2)));
#line 426 "sized_pretty.m"
                    MR_Integer mdb__sized_pretty__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_20, (MR_Integer) 3)));
#line 426 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__STerm_20, (MR_Integer) 4)));
#line 515 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_43;
#line 515 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_35_35;
#line 8222 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8224 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv1_V_35_35;

#line 8227 "mdb.sized_pretty.c"
                    {
#line 8229 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_43);
                    }
#line 8232 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_43, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8234 "mdb.sized_pretty.c"
                    {
#line 8236 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv1_V_35_35 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_43), mdb__sized_pretty__ArgLimit_3, mdb__sized_pretty__Size_53);
                    }
#line 8239 "mdb.sized_pretty.c"
                    mdb__sized_pretty__V_35_35 = ((MR_Word) mdb__sized_pretty__conv1_V_35_35);
#line 515 "sized_pretty.m"
                    mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_35_35 == (MR_Integer) 1);
#line 517 "sized_pretty.m"
                    if (mdb__sized_pretty__succeeded)
#line 516 "sized_pretty.m"
                      {
#line 516 "sized_pretty.m"
                        /* direct tailcall eliminated */
#line 516 "sized_pretty.m"
                        {
#line 516 "sized_pretty.m"
                          MR_Word mdb__sized_pretty__HeadVar__2__tmp_copy_2 = mdb__sized_pretty__Rest_14;

#line 516 "sized_pretty.m"
                          mdb__sized_pretty__HeadVar__2_2 = mdb__sized_pretty__HeadVar__2__tmp_copy_2;
#line 516 "sized_pretty.m"
                        }
#line 516 "sized_pretty.m"
                        continue;
#line 516 "sized_pretty.m"
                      }
#line 517 "sized_pretty.m"
                    else
#line 518 "sized_pretty.m"
                      {
#line 518 "sized_pretty.m"
                        MR_Integer mdb__sized_pretty__PassedRest_27;
#line 518 "sized_pretty.m"
                        MR_Box mdb__sized_pretty__STATE_VARIABLE_Used_38_38;
#line 8270 "mdb.sized_pretty.c"
                        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8273 "mdb.sized_pretty.c"
                        {
#line 8275 "mdb.sized_pretty.c"
                          mdb__sized_pretty__STATE_VARIABLE_Used_38_38 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40), mdb__sized_pretty__STATE_VARIABLE_Used_0_5, mdb__sized_pretty__Size_53, mdb__sized_pretty__Params_1);
                        }
#line 520 "sized_pretty.m"
                        {
#line 520 "sized_pretty.m"
                          mdb__sized_pretty__check_args_6_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, mdb__sized_pretty__Params_1, mdb__sized_pretty__Rest_14, mdb__sized_pretty__ArgLimit_3, &mdb__sized_pretty__PassedRest_27, mdb__sized_pretty__STATE_VARIABLE_Used_38_38, mdb__sized_pretty__STATE_VARIABLE_Used_6);
                        }
#line 518 "sized_pretty.m"
                        *mdb__sized_pretty__HeadVar__4_4 = ((MR_Integer) 1 + mdb__sized_pretty__PassedRest_27);
#line 518 "sized_pretty.m"
                      }
#line 8287 "mdb.sized_pretty.c"
                  }
#line 510 "sized_pretty.m"
              }
#line 508 "sized_pretty.m"
          }
#line 507 "sized_pretty.m"
      }
#line 507 "sized_pretty.m"
      break;
#line 507 "sized_pretty.m"
    }
#line 503 "sized_pretty.m"
}

#line 476 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__second_pass_5_p_0_1(
#line 476 "sized_pretty.m"
  MR_Box mdb__sized_pretty__closure_arg,
#line 476 "sized_pretty.m"
  MR_Box mdb__sized_pretty__wrapper_arg_1)
#line 476 "sized_pretty.m"
{
#line 476 "sized_pretty.m"
  {
#line 476 "sized_pretty.m"
    MR_Box mdb__sized_pretty__wrapper_arg_2;
#line 476 "sized_pretty.m"
    MR_Box mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 476 "sized_pretty.m"
    MR_Word mdb__sized_pretty__conv7_HeadVar__3_68;

#line 476 "sized_pretty.m"
    {
#line 476 "sized_pretty.m"
      mdb__sized_pretty__conv7_HeadVar__3_68 = mdb__sized_pretty__IntroducedFrom__func__second_pass__476__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__closure, (MR_Integer) 3))), ((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 476 "sized_pretty.m"
    mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv7_HeadVar__3_68));
#line 476 "sized_pretty.m"
    return mdb__sized_pretty__wrapper_arg_2;
#line 476 "sized_pretty.m"
  }
#line 476 "sized_pretty.m"
}

#line 448 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__second_pass_5_p_0(
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56,
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 448 "sized_pretty.m"
  MR_Word mdb__sized_pretty__OldSizeTerm_7,
#line 448 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_8,
#line 448 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_9,
#line 448 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__NewSizeTerm_10)
#line 448 "sized_pretty.m"
{
#line 454 "sized_pretty.m"
  {
#line 454 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 454 "sized_pretty.m"
    if (((MR_tag((MR_Word) mdb__sized_pretty__OldSizeTerm_7)) == (MR_mktag((MR_Integer) 1))))
#line 454 "sized_pretty.m"
      {
#line 454 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__OldSizeTerm_7, (MR_Integer) 2)));
#line 454 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__OldSizeTerm_7, (MR_Integer) 0)));
#line 457 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_72_72 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__OldSizeTerm_7, (MR_Integer) 1));

#line 454 "sized_pretty.m"
        if ((mdb__sized_pretty__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 458 "sized_pretty.m"
          *mdb__sized_pretty__NewSizeTerm_10 = mdb__sized_pretty__OldSizeTerm_7;
#line 454 "sized_pretty.m"
        else
#line 461 "sized_pretty.m"
          {
#line 461 "sized_pretty.m"
            MR_String mdb__sized_pretty__Functor_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_71_71, (MR_Integer) 0)));
#line 461 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_71_71, (MR_Integer) 1)));
#line 461 "sized_pretty.m"
            MR_Word mdb__sized_pretty__MaybeArgs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_71_71, (MR_Integer) 2)));
#line 461 "sized_pretty.m"
            MR_Box mdb__sized_pretty__FSize_20;
#line 461 "sized_pretty.m"
            MR_Word mdb__sized_pretty__MaybeInitLimit_21;
#line 461 "sized_pretty.m"
            MR_Box mdb__sized_pretty__NewLimit_22;
#line 461 "sized_pretty.m"
            MR_Box mdb__sized_pretty__NewParams_23;
#line 8389 "mdb.sized_pretty.c"
            void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8391 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_MaybeInitLimit_21;

#line 8394 "mdb.sized_pretty.c"
            {
#line 8396 "mdb.sized_pretty.c"
              mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_18)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FSize_20, &mdb__sized_pretty__conv1_MaybeInitLimit_21, &mdb__sized_pretty__NewLimit_22, &mdb__sized_pretty__NewParams_23);
            }
#line 8399 "mdb.sized_pretty.c"
            mdb__sized_pretty__MaybeInitLimit_21 = ((MR_Word) mdb__sized_pretty__conv1_MaybeInitLimit_21);
#line 489 "sized_pretty.m"
            if ((mdb__sized_pretty__MaybeInitLimit_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "sized_pretty.m"
              {
#line 491 "sized_pretty.m"
                {
#line 491 "sized_pretty.m"
                  MR_Word base;
#line 491 "sized_pretty.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 491 "sized_pretty.m"
                  *mdb__sized_pretty__NewSizeTerm_10 = base;
#line 491 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_73_73));
#line 491 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mdb__sized_pretty__FSize_20;
#line 491 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "sized_pretty.m"
                }
#line 490 "sized_pretty.m"
              }
#line 489 "sized_pretty.m"
            else
#line 465 "sized_pretty.m"
              {
#line 465 "sized_pretty.m"
                MR_Box mdb__sized_pretty__InitLimit_24 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeInitLimit_21, (MR_Integer) 0));
#line 465 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__Passed_25;
#line 465 "sized_pretty.m"
                MR_Box mdb__sized_pretty__Used_26;
#line 465 "sized_pretty.m"
                MR_Box mdb__sized_pretty__LeftOver_27;
#line 465 "sized_pretty.m"
                MR_Word mdb__sized_pretty__MaybeSplitLimit_29;
#line 465 "sized_pretty.m"
                MR_Box mdb__sized_pretty__V_41_41;
#line 465 "sized_pretty.m"
                MR_Integer mdb__sized_pretty__V_42_42;
#line 8441 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8443 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8445 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_28_28;
#line 8447 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_30_30;
#line 8449 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_31_31;
#line 8451 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8453 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv5_MaybeSplitLimit_29;

#line 466 "sized_pretty.m"
                {
#line 466 "sized_pretty.m"
                  mdb__sized_pretty__check_args_6_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, mdb__sized_pretty__NewParams_23, mdb__sized_pretty__MaybeArgs_19, mdb__sized_pretty__InitLimit_24, &mdb__sized_pretty__Passed_25, mdb__sized_pretty__FSize_20, &mdb__sized_pretty__Used_26);
                }
#line 8461 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8463 "mdb.sized_pretty.c"
                {
#line 8465 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_41_41 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__NewLimit_22, mdb__sized_pretty__Used_26, mdb__sized_pretty__Params_8);
                }
#line 8468 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8470 "mdb.sized_pretty.c"
                {
#line 8472 "mdb.sized_pretty.c"
                  mdb__sized_pretty__LeftOver_27 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__V_41_41, mdb__sized_pretty__FSize_20, mdb__sized_pretty__Params_8);
                }
#line 470 "sized_pretty.m"
                mdb__sized_pretty__V_42_42 = (mdb__sized_pretty__Arity_18 - mdb__sized_pretty__Passed_25);
#line 8477 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8479 "mdb.sized_pretty.c"
                {
#line 8481 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__LeftOver_27, ((MR_Box) (mdb__sized_pretty__V_42_42)), ((MR_Box) ((MR_Integer) 0)), &mdb__sized_pretty__V_28_28, &mdb__sized_pretty__conv5_MaybeSplitLimit_29, &mdb__sized_pretty__V_30_30, &mdb__sized_pretty__V_31_31);
                }
#line 8484 "mdb.sized_pretty.c"
                mdb__sized_pretty__MaybeSplitLimit_29 = ((MR_Word) mdb__sized_pretty__conv5_MaybeSplitLimit_29);
#line 485 "sized_pretty.m"
                if ((mdb__sized_pretty__MaybeSplitLimit_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "sized_pretty.m"
                  {
#line 487 "sized_pretty.m"
                    {
#line 487 "sized_pretty.m"
                      MR_Word base;
#line 487 "sized_pretty.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 487 "sized_pretty.m"
                      *mdb__sized_pretty__NewSizeTerm_10 = base;
#line 487 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_73_73));
#line 487 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 1) = mdb__sized_pretty__FSize_20;
#line 487 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 487 "sized_pretty.m"
                    }
#line 486 "sized_pretty.m"
                  }
#line 485 "sized_pretty.m"
                else
#line 472 "sized_pretty.m"
                  {
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeInfo_58_58;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeInfo_59_59;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeInfo_61_61;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeInfo_63_63;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeInfo_65_65;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__TypeCtorInfo_66_66;
#line 472 "sized_pretty.m"
                    MR_Box mdb__sized_pretty__SplitLimit_32 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeSplitLimit_29, (MR_Integer) 0));
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__NewArgs_33;
#line 472 "sized_pretty.m"
                    MR_Box mdb__sized_pretty__NewSize0_34;
#line 472 "sized_pretty.m"
                    MR_Box mdb__sized_pretty__NewSize_35;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__Result0_36;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__Result_37;
#line 472 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_45_45;
#line 8538 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 478 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_46_46;
#line 478 "sized_pretty.m"
                    MR_Word mdb__sized_pretty__V_47_47;

#line 473 "sized_pretty.m"
                    {
#line 473 "sized_pretty.m"
                      mdb__sized_pretty__process_args_7_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__NewParams_23, mdb__sized_pretty__MaybeArgs_19, mdb__sized_pretty__InitLimit_24, mdb__sized_pretty__SplitLimit_32, &mdb__sized_pretty__NewArgs_33, &mdb__sized_pretty__NewSize0_34);
                    }
#line 8550 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8552 "mdb.sized_pretty.c"
                    {
#line 8554 "mdb.sized_pretty.c"
                      mdb__sized_pretty__NewSize_35 = mdb__sized_pretty__func_6(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__FSize_20, mdb__sized_pretty__NewSize0_34, mdb__sized_pretty__NewParams_23);
                    }
#line 8557 "mdb.sized_pretty.c"
                    {
#line 8559 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_58_58);
                    }
#line 8562 "mdb.sized_pretty.c"
                    {
#line 8564 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_59_59);
                    }
#line 8567 "mdb.sized_pretty.c"
                    {
#line 8569 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8571 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 8573 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_59_59));
#line 8575 "mdb.sized_pretty.c"
                    }
#line 8577 "mdb.sized_pretty.c"
                    {
#line 8579 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8581 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8583 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_58_58));
#line 8585 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_61_61));
#line 8587 "mdb.sized_pretty.c"
                    }
#line 8589 "mdb.sized_pretty.c"
                    {
#line 8591 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8593 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 8595 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_63_63));
#line 8597 "mdb.sized_pretty.c"
                    }
#line 8599 "mdb.sized_pretty.c"
                    mdb__sized_pretty__TypeCtorInfo_66_66 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
#line 476 "sized_pretty.m"
                    {
#line 476 "sized_pretty.m"
                      mdb__sized_pretty__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_45_45, 0) = ((MR_Box) (&mdb__sized_pretty_scalar_common_4[0]));
#line 476 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_45_45, 1) = ((MR_Box) (mdb__sized_pretty__second_pass_5_p_0_1));
#line 476 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_45_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 476 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_45_45, 3) = ((MR_Box) (mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56));
#line 476 "sized_pretty.m"
                    }
#line 476 "sized_pretty.m"
                    {
#line 476 "sized_pretty.m"
                      mdb__sized_pretty__Result0_36 = mercury__list__map_2_f_0(mdb__sized_pretty__TypeInfo_65_65, mdb__sized_pretty__TypeCtorInfo_66_66, (MR_Word) mdb__sized_pretty__V_45_45, (MR_Word) mdb__sized_pretty__NewArgs_33);
                    }
#line 477 "sized_pretty.m"
                    {
#line 477 "sized_pretty.m"
                      mercury__list__remove_adjacent_dups_2_p_0(mdb__sized_pretty__TypeCtorInfo_66_66, mdb__sized_pretty__Result0_36, &mdb__sized_pretty__Result_37);
                    }
#line 478 "sized_pretty.m"
                    mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__Result_37)) == (MR_mktag((MR_Integer) 1)));
#line 478 "sized_pretty.m"
                    if (mdb__sized_pretty__succeeded)
#line 478 "sized_pretty.m"
                      {
#line 478 "sized_pretty.m"
                        mdb__sized_pretty__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__Result_37, (MR_Integer) 0)));
#line 478 "sized_pretty.m"
                        mdb__sized_pretty__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__Result_37, (MR_Integer) 1)));
#line 478 "sized_pretty.m"
                        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_46_46 == (MR_Integer) 1);
#line 478 "sized_pretty.m"
                        if (mdb__sized_pretty__succeeded)
#line 478 "sized_pretty.m"
                          mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "sized_pretty.m"
                      }
#line 481 "sized_pretty.m"
                    if (mdb__sized_pretty__succeeded)
#line 479 "sized_pretty.m"
                      {
#line 479 "sized_pretty.m"
                        MR_Word base;
#line 479 "sized_pretty.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 479 "sized_pretty.m"
                        *mdb__sized_pretty__NewSizeTerm_10 = base;
#line 479 "sized_pretty.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__sized_pretty__V_73_73));
#line 479 "sized_pretty.m"
                        MR_hl_field(MR_mktag(0), base, 1) = mdb__sized_pretty__NewSize_35;
#line 479 "sized_pretty.m"
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__sized_pretty__Functor_17));
#line 479 "sized_pretty.m"
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__sized_pretty__Arity_18));
#line 479 "sized_pretty.m"
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__sized_pretty__NewArgs_33));
#line 479 "sized_pretty.m"
                      }
#line 481 "sized_pretty.m"
                    else
#line 482 "sized_pretty.m"
                      {
#line 482 "sized_pretty.m"
                        MR_Word mdb__sized_pretty__V_48_48;

#line 483 "sized_pretty.m"
                        {
#line 483 "sized_pretty.m"
                          mdb__sized_pretty__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 483 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 0) = ((MR_Box) (mdb__sized_pretty__Functor_17));
#line 483 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 1) = ((MR_Box) (mdb__sized_pretty__Arity_18));
#line 483 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 2) = ((MR_Box) (mdb__sized_pretty__NewArgs_33));
#line 483 "sized_pretty.m"
                        }
#line 482 "sized_pretty.m"
                        {
#line 482 "sized_pretty.m"
                          MR_Word base;
#line 482 "sized_pretty.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "sized_pretty.m"
                          *mdb__sized_pretty__NewSizeTerm_10 = base;
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__V_73_73));
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), base, 1) = mdb__sized_pretty__NewSize_35;
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__sized_pretty__V_48_48));
#line 482 "sized_pretty.m"
                        }
#line 482 "sized_pretty.m"
                      }
#line 472 "sized_pretty.m"
                  }
#line 465 "sized_pretty.m"
              }
#line 461 "sized_pretty.m"
          }
#line 454 "sized_pretty.m"
      }
#line 454 "sized_pretty.m"
    else
#line 455 "sized_pretty.m"
      *mdb__sized_pretty__NewSizeTerm_10 = mdb__sized_pretty__OldSizeTerm_7;
#line 454 "sized_pretty.m"
  }
#line 448 "sized_pretty.m"
}

#line 380 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__annotate_args_with_size_10_p_0(
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_1,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__MaybeInitArgLimit_3,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_4,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_5,
#line 380 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__6_6,
#line 380 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__SoFar_7,
#line 380 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__8_8,
#line 380 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__Exact_9,
#line 380 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__10_10)
#line 380 "sized_pretty.m"
{
#line 385 "sized_pretty.m"
  {
#line 385 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;

#line 385 "sized_pretty.m"
    if ((mdb__sized_pretty__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "sized_pretty.m"
      {
#line 385 "sized_pretty.m"
        *mdb__sized_pretty__SoFar_7 = mdb__sized_pretty__HeadVar__6_6;
#line 385 "sized_pretty.m"
        *mdb__sized_pretty__Exact_9 = mdb__sized_pretty__HeadVar__8_8;
#line 385 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 385 "sized_pretty.m"
      }
#line 385 "sized_pretty.m"
    else
#line 388 "sized_pretty.m"
      {
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Arg_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Args_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeArgSize_27;
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeArgSizes_28;
#line 388 "sized_pretty.m"
        MR_Box mdb__sized_pretty__SoFar1_33;
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact1_39;
#line 388 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact2_43;
#line 414 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_56;
#line 414 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_48_48;
#line 8785 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_10)(MR_Box, MR_Box, MR_Box);
#line 8787 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv11_V_48_48;

#line 408 "sized_pretty.m"
        if ((mdb__sized_pretty__MaybeInitArgLimit_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "sized_pretty.m"
          {
#line 410 "sized_pretty.m"
            mdb__sized_pretty__MaybeArgSize_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "sized_pretty.m"
            mdb__sized_pretty__SoFar1_33 = mdb__sized_pretty__HeadVar__6_6;
#line 412 "sized_pretty.m"
            mdb__sized_pretty__Exact1_39 = mdb__sized_pretty__HeadVar__8_8;
#line 409 "sized_pretty.m"
          }
#line 408 "sized_pretty.m"
        else
#line 390 "sized_pretty.m"
          {
#line 390 "sized_pretty.m"
            MR_Box mdb__sized_pretty__InitArgLimit_29 = (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeInitArgLimit_3, (MR_Integer) 0));
#line 390 "sized_pretty.m"
            MR_Box mdb__sized_pretty__AppliedArgLimit_30;
#line 390 "sized_pretty.m"
            MR_Box mdb__sized_pretty__ArgSize_32;
#line 390 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_46_46;
#line 390 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_47_47;
#line 390 "sized_pretty.m"
            MR_Integer mdb__sized_pretty__MaxFunctors_63;
#line 390 "sized_pretty.m"
            MR_Word mdb__sized_pretty__MaybeFunctorArityArgs_64;
#line 391 "sized_pretty.m"
            MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_50;
#line 391 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_44_44;
#line 8824 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8826 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_V_44_44;
#line 8828 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box);
#line 8830 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv5_MaxFunctors_63;
#line 347 "sized_pretty.m"
            MR_Word mdb__sized_pretty___MaybeReturn_65;
#line 8834 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8836 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_9)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 8839 "mdb.sized_pretty.c"
            {
#line 8841 "mdb.sized_pretty.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_50);
            }
#line 8844 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8846 "mdb.sized_pretty.c"
            {
#line 8848 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv1_V_44_44 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_50), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Limit_5);
            }
#line 8851 "mdb.sized_pretty.c"
            mdb__sized_pretty__V_44_44 = ((MR_Word) mdb__sized_pretty__conv1_V_44_44);
#line 391 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_44_44 == (MR_Integer) 2);
#line 393 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 392 "sized_pretty.m"
              mdb__sized_pretty__AppliedArgLimit_30 = mdb__sized_pretty__InitArgLimit_29;
#line 393 "sized_pretty.m"
            else
#line 394 "sized_pretty.m"
              {
#line 394 "sized_pretty.m"
                MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_52;
#line 394 "sized_pretty.m"
                MR_Box mdb__sized_pretty__V_45_45;
#line 8867 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8869 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);

#line 8872 "mdb.sized_pretty.c"
                {
#line 8874 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_52);
                }
#line 8877 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8879 "mdb.sized_pretty.c"
                {
#line 8881 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_45_45 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__Limit_5, mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Params_4);
                }
#line 8884 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8886 "mdb.sized_pretty.c"
                {
#line 8888 "mdb.sized_pretty.c"
                  mdb__sized_pretty__AppliedArgLimit_30 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_52), mdb__sized_pretty__InitArgLimit_29, mdb__sized_pretty__V_45_45);
                }
#line 394 "sized_pretty.m"
              }
#line 397 "sized_pretty.m"
            {
#line 397 "sized_pretty.m"
              mdb__sized_pretty__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "sized_pretty.m"
              MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_46_46, 0) = ((MR_Box) (mdb__sized_pretty__Arg_18));
#line 397 "sized_pretty.m"
            }
#line 8901 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8903 "mdb.sized_pretty.c"
            {
#line 8905 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv5_MaxFunctors_63 = mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__AppliedArgLimit_30, mdb__sized_pretty__Params_4);
            }
#line 8908 "mdb.sized_pretty.c"
            mdb__sized_pretty__MaxFunctors_63 = ((MR_Integer) mdb__sized_pretty__conv5_MaxFunctors_63);
#line 347 "sized_pretty.m"
            {
#line 347 "sized_pretty.m"
              mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__V_46_46, mdb__sized_pretty__MaxFunctors_63, &mdb__sized_pretty__MaybeFunctorArityArgs_64, &mdb__sized_pretty___MaybeReturn_65);
            }
#line 8915 "mdb.sized_pretty.c"
            {
#line 8917 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_55_55);
            }
#line 8920 "mdb.sized_pretty.c"
            if ((mdb__sized_pretty__MaybeFunctorArityArgs_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8922 "mdb.sized_pretty.c"
              {
#line 8924 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_82;
#line 8926 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Size_31;
#line 8928 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box);

#line 8931 "mdb.sized_pretty.c"
                {
#line 8933 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_82);
                }
#line 8936 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_82, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8938 "mdb.sized_pretty.c"
                {
#line 8940 "mdb.sized_pretty.c"
                  mdb__sized_pretty__ArgSize_32 = mdb__sized_pretty__func_6(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_82));
                }
#line 373 "sized_pretty.m"
                {
#line 373 "sized_pretty.m"
                  mdb__sized_pretty__Size_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_31, 0) = ((MR_Box) (mdb__sized_pretty__V_46_46));
#line 373 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_31, 1) = mdb__sized_pretty__ArgSize_32;
#line 373 "sized_pretty.m"
                  MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "sized_pretty.m"
                }
#line 398 "sized_pretty.m"
                {
#line 398 "sized_pretty.m"
                  mdb__sized_pretty__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "sized_pretty.m"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 0) = mdb__sized_pretty__InitArgLimit_29;
#line 398 "sized_pretty.m"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 1) = ((MR_Box) (mdb__sized_pretty__Size_31));
#line 398 "sized_pretty.m"
                }
#line 406 "sized_pretty.m"
                mdb__sized_pretty__Exact1_39 = (MR_Integer) 0;
#line 8967 "mdb.sized_pretty.c"
              }
#line 8969 "mdb.sized_pretty.c"
            else
#line 8971 "mdb.sized_pretty.c"
              {
#line 8973 "mdb.sized_pretty.c"
                MR_String mdb__sized_pretty__Functor_66;
#line 8975 "mdb.sized_pretty.c"
                MR_Integer mdb__sized_pretty__Arity_67;
#line 8977 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Args_68;
#line 8979 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__FunctorSize_69;
#line 8981 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeInitArgLimit_70;
#line 8983 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewLimit_71;
#line 8985 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewParams_72;
#line 8987 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact0_73;
#line 8989 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__SoFar_74;
#line 8991 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact_75;
#line 8993 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeArgSizes_76;
#line 8995 "mdb.sized_pretty.c"
                MR_Tuple mdb__sized_pretty__V_79_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeFunctorArityArgs_64, (MR_Integer) 0)));
#line 8997 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8999 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv8_MaybeInitArgLimit_70;

#line 350 "sized_pretty.m"
                mdb__sized_pretty__Functor_66 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 2)));
#line 9008 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9010 "mdb.sized_pretty.c"
                {
#line 9012 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_7(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), ((MR_Box) (mdb__sized_pretty__BrowserDb_1)), ((MR_Box) (mdb__sized_pretty__V_46_46)), mdb__sized_pretty__Params_4, mdb__sized_pretty__AppliedArgLimit_30, ((MR_Box) (mdb__sized_pretty__Arity_67)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_69, &mdb__sized_pretty__conv8_MaybeInitArgLimit_70, &mdb__sized_pretty__NewLimit_71, &mdb__sized_pretty__NewParams_72);
                }
#line 9015 "mdb.sized_pretty.c"
                mdb__sized_pretty__MaybeInitArgLimit_70 = ((MR_Word) mdb__sized_pretty__conv8_MaybeInitArgLimit_70);
#line 354 "sized_pretty.m"
                mdb__sized_pretty__succeeded = (mdb__sized_pretty__Arity_67 == (MR_Integer) 0);
#line 354 "sized_pretty.m"
                mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 354 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 355 "sized_pretty.m"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__MaybeInitArgLimit_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 357 "sized_pretty.m"
                  mdb__sized_pretty__Exact0_73 = (MR_Integer) 0;
#line 358 "sized_pretty.m"
                else
#line 359 "sized_pretty.m"
                  mdb__sized_pretty__Exact0_73 = (MR_Integer) 1;
#line 361 "sized_pretty.m"
                {
#line 361 "sized_pretty.m"
                  mdb__sized_pretty__annotate_args_with_size_10_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__Args_68, mdb__sized_pretty__MaybeInitArgLimit_70, mdb__sized_pretty__NewParams_72, mdb__sized_pretty__NewLimit_71, mdb__sized_pretty__FunctorSize_69, &mdb__sized_pretty__SoFar_74, mdb__sized_pretty__Exact0_73, &mdb__sized_pretty__Exact_75, &mdb__sized_pretty__MaybeArgSizes_76);
                }
#line 9038 "mdb.sized_pretty.c"
                if ((mdb__sized_pretty__Exact_75 == (MR_Integer) 0))
#line 9040 "mdb.sized_pretty.c"
                  {
#line 9042 "mdb.sized_pretty.c"
                    MR_Word mdb__sized_pretty__V_81_81;
#line 9044 "mdb.sized_pretty.c"
                    MR_Word mdb__sized_pretty__Size_98;

#line 366 "sized_pretty.m"
                    {
#line 366 "sized_pretty.m"
                      mdb__sized_pretty__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 0) = ((MR_Box) (mdb__sized_pretty__Functor_66));
#line 366 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 1) = ((MR_Box) (mdb__sized_pretty__Arity_67));
#line 366 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_76));
#line 366 "sized_pretty.m"
                    }
#line 365 "sized_pretty.m"
                    {
#line 365 "sized_pretty.m"
                      mdb__sized_pretty__Size_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_98, 0) = ((MR_Box) (mdb__sized_pretty__V_46_46));
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_98, 1) = mdb__sized_pretty__SoFar_74;
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__Size_98, 2) = ((MR_Box) (mdb__sized_pretty__V_81_81));
#line 365 "sized_pretty.m"
                    }
#line 398 "sized_pretty.m"
                    {
#line 398 "sized_pretty.m"
                      mdb__sized_pretty__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 0) = mdb__sized_pretty__InitArgLimit_29;
#line 398 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 1) = ((MR_Box) (mdb__sized_pretty__Size_98));
#line 398 "sized_pretty.m"
                    }
#line 427 "sized_pretty.m"
                    mdb__sized_pretty__ArgSize_32 = mdb__sized_pretty__SoFar_74;
#line 406 "sized_pretty.m"
                    mdb__sized_pretty__Exact1_39 = (MR_Integer) 0;
#line 9085 "mdb.sized_pretty.c"
                  }
#line 9087 "mdb.sized_pretty.c"
                else
#line 9089 "mdb.sized_pretty.c"
                  {
#line 9091 "mdb.sized_pretty.c"
                    MR_Word mdb__sized_pretty__Size_99;

#line 369 "sized_pretty.m"
                    {
#line 369 "sized_pretty.m"
                      mdb__sized_pretty__Size_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 369 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__Size_99, 0) = ((MR_Box) (mdb__sized_pretty__V_46_46));
#line 369 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__Size_99, 1) = mdb__sized_pretty__SoFar_74;
#line 369 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__Size_99, 2) = ((MR_Box) (mdb__sized_pretty__Functor_66));
#line 369 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__Size_99, 3) = ((MR_Box) (mdb__sized_pretty__Arity_67));
#line 369 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__Size_99, 4) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_76));
#line 369 "sized_pretty.m"
                    }
#line 398 "sized_pretty.m"
                    {
#line 398 "sized_pretty.m"
                      mdb__sized_pretty__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 0) = mdb__sized_pretty__InitArgLimit_29;
#line 398 "sized_pretty.m"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_47_47, 1) = ((MR_Box) (mdb__sized_pretty__Size_99));
#line 398 "sized_pretty.m"
                    }
#line 426 "sized_pretty.m"
                    mdb__sized_pretty__ArgSize_32 = mdb__sized_pretty__SoFar_74;
#line 403 "sized_pretty.m"
                    mdb__sized_pretty__Exact1_39 = mdb__sized_pretty__HeadVar__8_8;
#line 9124 "mdb.sized_pretty.c"
                  }
#line 9126 "mdb.sized_pretty.c"
              }
#line 398 "sized_pretty.m"
            {
#line 398 "sized_pretty.m"
              mdb__sized_pretty__MaybeArgSize_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeArgSize_27, 0) = ((MR_Box) (mdb__sized_pretty__V_47_47));
#line 398 "sized_pretty.m"
            }
#line 9136 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9138 "mdb.sized_pretty.c"
            {
#line 9140 "mdb.sized_pretty.c"
              mdb__sized_pretty__SoFar1_33 = mdb__sized_pretty__func_9(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__ArgSize_32, mdb__sized_pretty__Params_4);
            }
#line 390 "sized_pretty.m"
          }
#line 9145 "mdb.sized_pretty.c"
        {
#line 9147 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_56);
        }
#line 9150 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_56, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9152 "mdb.sized_pretty.c"
        {
#line 9154 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv11_V_48_48 = mdb__sized_pretty__func_10(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_56), mdb__sized_pretty__SoFar1_33, mdb__sized_pretty__Limit_5);
        }
#line 9157 "mdb.sized_pretty.c"
        mdb__sized_pretty__V_48_48 = ((MR_Word) mdb__sized_pretty__conv11_V_48_48);
#line 414 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_48_48 == (MR_Integer) 2);
#line 416 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 415 "sized_pretty.m"
          mdb__sized_pretty__Exact2_43 = (MR_Integer) 0;
#line 416 "sized_pretty.m"
        else
#line 417 "sized_pretty.m"
          mdb__sized_pretty__Exact2_43 = mdb__sized_pretty__Exact1_39;
#line 419 "sized_pretty.m"
        {
#line 419 "sized_pretty.m"
          mdb__sized_pretty__annotate_args_with_size_10_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__Args_19, mdb__sized_pretty__MaybeInitArgLimit_3, mdb__sized_pretty__Params_4, mdb__sized_pretty__Limit_5, mdb__sized_pretty__SoFar1_33, mdb__sized_pretty__SoFar_7, mdb__sized_pretty__Exact2_43, mdb__sized_pretty__Exact_9, &mdb__sized_pretty__MaybeArgSizes_28);
        }
#line 388 "sized_pretty.m"
        {
#line 388 "sized_pretty.m"
          MR_Word base;
#line 388 "sized_pretty.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "sized_pretty.m"
          *mdb__sized_pretty__HeadVar__10_10 = base;
#line 388 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__sized_pretty__MaybeArgSize_27));
#line 388 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_28));
#line 388 "sized_pretty.m"
        }
#line 388 "sized_pretty.m"
      }
#line 385 "sized_pretty.m"
  }
#line 380 "sized_pretty.m"
}

#line 331 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__annotate_with_size_5_p_0(
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12,
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 331 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserTerm_7,
#line 331 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Params_8,
#line 331 "sized_pretty.m"
  MR_Box mdb__sized_pretty__Limit_9,
#line 331 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__SizedTerm2_10)
#line 331 "sized_pretty.m"
{
#line 335 "sized_pretty.m"
  {
#line 335 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 335 "sized_pretty.m"
    MR_Word mdb__sized_pretty__SizedTerm1_11;
#line 335 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__MaxFunctors_18;
#line 335 "sized_pretty.m"
    MR_Word mdb__sized_pretty__MaybeFunctorArityArgs_19;
#line 9222 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9224 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_MaxFunctors_18;
#line 347 "sized_pretty.m"
    MR_Word mdb__sized_pretty___MaybeReturn_20;

#line 9229 "mdb.sized_pretty.c"
    {
#line 9231 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_18 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), mdb__sized_pretty__Limit_9, mdb__sized_pretty__Params_8);
    }
#line 9234 "mdb.sized_pretty.c"
    mdb__sized_pretty__MaxFunctors_18 = ((MR_Integer) mdb__sized_pretty__conv1_MaxFunctors_18);
#line 347 "sized_pretty.m"
    {
#line 347 "sized_pretty.m"
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__BrowserTerm_7, mdb__sized_pretty__MaxFunctors_18, &mdb__sized_pretty__MaybeFunctorArityArgs_19, &mdb__sized_pretty___MaybeReturn_20);
    }
#line 371 "sized_pretty.m"
    if ((mdb__sized_pretty__MaybeFunctorArityArgs_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "sized_pretty.m"
      {
#line 372 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_37;
#line 372 "sized_pretty.m"
        MR_Box mdb__sized_pretty__V_32_32;
#line 9249 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);

#line 9252 "mdb.sized_pretty.c"
        {
#line 9254 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_37);
        }
#line 9257 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_37, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9259 "mdb.sized_pretty.c"
        {
#line 9261 "mdb.sized_pretty.c"
          mdb__sized_pretty__V_32_32 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_37));
        }
#line 373 "sized_pretty.m"
        {
#line 373 "sized_pretty.m"
          mdb__sized_pretty__SizedTerm1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 1) = mdb__sized_pretty__V_32_32;
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "sized_pretty.m"
        }
#line 372 "sized_pretty.m"
      }
#line 371 "sized_pretty.m"
    else
#line 350 "sized_pretty.m"
      {
#line 350 "sized_pretty.m"
        MR_String mdb__sized_pretty__Functor_21;
#line 350 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Arity_22;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Args_23;
#line 350 "sized_pretty.m"
        MR_Box mdb__sized_pretty__FunctorSize_24;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeInitArgLimit_25;
#line 350 "sized_pretty.m"
        MR_Box mdb__sized_pretty__NewLimit_26;
#line 350 "sized_pretty.m"
        MR_Box mdb__sized_pretty__NewParams_27;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact0_28;
#line 350 "sized_pretty.m"
        MR_Box mdb__sized_pretty__SoFar_29;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact_30;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeArgSizes_31;
#line 350 "sized_pretty.m"
        MR_Tuple mdb__sized_pretty__V_34_34 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeFunctorArityArgs_19, (MR_Integer) 0)));
#line 9306 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9308 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv4_MaybeInitArgLimit_25;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 2)));
#line 9317 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9319 "mdb.sized_pretty.c"
        {
#line 9321 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_22)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_24, &mdb__sized_pretty__conv4_MaybeInitArgLimit_25, &mdb__sized_pretty__NewLimit_26, &mdb__sized_pretty__NewParams_27);
        }
#line 9324 "mdb.sized_pretty.c"
        mdb__sized_pretty__MaybeInitArgLimit_25 = ((MR_Word) mdb__sized_pretty__conv4_MaybeInitArgLimit_25);
#line 354 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Arity_22 == (MR_Integer) 0);
#line 354 "sized_pretty.m"
        mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 354 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 355 "sized_pretty.m"
          mdb__sized_pretty__succeeded = (mdb__sized_pretty__MaybeInitArgLimit_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 357 "sized_pretty.m"
          mdb__sized_pretty__Exact0_28 = (MR_Integer) 0;
#line 358 "sized_pretty.m"
        else
#line 359 "sized_pretty.m"
          mdb__sized_pretty__Exact0_28 = (MR_Integer) 1;
#line 361 "sized_pretty.m"
        {
#line 361 "sized_pretty.m"
          mdb__sized_pretty__annotate_args_with_size_10_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__Args_23, mdb__sized_pretty__MaybeInitArgLimit_25, mdb__sized_pretty__NewParams_27, mdb__sized_pretty__NewLimit_26, mdb__sized_pretty__FunctorSize_24, &mdb__sized_pretty__SoFar_29, mdb__sized_pretty__Exact0_28, &mdb__sized_pretty__Exact_30, &mdb__sized_pretty__MaybeArgSizes_31);
        }
#line 367 "sized_pretty.m"
        if ((mdb__sized_pretty__Exact_30 == (MR_Integer) 0))
#line 364 "sized_pretty.m"
          {
#line 364 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_36_36;

#line 366 "sized_pretty.m"
            {
#line 366 "sized_pretty.m"
              mdb__sized_pretty__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 0) = ((MR_Box) (mdb__sized_pretty__Functor_21));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 1) = ((MR_Box) (mdb__sized_pretty__Arity_22));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_31));
#line 366 "sized_pretty.m"
            }
#line 365 "sized_pretty.m"
            {
#line 365 "sized_pretty.m"
              mdb__sized_pretty__SizedTerm1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 1) = mdb__sized_pretty__SoFar_29;
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_11, 2) = ((MR_Box) (mdb__sized_pretty__V_36_36));
#line 365 "sized_pretty.m"
            }
#line 364 "sized_pretty.m"
          }
#line 367 "sized_pretty.m"
        else
#line 369 "sized_pretty.m"
          {
#line 369 "sized_pretty.m"
            mdb__sized_pretty__SizedTerm1_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_11, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_11, 1) = mdb__sized_pretty__SoFar_29;
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_11, 2) = ((MR_Box) (mdb__sized_pretty__Functor_21));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_11, 3) = ((MR_Box) (mdb__sized_pretty__Arity_22));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_11, 4) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_31));
#line 369 "sized_pretty.m"
          }
#line 350 "sized_pretty.m"
      }
#line 337 "sized_pretty.m"
    {
#line 337 "sized_pretty.m"
      mdb__sized_pretty__second_pass_5_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__SizedTerm1_11, mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, mdb__sized_pretty__SizedTerm2_10);
#line 337 "sized_pretty.m"
      return;
    }
#line 335 "sized_pretty.m"
  }
#line 331 "sized_pretty.m"
}

#line 268 "sized_pretty.m"
static void MR_CALL 
mdb__sized_pretty__measured_split_10_p_0(
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__1_1,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__2_2,
#line 268 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3,
#line 268 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__4_4,
#line 268 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__HeadVar__5_5,
#line 268 "sized_pretty.m"
  MR_Word mdb__sized_pretty__HeadVar__6_6,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__7_7,
#line 268 "sized_pretty.m"
  MR_Word * mdb__sized_pretty__HeadVar__8_8,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__9_9,
#line 268 "sized_pretty.m"
  MR_Box * mdb__sized_pretty__HeadVar__10_10)
#line 268 "sized_pretty.m"
{
#line 9439 "mdb.sized_pretty.c"
  {
#line 9441 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9443 "mdb.sized_pretty.c"
    void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9445 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__8_8;

#line 9448 "mdb.sized_pretty.c"
    {
#line 9450 "mdb.sized_pretty.c"
      mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11), ((MR_Box) (mdb__sized_pretty__HeadVar__1_1)), ((MR_Box) (mdb__sized_pretty__HeadVar__2_2)), mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__HeadVar__4_4, ((MR_Box) (mdb__sized_pretty__HeadVar__5_5)), ((MR_Box) (mdb__sized_pretty__HeadVar__6_6)), mdb__sized_pretty__HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, mdb__sized_pretty__HeadVar__9_9, mdb__sized_pretty__HeadVar__10_10);
    }
#line 9453 "mdb.sized_pretty.c"
    *mdb__sized_pretty__HeadVar__8_8 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__8_8);
#line 9455 "mdb.sized_pretty.c"
  }
#line 268 "sized_pretty.m"
}

#line 251 "sized_pretty.m"
static MR_Integer MR_CALL 
mdb__sized_pretty__maximum_functors_2_f_0(
#line 251 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4,
#line 251 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 251 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2)
#line 251 "sized_pretty.m"
{
#line 9471 "mdb.sized_pretty.c"
  {
#line 9473 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9475 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;
#line 9477 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9479 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9482 "mdb.sized_pretty.c"
    {
#line 9484 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9487 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Integer) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9489 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9491 "mdb.sized_pretty.c"
  }
#line 251 "sized_pretty.m"
}

#line 246 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__subtract_measures_3_f_0(
#line 246 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2,
#line 246 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3)
#line 246 "sized_pretty.m"
{
#line 9509 "mdb.sized_pretty.c"
  {
#line 9511 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9513 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9515 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9518 "mdb.sized_pretty.c"
    {
#line 9520 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9523 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9525 "mdb.sized_pretty.c"
  }
#line 246 "sized_pretty.m"
}

#line 245 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__add_measures_3_f_0(
#line 245 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2,
#line 245 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__3_3)
#line 245 "sized_pretty.m"
{
#line 9543 "mdb.sized_pretty.c"
  {
#line 9545 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9547 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9549 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9552 "mdb.sized_pretty.c"
    {
#line 9554 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9557 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9559 "mdb.sized_pretty.c"
  }
#line 245 "sized_pretty.m"
}

#line 241 "sized_pretty.m"
static MR_Word MR_CALL 
mdb__sized_pretty__compare_measures_2_f_0(
#line 241 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_4,
#line 241 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 241 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2)
#line 241 "sized_pretty.m"
{
#line 9575 "mdb.sized_pretty.c"
  {
#line 9577 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9579 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 9581 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9583 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9586 "mdb.sized_pretty.c"
    {
#line 9588 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9591 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9593 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9595 "mdb.sized_pretty.c"
  }
#line 241 "sized_pretty.m"
}

#line 240 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__zero_measure_0_f_0(
#line 240 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_2)
#line 240 "sized_pretty.m"
{
#line 9607 "mdb.sized_pretty.c"
  {
#line 9609 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9611 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__1_1;
#line 9613 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_2, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9616 "mdb.sized_pretty.c"
    {
#line 9618 "mdb.sized_pretty.c"
      return mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_2));
    }
#line 9621 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__1_1;
#line 9623 "mdb.sized_pretty.c"
  }
#line 240 "sized_pretty.m"
}

#line 239 "sized_pretty.m"
static MR_Box MR_CALL 
mdb__sized_pretty__max_measure_2_f_0(
#line 239 "sized_pretty.m"
  MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_4,
#line 239 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__1_1,
#line 239 "sized_pretty.m"
  MR_Box mdb__sized_pretty__HeadVar__2_2)
#line 239 "sized_pretty.m"
{
#line 9639 "mdb.sized_pretty.c"
  {
#line 9641 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9643 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__3_3;
#line 9645 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9648 "mdb.sized_pretty.c"
    {
#line 9650 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9653 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9655 "mdb.sized_pretty.c"
  }
#line 239 "sized_pretty.m"
}

#line 183 "sized_pretty.m"
void MR_CALL 
mdb__sized_pretty__browser_term_to_string_line_5_p_0(
#line 183 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 183 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserTerm_7,
#line 183 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__LineWidth_8,
#line 183 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__Lines_9,
#line 183 "sized_pretty.m"
  MR_String * mdb__sized_pretty__String_10)
#line 183 "sized_pretty.m"
{
#line 289 "sized_pretty.m"
  {
#line 289 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Params_11 = (MR_Word) mdb__sized_pretty__LineWidth_8;
#line 289 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__Arity_13;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__MaybeReturn_14;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Limit_15;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__AnnotTerm_16;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__Doc_23;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__SizedTerm1_50;
#line 289 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__MaxFunctors_56;
#line 289 "sized_pretty.m"
    MR_Word mdb__sized_pretty__MaybeFunctorArityArgs_57;
#line 291 "sized_pretty.m"
    MR_String mdb__sized_pretty___Functor_12;
#line 294 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_24_24;
#line 294 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_25_25;
#line 294 "sized_pretty.m"
    MR_Integer mdb__sized_pretty__V_26_26;
#line 9707 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 9709 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_MaxFunctors_56;
#line 347 "sized_pretty.m"
    MR_Word mdb__sized_pretty___MaybeReturn_58;
#line 317 "sized_pretty.m"
    MR_Word mdb__sized_pretty__ReturnValue_19;
#line 305 "sized_pretty.m"
    MR_Word mdb__sized_pretty__V_29_29;
#line 306 "sized_pretty.m"
    MR_String mdb__sized_pretty__V_17_17;
#line 306 "sized_pretty.m"
    MR_Word mdb__sized_pretty__V_18_18;

#line 291 "sized_pretty.m"
    {
#line 291 "sized_pretty.m"
      mdb__browser_info__functor_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__BrowserTerm_7, &mdb__sized_pretty___Functor_12, &mdb__sized_pretty__Arity_13, &mdb__sized_pretty__MaybeReturn_14);
    }
#line 294 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__Arity_13 == (MR_Integer) 0);
#line 294 "sized_pretty.m"
    mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 294 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 294 "sized_pretty.m"
      {
#line 295 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Lines_9 == (MR_Integer) 0);
#line 295 "sized_pretty.m"
        mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 294 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 294 "sized_pretty.m"
          {
#line 296 "sized_pretty.m"
            mdb__sized_pretty__V_26_26 = (MR_Integer) 1;
#line 296 "sized_pretty.m"
            mdb__sized_pretty__V_25_25 = (mdb__sized_pretty__Lines_9 - mdb__sized_pretty__V_26_26);
#line 296 "sized_pretty.m"
            {
#line 296 "sized_pretty.m"
              mdb__sized_pretty__V_24_24 = mercury__int__f_47_47_2_f_0(mdb__sized_pretty__V_25_25, mdb__sized_pretty__Arity_13);
            }
#line 296 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_24_24 == (MR_Integer) 0);
#line 294 "sized_pretty.m"
          }
#line 294 "sized_pretty.m"
      }
#line 300 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 299 "sized_pretty.m"
      {
#line 299 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__V_27_27 = (mdb__sized_pretty__LineWidth_8 - (MR_Integer) 1);

#line 299 "sized_pretty.m"
        {
#line 299 "sized_pretty.m"
          mdb__sized_pretty__Limit_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 299 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__Limit_15, 0) = ((MR_Box) (mdb__sized_pretty__V_27_27));
#line 299 "sized_pretty.m"
        }
#line 299 "sized_pretty.m"
      }
#line 300 "sized_pretty.m"
    else
#line 301 "sized_pretty.m"
      {
#line 301 "sized_pretty.m"
        mdb__sized_pretty__Limit_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 301 "sized_pretty.m"
        MR_hl_field(MR_mktag(0), mdb__sized_pretty__Limit_15, 0) = ((MR_Box) (mdb__sized_pretty__Lines_9));
#line 301 "sized_pretty.m"
      }
#line 9785 "mdb.sized_pretty.c"
    mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39 = (MR_Word) &mdb__sized_pretty_scalar_common_2[0];
#line 9787 "mdb.sized_pretty.c"
    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9789 "mdb.sized_pretty.c"
    {
#line 9791 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_56 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Params_11)));
    }
#line 9794 "mdb.sized_pretty.c"
    mdb__sized_pretty__MaxFunctors_56 = ((MR_Integer) mdb__sized_pretty__conv1_MaxFunctors_56);
#line 347 "sized_pretty.m"
    {
#line 347 "sized_pretty.m"
      mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__BrowserTerm_7, mdb__sized_pretty__MaxFunctors_56, &mdb__sized_pretty__MaybeFunctorArityArgs_57, &mdb__sized_pretty___MaybeReturn_58);
    }
#line 371 "sized_pretty.m"
    if ((mdb__sized_pretty__MaybeFunctorArityArgs_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "sized_pretty.m"
      {
#line 372 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_75;
#line 372 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_70_70;
#line 9809 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);
#line 9811 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv3_V_70_70;

#line 9814 "mdb.sized_pretty.c"
        {
#line 9816 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_75);
        }
#line 9819 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_75, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9821 "mdb.sized_pretty.c"
        {
#line 9823 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv3_V_70_70 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_75));
        }
#line 9826 "mdb.sized_pretty.c"
        mdb__sized_pretty__V_70_70 = ((MR_Word) mdb__sized_pretty__conv3_V_70_70);
#line 373 "sized_pretty.m"
        {
#line 373 "sized_pretty.m"
          mdb__sized_pretty__SizedTerm1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 1) = ((MR_Box) (mdb__sized_pretty__V_70_70));
#line 373 "sized_pretty.m"
          MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 373 "sized_pretty.m"
        }
#line 372 "sized_pretty.m"
      }
#line 371 "sized_pretty.m"
    else
#line 350 "sized_pretty.m"
      {
#line 350 "sized_pretty.m"
        MR_String mdb__sized_pretty__Functor_59;
#line 350 "sized_pretty.m"
        MR_Integer mdb__sized_pretty__Arity_60;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Args_61;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__FunctorSize_62;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeInitArgLimit_63;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__NewLimit_64;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__NewParams_65;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact0_66;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__SoFar_67;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__Exact_68;
#line 350 "sized_pretty.m"
        MR_Word mdb__sized_pretty__MaybeArgSizes_69;
#line 350 "sized_pretty.m"
        MR_Tuple mdb__sized_pretty__V_72_72 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeFunctorArityArgs_57, (MR_Integer) 0)));
#line 9870 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9872 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv8_FunctorSize_62;
#line 9874 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv7_MaybeInitArgLimit_63;
#line 9876 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv6_NewLimit_64;
#line 9878 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv5_NewParams_65;
#line 361 "sized_pretty.m"
        MR_Box mdb__sized_pretty__conv9_SoFar_67;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_59 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 2)));
#line 9889 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9891 "mdb.sized_pretty.c"
        {
#line 9893 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), ((MR_Box) (mdb__sized_pretty__Params_11)), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Arity_60)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__conv8_FunctorSize_62, &mdb__sized_pretty__conv7_MaybeInitArgLimit_63, &mdb__sized_pretty__conv6_NewLimit_64, &mdb__sized_pretty__conv5_NewParams_65);
        }
#line 9896 "mdb.sized_pretty.c"
        mdb__sized_pretty__FunctorSize_62 = ((MR_Word) mdb__sized_pretty__conv8_FunctorSize_62);
#line 9898 "mdb.sized_pretty.c"
        mdb__sized_pretty__MaybeInitArgLimit_63 = ((MR_Word) mdb__sized_pretty__conv7_MaybeInitArgLimit_63);
#line 9900 "mdb.sized_pretty.c"
        mdb__sized_pretty__NewLimit_64 = ((MR_Word) mdb__sized_pretty__conv6_NewLimit_64);
#line 9902 "mdb.sized_pretty.c"
        mdb__sized_pretty__NewParams_65 = ((MR_Word) mdb__sized_pretty__conv5_NewParams_65);
#line 354 "sized_pretty.m"
        mdb__sized_pretty__succeeded = (mdb__sized_pretty__Arity_60 == (MR_Integer) 0);
#line 354 "sized_pretty.m"
        mdb__sized_pretty__succeeded = !(mdb__sized_pretty__succeeded);
#line 354 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 355 "sized_pretty.m"
          mdb__sized_pretty__succeeded = (mdb__sized_pretty__MaybeInitArgLimit_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 357 "sized_pretty.m"
          mdb__sized_pretty__Exact0_66 = (MR_Integer) 0;
#line 358 "sized_pretty.m"
        else
#line 359 "sized_pretty.m"
          mdb__sized_pretty__Exact0_66 = (MR_Integer) 1;
#line 361 "sized_pretty.m"
        {
#line 361 "sized_pretty.m"
          mdb__sized_pretty__annotate_args_with_size_10_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__Args_61, mdb__sized_pretty__MaybeInitArgLimit_63, ((MR_Box) (mdb__sized_pretty__NewParams_65)), ((MR_Box) (mdb__sized_pretty__NewLimit_64)), ((MR_Box) (mdb__sized_pretty__FunctorSize_62)), &mdb__sized_pretty__conv9_SoFar_67, mdb__sized_pretty__Exact0_66, &mdb__sized_pretty__Exact_68, &mdb__sized_pretty__MaybeArgSizes_69);
        }
#line 361 "sized_pretty.m"
        mdb__sized_pretty__SoFar_67 = ((MR_Word) mdb__sized_pretty__conv9_SoFar_67);
#line 367 "sized_pretty.m"
        if ((mdb__sized_pretty__Exact_68 == (MR_Integer) 0))
#line 364 "sized_pretty.m"
          {
#line 364 "sized_pretty.m"
            MR_Word mdb__sized_pretty__V_74_74;

#line 366 "sized_pretty.m"
            {
#line 366 "sized_pretty.m"
              mdb__sized_pretty__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 0) = ((MR_Box) (mdb__sized_pretty__Functor_59));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 1) = ((MR_Box) (mdb__sized_pretty__Arity_60));
#line 366 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_69));
#line 366 "sized_pretty.m"
            }
#line 365 "sized_pretty.m"
            {
#line 365 "sized_pretty.m"
              mdb__sized_pretty__SizedTerm1_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 1) = ((MR_Box) (mdb__sized_pretty__SoFar_67));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__SizedTerm1_50, 2) = ((MR_Box) (mdb__sized_pretty__V_74_74));
#line 365 "sized_pretty.m"
            }
#line 364 "sized_pretty.m"
          }
#line 367 "sized_pretty.m"
        else
#line 369 "sized_pretty.m"
          {
#line 369 "sized_pretty.m"
            mdb__sized_pretty__SizedTerm1_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_50, 0) = ((MR_Box) (mdb__sized_pretty__BrowserTerm_7));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_50, 1) = ((MR_Box) (mdb__sized_pretty__SoFar_67));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_50, 2) = ((MR_Box) (mdb__sized_pretty__Functor_59));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_50, 3) = ((MR_Box) (mdb__sized_pretty__Arity_60));
#line 369 "sized_pretty.m"
            MR_hl_field(MR_mktag(0), mdb__sized_pretty__SizedTerm1_50, 4) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_69));
#line 369 "sized_pretty.m"
          }
#line 350 "sized_pretty.m"
      }
#line 337 "sized_pretty.m"
    {
#line 337 "sized_pretty.m"
      mdb__sized_pretty__second_pass_5_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__SizedTerm1_50, ((MR_Box) (mdb__sized_pretty__Params_11)), ((MR_Box) (mdb__sized_pretty__Limit_15)), &mdb__sized_pretty__AnnotTerm_16);
    }
#line 305 "sized_pretty.m"
    mdb__sized_pretty__succeeded = (mdb__sized_pretty__MaybeReturn_14 == (MR_Integer) 1);
#line 305 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 305 "sized_pretty.m"
      {
#line 306 "sized_pretty.m"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__BrowserTerm_7)) == (MR_mktag((MR_Integer) 1)));
#line 306 "sized_pretty.m"
        if (mdb__sized_pretty__succeeded)
#line 306 "sized_pretty.m"
          {
#line 306 "sized_pretty.m"
            mdb__sized_pretty__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__BrowserTerm_7, (MR_Integer) 0)));
#line 306 "sized_pretty.m"
            mdb__sized_pretty__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__BrowserTerm_7, (MR_Integer) 1)));
#line 306 "sized_pretty.m"
            mdb__sized_pretty__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__BrowserTerm_7, (MR_Integer) 2)));
#line 306 "sized_pretty.m"
            mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 306 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 306 "sized_pretty.m"
              mdb__sized_pretty__ReturnValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_29_29, (MR_Integer) 0)));
#line 306 "sized_pretty.m"
          }
#line 305 "sized_pretty.m"
      }
#line 317 "sized_pretty.m"
    if (mdb__sized_pretty__succeeded)
#line 309 "sized_pretty.m"
      {
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__TypeCtorInfo_41_41;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__AnnotReturn_20;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__AnnotTermStr_21;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__AnnotReturnStr_22;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_30_30;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_31_31;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_32_32;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_33_33;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_34_34;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_36_36;
#line 309 "sized_pretty.m"
        MR_Word mdb__sized_pretty__V_37_37;

#line 308 "sized_pretty.m"
        {
#line 308 "sized_pretty.m"
          mdb__sized_pretty__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 308 "sized_pretty.m"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_30_30, 0) = ((MR_Box) (mdb__sized_pretty__ReturnValue_19));
#line 308 "sized_pretty.m"
        }
#line 308 "sized_pretty.m"
        {
#line 308 "sized_pretty.m"
          mdb__sized_pretty__annotate_with_size_5_p_0((MR_Word) &mdb__sized_pretty_scalar_common_2[0], mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__V_30_30, ((MR_Box) (mdb__sized_pretty__Params_11)), ((MR_Box) (mdb__sized_pretty__Limit_15)), &mdb__sized_pretty__AnnotReturn_20);
        }
#line 10053 "mdb.sized_pretty.c"
        mdb__sized_pretty__TypeCtorInfo_41_41 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0;
#line 310 "sized_pretty.m"
        {
#line 310 "sized_pretty.m"
          mdb__sized_pretty__to_doc_sized_2_p_0(mdb__sized_pretty__TypeCtorInfo_41_41, mdb__sized_pretty__AnnotTerm_16, &mdb__sized_pretty__AnnotTermStr_21);
        }
#line 311 "sized_pretty.m"
        {
#line 311 "sized_pretty.m"
          mdb__sized_pretty__to_doc_sized_2_p_0(mdb__sized_pretty__TypeCtorInfo_41_41, mdb__sized_pretty__AnnotReturn_20, &mdb__sized_pretty__AnnotReturnStr_22);
        }
#line 314 "sized_pretty.m"
        {
#line 314 "sized_pretty.m"
          mdb__sized_pretty__V_33_33 = mercury__pprint__line_0_f_0();
        }
#line 314 "sized_pretty.m"
        {
#line 314 "sized_pretty.m"
          mdb__sized_pretty__V_32_32 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__AnnotTermStr_21, mdb__sized_pretty__V_33_33);
        }
#line 315 "sized_pretty.m"
        {
#line 315 "sized_pretty.m"
          mdb__sized_pretty__V_37_37 = mercury__pprint__text_1_f_0((MR_String) " = ");
        }
#line 315 "sized_pretty.m"
        {
#line 315 "sized_pretty.m"
          mdb__sized_pretty__V_36_36 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_37_37, mdb__sized_pretty__AnnotReturnStr_22);
        }
#line 315 "sized_pretty.m"
        {
#line 315 "sized_pretty.m"
          mdb__sized_pretty__V_34_34 = mercury__pprint__nest_2_f_0((MR_Word) &mdb__sized_pretty_scalar_common_1[1], (MR_Integer) 2, ((MR_Box) (mdb__sized_pretty__V_36_36)));
        }
#line 315 "sized_pretty.m"
        {
#line 315 "sized_pretty.m"
          mdb__sized_pretty__V_31_31 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_32_32, mdb__sized_pretty__V_34_34);
        }
#line 312 "sized_pretty.m"
        {
#line 312 "sized_pretty.m"
          mdb__sized_pretty__Doc_23 = mercury__pprint__group_1_f_0((MR_Word) &mdb__sized_pretty_scalar_common_1[1], ((MR_Box) (mdb__sized_pretty__V_31_31)));
        }
#line 309 "sized_pretty.m"
      }
#line 317 "sized_pretty.m"
    else
#line 318 "sized_pretty.m"
      {
#line 318 "sized_pretty.m"
        {
#line 318 "sized_pretty.m"
          mdb__sized_pretty__to_doc_sized_2_p_0((MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0, mdb__sized_pretty__AnnotTerm_16, &mdb__sized_pretty__Doc_23);
        }
#line 318 "sized_pretty.m"
      }
#line 320 "sized_pretty.m"
    {
#line 320 "sized_pretty.m"
      *mdb__sized_pretty__String_10 = mercury__pprint__to_string_2_f_0(mdb__sized_pretty__LineWidth_8, mdb__sized_pretty__Doc_23);
    }
#line 289 "sized_pretty.m"
  }
#line 183 "sized_pretty.m"
}

#line 178 "sized_pretty.m"
void MR_CALL 
mdb__sized_pretty__univ_to_string_line_5_p_0(
#line 178 "sized_pretty.m"
  MR_Word mdb__sized_pretty__BrowserDb_6,
#line 178 "sized_pretty.m"
  MR_Word mdb__sized_pretty__Univ_7,
#line 178 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__LineWidth_8,
#line 178 "sized_pretty.m"
  MR_Integer mdb__sized_pretty__Lines_9,
#line 178 "sized_pretty.m"
  MR_String * mdb__sized_pretty__String_10)
#line 178 "sized_pretty.m"
{
#line 284 "sized_pretty.m"
  {
#line 284 "sized_pretty.m"
    MR_bool mdb__sized_pretty__succeeded;
#line 284 "sized_pretty.m"
    MR_Word mdb__sized_pretty__V_11_11;

#line 285 "sized_pretty.m"
    {
#line 285 "sized_pretty.m"
      mdb__sized_pretty__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "sized_pretty.m"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_11_11, 0) = ((MR_Box) (mdb__sized_pretty__Univ_7));
#line 285 "sized_pretty.m"
    }
#line 285 "sized_pretty.m"
    {
#line 285 "sized_pretty.m"
      mdb__sized_pretty__browser_term_to_string_line_5_p_0(mdb__sized_pretty__BrowserDb_6, mdb__sized_pretty__V_11_11, mdb__sized_pretty__LineWidth_8, mdb__sized_pretty__Lines_9, mdb__sized_pretty__String_10);
#line 285 "sized_pretty.m"
      return;
    }
#line 284 "sized_pretty.m"
  }
#line 178 "sized_pretty.m"
}

void mercury__mdb__sized_pretty__init(void)
{
}

void mercury__mdb__sized_pretty__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_char_count_0);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_no_measure_params_0);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_args_1);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1);
	MR_register_type_ctor_info(&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0);
}

void mercury__mdb__sized_pretty__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.sized_pretty. */
