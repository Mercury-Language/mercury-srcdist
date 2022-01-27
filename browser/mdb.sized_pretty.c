/*
** Automatically generated from `sized_pretty.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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




#line 80 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 83 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 86 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 89 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1];

#line 92 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0;

#line 95 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1];

#line 98 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0;

#line 101 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0;

#line 104 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1;

#line 107 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3];

#line 110 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1;

#line 113 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1];

#line 116 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1];

#line 119 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_maybe_deconstructed_1[2];

#line 122 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2];

#line 125 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2];

#line 128 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1];

#line 131 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0;

#line 134 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0;

#line 137 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1];

#line 140 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1];

#line 143 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1];

#line 146 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5];

#line 149 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0;

#line 152 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1;

#line 155 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3];

#line 158 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1;

#line 161 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1];

#line 164 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1];

#line 167 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_annotated_term_1[2];

#line 170 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2];

#line 173 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2];

#line 176 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1];

#line 179 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0;

#line 182 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1];

#line 185 "mdb.sized_pretty.c"
static const MR_DuFunctorDesc mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1;

#line 188 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1];

#line 191 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1];

#line 194 "mdb.sized_pretty.c"
static const MR_DuPtagLayout mdb__sized_pretty__mdb__sized_pretty__du_ptag_ordered_size_count_0[2];

#line 197 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2];

#line 200 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2];

#line 203 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2];

#line 206 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2[4];

#line 209 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2;

#line 212 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1;

#line 215 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1];

#line 218 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1];

#line 221 "mdb.sized_pretty.c"
static const MR_TypeClassMethod mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1[3];

#line 224 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1;

#line 227 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 230 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 232 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 235 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 238 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 240 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 242 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 245 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 248 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 250 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 253 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 256 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 258 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 260 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 263 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 266 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 268 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 270 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 273 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 276 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 278 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 280 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 282 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 285 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 288 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 290 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 293 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 296 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 298 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 300 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 303 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 306 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 308 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 311 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 314 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 316 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 318 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 321 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 324 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 326 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 328 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 331 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 334 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 336 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 338 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 340 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 343 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 346 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 348 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 350 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 353 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 356 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 358 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 360 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 362 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4);

#line 365 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 368 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 370 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 373 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 376 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 378 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 380 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 383 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 386 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 388 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 390 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 392 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 395 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 398 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 400 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 402 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 404 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 407 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 410 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 412 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 414 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 417 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 420 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 422 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 424 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 426 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 428 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 430 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 432 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 434 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 436 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 438 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 440 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 443 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 446 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 448 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 450 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 452 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 455 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 458 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 460 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 462 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 464 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 467 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 470 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 472 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 474 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 477 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 480 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 482 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 484 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 486 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 488 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 490 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 492 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 494 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 496 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 498 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 500 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 503 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 506 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 508 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 510 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 512 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 515 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 518 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 520 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 522 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 524 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3);

#line 527 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 530 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 532 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 534 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 537 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 540 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 542 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 544 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 546 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 548 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 550 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 552 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 554 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 556 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 558 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 560 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10);

#line 563 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 566 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 568 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 570 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 573 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 576 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 579 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 582 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 584 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 586 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 589 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 592 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 594 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 596 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 599 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 602 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 605 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 608 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 610 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 612 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 615 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 618 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 620 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 622 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2);

#line 625 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 628 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg);

#line 631 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 634 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 636 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 638 "mdb.sized_pretty.c"
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



#line 1456 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1464 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1473 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1481 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_char_count_0[1] = {
  (MR_Integer) 0
};

#line 1486 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_char_count_0 = {
  (MR_String) "char_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1493 "mdb.sized_pretty.c"
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

#line 1514 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_functor_count_0[1] = {
  (MR_Integer) 0
};

#line 1519 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_functor_count_0 = {
  (MR_String) "functor_count",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1526 "mdb.sized_pretty.c"
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

#line 1547 "mdb.sized_pretty.c"
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

#line 1562 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__sized_pretty__maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
  }
};

#line 1570 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_maybe_deconstructed_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1577 "mdb.sized_pretty.c"
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

#line 1592 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1597 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_maybe_deconstructed_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1
};

#line 1602 "mdb.sized_pretty.c"
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

#line 1616 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_maybe_deconstructed_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_maybe_deconstructed_1_0
};

#line 1622 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_maybe_deconstructed_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1628 "mdb.sized_pretty.c"
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

#line 1649 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1654 "mdb.sized_pretty.c"
static const MR_NotagFunctorDesc mdb__sized_pretty__mdb__sized_pretty__notag_functor_desc_measure_params_0 = {
  (MR_String) "measure_params",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1661 "mdb.sized_pretty.c"
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

#line 1682 "mdb.sized_pretty.c"
static const MR_EnumFunctorDesc mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0 = {
  (MR_String) "no_measure_params",
  (MR_Integer) 0
};

#line 1688 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_value_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1693 "mdb.sized_pretty.c"
static const MR_EnumFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__enum_name_ordered_no_measure_params_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__enum_functor_desc_no_measure_params_0_0
};

#line 1698 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_no_measure_params_0[1] = {
  (MR_Integer) 0
};

#line 1703 "mdb.sized_pretty.c"
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

#line 1724 "mdb.sized_pretty.c"
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

#line 1745 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__list__pti_list_1__pseudo_maybe__pti_maybe_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_mdb__sized_pretty__pti_size_annotated_term_1__pseudo_1
};

#line 1754 "mdb.sized_pretty.c"
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

#line 1769 "mdb.sized_pretty.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_maybe_deconstructed_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1777 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_annotated_term_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__sized_pretty__mdb__sized_pretty__pti_maybe_deconstructed_1__pseudo_1
};

#line 1784 "mdb.sized_pretty.c"
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

#line 1799 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1804 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_annotated_term_1_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1
};

#line 1809 "mdb.sized_pretty.c"
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

#line 1823 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_annotated_term_1[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_annotated_term_1_0
};

#line 1829 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_annotated_term_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1835 "mdb.sized_pretty.c"
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

#line 1856 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1861 "mdb.sized_pretty.c"
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

#line 1876 "mdb.sized_pretty.c"
static const MR_PseudoTypeInfo mdb__sized_pretty__mdb__sized_pretty__field_types_size_count_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1881 "mdb.sized_pretty.c"
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

#line 1896 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_0[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1901 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_stag_ordered_size_count_0_1[1] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1
};

#line 1906 "mdb.sized_pretty.c"
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

#line 1920 "mdb.sized_pretty.c"
static const MR_DuFunctorDescPtr mdb__sized_pretty__mdb__sized_pretty__du_name_ordered_size_count_0[2] = {
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_1,
  &mdb__sized_pretty__mdb__sized_pretty__du_functor_desc_size_count_0_0
};

#line 1926 "mdb.sized_pretty.c"
static const MR_Integer mdb__sized_pretty__mdb__sized_pretty__functor_number_map_size_count_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1932 "mdb.sized_pretty.c"
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

#line 1953 "mdb.sized_pretty.c"
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

#line 1966 "mdb.sized_pretty.c"
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

#line 1979 "mdb.sized_pretty.c"
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

#line 1992 "mdb.sized_pretty.c"
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

#line 2004 "mdb.sized_pretty.c"
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

#line 2016 "mdb.sized_pretty.c"
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

#line 2028 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2[2] = {
  (MR_String) "T",
  (MR_String) "MeasureParams"
};

#line 2034 "mdb.sized_pretty.c"
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

#line 2058 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure_with_params",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_with_params_2,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_with_params_2
};

#line 2069 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint_1Struct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2077 "mdb.sized_pretty.c"
static const MR_TypeClassConstraint mdb__sized_pretty__mdb__sized_pretty__type_class_decl_supers_measure_with_params_2[1] = {
  (MR_TypeClassConstraint) &mdb__sized_pretty__mdb__sized_pretty__type_class_decl_super_measure_with_params_2_1
};

#line 2082 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_with_params_2 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_with_params_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 2090 "mdb.sized_pretty.c"
static const MR_ConstString mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1[1] = {
  (MR_String) "T"
};

#line 2095 "mdb.sized_pretty.c"
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

#line 2114 "mdb.sized_pretty.c"
static const MR_TypeClassId mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1 = {
  (MR_String) "mdb.sized_pretty",
  (MR_String) "measure",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_var_names_measure_1,
  mdb__sized_pretty__mdb__sized_pretty__type_class_id_method_ids_measure_1
};

#line 2125 "mdb.sized_pretty.c"
const MR_TypeClassDeclStruct mdb__sized_pretty__mdb__sized_pretty__type_class_decl_measure_1 = {
  &mdb__sized_pretty__mdb__sized_pretty__type_class_id_measure_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2133 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____char_count_0_0_10001(
#line 2136 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2138 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2140 "mdb.sized_pretty.c"
{
#line 2142 "mdb.sized_pretty.c"
  {
#line 2144 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2147 "mdb.sized_pretty.c"
    {
#line 2149 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____char_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2152 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2154 "mdb.sized_pretty.c"
  }
#line 2156 "mdb.sized_pretty.c"
}

#line 2159 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____char_count_0_0_10001(
#line 2162 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2164 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2166 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2168 "mdb.sized_pretty.c"
{
#line 2170 "mdb.sized_pretty.c"
  {
#line 2172 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2175 "mdb.sized_pretty.c"
    {
#line 2177 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____char_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2180 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2182 "mdb.sized_pretty.c"
  }
#line 2184 "mdb.sized_pretty.c"
}

#line 2187 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____functor_count_0_0_10001(
#line 2190 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2192 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2194 "mdb.sized_pretty.c"
{
#line 2196 "mdb.sized_pretty.c"
  {
#line 2198 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2201 "mdb.sized_pretty.c"
    {
#line 2203 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____functor_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2206 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2208 "mdb.sized_pretty.c"
  }
#line 2210 "mdb.sized_pretty.c"
}

#line 2213 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____functor_count_0_0_10001(
#line 2216 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2218 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2220 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2222 "mdb.sized_pretty.c"
{
#line 2224 "mdb.sized_pretty.c"
  {
#line 2226 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2229 "mdb.sized_pretty.c"
    {
#line 2231 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____functor_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2234 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2236 "mdb.sized_pretty.c"
  }
#line 2238 "mdb.sized_pretty.c"
}

#line 2241 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____maybe_deconstructed_1_0_10001(
#line 2244 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2246 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2248 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2250 "mdb.sized_pretty.c"
{
#line 2252 "mdb.sized_pretty.c"
  {
#line 2254 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2257 "mdb.sized_pretty.c"
    {
#line 2259 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2262 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2264 "mdb.sized_pretty.c"
  }
#line 2266 "mdb.sized_pretty.c"
}

#line 2269 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____maybe_deconstructed_1_0_10001(
#line 2272 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2274 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2276 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2278 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2280 "mdb.sized_pretty.c"
{
#line 2282 "mdb.sized_pretty.c"
  {
#line 2284 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2287 "mdb.sized_pretty.c"
    {
#line 2289 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____maybe_deconstructed_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2292 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2294 "mdb.sized_pretty.c"
  }
#line 2296 "mdb.sized_pretty.c"
}

#line 2299 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____measure_params_0_0_10001(
#line 2302 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2304 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2306 "mdb.sized_pretty.c"
{
#line 2308 "mdb.sized_pretty.c"
  {
#line 2310 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2313 "mdb.sized_pretty.c"
    {
#line 2315 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____measure_params_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2318 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2320 "mdb.sized_pretty.c"
  }
#line 2322 "mdb.sized_pretty.c"
}

#line 2325 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____measure_params_0_0_10001(
#line 2328 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2330 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2332 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2334 "mdb.sized_pretty.c"
{
#line 2336 "mdb.sized_pretty.c"
  {
#line 2338 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2341 "mdb.sized_pretty.c"
    {
#line 2343 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2346 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2348 "mdb.sized_pretty.c"
  }
#line 2350 "mdb.sized_pretty.c"
}

#line 2353 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____no_measure_params_0_0_10001(
#line 2356 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2358 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2360 "mdb.sized_pretty.c"
{
#line 2362 "mdb.sized_pretty.c"
  {
#line 2364 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2367 "mdb.sized_pretty.c"
    {
#line 2369 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____no_measure_params_0_0();
    }
#line 2372 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2374 "mdb.sized_pretty.c"
  }
#line 2376 "mdb.sized_pretty.c"
}

#line 2379 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____no_measure_params_0_0_10001(
#line 2382 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2384 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2386 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2388 "mdb.sized_pretty.c"
{
#line 2390 "mdb.sized_pretty.c"
  {
#line 2392 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2395 "mdb.sized_pretty.c"
    {
#line 2397 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____no_measure_params_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1);
    }
#line 2400 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2402 "mdb.sized_pretty.c"
  }
#line 2404 "mdb.sized_pretty.c"
}

#line 2407 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_args_1_0_10001(
#line 2410 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2412 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2414 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2416 "mdb.sized_pretty.c"
{
#line 2418 "mdb.sized_pretty.c"
  {
#line 2420 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2423 "mdb.sized_pretty.c"
    {
#line 2425 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2428 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2430 "mdb.sized_pretty.c"
  }
#line 2432 "mdb.sized_pretty.c"
}

#line 2435 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_args_1_0_10001(
#line 2438 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2440 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2442 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2444 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2446 "mdb.sized_pretty.c"
{
#line 2448 "mdb.sized_pretty.c"
  {
#line 2450 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2453 "mdb.sized_pretty.c"
    {
#line 2455 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_args_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2458 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2460 "mdb.sized_pretty.c"
  }
#line 2462 "mdb.sized_pretty.c"
}

#line 2465 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_annotated_term_1_0_10001(
#line 2468 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2470 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2472 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2474 "mdb.sized_pretty.c"
{
#line 2476 "mdb.sized_pretty.c"
  {
#line 2478 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2481 "mdb.sized_pretty.c"
    {
#line 2483 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2486 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2488 "mdb.sized_pretty.c"
  }
#line 2490 "mdb.sized_pretty.c"
}

#line 2493 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_annotated_term_1_0_10001(
#line 2496 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2498 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_2,
#line 2500 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2502 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4)
#line 2504 "mdb.sized_pretty.c"
{
#line 2506 "mdb.sized_pretty.c"
  {
#line 2508 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2511 "mdb.sized_pretty.c"
    {
#line 2513 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_annotated_term_1_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), &mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4));
    }
#line 2516 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_2 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2518 "mdb.sized_pretty.c"
  }
#line 2520 "mdb.sized_pretty.c"
}

#line 2523 "mdb.sized_pretty.c"
static MR_bool MR_CALL 
mdb__sized_pretty____Unify____size_count_0_0_10001(
#line 2526 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2528 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2530 "mdb.sized_pretty.c"
{
#line 2532 "mdb.sized_pretty.c"
  {
#line 2534 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;

#line 2537 "mdb.sized_pretty.c"
    {
#line 2539 "mdb.sized_pretty.c"
      mdb__sized_pretty__succeeded = mdb__sized_pretty____Unify____size_count_0_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2542 "mdb.sized_pretty.c"
    return mdb__sized_pretty__succeeded;
#line 2544 "mdb.sized_pretty.c"
  }
#line 2546 "mdb.sized_pretty.c"
}

#line 2549 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty____Compare____size_count_0_0_10001(
#line 2552 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_1,
#line 2554 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2556 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2558 "mdb.sized_pretty.c"
{
#line 2560 "mdb.sized_pretty.c"
  {
#line 2562 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 2565 "mdb.sized_pretty.c"
    {
#line 2567 "mdb.sized_pretty.c"
      mdb__sized_pretty____Compare____size_count_0_0(&mdb__sized_pretty__conv0_HeadVar__1_1, ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2570 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 2572 "mdb.sized_pretty.c"
  }
#line 2574 "mdb.sized_pretty.c"
}

#line 2577 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2580 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2582 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2584 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2586 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2588 "mdb.sized_pretty.c"
{
#line 2590 "mdb.sized_pretty.c"
  {
#line 2592 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2594 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2596 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2599 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2601 "mdb.sized_pretty.c"
    {
#line 2603 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2606 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2608 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2610 "mdb.sized_pretty.c"
  }
#line 2612 "mdb.sized_pretty.c"
}

#line 2615 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2618 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2620 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2622 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2624 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2626 "mdb.sized_pretty.c"
{
#line 2628 "mdb.sized_pretty.c"
  {
#line 2630 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2632 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2634 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2637 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2639 "mdb.sized_pretty.c"
    {
#line 2641 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3));
    }
#line 2644 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2646 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2648 "mdb.sized_pretty.c"
  }
#line 2650 "mdb.sized_pretty.c"
}

#line 2653 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2656 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2658 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2660 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2662 "mdb.sized_pretty.c"
{
#line 2664 "mdb.sized_pretty.c"
  {
#line 2666 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2668 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2670 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2673 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2675 "mdb.sized_pretty.c"
    {
#line 2677 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2680 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2682 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2684 "mdb.sized_pretty.c"
  }
#line 2686 "mdb.sized_pretty.c"
}

#line 2689 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2692 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2694 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2696 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2698 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2700 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2702 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2704 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2706 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2708 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2710 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2712 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2714 "mdb.sized_pretty.c"
{
#line 2716 "mdb.sized_pretty.c"
  {
#line 2718 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2720 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv3_HeadVar__7_7;
#line 2722 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__8_8;
#line 2724 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__9_9;
#line 2726 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__10_10;

#line 2729 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2731 "mdb.sized_pretty.c"
    {
#line 2733 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__size_count__arity0__mdb__sized_pretty__measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_3), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv3_HeadVar__7_7, &mdb__sized_pretty__conv2_HeadVar__8_8, &mdb__sized_pretty__conv1_HeadVar__9_9, &mdb__sized_pretty__conv0_HeadVar__10_10);
    }
#line 2736 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv3_HeadVar__7_7));
#line 2738 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__8_8));
#line 2740 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__9_9));
#line 2742 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_10 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__10_10));
#line 2744 "mdb.sized_pretty.c"
  }
#line 2746 "mdb.sized_pretty.c"
}

#line 2749 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2752 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2754 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2756 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2758 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2760 "mdb.sized_pretty.c"
{
#line 2762 "mdb.sized_pretty.c"
  {
#line 2764 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2766 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2768 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2771 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2773 "mdb.sized_pretty.c"
    {
#line 2775 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2778 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2780 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2782 "mdb.sized_pretty.c"
  }
#line 2784 "mdb.sized_pretty.c"
}

#line 2787 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2790 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2792 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2794 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2796 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2798 "mdb.sized_pretty.c"
{
#line 2800 "mdb.sized_pretty.c"
  {
#line 2802 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2804 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2806 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2809 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2811 "mdb.sized_pretty.c"
    {
#line 2813 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2816 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2818 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2820 "mdb.sized_pretty.c"
  }
#line 2822 "mdb.sized_pretty.c"
}

#line 2825 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2828 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2830 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2832 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 2834 "mdb.sized_pretty.c"
{
#line 2836 "mdb.sized_pretty.c"
  {
#line 2838 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 2840 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2842 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 2845 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2847 "mdb.sized_pretty.c"
    {
#line 2849 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 2852 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 2854 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 2856 "mdb.sized_pretty.c"
  }
#line 2858 "mdb.sized_pretty.c"
}

#line 2861 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 2864 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2866 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2868 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2870 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 2872 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 2874 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 2876 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 2878 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 2880 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 2882 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 2884 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 2886 "mdb.sized_pretty.c"
{
#line 2888 "mdb.sized_pretty.c"
  {
#line 2890 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2892 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 2894 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 2896 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 2899 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2901 "mdb.sized_pretty.c"
    {
#line 2903 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__char_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 2906 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 2908 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 2910 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 2912 "mdb.sized_pretty.c"
  }
#line 2914 "mdb.sized_pretty.c"
}

#line 2917 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0_10001(
#line 2920 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2922 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2924 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2926 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2928 "mdb.sized_pretty.c"
{
#line 2930 "mdb.sized_pretty.c"
  {
#line 2932 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2934 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2936 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2939 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2941 "mdb.sized_pretty.c"
    {
#line 2943 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__add_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2946 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2948 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2950 "mdb.sized_pretty.c"
  }
#line 2952 "mdb.sized_pretty.c"
}

#line 2955 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0_10001(
#line 2958 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2960 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 2962 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 2964 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3)
#line 2966 "mdb.sized_pretty.c"
{
#line 2968 "mdb.sized_pretty.c"
  {
#line 2970 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_4;
#line 2972 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 2974 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__4_4;

#line 2977 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 2979 "mdb.sized_pretty.c"
    {
#line 2981 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__4_4 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__subtract_measures_3_3_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 2984 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_4 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__4_4));
#line 2986 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_4;
#line 2988 "mdb.sized_pretty.c"
  }
#line 2990 "mdb.sized_pretty.c"
}

#line 2993 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0_10001(
#line 2996 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 2998 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3000 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3002 "mdb.sized_pretty.c"
{
#line 3004 "mdb.sized_pretty.c"
  {
#line 3006 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3008 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3010 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3013 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3015 "mdb.sized_pretty.c"
    {
#line 3017 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__maximum_functors_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1));
    }
#line 3020 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3022 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3024 "mdb.sized_pretty.c"
  }
#line 3026 "mdb.sized_pretty.c"
}

#line 3029 "mdb.sized_pretty.c"
static void MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0_10001(
#line 3032 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3034 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3036 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2,
#line 3038 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_3,
#line 3040 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_4,
#line 3042 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_5,
#line 3044 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_6,
#line 3046 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_7,
#line 3048 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_8,
#line 3050 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_9,
#line 3052 "mdb.sized_pretty.c"
  MR_Box * mdb__sized_pretty__wrapper_arg_10)
#line 3054 "mdb.sized_pretty.c"
{
#line 3056 "mdb.sized_pretty.c"
  {
#line 3058 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3060 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv2_HeadVar__7_7;
#line 3062 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv1_HeadVar__8_8;
#line 3064 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__9_9;

#line 3067 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3069 "mdb.sized_pretty.c"
    {
#line 3071 "mdb.sized_pretty.c"
      mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure_with_params____mdb__sized_pretty__functor_count__arity0__mdb__sized_pretty__no_measure_params__arity0______mdb__sized_pretty__measured_split_10_10_p_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2), ((MR_Word) mdb__sized_pretty__wrapper_arg_4), ((MR_Integer) mdb__sized_pretty__wrapper_arg_5), ((MR_Word) mdb__sized_pretty__wrapper_arg_6), &mdb__sized_pretty__conv2_HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, &mdb__sized_pretty__conv0_HeadVar__9_9);
    }
#line 3074 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_7 = ((MR_Box) (mdb__sized_pretty__conv2_HeadVar__7_7));
#line 3076 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_8 = ((MR_Box) (mdb__sized_pretty__conv1_HeadVar__8_8));
#line 3078 "mdb.sized_pretty.c"
    *mdb__sized_pretty__wrapper_arg_9 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__9_9));
#line 3080 "mdb.sized_pretty.c"
  }
#line 3082 "mdb.sized_pretty.c"
}

#line 3085 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3088 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3090 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3092 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3094 "mdb.sized_pretty.c"
{
#line 3096 "mdb.sized_pretty.c"
  {
#line 3098 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3100 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3102 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3105 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3107 "mdb.sized_pretty.c"
    {
#line 3109 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3112 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3114 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3116 "mdb.sized_pretty.c"
  }
#line 3118 "mdb.sized_pretty.c"
}

#line 3121 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3124 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3126 "mdb.sized_pretty.c"
{
#line 3128 "mdb.sized_pretty.c"
  {
#line 3130 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3132 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3134 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3137 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3139 "mdb.sized_pretty.c"
    {
#line 3141 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3144 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3146 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3148 "mdb.sized_pretty.c"
  }
#line 3150 "mdb.sized_pretty.c"
}

#line 3153 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3156 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3158 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3160 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3162 "mdb.sized_pretty.c"
{
#line 3164 "mdb.sized_pretty.c"
  {
#line 3166 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3168 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3170 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3173 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3175 "mdb.sized_pretty.c"
    {
#line 3177 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__size_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3180 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3182 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3184 "mdb.sized_pretty.c"
  }
#line 3186 "mdb.sized_pretty.c"
}

#line 3189 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3192 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3194 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3196 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3198 "mdb.sized_pretty.c"
{
#line 3200 "mdb.sized_pretty.c"
  {
#line 3202 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3204 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3206 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3209 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3211 "mdb.sized_pretty.c"
    {
#line 3213 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3216 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3218 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3220 "mdb.sized_pretty.c"
  }
#line 3222 "mdb.sized_pretty.c"
}

#line 3225 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3228 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3230 "mdb.sized_pretty.c"
{
#line 3232 "mdb.sized_pretty.c"
  {
#line 3234 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3236 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3238 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3241 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3243 "mdb.sized_pretty.c"
    {
#line 3245 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3248 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3250 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3252 "mdb.sized_pretty.c"
  }
#line 3254 "mdb.sized_pretty.c"
}

#line 3257 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3260 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3262 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3264 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3266 "mdb.sized_pretty.c"
{
#line 3268 "mdb.sized_pretty.c"
  {
#line 3270 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3272 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3274 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3277 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3279 "mdb.sized_pretty.c"
    {
#line 3281 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__char_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3284 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3286 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3288 "mdb.sized_pretty.c"
  }
#line 3290 "mdb.sized_pretty.c"
}

#line 3293 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0_10001(
#line 3296 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3298 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3300 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3302 "mdb.sized_pretty.c"
{
#line 3304 "mdb.sized_pretty.c"
  {
#line 3306 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3308 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3310 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3313 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3315 "mdb.sized_pretty.c"
    {
#line 3317 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__max_measure_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3320 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3322 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3324 "mdb.sized_pretty.c"
  }
#line 3326 "mdb.sized_pretty.c"
}

#line 3329 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0_10001(
#line 3332 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg)
#line 3334 "mdb.sized_pretty.c"
{
#line 3336 "mdb.sized_pretty.c"
  {
#line 3338 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_1;
#line 3340 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3342 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__1_1;

#line 3345 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3347 "mdb.sized_pretty.c"
    {
#line 3349 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__1_1 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__zero_measure_0_0_f_0();
    }
#line 3352 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_1 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__1_1));
#line 3354 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_1;
#line 3356 "mdb.sized_pretty.c"
  }
#line 3358 "mdb.sized_pretty.c"
}

#line 3361 "mdb.sized_pretty.c"
static MR_Box MR_CALL 
mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0_10001(
#line 3364 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__closure_arg,
#line 3366 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_1,
#line 3368 "mdb.sized_pretty.c"
  MR_Box mdb__sized_pretty__wrapper_arg_2)
#line 3370 "mdb.sized_pretty.c"
{
#line 3372 "mdb.sized_pretty.c"
  {
#line 3374 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__wrapper_arg_3;
#line 3376 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__closure;
#line 3378 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__conv0_HeadVar__3_3;

#line 3381 "mdb.sized_pretty.c"
    mdb__sized_pretty__closure = mdb__sized_pretty__closure_arg;
#line 3383 "mdb.sized_pretty.c"
    {
#line 3385 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv0_HeadVar__3_3 = mdb__sized_pretty__ClassMethod_for_mdb__sized_pretty__measure____mdb__sized_pretty__functor_count__arity0______mdb__sized_pretty__compare_measures_2_2_f_0(((MR_Word) mdb__sized_pretty__wrapper_arg_1), ((MR_Word) mdb__sized_pretty__wrapper_arg_2));
    }
#line 3388 "mdb.sized_pretty.c"
    mdb__sized_pretty__wrapper_arg_3 = ((MR_Box) (mdb__sized_pretty__conv0_HeadVar__3_3));
#line 3390 "mdb.sized_pretty.c"
    return mdb__sized_pretty__wrapper_arg_3;
#line 3392 "mdb.sized_pretty.c"
  }
#line 3394 "mdb.sized_pretty.c"
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

#line 670 "sized_pretty.m"
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

#line 664 "sized_pretty.m"
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

#line 741 "sized_pretty.m"
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
#line 3934 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__TypeInfo_70_70;

#line 3937 "mdb.sized_pretty.c"
    {
#line 3939 "mdb.sized_pretty.c"
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

#line 771 "sized_pretty.m"
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
#line 771 "sized_pretty.m"
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
#line 1022 "sized_pretty.m"
                    mdb__sized_pretty__V_76_76 = (mdb__sized_pretty__FunctorLength_36 + (MR_Integer) 1);
#line 1022 "sized_pretty.m"
                    mdb__sized_pretty__V_75_75 = (mdb__sized_pretty__V_76_76 + mdb__sized_pretty__ArityChars_38);
#line 1021 "sized_pretty.m"
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

#line 5398 "mdb.sized_pretty.c"
        mdb__sized_pretty__succeeded = ((MR_tag((MR_Word) mdb__sized_pretty__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 5400 "mdb.sized_pretty.c"
        if (mdb__sized_pretty__succeeded)
#line 5402 "mdb.sized_pretty.c"
          {
#line 5404 "mdb.sized_pretty.c"
            mdb__sized_pretty__C2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__HeadVar__2_2, (MR_Integer) 0)));
#line 915 "sized_pretty.m"
            {
#line 915 "sized_pretty.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__sized_pretty__V_7_7, mdb__sized_pretty__V_20_20, mdb__sized_pretty__C2_9);
            }
#line 927 "sized_pretty.m"
            mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_7_7 == (MR_Integer) 2);
#line 5413 "mdb.sized_pretty.c"
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
#line 5487 "mdb.sized_pretty.c"
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
#line 5516 "mdb.sized_pretty.c"
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
#line 5529 "mdb.sized_pretty.c"
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
#line 5597 "mdb.sized_pretty.c"
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
#line 5620 "mdb.sized_pretty.c"
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
#line 5659 "mdb.sized_pretty.c"
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
#line 5692 "mdb.sized_pretty.c"
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
#line 5712 "mdb.sized_pretty.c"
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
#line 5735 "mdb.sized_pretty.c"
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
#line 5756 "mdb.sized_pretty.c"
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
#line 5780 "mdb.sized_pretty.c"
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
#line 5800 "mdb.sized_pretty.c"
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
#line 5820 "mdb.sized_pretty.c"
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
#line 5840 "mdb.sized_pretty.c"
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

#line 5859 "mdb.sized_pretty.c"
                              {
#line 5861 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5863 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 5865 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_52_52, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5867 "mdb.sized_pretty.c"
                              }
#line 5869 "mdb.sized_pretty.c"
                              {
#line 5871 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 5873 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 5875 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_44));
#line 5877 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_54_54, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_52_52));
#line 5879 "mdb.sized_pretty.c"
                              }
#line 5881 "mdb.sized_pretty.c"
                              {
#line 5883 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5885 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 5887 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_56_56, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_54_54));
#line 5889 "mdb.sized_pretty.c"
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
#line 5972 "mdb.sized_pretty.c"
              {
#line 5974 "mdb.sized_pretty.c"
                mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_13_13, mdb__sized_pretty__V_16_16);
              }
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                {
#line 5981 "mdb.sized_pretty.c"
                  {
#line 5983 "mdb.sized_pretty.c"
                    mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_14_14, mdb__sized_pretty__V_17_17);
                  }
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 5988 "mdb.sized_pretty.c"
                    {
#line 5990 "mdb.sized_pretty.c"
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
#line 6052 "mdb.sized_pretty.c"
              {
#line 6054 "mdb.sized_pretty.c"
                mdb__sized_pretty__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__sized_pretty__V_3_3, mdb__sized_pretty__V_8_8);
              }
#line 220 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                {
#line 6061 "mdb.sized_pretty.c"
                  {
#line 6063 "mdb.sized_pretty.c"
                    mdb__sized_pretty__succeeded = mercury__builtin__unify_2_p_0(mdb__sized_pretty__TypeInfo_for_T_21, mdb__sized_pretty__V_4_4, mdb__sized_pretty__V_9_9);
                  }
#line 220 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                    {
#line 6070 "mdb.sized_pretty.c"
                      mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_10_10) == 0);
#line 220 "sized_pretty.m"
                      if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                        {
#line 6076 "mdb.sized_pretty.c"
                          mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_11_11);
#line 220 "sized_pretty.m"
                          if (mdb__sized_pretty__succeeded)
#line 220 "sized_pretty.m"
                            {
#line 6082 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_28_28 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6084 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_26_26 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6086 "mdb.sized_pretty.c"
                              mdb__sized_pretty__TypeCtorInfo_24_24 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6088 "mdb.sized_pretty.c"
                              {
#line 6090 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6092 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_24_24));
#line 6094 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_25_25, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6096 "mdb.sized_pretty.c"
                              }
#line 6098 "mdb.sized_pretty.c"
                              {
#line 6100 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6102 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_26_26));
#line 6104 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_21));
#line 6106 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_27_27, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_25_25));
#line 6108 "mdb.sized_pretty.c"
                              }
#line 6110 "mdb.sized_pretty.c"
                              {
#line 6112 "mdb.sized_pretty.c"
                                mdb__sized_pretty__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6114 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_28_28));
#line 6116 "mdb.sized_pretty.c"
                                MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_29_29, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_27_27));
#line 6118 "mdb.sized_pretty.c"
                              }
#line 6120 "mdb.sized_pretty.c"
                              {
#line 6122 "mdb.sized_pretty.c"
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

#line 6172 "mdb.sized_pretty.c"
    {
#line 6174 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6176 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6178 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_8_8, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6180 "mdb.sized_pretty.c"
    }
#line 6182 "mdb.sized_pretty.c"
    {
#line 6184 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6186 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6188 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_6));
#line 6190 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_10_10, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_8_8));
#line 6192 "mdb.sized_pretty.c"
    }
#line 6194 "mdb.sized_pretty.c"
    {
#line 6196 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6198 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6200 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_12_12, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_10_10));
#line 6202 "mdb.sized_pretty.c"
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

#line 6242 "mdb.sized_pretty.c"
    {
#line 6244 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6246 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6248 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_7_7, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6250 "mdb.sized_pretty.c"
    }
#line 6252 "mdb.sized_pretty.c"
    {
#line 6254 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6256 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6258 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_5));
#line 6260 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_9_9, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_7_7));
#line 6262 "mdb.sized_pretty.c"
    }
#line 6264 "mdb.sized_pretty.c"
    {
#line 6266 "mdb.sized_pretty.c"
      mdb__sized_pretty__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6268 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6270 "mdb.sized_pretty.c"
      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_11_11, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_9_9));
#line 6272 "mdb.sized_pretty.c"
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
#line 6356 "mdb.sized_pretty.c"
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

#line 6414 "mdb.sized_pretty.c"
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
#line 6451 "mdb.sized_pretty.c"
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
#line 6463 "mdb.sized_pretty.c"
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
#line 6478 "mdb.sized_pretty.c"
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
#line 6498 "mdb.sized_pretty.c"
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
#line 6518 "mdb.sized_pretty.c"
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

#line 6537 "mdb.sized_pretty.c"
                      {
#line 6539 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6541 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 6543 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_24_24, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6545 "mdb.sized_pretty.c"
                      }
#line 6547 "mdb.sized_pretty.c"
                      {
#line 6549 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6551 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6553 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_20));
#line 6555 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_26_26, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_24_24));
#line 6557 "mdb.sized_pretty.c"
                      }
#line 6559 "mdb.sized_pretty.c"
                      {
#line 6561 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6563 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6565 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_28_28, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_26_26));
#line 6567 "mdb.sized_pretty.c"
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
#line 6671 "mdb.sized_pretty.c"
              mdb__sized_pretty__succeeded = (strcmp(mdb__sized_pretty__V_5_5, mdb__sized_pretty__V_8_8) == 0);
#line 209 "sized_pretty.m"
              if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                {
#line 6677 "mdb.sized_pretty.c"
                  mdb__sized_pretty__succeeded = (mdb__sized_pretty__V_6_6 == mdb__sized_pretty__V_9_9);
#line 209 "sized_pretty.m"
                  if (mdb__sized_pretty__succeeded)
#line 209 "sized_pretty.m"
                    {
#line 6683 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_18_18 = (MR_Word) &mercury__maybe__maybe__type_ctor_info_maybe_1;
#line 6685 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 6687 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeCtorInfo_14_14 = (MR_Word) &mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1;
#line 6689 "mdb.sized_pretty.c"
                      {
#line 6691 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6693 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_14_14));
#line 6695 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_15_15, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6697 "mdb.sized_pretty.c"
                      }
#line 6699 "mdb.sized_pretty.c"
                      {
#line 6701 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6703 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_16_16));
#line 6705 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_13));
#line 6707 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_17_17, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_15_15));
#line 6709 "mdb.sized_pretty.c"
                      }
#line 6711 "mdb.sized_pretty.c"
                      {
#line 6713 "mdb.sized_pretty.c"
                        mdb__sized_pretty__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6715 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 0) = ((MR_Box) (mdb__sized_pretty__TypeCtorInfo_18_18));
#line 6717 "mdb.sized_pretty.c"
                        MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_19_19, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_17_17));
#line 6719 "mdb.sized_pretty.c"
                      }
#line 6721 "mdb.sized_pretty.c"
                      {
#line 6723 "mdb.sized_pretty.c"
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
#line 6765 "mdb.sized_pretty.c"
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

#line 6823 "mdb.sized_pretty.c"
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
#line 6858 "mdb.sized_pretty.c"
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

#line 6916 "mdb.sized_pretty.c"
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
#line 7224 "mdb.sized_pretty.c"
        {
#line 7226 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7228 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7230 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_38_38, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7232 "mdb.sized_pretty.c"
        }
#line 7234 "mdb.sized_pretty.c"
        {
#line 7236 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 7238 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 7240 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_for_T_34));
#line 7242 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_40_40, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_38_38));
#line 7244 "mdb.sized_pretty.c"
        }
#line 7246 "mdb.sized_pretty.c"
        {
#line 7248 "mdb.sized_pretty.c"
          mdb__sized_pretty__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7250 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7252 "mdb.sized_pretty.c"
          MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_42_42, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_40_40));
#line 7254 "mdb.sized_pretty.c"
        }
#line 7256 "mdb.sized_pretty.c"
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
#line 7372 "mdb.sized_pretty.c"
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
#line 640 "sized_pretty.m"
            {
#line 640 "sized_pretty.m"
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
#line 639 "sized_pretty.m"
            {
#line 639 "sized_pretty.m"
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
#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
                    mdb__sized_pretty__V_24_24 = mercury__pprint__poly_1_f_0(mdb__sized_pretty__V_25_25);
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    mdb__sized_pretty__V_19_19 = mercury__pprint__f_60_62_2_f_0(mdb__sized_pretty__V_20_20, mdb__sized_pretty__V_24_24);
                  }
#line 613 "sized_pretty.m"
                  {
#line 613 "sized_pretty.m"
                    mdb__sized_pretty__V_26_26 = mercury__pprint__text_1_f_0((MR_String) "+1");
                  }
#line 612 "sized_pretty.m"
                  {
#line 612 "sized_pretty.m"
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
#line 7739 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box);

#line 543 "sized_pretty.m"
        *mdb__sized_pretty__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7744 "mdb.sized_pretty.c"
        {
#line 7746 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_41);
        }
#line 7749 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_41, (MR_Integer) 0)), (MR_Integer) 6)));
#line 7751 "mdb.sized_pretty.c"
        {
#line 7753 "mdb.sized_pretty.c"
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
#line 7791 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_44_44;
#line 7793 "mdb.sized_pretty.c"
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

#line 7806 "mdb.sized_pretty.c"
            {
#line 7808 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_44_44);
            }
#line 7811 "mdb.sized_pretty.c"
            {
#line 7813 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_45_45);
            }
#line 7816 "mdb.sized_pretty.c"
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
#line 7831 "mdb.sized_pretty.c"
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
#line 7876 "mdb.sized_pretty.c"
                  MR_Box MR_CALL (* mdb__sized_pretty__func_1)(MR_Box, MR_Box, MR_Box);
#line 7878 "mdb.sized_pretty.c"
                  MR_Box mdb__sized_pretty__conv2_V_37_37;

#line 7881 "mdb.sized_pretty.c"
                  {
#line 7883 "mdb.sized_pretty.c"
                    mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_46);
                  }
#line 7886 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_46, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7888 "mdb.sized_pretty.c"
                  {
#line 7890 "mdb.sized_pretty.c"
                    mdb__sized_pretty__conv2_V_37_37 = mdb__sized_pretty__func_1(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_46), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                  }
#line 7893 "mdb.sized_pretty.c"
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
#line 7907 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);
#line 7909 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv4_V_36_36;

#line 7912 "mdb.sized_pretty.c"
                    {
#line 7914 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_48);
                    }
#line 7917 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_48, (MR_Integer) 0)), (MR_Integer) 7)));
#line 7919 "mdb.sized_pretty.c"
                    {
#line 7921 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv4_V_36_36 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_48), mdb__sized_pretty__ArgLimit_4, mdb__sized_pretty__Size_24);
                    }
#line 7924 "mdb.sized_pretty.c"
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

#line 7953 "mdb.sized_pretty.c"
                {
#line 7955 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_50_50);
                }
#line 7958 "mdb.sized_pretty.c"
                {
#line 7960 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_51_51);
                }
#line 7963 "mdb.sized_pretty.c"
                {
#line 7965 "mdb.sized_pretty.c"
                  mdb__sized_pretty__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7967 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 7969 "mdb.sized_pretty.c"
                  MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_53_53, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_51_51));
#line 7971 "mdb.sized_pretty.c"
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
#line 8032 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8034 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 570 "sized_pretty.m"
            mdb__sized_pretty__Term_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_39_39, (MR_Integer) 1)));
#line 8039 "mdb.sized_pretty.c"
            {
#line 8041 "mdb.sized_pretty.c"
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
#line 8082 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8084 "mdb.sized_pretty.c"
            {
#line 8086 "mdb.sized_pretty.c"
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
#line 8176 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeInfo_42_42;

#line 8179 "mdb.sized_pretty.c"
                {
#line 8181 "mdb.sized_pretty.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_42_42);
                }
#line 8184 "mdb.sized_pretty.c"
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
#line 8203 "mdb.sized_pretty.c"
                else
#line 8205 "mdb.sized_pretty.c"
                  {
#line 8207 "mdb.sized_pretty.c"
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
#line 8221 "mdb.sized_pretty.c"
                    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8223 "mdb.sized_pretty.c"
                    MR_Box mdb__sized_pretty__conv1_V_35_35;

#line 8226 "mdb.sized_pretty.c"
                    {
#line 8228 "mdb.sized_pretty.c"
                      mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_43);
                    }
#line 8231 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_43, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8233 "mdb.sized_pretty.c"
                    {
#line 8235 "mdb.sized_pretty.c"
                      mdb__sized_pretty__conv1_V_35_35 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_43), mdb__sized_pretty__ArgLimit_3, mdb__sized_pretty__Size_53);
                    }
#line 8238 "mdb.sized_pretty.c"
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
#line 8269 "mdb.sized_pretty.c"
                        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_40, (MR_Integer) 0)), (MR_Integer) 5)));

#line 8272 "mdb.sized_pretty.c"
                        {
#line 8274 "mdb.sized_pretty.c"
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
#line 8286 "mdb.sized_pretty.c"
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
#line 8388 "mdb.sized_pretty.c"
            void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8390 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_MaybeInitLimit_21;

#line 8393 "mdb.sized_pretty.c"
            {
#line 8395 "mdb.sized_pretty.c"
              mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_18)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FSize_20, &mdb__sized_pretty__conv1_MaybeInitLimit_21, &mdb__sized_pretty__NewLimit_22, &mdb__sized_pretty__NewParams_23);
            }
#line 8398 "mdb.sized_pretty.c"
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
#line 8440 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8442 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8444 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_28_28;
#line 8446 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_30_30;
#line 8448 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__V_31_31;
#line 8450 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8452 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv5_MaybeSplitLimit_29;

#line 466 "sized_pretty.m"
                {
#line 466 "sized_pretty.m"
                  mdb__sized_pretty__check_args_6_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, mdb__sized_pretty__NewParams_23, mdb__sized_pretty__MaybeArgs_19, mdb__sized_pretty__InitLimit_24, &mdb__sized_pretty__Passed_25, mdb__sized_pretty__FSize_20, &mdb__sized_pretty__Used_26);
                }
#line 8460 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8462 "mdb.sized_pretty.c"
                {
#line 8464 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_41_41 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__NewLimit_22, mdb__sized_pretty__Used_26, mdb__sized_pretty__Params_8);
                }
#line 8467 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8469 "mdb.sized_pretty.c"
                {
#line 8471 "mdb.sized_pretty.c"
                  mdb__sized_pretty__LeftOver_27 = mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__V_41_41, mdb__sized_pretty__FSize_20, mdb__sized_pretty__Params_8);
                }
#line 469 "sized_pretty.m"
                mdb__sized_pretty__V_42_42 = (mdb__sized_pretty__Arity_18 - mdb__sized_pretty__Passed_25);
#line 8476 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 8)));
#line 8478 "mdb.sized_pretty.c"
                {
#line 8480 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__V_73_73)), mdb__sized_pretty__Params_8, mdb__sized_pretty__LeftOver_27, ((MR_Box) (mdb__sized_pretty__V_42_42)), ((MR_Box) ((MR_Integer) 0)), &mdb__sized_pretty__V_28_28, &mdb__sized_pretty__conv5_MaybeSplitLimit_29, &mdb__sized_pretty__V_30_30, &mdb__sized_pretty__V_31_31);
                }
#line 8483 "mdb.sized_pretty.c"
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
#line 8537 "mdb.sized_pretty.c"
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
#line 8549 "mdb.sized_pretty.c"
                    mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8551 "mdb.sized_pretty.c"
                    {
#line 8553 "mdb.sized_pretty.c"
                      mdb__sized_pretty__NewSize_35 = mdb__sized_pretty__func_6(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56), mdb__sized_pretty__FSize_20, mdb__sized_pretty__NewSize0_34, mdb__sized_pretty__NewParams_23);
                    }
#line 8556 "mdb.sized_pretty.c"
                    {
#line 8558 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_58_58);
                    }
#line 8561 "mdb.sized_pretty.c"
                    {
#line 8563 "mdb.sized_pretty.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_56, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_59_59);
                    }
#line 8566 "mdb.sized_pretty.c"
                    {
#line 8568 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8570 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 0) = ((MR_Box) (&mdb__sized_pretty__mdb__sized_pretty__type_ctor_info_size_annotated_term_1));
#line 8572 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_61_61, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_59_59));
#line 8574 "mdb.sized_pretty.c"
                    }
#line 8576 "mdb.sized_pretty.c"
                    {
#line 8578 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8580 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8582 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_58_58));
#line 8584 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_63_63, 2) = ((MR_Box) (mdb__sized_pretty__TypeInfo_61_61));
#line 8586 "mdb.sized_pretty.c"
                    }
#line 8588 "mdb.sized_pretty.c"
                    {
#line 8590 "mdb.sized_pretty.c"
                      mdb__sized_pretty__TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8592 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 8594 "mdb.sized_pretty.c"
                      MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeInfo_65_65, 1) = ((MR_Box) (mdb__sized_pretty__TypeInfo_63_63));
#line 8596 "mdb.sized_pretty.c"
                    }
#line 8598 "mdb.sized_pretty.c"
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

#line 482 "sized_pretty.m"
                        {
#line 482 "sized_pretty.m"
                          mdb__sized_pretty__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 0) = ((MR_Box) (mdb__sized_pretty__Functor_17));
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 1) = ((MR_Box) (mdb__sized_pretty__Arity_18));
#line 482 "sized_pretty.m"
                          MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_48_48, 2) = ((MR_Box) (mdb__sized_pretty__NewArgs_33));
#line 482 "sized_pretty.m"
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
#line 8784 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_10)(MR_Box, MR_Box, MR_Box);
#line 8786 "mdb.sized_pretty.c"
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
#line 8823 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 8825 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv1_V_44_44;
#line 8827 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box);
#line 8829 "mdb.sized_pretty.c"
            MR_Box mdb__sized_pretty__conv5_MaxFunctors_63;
#line 347 "sized_pretty.m"
            MR_Word mdb__sized_pretty___MaybeReturn_65;
#line 8833 "mdb.sized_pretty.c"
            MR_Word mdb__sized_pretty__TypeInfo_55_55;
#line 8835 "mdb.sized_pretty.c"
            MR_Box MR_CALL (* mdb__sized_pretty__func_9)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 8838 "mdb.sized_pretty.c"
            {
#line 8840 "mdb.sized_pretty.c"
              mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_50);
            }
#line 8843 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_50, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8845 "mdb.sized_pretty.c"
            {
#line 8847 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv1_V_44_44 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_50), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Limit_5);
            }
#line 8850 "mdb.sized_pretty.c"
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
#line 8866 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8868 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box);

#line 8871 "mdb.sized_pretty.c"
                {
#line 8873 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_52);
                }
#line 8876 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8878 "mdb.sized_pretty.c"
                {
#line 8880 "mdb.sized_pretty.c"
                  mdb__sized_pretty__V_45_45 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__Limit_5, mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__Params_4);
                }
#line 8883 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_52, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8885 "mdb.sized_pretty.c"
                {
#line 8887 "mdb.sized_pretty.c"
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
#line 8900 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_4 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 7)));
#line 8902 "mdb.sized_pretty.c"
            {
#line 8904 "mdb.sized_pretty.c"
              mdb__sized_pretty__conv5_MaxFunctors_63 = mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__AppliedArgLimit_30, mdb__sized_pretty__Params_4);
            }
#line 8907 "mdb.sized_pretty.c"
            mdb__sized_pretty__MaxFunctors_63 = ((MR_Integer) mdb__sized_pretty__conv5_MaxFunctors_63);
#line 347 "sized_pretty.m"
            {
#line 347 "sized_pretty.m"
              mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(mdb__sized_pretty__BrowserDb_1, mdb__sized_pretty__V_46_46, mdb__sized_pretty__MaxFunctors_63, &mdb__sized_pretty__MaybeFunctorArityArgs_64, &mdb__sized_pretty___MaybeReturn_65);
            }
#line 8914 "mdb.sized_pretty.c"
            {
#line 8916 "mdb.sized_pretty.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 2, &mdb__sized_pretty__TypeInfo_55_55);
            }
#line 8919 "mdb.sized_pretty.c"
            if ((mdb__sized_pretty__MaybeFunctorArityArgs_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8921 "mdb.sized_pretty.c"
              {
#line 8923 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__TypeClassInfo_for_measure_82;
#line 8925 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Size_31;
#line 8927 "mdb.sized_pretty.c"
                MR_Box MR_CALL (* mdb__sized_pretty__func_6)(MR_Box);

#line 8930 "mdb.sized_pretty.c"
                {
#line 8932 "mdb.sized_pretty.c"
                  mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_82);
                }
#line 8935 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_6 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_82, (MR_Integer) 0)), (MR_Integer) 6)));
#line 8937 "mdb.sized_pretty.c"
                {
#line 8939 "mdb.sized_pretty.c"
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
#line 8966 "mdb.sized_pretty.c"
              }
#line 8968 "mdb.sized_pretty.c"
            else
#line 8970 "mdb.sized_pretty.c"
              {
#line 8972 "mdb.sized_pretty.c"
                MR_String mdb__sized_pretty__Functor_66;
#line 8974 "mdb.sized_pretty.c"
                MR_Integer mdb__sized_pretty__Arity_67;
#line 8976 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Args_68;
#line 8978 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__FunctorSize_69;
#line 8980 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeInitArgLimit_70;
#line 8982 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewLimit_71;
#line 8984 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__NewParams_72;
#line 8986 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact0_73;
#line 8988 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__SoFar_74;
#line 8990 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__Exact_75;
#line 8992 "mdb.sized_pretty.c"
                MR_Word mdb__sized_pretty__MaybeArgSizes_76;
#line 8994 "mdb.sized_pretty.c"
                MR_Tuple mdb__sized_pretty__V_79_79 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeFunctorArityArgs_64, (MR_Integer) 0)));
#line 8996 "mdb.sized_pretty.c"
                void MR_CALL (* mdb__sized_pretty__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 8998 "mdb.sized_pretty.c"
                MR_Box mdb__sized_pretty__conv8_MaybeInitArgLimit_70;

#line 350 "sized_pretty.m"
                mdb__sized_pretty__Functor_66 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
                mdb__sized_pretty__Args_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_79_79, (MR_Integer) 2)));
#line 9007 "mdb.sized_pretty.c"
                mdb__sized_pretty__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9009 "mdb.sized_pretty.c"
                {
#line 9011 "mdb.sized_pretty.c"
                  mdb__sized_pretty__func_7(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), ((MR_Box) (mdb__sized_pretty__BrowserDb_1)), ((MR_Box) (mdb__sized_pretty__V_46_46)), mdb__sized_pretty__Params_4, mdb__sized_pretty__AppliedArgLimit_30, ((MR_Box) (mdb__sized_pretty__Arity_67)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_69, &mdb__sized_pretty__conv8_MaybeInitArgLimit_70, &mdb__sized_pretty__NewLimit_71, &mdb__sized_pretty__NewParams_72);
                }
#line 9014 "mdb.sized_pretty.c"
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
#line 9037 "mdb.sized_pretty.c"
                if ((mdb__sized_pretty__Exact_75 == (MR_Integer) 0))
#line 9039 "mdb.sized_pretty.c"
                  {
#line 9041 "mdb.sized_pretty.c"
                    MR_Word mdb__sized_pretty__V_81_81;
#line 9043 "mdb.sized_pretty.c"
                    MR_Word mdb__sized_pretty__Size_98;

#line 365 "sized_pretty.m"
                    {
#line 365 "sized_pretty.m"
                      mdb__sized_pretty__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 0) = ((MR_Box) (mdb__sized_pretty__Functor_66));
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 1) = ((MR_Box) (mdb__sized_pretty__Arity_67));
#line 365 "sized_pretty.m"
                      MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_81_81, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_76));
#line 365 "sized_pretty.m"
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
#line 9084 "mdb.sized_pretty.c"
                  }
#line 9086 "mdb.sized_pretty.c"
                else
#line 9088 "mdb.sized_pretty.c"
                  {
#line 9090 "mdb.sized_pretty.c"
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
#line 9123 "mdb.sized_pretty.c"
                  }
#line 9125 "mdb.sized_pretty.c"
              }
#line 398 "sized_pretty.m"
            {
#line 398 "sized_pretty.m"
              mdb__sized_pretty__MaybeArgSize_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__MaybeArgSize_27, 0) = ((MR_Box) (mdb__sized_pretty__V_47_47));
#line 398 "sized_pretty.m"
            }
#line 9135 "mdb.sized_pretty.c"
            mdb__sized_pretty__func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9137 "mdb.sized_pretty.c"
            {
#line 9139 "mdb.sized_pretty.c"
              mdb__sized_pretty__SoFar1_33 = mdb__sized_pretty__func_9(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49), mdb__sized_pretty__HeadVar__6_6, mdb__sized_pretty__ArgSize_32, mdb__sized_pretty__Params_4);
            }
#line 390 "sized_pretty.m"
          }
#line 9144 "mdb.sized_pretty.c"
        {
#line 9146 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_49, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_56);
        }
#line 9149 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_56, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9151 "mdb.sized_pretty.c"
        {
#line 9153 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv11_V_48_48 = mdb__sized_pretty__func_10(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_56), mdb__sized_pretty__SoFar1_33, mdb__sized_pretty__Limit_5);
        }
#line 9156 "mdb.sized_pretty.c"
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
#line 9221 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9223 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_MaxFunctors_18;
#line 347 "sized_pretty.m"
    MR_Word mdb__sized_pretty___MaybeReturn_20;

#line 9228 "mdb.sized_pretty.c"
    {
#line 9230 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_18 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), mdb__sized_pretty__Limit_9, mdb__sized_pretty__Params_8);
    }
#line 9233 "mdb.sized_pretty.c"
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
#line 9248 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);

#line 9251 "mdb.sized_pretty.c"
        {
#line 9253 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_37);
        }
#line 9256 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_37, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9258 "mdb.sized_pretty.c"
        {
#line 9260 "mdb.sized_pretty.c"
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
#line 9305 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9307 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv4_MaybeInitArgLimit_25;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_34_34, (MR_Integer) 2)));
#line 9316 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9318 "mdb.sized_pretty.c"
        {
#line 9320 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_3(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_12), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), mdb__sized_pretty__Params_8, mdb__sized_pretty__Limit_9, ((MR_Box) (mdb__sized_pretty__Arity_22)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__FunctorSize_24, &mdb__sized_pretty__conv4_MaybeInitArgLimit_25, &mdb__sized_pretty__NewLimit_26, &mdb__sized_pretty__NewParams_27);
        }
#line 9323 "mdb.sized_pretty.c"
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

#line 365 "sized_pretty.m"
            {
#line 365 "sized_pretty.m"
              mdb__sized_pretty__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 0) = ((MR_Box) (mdb__sized_pretty__Functor_21));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 1) = ((MR_Box) (mdb__sized_pretty__Arity_22));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_36_36, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_31));
#line 365 "sized_pretty.m"
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
#line 9438 "mdb.sized_pretty.c"
  {
#line 9440 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9442 "mdb.sized_pretty.c"
    void MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9444 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__8_8;

#line 9447 "mdb.sized_pretty.c"
    {
#line 9449 "mdb.sized_pretty.c"
      mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_11), ((MR_Box) (mdb__sized_pretty__HeadVar__1_1)), ((MR_Box) (mdb__sized_pretty__HeadVar__2_2)), mdb__sized_pretty__HeadVar__3_3, mdb__sized_pretty__HeadVar__4_4, ((MR_Box) (mdb__sized_pretty__HeadVar__5_5)), ((MR_Box) (mdb__sized_pretty__HeadVar__6_6)), mdb__sized_pretty__HeadVar__7_7, &mdb__sized_pretty__conv1_HeadVar__8_8, mdb__sized_pretty__HeadVar__9_9, mdb__sized_pretty__HeadVar__10_10);
    }
#line 9452 "mdb.sized_pretty.c"
    *mdb__sized_pretty__HeadVar__8_8 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__8_8);
#line 9454 "mdb.sized_pretty.c"
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
#line 9470 "mdb.sized_pretty.c"
  {
#line 9472 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9474 "mdb.sized_pretty.c"
    MR_Integer mdb__sized_pretty__HeadVar__3_3;
#line 9476 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9478 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9481 "mdb.sized_pretty.c"
    {
#line 9483 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9486 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Integer) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9488 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9490 "mdb.sized_pretty.c"
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
#line 9508 "mdb.sized_pretty.c"
  {
#line 9510 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9512 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9514 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9517 "mdb.sized_pretty.c"
    {
#line 9519 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9522 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9524 "mdb.sized_pretty.c"
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
#line 9542 "mdb.sized_pretty.c"
  {
#line 9544 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9546 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__4_4;
#line 9548 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9551 "mdb.sized_pretty.c"
    {
#line 9553 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__4_4 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_5), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2, mdb__sized_pretty__HeadVar__3_3);
    }
#line 9556 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__4_4;
#line 9558 "mdb.sized_pretty.c"
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
#line 9574 "mdb.sized_pretty.c"
  {
#line 9576 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9578 "mdb.sized_pretty.c"
    MR_Word mdb__sized_pretty__HeadVar__3_3;
#line 9580 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9582 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__conv1_HeadVar__3_3;

#line 9585 "mdb.sized_pretty.c"
    {
#line 9587 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9590 "mdb.sized_pretty.c"
    mdb__sized_pretty__HeadVar__3_3 = ((MR_Word) mdb__sized_pretty__conv1_HeadVar__3_3);
#line 9592 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9594 "mdb.sized_pretty.c"
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
#line 9606 "mdb.sized_pretty.c"
  {
#line 9608 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9610 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__1_1;
#line 9612 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_2, (MR_Integer) 0)), (MR_Integer) 6)));

#line 9615 "mdb.sized_pretty.c"
    {
#line 9617 "mdb.sized_pretty.c"
      return mdb__sized_pretty__HeadVar__1_1 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_2));
    }
#line 9620 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__1_1;
#line 9622 "mdb.sized_pretty.c"
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
#line 9638 "mdb.sized_pretty.c"
  {
#line 9640 "mdb.sized_pretty.c"
    MR_bool mdb__sized_pretty__succeeded;
#line 9642 "mdb.sized_pretty.c"
    MR_Box mdb__sized_pretty__HeadVar__3_3;
#line 9644 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 9647 "mdb.sized_pretty.c"
    {
#line 9649 "mdb.sized_pretty.c"
      mdb__sized_pretty__HeadVar__3_3 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_4), mdb__sized_pretty__HeadVar__1_1, mdb__sized_pretty__HeadVar__2_2);
    }
#line 9652 "mdb.sized_pretty.c"
    return mdb__sized_pretty__HeadVar__3_3;
#line 9654 "mdb.sized_pretty.c"
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
#line 9706 "mdb.sized_pretty.c"
    MR_Box MR_CALL (* mdb__sized_pretty__func_0)(MR_Box, MR_Box, MR_Box);
#line 9708 "mdb.sized_pretty.c"
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
#line 9784 "mdb.sized_pretty.c"
    mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39 = (MR_Word) &mdb__sized_pretty_scalar_common_2[0];
#line 9786 "mdb.sized_pretty.c"
    mdb__sized_pretty__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9788 "mdb.sized_pretty.c"
    {
#line 9790 "mdb.sized_pretty.c"
      mdb__sized_pretty__conv1_MaxFunctors_56 = mdb__sized_pretty__func_0(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Params_11)));
    }
#line 9793 "mdb.sized_pretty.c"
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
#line 9808 "mdb.sized_pretty.c"
        MR_Box MR_CALL (* mdb__sized_pretty__func_2)(MR_Box);
#line 9810 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv3_V_70_70;

#line 9813 "mdb.sized_pretty.c"
        {
#line 9815 "mdb.sized_pretty.c"
          mercury__private_builtin__superclass_from_typeclass_info_3_p_0(mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 1, &mdb__sized_pretty__TypeClassInfo_for_measure_75);
        }
#line 9818 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_2 = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_75, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9820 "mdb.sized_pretty.c"
        {
#line 9822 "mdb.sized_pretty.c"
          mdb__sized_pretty__conv3_V_70_70 = mdb__sized_pretty__func_2(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_75));
        }
#line 9825 "mdb.sized_pretty.c"
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
#line 9869 "mdb.sized_pretty.c"
        void MR_CALL (* mdb__sized_pretty__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *);
#line 9871 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv8_FunctorSize_62;
#line 9873 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv7_MaybeInitArgLimit_63;
#line 9875 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv6_NewLimit_64;
#line 9877 "mdb.sized_pretty.c"
        MR_Box mdb__sized_pretty__conv5_NewParams_65;
#line 361 "sized_pretty.m"
        MR_Box mdb__sized_pretty__conv9_SoFar_67;

#line 350 "sized_pretty.m"
        mdb__sized_pretty__Functor_59 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 0)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Arity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 1)));
#line 350 "sized_pretty.m"
        mdb__sized_pretty__Args_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__sized_pretty__V_72_72, (MR_Integer) 2)));
#line 9888 "mdb.sized_pretty.c"
        mdb__sized_pretty__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39, (MR_Integer) 0)), (MR_Integer) 8)));
#line 9890 "mdb.sized_pretty.c"
        {
#line 9892 "mdb.sized_pretty.c"
          mdb__sized_pretty__func_4(((MR_Box) mdb__sized_pretty__TypeClassInfo_for_measure_with_params_39), ((MR_Box) (mdb__sized_pretty__BrowserDb_6)), ((MR_Box) (mdb__sized_pretty__BrowserTerm_7)), ((MR_Box) (mdb__sized_pretty__Params_11)), ((MR_Box) (mdb__sized_pretty__Limit_15)), ((MR_Box) (mdb__sized_pretty__Arity_60)), ((MR_Box) ((MR_Integer) 1)), &mdb__sized_pretty__conv8_FunctorSize_62, &mdb__sized_pretty__conv7_MaybeInitArgLimit_63, &mdb__sized_pretty__conv6_NewLimit_64, &mdb__sized_pretty__conv5_NewParams_65);
        }
#line 9895 "mdb.sized_pretty.c"
        mdb__sized_pretty__FunctorSize_62 = ((MR_Word) mdb__sized_pretty__conv8_FunctorSize_62);
#line 9897 "mdb.sized_pretty.c"
        mdb__sized_pretty__MaybeInitArgLimit_63 = ((MR_Word) mdb__sized_pretty__conv7_MaybeInitArgLimit_63);
#line 9899 "mdb.sized_pretty.c"
        mdb__sized_pretty__NewLimit_64 = ((MR_Word) mdb__sized_pretty__conv6_NewLimit_64);
#line 9901 "mdb.sized_pretty.c"
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

#line 365 "sized_pretty.m"
            {
#line 365 "sized_pretty.m"
              mdb__sized_pretty__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 0) = ((MR_Box) (mdb__sized_pretty__Functor_59));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 1) = ((MR_Box) (mdb__sized_pretty__Arity_60));
#line 365 "sized_pretty.m"
              MR_hl_field(MR_mktag(1), mdb__sized_pretty__V_74_74, 2) = ((MR_Box) (mdb__sized_pretty__MaybeArgSizes_69));
#line 365 "sized_pretty.m"
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
#line 10052 "mdb.sized_pretty.c"
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
#line 315 "sized_pretty.m"
        {
#line 315 "sized_pretty.m"
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
#line 312 "sized_pretty.m"
        {
#line 312 "sized_pretty.m"
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
