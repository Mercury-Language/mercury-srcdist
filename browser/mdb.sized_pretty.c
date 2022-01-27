/*
** Automatically generated from `sized_pretty.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "integer.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"




#line 83 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 86 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 89 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 92 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1];

#line 95 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0;

#line 98 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1];

#line 101 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0;

#line 104 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0;

#line 107 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 110 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3];

#line 113 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1;

#line 116 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1];

#line 119 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1];

#line 122 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2];

#line 125 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2];

#line 128 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2];

#line 131 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1];

#line 134 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0;

#line 137 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0;

#line 140 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1];

#line 143 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1];

#line 146 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1];

#line 149 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5];

#line 152 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0;

#line 155 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1;

#line 158 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3];

#line 161 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1;

#line 164 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1];

#line 167 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1];

#line 170 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2];

#line 173 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2];

#line 176 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2];

#line 179 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1];

#line 182 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0;

#line 185 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1];

#line 188 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1;

#line 191 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1];

#line 194 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1];

#line 197 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2];

#line 200 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2];

#line 203 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2];

#line 206 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2];

#line 209 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4];

#line 212 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2;

#line 215 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1;

#line 218 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1];

#line 221 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1];

#line 224 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3];

#line 227 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1;

#line 230 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 233 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 235 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 238 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 241 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 243 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 245 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 248 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 251 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 253 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 256 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 259 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 261 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 263 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 266 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 269 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 271 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 273 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 276 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 279 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 281 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 283 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 285 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 288 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 291 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 293 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 296 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 299 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 301 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 303 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 306 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 309 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 311 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 314 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 317 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 319 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 321 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 324 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 327 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 329 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 331 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 334 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 337 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 339 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 341 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 343 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 346 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 349 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 351 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 353 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 356 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 359 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 361 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 363 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 365 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 368 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 371 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 373 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 376 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 379 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 381 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 383 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 386 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 389 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 391 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 393 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 395 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 398 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 401 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 403 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 405 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 407 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 410 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 413 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 415 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 417 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 420 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 423 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 425 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 427 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 429 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 431 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 433 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 435 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 437 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 439 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 441 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 443 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 446 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 449 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 451 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 453 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 455 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 458 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 461 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 463 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 465 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 467 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 470 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 473 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 475 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 477 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 480 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 483 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 485 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 487 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 489 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 491 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 493 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 495 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 497 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 499 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 501 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 503 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 506 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 509 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 511 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 513 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 515 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 518 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 521 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 523 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 525 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 527 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 530 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 533 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 535 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 537 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 540 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 543 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 545 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 547 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 549 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 551 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 553 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 555 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 557 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 559 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 561 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 563 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 566 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 569 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 571 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 573 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 576 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 579 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 582 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 585 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 587 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 589 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 592 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 595 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 597 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 599 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 602 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 605 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 608 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 611 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 613 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 615 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 618 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 621 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 623 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 625 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 628 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 631 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 634 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 637 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 639 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 641 "mdb.sized_pretty.c"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1453 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1461 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1470 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1478 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1] = {
  (MR_Integer) 0
};

#line 1483 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 = {
  (MR_String) "char_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1490 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_char_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____char_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____char_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "char_count",
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 },
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0
};

#line 1507 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1] = {
  (MR_Integer) 0
};

#line 1512 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 = {
  (MR_String) "functor_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1519 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_functor_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____functor_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____functor_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "functor_count",
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 },
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0
};

#line 1536 "mdb.sized_pretty.c"
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

#line 1551 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1559 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1566 "mdb.sized_pretty.c"
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

#line 1581 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1586 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1
};

#line 1591 "mdb.sized_pretty.c"
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

#line 1605 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1611 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1617 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "maybe_deconstructed",
  {     mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1 },
  {     mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1
};

#line 1634 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1639 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 = {
  (MR_String) "measure_params",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1646 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_measure_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__sized_pretty____Unify____measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_params",
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 },
  {     &mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0
};

#line 1663 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 = {
  (MR_String) "no_measure_params",
  (MR_Integer) 0
};

#line 1669 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1674 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1679 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1684 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_no_measure_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdb__sized_pretty____Unify____no_measure_params_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____no_measure_params_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "no_measure_params",
  {     mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0 },
  {     mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0
};

#line 1701 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_args_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_args_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_args_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_args",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1718 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1727 "mdb.sized_pretty.c"
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

#line 1742 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1750 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1
};

#line 1757 "mdb.sized_pretty.c"
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

#line 1772 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1777 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1
};

#line 1782 "mdb.sized_pretty.c"
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

#line 1796 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1802 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1808 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_annotated_term_1_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_annotated_term_1_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_annotated_term",
  {     mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1 },
  {     mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1
};

#line 1825 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1830 "mdb.sized_pretty.c"
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

#line 1845 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1850 "mdb.sized_pretty.c"
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

#line 1865 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1870 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1
};

#line 1875 "mdb.sized_pretty.c"
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

#line 1889 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1895 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1901 "mdb.sized_pretty.c"
const MR_TypeCtorInfo_Struct mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__sized_pretty____Unify____size_count_0_0_10001)),
  ((MR_Box) (mdb__sized_pretty____Compare____size_count_0_0_10001)),
  (MR_String) "mdb.sized_pretty",
  (MR_String) "size_count",
  {     mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0 },
  {     mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0
};

#line 1918 "mdb.sized_pretty.c"
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

#line 1931 "mdb.sized_pretty.c"
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

#line 1944 "mdb.sized_pretty.c"
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

#line 1957 "mdb.sized_pretty.c"
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

#line 1969 "mdb.sized_pretty.c"
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

#line 1981 "mdb.sized_pretty.c"
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

#line 1993 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2] = {
  (MR_String) "T",
  (MR_String) "MeasureParams"
};

#line 1999 "mdb.sized_pretty.c"
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

#line 2023 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_with_params",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2
};

#line 2034 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2042 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1] = {
  (MR_TypeClassConstraint) &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1
};

#line 2047 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_with_params_2 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 2055 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1] = {
  (MR_String) "T"
};

#line 2060 "mdb.sized_pretty.c"
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

#line 2079 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1
};

#line 2090 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2098 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 2101 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2103 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2105 "mdb.sized_pretty.c"
{
#line 2107 "mdb.sized_pretty.c"
  {
#line 2109 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2112 "mdb.sized_pretty.c"
    {
#line 2114 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____char_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2117 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2119 "mdb.sized_pretty.c"
  }
#line 2121 "mdb.sized_pretty.c"
}

#line 2124 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 2127 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2129 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2131 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2133 "mdb.sized_pretty.c"
{
#line 2135 "mdb.sized_pretty.c"
  {
#line 2137 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2140 "mdb.sized_pretty.c"
    {
#line 2142 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____char_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2145 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2147 "mdb.sized_pretty.c"
  }
#line 2149 "mdb.sized_pretty.c"
}

#line 2152 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 2155 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2157 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2159 "mdb.sized_pretty.c"
{
#line 2161 "mdb.sized_pretty.c"
  {
#line 2163 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2166 "mdb.sized_pretty.c"
    {
#line 2168 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____functor_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2171 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2173 "mdb.sized_pretty.c"
  }
#line 2175 "mdb.sized_pretty.c"
}

#line 2178 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 2181 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2183 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2185 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2187 "mdb.sized_pretty.c"
{
#line 2189 "mdb.sized_pretty.c"
  {
#line 2191 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2194 "mdb.sized_pretty.c"
    {
#line 2196 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____functor_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2199 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2201 "mdb.sized_pretty.c"
  }
#line 2203 "mdb.sized_pretty.c"
}

#line 2206 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 2209 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2211 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2213 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2215 "mdb.sized_pretty.c"
{
#line 2217 "mdb.sized_pretty.c"
  {
#line 2219 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2222 "mdb.sized_pretty.c"
    {
#line 2224 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2227 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2229 "mdb.sized_pretty.c"
  }
#line 2231 "mdb.sized_pretty.c"
}

#line 2234 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 2237 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2239 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2241 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2243 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2245 "mdb.sized_pretty.c"
{
#line 2247 "mdb.sized_pretty.c"
  {
#line 2249 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2252 "mdb.sized_pretty.c"
    {
#line 2254 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2257 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2259 "mdb.sized_pretty.c"
  }
#line 2261 "mdb.sized_pretty.c"
}

#line 2264 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 2267 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2269 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2271 "mdb.sized_pretty.c"
{
#line 2273 "mdb.sized_pretty.c"
  {
#line 2275 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2278 "mdb.sized_pretty.c"
    {
#line 2280 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____measure_params_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2283 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2285 "mdb.sized_pretty.c"
  }
#line 2287 "mdb.sized_pretty.c"
}

#line 2290 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 2293 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2295 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2297 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2299 "mdb.sized_pretty.c"
{
#line 2301 "mdb.sized_pretty.c"
  {
#line 2303 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2306 "mdb.sized_pretty.c"
    {
#line 2308 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2311 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2313 "mdb.sized_pretty.c"
  }
#line 2315 "mdb.sized_pretty.c"
}

#line 2318 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 2321 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2323 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2325 "mdb.sized_pretty.c"
{
#line 2327 "mdb.sized_pretty.c"
  {
#line 2329 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2332 "mdb.sized_pretty.c"
    {
#line 2334 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____no_measure_params_0_0();
    }
#line 2337 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2339 "mdb.sized_pretty.c"
  }
#line 2341 "mdb.sized_pretty.c"
}

#line 2344 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 2347 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2349 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2351 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2353 "mdb.sized_pretty.c"
{
#line 2355 "mdb.sized_pretty.c"
  {
#line 2357 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2360 "mdb.sized_pretty.c"
    {
#line 2362 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____no_measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1);
    }
#line 2365 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2367 "mdb.sized_pretty.c"
  }
#line 2369 "mdb.sized_pretty.c"
}

#line 2372 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 2375 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2377 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2379 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2381 "mdb.sized_pretty.c"
{
#line 2383 "mdb.sized_pretty.c"
  {
#line 2385 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2388 "mdb.sized_pretty.c"
    {
#line 2390 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2393 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2395 "mdb.sized_pretty.c"
  }
#line 2397 "mdb.sized_pretty.c"
}

#line 2400 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 2403 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2405 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2407 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2409 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2411 "mdb.sized_pretty.c"
{
#line 2413 "mdb.sized_pretty.c"
  {
#line 2415 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2418 "mdb.sized_pretty.c"
    {
#line 2420 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2423 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2425 "mdb.sized_pretty.c"
  }
#line 2427 "mdb.sized_pretty.c"
}

#line 2430 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 2433 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2435 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2437 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2439 "mdb.sized_pretty.c"
{
#line 2441 "mdb.sized_pretty.c"
  {
#line 2443 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2446 "mdb.sized_pretty.c"
    {
#line 2448 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2451 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2453 "mdb.sized_pretty.c"
  }
#line 2455 "mdb.sized_pretty.c"
}

#line 2458 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 2461 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2463 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2465 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2467 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2469 "mdb.sized_pretty.c"
{
#line 2471 "mdb.sized_pretty.c"
  {
#line 2473 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2476 "mdb.sized_pretty.c"
    {
#line 2478 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2481 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2483 "mdb.sized_pretty.c"
  }
#line 2485 "mdb.sized_pretty.c"
}

#line 2488 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 2491 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2493 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2495 "mdb.sized_pretty.c"
{
#line 2497 "mdb.sized_pretty.c"
  {
#line 2499 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2502 "mdb.sized_pretty.c"
    {
#line 2504 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2507 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2509 "mdb.sized_pretty.c"
  }
#line 2511 "mdb.sized_pretty.c"
}

#line 2514 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 2517 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2519 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2521 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2523 "mdb.sized_pretty.c"
{
#line 2525 "mdb.sized_pretty.c"
  {
#line 2527 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2530 "mdb.sized_pretty.c"
    {
#line 2532 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2535 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2537 "mdb.sized_pretty.c"
  }
#line 2539 "mdb.sized_pretty.c"
}

#line 2542 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2545 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2547 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2549 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2551 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2553 "mdb.sized_pretty.c"
{
#line 2555 "mdb.sized_pretty.c"
  {
#line 2557 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2559 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2561 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2564 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2566 "mdb.sized_pretty.c"
    {
#line 2568 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2571 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2573 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2575 "mdb.sized_pretty.c"
  }
#line 2577 "mdb.sized_pretty.c"
}

#line 2580 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2583 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2585 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2587 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2589 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2591 "mdb.sized_pretty.c"
{
#line 2593 "mdb.sized_pretty.c"
  {
#line 2595 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2597 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2599 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2602 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2604 "mdb.sized_pretty.c"
    {
#line 2606 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2609 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2611 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2613 "mdb.sized_pretty.c"
  }
#line 2615 "mdb.sized_pretty.c"
}

#line 2618 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2621 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2623 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2625 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2627 "mdb.sized_pretty.c"
{
#line 2629 "mdb.sized_pretty.c"
  {
#line 2631 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2633 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2635 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2638 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2640 "mdb.sized_pretty.c"
    {
#line 2642 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2645 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2647 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2649 "mdb.sized_pretty.c"
  }
#line 2651 "mdb.sized_pretty.c"
}

#line 2654 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2657 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2659 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2661 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2663 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2665 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2667 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2669 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2671 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2673 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2675 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2677 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2679 "mdb.sized_pretty.c"
{
#line 2681 "mdb.sized_pretty.c"
  {
#line 2683 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2685 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv3_HeadVar__7_7;
#line 2687 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__8_8;
#line 2689 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__9_9;
#line 2691 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__10_10;

#line 2694 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2696 "mdb.sized_pretty.c"
    {
#line 2698 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv3_HeadVar__7_7, &mdb__sized_pretty__conv2_HeadVar__8_8, &mdb__sized_pretty__conv1_HeadVar__9_9, &mdb__sized_pretty__conv0_HeadVar__10_10);
    }
#line 2701 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv3_HeadVar__7_7));
#line 2703 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__8_8));
#line 2705 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__9_9));
#line 2707 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_10 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__10_10));
#line 2709 "mdb.sized_pretty.c"
  }
#line 2711 "mdb.sized_pretty.c"
}

#line 2714 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2717 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2719 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2721 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2723 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2725 "mdb.sized_pretty.c"
{
#line 2727 "mdb.sized_pretty.c"
  {
#line 2729 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2731 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2733 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2736 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2738 "mdb.sized_pretty.c"
    {
#line 2740 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2743 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2745 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2747 "mdb.sized_pretty.c"
  }
#line 2749 "mdb.sized_pretty.c"
}

#line 2752 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2755 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2757 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2759 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2761 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2763 "mdb.sized_pretty.c"
{
#line 2765 "mdb.sized_pretty.c"
  {
#line 2767 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2769 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2771 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2774 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2776 "mdb.sized_pretty.c"
    {
#line 2778 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2781 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2783 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2785 "mdb.sized_pretty.c"
  }
#line 2787 "mdb.sized_pretty.c"
}

#line 2790 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2793 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2795 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2797 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2799 "mdb.sized_pretty.c"
{
#line 2801 "mdb.sized_pretty.c"
  {
#line 2803 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2805 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2807 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2810 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2812 "mdb.sized_pretty.c"
    {
#line 2814 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 2817 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2819 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2821 "mdb.sized_pretty.c"
  }
#line 2823 "mdb.sized_pretty.c"
}

#line 2826 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2829 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2831 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2833 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2835 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2837 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2839 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2841 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2843 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2845 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2847 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2849 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2851 "mdb.sized_pretty.c"
{
#line 2853 "mdb.sized_pretty.c"
  {
#line 2855 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2857 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 2859 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 2861 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 2864 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2866 "mdb.sized_pretty.c"
    {
#line 2868 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 2871 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 2873 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 2875 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 2877 "mdb.sized_pretty.c"
  }
#line 2879 "mdb.sized_pretty.c"
}

#line 2882 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2885 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2887 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2889 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2891 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2893 "mdb.sized_pretty.c"
{
#line 2895 "mdb.sized_pretty.c"
  {
#line 2897 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2899 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2901 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2904 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2906 "mdb.sized_pretty.c"
    {
#line 2908 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2911 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2913 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2915 "mdb.sized_pretty.c"
  }
#line 2917 "mdb.sized_pretty.c"
}

#line 2920 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2923 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2925 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2927 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2929 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2931 "mdb.sized_pretty.c"
{
#line 2933 "mdb.sized_pretty.c"
  {
#line 2935 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2937 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2939 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2942 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2944 "mdb.sized_pretty.c"
    {
#line 2946 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2949 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2951 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2953 "mdb.sized_pretty.c"
  }
#line 2955 "mdb.sized_pretty.c"
}

#line 2958 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2961 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2963 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2965 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2967 "mdb.sized_pretty.c"
{
#line 2969 "mdb.sized_pretty.c"
  {
#line 2971 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2973 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2975 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2978 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2980 "mdb.sized_pretty.c"
    {
#line 2982 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 2985 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2987 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2989 "mdb.sized_pretty.c"
  }
#line 2991 "mdb.sized_pretty.c"
}

#line 2994 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2997 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2999 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3001 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 3003 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 3005 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 3007 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 3009 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 3011 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 3013 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 3015 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 3017 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 3019 "mdb.sized_pretty.c"
{
#line 3021 "mdb.sized_pretty.c"
  {
#line 3023 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3025 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 3027 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 3029 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 3032 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3034 "mdb.sized_pretty.c"
    {
#line 3036 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 3039 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 3041 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 3043 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 3045 "mdb.sized_pretty.c"
  }
#line 3047 "mdb.sized_pretty.c"
}

#line 3050 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3053 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3055 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3057 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3059 "mdb.sized_pretty.c"
{
#line 3061 "mdb.sized_pretty.c"
  {
#line 3063 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3065 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3067 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3070 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3072 "mdb.sized_pretty.c"
    {
#line 3074 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3077 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3079 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3081 "mdb.sized_pretty.c"
  }
#line 3083 "mdb.sized_pretty.c"
}

#line 3086 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3089 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3091 "mdb.sized_pretty.c"
{
#line 3093 "mdb.sized_pretty.c"
  {
#line 3095 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3097 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3099 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3102 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3104 "mdb.sized_pretty.c"
    {
#line 3106 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3109 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3111 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3113 "mdb.sized_pretty.c"
  }
#line 3115 "mdb.sized_pretty.c"
}

#line 3118 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3121 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3123 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3125 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3127 "mdb.sized_pretty.c"
{
#line 3129 "mdb.sized_pretty.c"
  {
#line 3131 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3133 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3135 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3138 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3140 "mdb.sized_pretty.c"
    {
#line 3142 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3145 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3147 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3149 "mdb.sized_pretty.c"
  }
#line 3151 "mdb.sized_pretty.c"
}

#line 3154 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
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
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
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
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3193 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3195 "mdb.sized_pretty.c"
{
#line 3197 "mdb.sized_pretty.c"
  {
#line 3199 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3201 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3203 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3206 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3208 "mdb.sized_pretty.c"
    {
#line 3210 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3213 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3215 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3217 "mdb.sized_pretty.c"
  }
#line 3219 "mdb.sized_pretty.c"
}

#line 3222 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3225 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3227 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3229 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3231 "mdb.sized_pretty.c"
{
#line 3233 "mdb.sized_pretty.c"
  {
#line 3235 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3237 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3239 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3242 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3244 "mdb.sized_pretty.c"
    {
#line 3246 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3249 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3251 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3253 "mdb.sized_pretty.c"
  }
#line 3255 "mdb.sized_pretty.c"
}

#line 3258 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
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
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
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
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3297 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3299 "mdb.sized_pretty.c"
{
#line 3301 "mdb.sized_pretty.c"
  {
#line 3303 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3305 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3307 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3310 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3312 "mdb.sized_pretty.c"
    {
#line 3314 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3317 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3319 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3321 "mdb.sized_pretty.c"
  }
#line 3323 "mdb.sized_pretty.c"
}

#line 3326 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3329 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3331 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3333 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3335 "mdb.sized_pretty.c"
{
#line 3337 "mdb.sized_pretty.c"
  {
#line 3339 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3341 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3343 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3346 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3348 "mdb.sized_pretty.c"
    {
#line 3350 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3353 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3355 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3357 "mdb.sized_pretty.c"
  }
#line 3359 "mdb.sized_pretty.c"
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
#line 3899 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__TypeInfo_70_70;

#line 3902 "mdb.sized_pretty.c"
    {
#line 3904 "mdb.sized_pretty.c"
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
#line 777 "sized_pretty.m"
    switch (mdb__sized_pretty__HeadVar__6_6) {
#line 777 "sized_pretty.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "sized_pretty.m"
      case (MR_Integer) 0:
#line 779 "sized_pretty.m"
        mdb__sized_pretty__TotalLength_23 = (MR_Integer) 0;
#line 777 "sized_pretty.m"
        break;
#line 777 "sized_pretty.m"
      case (MR_Integer) 1:
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
#line 777 "sized_pretty.m"
        break;
#line 777 "sized_pretty.m"
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
#line 956 "sized_pretty.m"
    switch (mdb__sized_pretty__HeadVar__6_6) {
#line 956 "sized_pretty.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 956 "sized_pretty.m"
      case (MR_Integer) 0:
#line 957 "sized_pretty.m"
        {
#line 958 "sized_pretty.m"
          mdb__sized_pretty__TotalLength_27 = (MR_Integer) 0;
#line 959 "sized_pretty.m"
          mdb__sized_pretty__MaxLength_29 = (MR_Integer) 0;
#line 957 "sized_pretty.m"
        }
#line 956 "sized_pretty.m"
        break;
#line 956 "sized_pretty.m"
      case (MR_Integer) 1:
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
#line 956 "sized_pretty.m"
        break;
#line 956 "sized_pretty.m"
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

#line 5385 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 5387 "mdb.sized_pretty.c"
        if (mdb__sized_pretty__succeeded)
#line 5389 "mdb.sized_pretty.c"
          {
#line 5391 "mdb.sized_pretty.c"
            mdb__sized_pretty__C2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 915 "sized_pretty.m"
            {
#line 915 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_7_7, mdb__sized_pretty__V_20_20, mdb__sized_pretty__C2_9);
            }
#line 927 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_7_7 == (MR_Integer) 2);
#line 5400 "mdb.sized_pretty.c"
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
#line 5474 "mdb.sized_pretty.c"
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
#line 5503 "mdb.sized_pretty.c"
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
#line 5516 "mdb.sized_pretty.c"
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
#line 5584 "mdb.sized_pretty.c"
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
#line 5607 "mdb.sized_pretty.c"
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
#line 5646 "mdb.sized_pretty.c"
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
#line 5679 "mdb.sized_pretty.c"
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
#line 5699 "mdb.sized_pretty.c"
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
#line 5722 "mdb.sized_pretty.c"
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
#line 5743 "mdb.sized_pretty.c"
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
#line 5767 "mdb.sized_pretty.c"
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
#line 5787 "mdb.sized_pretty.c"
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
#line 5807 "mdb.sized_pretty.c"
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
#line 5827 "mdb.sized_pretty.c"
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

#line 5846 "mdb.sized_pretty.c"
                            {
#line 5848 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5850 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 5852 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5854 "mdb.sized_pretty.c"
                            }
#line 5856 "mdb.sized_pretty.c"
                            {
#line 5858 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5860 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5862 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5864 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_52_52));
#line 5866 "mdb.sized_pretty.c"
                            }
#line 5868 "mdb.sized_pretty.c"
                            {
#line 5870 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5872 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 5874 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_54_54));
#line 5876 "mdb.sized_pretty.c"
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
#line 5959 "mdb.sized_pretty.c"
            {
#line 5961 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_13_13, mdb__sized_pretty__V_16_16);
            }
#line 220 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
              {
#line 5968 "mdb.sized_pretty.c"
                {
#line 5970 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_14_14, mdb__sized_pretty__V_17_17);
                }
#line 220 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 5975 "mdb.sized_pretty.c"
                  {
#line 5977 "mdb.sized_pretty.c"
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
#line 6039 "mdb.sized_pretty.c"
            {
#line 6041 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_3_3, mdb__sized_pretty__V_8_8);
            }
#line 220 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
              {
#line 6048 "mdb.sized_pretty.c"
                {
#line 6050 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_9_9);
                }
#line 220 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                  {
#line 6057 "mdb.sized_pretty.c"
                    mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_10_10) == 0);
#line 220 "sized_pretty.m"
                    if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                      {
#line 6063 "mdb.sized_pretty.c"
                        mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_11_11);
#line 220 "sized_pretty.m"
                        if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                          {
#line 6069 "mdb.sized_pretty.c"
                            mdb__sized_pretty__TypeCtorInfo_28_28 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6071 "mdb.sized_pretty.c"
                            mdb__sized_pretty__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6073 "mdb.sized_pretty.c"
                            mdb__sized_pretty__TypeCtorInfo_24_24 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6075 "mdb.sized_pretty.c"
                            {
#line 6077 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6079 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_24_24));
#line 6081 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6083 "mdb.sized_pretty.c"
                            }
#line 6085 "mdb.sized_pretty.c"
                            {
#line 6087 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6089 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_26_26));
#line 6091 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6093 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_25_25));
#line 6095 "mdb.sized_pretty.c"
                            }
#line 6097 "mdb.sized_pretty.c"
                            {
#line 6099 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6101 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_28_28));
#line 6103 "mdb.sized_pretty.c"
                              MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_27_27));
#line 6105 "mdb.sized_pretty.c"
                            }
#line 6107 "mdb.sized_pretty.c"
                            {
#line 6109 "mdb.sized_pretty.c"
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

#line 6159 "mdb.sized_pretty.c"
    {
#line 6161 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6163 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6165 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6167 "mdb.sized_pretty.c"
    }
#line 6169 "mdb.sized_pretty.c"
    {
#line 6171 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6173 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6175 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6177 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_8_8));
#line 6179 "mdb.sized_pretty.c"
    }
#line 6181 "mdb.sized_pretty.c"
    {
#line 6183 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6185 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6187 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_10_10));
#line 6189 "mdb.sized_pretty.c"
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

#line 6229 "mdb.sized_pretty.c"
    {
#line 6231 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6233 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6235 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6237 "mdb.sized_pretty.c"
    }
#line 6239 "mdb.sized_pretty.c"
    {
#line 6241 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6243 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6245 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6247 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_7_7));
#line 6249 "mdb.sized_pretty.c"
    }
#line 6251 "mdb.sized_pretty.c"
    {
#line 6253 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6255 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6257 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_9_9));
#line 6259 "mdb.sized_pretty.c"
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
#line 6343 "mdb.sized_pretty.c"
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

#line 6401 "mdb.sized_pretty.c"
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
#line 6438 "mdb.sized_pretty.c"
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
#line 6450 "mdb.sized_pretty.c"
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
#line 6465 "mdb.sized_pretty.c"
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
#line 6485 "mdb.sized_pretty.c"
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
#line 6505 "mdb.sized_pretty.c"
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

#line 6524 "mdb.sized_pretty.c"
                    {
#line 6526 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6528 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6530 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6532 "mdb.sized_pretty.c"
                    }
#line 6534 "mdb.sized_pretty.c"
                    {
#line 6536 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6538 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6540 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6542 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_24_24));
#line 6544 "mdb.sized_pretty.c"
                    }
#line 6546 "mdb.sized_pretty.c"
                    {
#line 6548 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6550 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6552 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_26_26));
#line 6554 "mdb.sized_pretty.c"
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
#line 6658 "mdb.sized_pretty.c"
            mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_8_8) == 0);
#line 209 "sized_pretty.m"
            if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
              {
#line 6664 "mdb.sized_pretty.c"
                mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_9_9);
#line 209 "sized_pretty.m"
                if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                  {
#line 6670 "mdb.sized_pretty.c"
                    mdb__sized_pretty__TypeCtorInfo_18_18 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6672 "mdb.sized_pretty.c"
                    mdb__sized_pretty__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6674 "mdb.sized_pretty.c"
                    mdb__sized_pretty__TypeCtorInfo_14_14 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6676 "mdb.sized_pretty.c"
                    {
#line 6678 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6680 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_14_14));
#line 6682 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6684 "mdb.sized_pretty.c"
                    }
#line 6686 "mdb.sized_pretty.c"
                    {
#line 6688 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6690 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_16_16));
#line 6692 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6694 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_15_15));
#line 6696 "mdb.sized_pretty.c"
                    }
#line 6698 "mdb.sized_pretty.c"
                    {
#line 6700 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6702 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_18_18));
#line 6704 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_17_17));
#line 6706 "mdb.sized_pretty.c"
                    }
#line 6708 "mdb.sized_pretty.c"
                    {
#line 6710 "mdb.sized_pretty.c"
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
#line 6752 "mdb.sized_pretty.c"
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

#line 6810 "mdb.sized_pretty.c"
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
#line 6845 "mdb.sized_pretty.c"
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

#line 6903 "mdb.sized_pretty.c"
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
#line 7211 "mdb.sized_pretty.c"
        {
#line 7213 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7215 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7217 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7219 "mdb.sized_pretty.c"
        }
#line 7221 "mdb.sized_pretty.c"
        {
#line 7223 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7225 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7227 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7229 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_38_38));
#line 7231 "mdb.sized_pretty.c"
        }
#line 7233 "mdb.sized_pretty.c"
        {
#line 7235 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7237 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7239 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_40_40));
#line 7241 "mdb.sized_pretty.c"
        }
#line 7243 "mdb.sized_pretty.c"
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
#line 7359 "mdb.sized_pretty.c"
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
#line 7726 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box);

#line 543 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7731 "mdb.sized_pretty.c"
        {
#line 7733 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_41);
        }
#line 7736 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7738 "mdb.sized_pretty.c"
        {
#line 7740 "mdb.sized_pretty.c"
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
#line 7778 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_44_44;
#line 7780 "mdb.sized_pretty.c"
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

#line 7793 "mdb.sized_pretty.c"
            {
#line 7795 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_44_44);
            }
#line 7798 "mdb.sized_pretty.c"
            {
#line 7800 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_45_45);
            }
#line 7803 "mdb.sized_pretty.c"
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
#line 7818 "mdb.sized_pretty.c"
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
#line 7863 "mdb.sized_pretty.c"
                  MR_Box MR_CALL (* mdb__sized_pretty__func_1)(MR_Box, MR_Box, MR_Box);
#line 7865 "mdb.sized_pretty.c"
                  MR_Box mdb__sized_pretty__conv2_V_37_37;

#line 7868 "mdb.sized_pretty.c"
                  {
#line 7870 "mdb.sized_pretty.c"
                    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_46);
                  }
#line 7873 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_46, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7875 "mdb.sized_pretty.c"
                  {
#line 7877 "mdb.sized_pretty.c"
                    mdb__sized_pretty__conv2_V_37_37 = mdb__sized_pretty__func_1(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_46), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                  }
#line 7880 "mdb.sized_pretty.c"
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
#line 7894 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);
#line 7896 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv4_V_36_36;

#line 7899 "mdb.sized_pretty.c"
                    {
#line 7901 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_48);
                    }
#line 7904 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7906 "mdb.sized_pretty.c"
                    {
#line 7908 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv4_V_36_36 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_48), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                    }
#line 7911 "mdb.sized_pretty.c"
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

#line 7940 "mdb.sized_pretty.c"
                {
#line 7942 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_50_50);
                }
#line 7945 "mdb.sized_pretty.c"
                {
#line 7947 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_51_51);
                }
#line 7950 "mdb.sized_pretty.c"
                {
#line 7952 "mdb.sized_pretty.c"
                  mdb__sized_pretty__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7954 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7956 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_51_51));
#line 7958 "mdb.sized_pretty.c"
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
#line 8019 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8021 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 570 "sized_pretty.m"
            mdb__sized_pretty__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_39_39, (MR_Integer) 1)));
#line 8026 "mdb.sized_pretty.c"
            {
#line 8028 "mdb.sized_pretty.c"
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
#line 8069 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8071 "mdb.sized_pretty.c"
            {
#line 8073 "mdb.sized_pretty.c"
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
#line 8163 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeInfo_42_42;

#line 8166 "mdb.sized_pretty.c"
                {
#line 8168 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_42_42);
                }
#line 8171 "mdb.sized_pretty.c"
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
#line 8190 "mdb.sized_pretty.c"
                else
#line 8192 "mdb.sized_pretty.c"
                  {
#line 8194 "mdb.sized_pretty.c"
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
#line 8208 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8210 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv1_V_35_35;

#line 8213 "mdb.sized_pretty.c"
                    {
#line 8215 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_43);
                    }
#line 8218 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_43, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8220 "mdb.sized_pretty.c"
                    {
#line 8222 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv1_V_35_35 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_43), mdb__sized_pretty__ArgLimit_3, mdb__sized_pretty__Size_53);
                    }
#line 8225 "mdb.sized_pretty.c"
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
#line 8256 "mdb.sized_pretty.c"
                        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8259 "mdb.sized_pretty.c"
                        {
#line 8261 "mdb.sized_pretty.c"
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
#line 8273 "mdb.sized_pretty.c"
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
#line 8375 "mdb.sized_pretty.c"
            void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8377 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_MaybeInitLimit_21;

#line 8380 "mdb.sized_pretty.c"
            {
#line 8382 "mdb.sized_pretty.c"
              mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_18)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FSize_20, &mdb__sized_pretty__conv1_MaybeInitLimit_21, &mdb__sized_pretty__NewLimit_22, &mdb__sized_pretty__NewParams_23);
            }
#line 8385 "mdb.sized_pretty.c"
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
#line 8427 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8429 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8431 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_28_28;
#line 8433 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_30_30;
#line 8435 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_31_31;
#line 8437 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8439 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv5_MaybeSplitLimit_29;

#line 466 "sized_pretty.m"
                {
#line 466 "sized_pretty.m"
                  mdb__sized_pretty__check_args_6_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, mdb__sized_pretty__NewParams_23, mdb__sized_pretty__MaybeArgs_19, mdb__sized_pretty__InitLimit_24, &mdb__sized_pretty__Passed_25, mdb__sized_pretty__FSize_20, &mdb__sized_pretty__Used_26);
                }
#line 8447 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8449 "mdb.sized_pretty.c"
                {
#line 8451 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_41_41 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__NewLimit_22, mdb__sized_pretty__Used_26, mdb__sized_pretty__Params_8);
                }
#line 8454 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8456 "mdb.sized_pretty.c"
                {
#line 8458 "mdb.sized_pretty.c"
                  mdb__sized_pretty__LeftOver_27 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__V_41_41, mdb__sized_pretty__FSize_20, mdb__sized_pretty__Params_8);
                }
#line 470 "sized_pretty.m"
                mdb__sized_pretty__V_42_42 = (mdb__sized_pretty__Arity_18 - mdb__sized_pretty__Passed_25);
#line 8463 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8465 "mdb.sized_pretty.c"
                {
#line 8467 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__LeftOver_27, ((MR_Box) (mdb__sized_pretty__V_42_42)), ((MR_Box) ((MR_Integer) 0)), &mdb__sized_pretty__V_28_28, &mdb__sized_pretty__conv5_MaybeSplitLimit_29, &mdb__sized_pretty__V_30_30, &mdb__sized_pretty__V_31_31);
                }
#line 8470 "mdb.sized_pretty.c"
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
#line 8524 "mdb.sized_pretty.c"
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
#line 8536 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8538 "mdb.sized_pretty.c"
                    {
#line 8540 "mdb.sized_pretty.c"
                      mdb__sized_pretty__NewSize_35 = mdb__sized_pretty__func_6(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__FSize_20, mdb__sized_pretty__NewSize0_34, mdb__sized_pretty__NewParams_23);
                    }
#line 8543 "mdb.sized_pretty.c"
                    {
#line 8545 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_58_58);
                    }
#line 8548 "mdb.sized_pretty.c"
                    {
#line 8550 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_59_59);
                    }
#line 8553 "mdb.sized_pretty.c"
                    {
#line 8555 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8557 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 8559 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_59_59));
#line 8561 "mdb.sized_pretty.c"
                    }
#line 8563 "mdb.sized_pretty.c"
                    {
#line 8565 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8567 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8569 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_58_58));
#line 8571 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_61_61));
#line 8573 "mdb.sized_pretty.c"
                    }
#line 8575 "mdb.sized_pretty.c"
                    {
#line 8577 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8579 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 8581 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_63_63));
#line 8583 "mdb.sized_pretty.c"
                    }
#line 8585 "mdb.sized_pretty.c"
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
#line 8771 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_10)(MR_Box, MR_Box, MR_Box);
#line 8773 "mdb.sized_pretty.c"
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
#line 8810 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8812 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_V_44_44;
#line 8814 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box);
#line 8816 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv5_MaxFunctors_63;
#line 347 "sized_pretty.m"
            MR_Word mdb__sized_pretty___MaybeReturn_65;
#line 8820 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8822 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_9)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 8825 "mdb.sized_pretty.c"
            {
#line 8827 "mdb.sized_pretty.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_50);
            }
#line 8830 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8832 "mdb.sized_pretty.c"
            {
#line 8834 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv1_V_44_44 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_50), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Limit_5);
            }
#line 8837 "mdb.sized_pretty.c"
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
#line 8853 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8855 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);

#line 8858 "mdb.sized_pretty.c"
                {
#line 8860 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_52);
                }
#line 8863 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8865 "mdb.sized_pretty.c"
                {
#line 8867 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_45_45 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__Limit_5, mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Params_4);
                }
#line 8870 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8872 "mdb.sized_pretty.c"
                {
#line 8874 "mdb.sized_pretty.c"
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
#line 8887 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8889 "mdb.sized_pretty.c"
            {
#line 8891 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv5_MaxFunctors_63 = mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__AppliedArgLimit_30, mdb__sized_pretty__Params_4);
            }
#line 8894 "mdb.sized_pretty.c"
            mdb__sized_pretty__MaxFunctors_63 = ((MR_Integer) mdb__sized_pretty__conv5_MaxFunctors_63);
#line 347 "sized_pretty.m"
            {
#line 347 "sized_pretty.m"
              mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__V_46_46, mdb__sized_pretty__MaxFunctors_63, &mdb__sized_pretty__MaybeFunctorArityArgs_64, &mdb__sized_pretty___MaybeReturn_65);
            }
#line 8901 "mdb.sized_pretty.c"
            {
#line 8903 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_55_55);
            }
#line 8906 "mdb.sized_pretty.c"
            if ((mdb__sized_pretty__MaybeFunctorArityArgs_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8908 "mdb.sized_pretty.c"
              {
#line 8910 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_82;
#line 8912 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Size_31;
#line 8914 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box);

#line 8917 "mdb.sized_pretty.c"
                {
#line 8919 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_82);
                }
#line 8922 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_82, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8924 "mdb.sized_pretty.c"
                {
#line 8926 "mdb.sized_pretty.c"
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
#line 8953 "mdb.sized_pretty.c"
              }
#line 8955 "mdb.sized_pretty.c"
            else
#line 8957 "mdb.sized_pretty.c"
              {
#line 8959 "mdb.sized_pretty.c"
                MR_String mdb__sized_pretty__Functor_66;
#line 8961 "mdb.sized_pretty.c"
                MR_Integer mdb__sized_pretty__Arity_67;
#line 8963 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Args_68;
#line 8965 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__FunctorSize_69;
#line 8967 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeInitArgLimit_70;
#line 8969 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewLimit_71;
#line 8971 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewParams_72;
#line 8973 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact0_73;
#line 8975 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__SoFar_74;
#line 8977 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact_75;
#line 8979 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeArgSizes_76;
#line 8981 "mdb.sized_pretty.c"
                MR_Tuple mdb__sized_pretty__V_79_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeFunctorArityArgs_64, (MR_Integer) 0)));
#line 8983 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8985 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv8_MaybeInitArgLimit_70;

#line 350 "sized_pretty.m"
                mdb__sized_pretty__Functor_66 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 2)));
#line 8994 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8996 "mdb.sized_pretty.c"
                {
#line 8998 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_7(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), ((MR_Box) (mdb__sized_pretty__BrowserDb_1)), ((MR_Box) (mdb__sized_pretty__V_46_46)), mdb__sized_pretty__Params_4, mdb__sized_pretty__AppliedArgLimit_30, ((MR_Box) (mdb__sized_pretty__Arity_67)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_69, &mdb__sized_pretty__conv8_MaybeInitArgLimit_70, &mdb__sized_pretty__NewLimit_71, &mdb__sized_pretty__NewParams_72);
                }
#line 9001 "mdb.sized_pretty.c"
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
#line 9024 "mdb.sized_pretty.c"
#line 9025 "mdb.sized_pretty.c"
                switch (mdb__sized_pretty__Exact_75) {
#line 9027 "mdb.sized_pretty.c"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 9029 "mdb.sized_pretty.c"
                  case (MR_Integer) 0:
#line 9031 "mdb.sized_pretty.c"
                    {
#line 9033 "mdb.sized_pretty.c"
                      MR_Word mdb__sized_pretty__V_81_81;
#line 9035 "mdb.sized_pretty.c"
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
#line 9076 "mdb.sized_pretty.c"
                    }
#line 9078 "mdb.sized_pretty.c"
                    break;
#line 9080 "mdb.sized_pretty.c"
                  case (MR_Integer) 1:
#line 9082 "mdb.sized_pretty.c"
                    {
#line 9084 "mdb.sized_pretty.c"
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
#line 9117 "mdb.sized_pretty.c"
                    }
#line 9119 "mdb.sized_pretty.c"
                    break;
#line 9121 "mdb.sized_pretty.c"
                }
#line 9123 "mdb.sized_pretty.c"
              }
#line 398 "sized_pretty.m"
            {
#line 398 "sized_pretty.m"
              mdb__sized_pretty__MaybeArgSize_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeArgSize_27, 0) = ((MR_Box) (mdb__sized_pretty__V_47_47));
#line 398 "sized_pretty.m"
            }
#line 9133 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9135 "mdb.sized_pretty.c"
            {
#line 9137 "mdb.sized_pretty.c"
              mdb__sized_pretty__SoFar1_33 = mdb__sized_pretty__func_9(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__ArgSize_32, mdb__sized_pretty__Params_4);
            }
#line 390 "sized_pretty.m"
          }
#line 9142 "mdb.sized_pretty.c"
        {
#line 9144 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_56);
        }
#line 9147 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_56, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9149 "mdb.sized_pretty.c"
        {
#line 9151 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv11_V_48_48 = mdb__sized_pretty__func_10(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_56), mdb__sized_pretty__SoFar1_33, mdb__sized_pretty__Limit_5);
        }
#line 9154 "mdb.sized_pretty.c"
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
#line 9219 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9221 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_MaxFunctors_18;
#line 347 "sized_pretty.m"
    MR_Word mdb__sized_pretty___MaybeReturn_20;

#line 9226 "mdb.sized_pretty.c"
    {
#line 9228 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_18 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), mdb__sized_pretty__Limit_9, mdb__sized_pretty__Params_8);
    }
#line 9231 "mdb.sized_pretty.c"
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
#line 9246 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);

#line 9249 "mdb.sized_pretty.c"
        {
#line 9251 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_37);
        }
#line 9254 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_37, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9256 "mdb.sized_pretty.c"
        {
#line 9258 "mdb.sized_pretty.c"
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
#line 9303 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9305 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv4_MaybeInitArgLimit_25;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 2)));
#line 9314 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9316 "mdb.sized_pretty.c"
        {
#line 9318 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_22)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_24, &mdb__sized_pretty__conv4_MaybeInitArgLimit_25, &mdb__sized_pretty__NewLimit_26, &mdb__sized_pretty__NewParams_27);
        }
#line 9321 "mdb.sized_pretty.c"
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
#line 367 "sized_pretty.m"
        switch (mdb__sized_pretty__Exact_30) {
#line 367 "sized_pretty.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 367 "sized_pretty.m"
          case (MR_Integer) 0:
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
            break;
#line 367 "sized_pretty.m"
          case (MR_Integer) 1:
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
#line 367 "sized_pretty.m"
            break;
#line 367 "sized_pretty.m"
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
#line 9447 "mdb.sized_pretty.c"
  {
#line 9449 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9451 "mdb.sized_pretty.c"
    void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9453 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__8_8;

#line 9456 "mdb.sized_pretty.c"
    {
#line 9458 "mdb.sized_pretty.c"
      mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11), ((MR_Box) (mdb__sized_pretty__HeadVar__1_1)), ((MR_Box) (mdb__sized_pretty__HeadVar__2_2)), mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__HeadVar__4_4, ((MR_Box) (mdb__sized_pretty__HeadVar__5_5)), ((MR_Box) (mdb__sized_pretty__HeadVar__6_6)), mdb__sized_pretty__HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, mdb__sized_pretty__HeadVar__9_9, mdb__sized_pretty__HeadVar__10_10);
    }
#line 9461 "mdb.sized_pretty.c"
    *mdb__sized_pretty__HeadVar__8_8 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__8_8);
#line 9463 "mdb.sized_pretty.c"
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
#line 9479 "mdb.sized_pretty.c"
  {
#line 9481 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9483 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;
#line 9485 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9487 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9490 "mdb.sized_pretty.c"
    {
#line 9492 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9495 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Integer) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9497 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9499 "mdb.sized_pretty.c"
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
#line 9517 "mdb.sized_pretty.c"
  {
#line 9519 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9521 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9523 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9526 "mdb.sized_pretty.c"
    {
#line 9528 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9531 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9533 "mdb.sized_pretty.c"
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
#line 9551 "mdb.sized_pretty.c"
  {
#line 9553 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9555 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9557 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9560 "mdb.sized_pretty.c"
    {
#line 9562 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9565 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9567 "mdb.sized_pretty.c"
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
#line 9583 "mdb.sized_pretty.c"
  {
#line 9585 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9587 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 9589 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9591 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9594 "mdb.sized_pretty.c"
    {
#line 9596 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9599 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9601 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9603 "mdb.sized_pretty.c"
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
#line 9615 "mdb.sized_pretty.c"
  {
#line 9617 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9619 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__1_1;
#line 9621 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_2, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9624 "mdb.sized_pretty.c"
    {
#line 9626 "mdb.sized_pretty.c"
      return mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_2));
    }
#line 9629 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__1_1;
#line 9631 "mdb.sized_pretty.c"
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
#line 9647 "mdb.sized_pretty.c"
  {
#line 9649 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9651 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__3_3;
#line 9653 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9656 "mdb.sized_pretty.c"
    {
#line 9658 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9661 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9663 "mdb.sized_pretty.c"
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
#line 9715 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 9717 "mdb.sized_pretty.c"
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
#line 9793 "mdb.sized_pretty.c"
    mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39 = (MR_Word) &mdb__sized_pretty_scalar_common_2[0];
#line 9795 "mdb.sized_pretty.c"
    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9797 "mdb.sized_pretty.c"
    {
#line 9799 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_56 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Params_11)));
    }
#line 9802 "mdb.sized_pretty.c"
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
#line 9817 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);
#line 9819 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv3_V_70_70;

#line 9822 "mdb.sized_pretty.c"
        {
#line 9824 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_75);
        }
#line 9827 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_75, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9829 "mdb.sized_pretty.c"
        {
#line 9831 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv3_V_70_70 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_75));
        }
#line 9834 "mdb.sized_pretty.c"
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
#line 9878 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9880 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv8_FunctorSize_62;
#line 9882 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv7_MaybeInitArgLimit_63;
#line 9884 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv6_NewLimit_64;
#line 9886 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv5_NewParams_65;
#line 361 "sized_pretty.m"
        MR_Box mdb__sized_pretty__conv9_SoFar_67;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_59 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 2)));
#line 9897 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9899 "mdb.sized_pretty.c"
        {
#line 9901 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), ((MR_Box) (mdb__sized_pretty__Params_11)), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Arity_60)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__conv8_FunctorSize_62, &mdb__sized_pretty__conv7_MaybeInitArgLimit_63, &mdb__sized_pretty__conv6_NewLimit_64, &mdb__sized_pretty__conv5_NewParams_65);
        }
#line 9904 "mdb.sized_pretty.c"
        mdb__sized_pretty__FunctorSize_62 = ((MR_Word) mdb__sized_pretty__conv8_FunctorSize_62);
#line 9906 "mdb.sized_pretty.c"
        mdb__sized_pretty__MaybeInitArgLimit_63 = ((MR_Word) mdb__sized_pretty__conv7_MaybeInitArgLimit_63);
#line 9908 "mdb.sized_pretty.c"
        mdb__sized_pretty__NewLimit_64 = ((MR_Word) mdb__sized_pretty__conv6_NewLimit_64);
#line 9910 "mdb.sized_pretty.c"
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
#line 367 "sized_pretty.m"
        switch (mdb__sized_pretty__Exact_68) {
#line 367 "sized_pretty.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 367 "sized_pretty.m"
          case (MR_Integer) 0:
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
            break;
#line 367 "sized_pretty.m"
          case (MR_Integer) 1:
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
#line 367 "sized_pretty.m"
            break;
#line 367 "sized_pretty.m"
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
#line 10072 "mdb.sized_pretty.c"
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
