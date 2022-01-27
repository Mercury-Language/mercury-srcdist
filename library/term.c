/*
** Automatically generated from `term.m'
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




#line 93 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1];

#line 96 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0;

#line 99 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1];

#line 102 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

#line 105 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2];

#line 108 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

#line 111 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

#line 114 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

#line 117 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

#line 120 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

#line 123 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1];

#line 126 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_5;

#line 129 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

#line 132 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

#line 135 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

#line 138 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3];

#line 141 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

#line 144 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6];

#line 147 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[6];

#line 150 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

#line 153 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

#line 156 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

#line 159 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

#line 162 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

#line 165 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

#line 168 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

#line 171 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

#line 174 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

#line 177 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

#line 180 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0;

#line 183 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1;

#line 186 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2;

#line 189 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3;

#line 192 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4];

#line 195 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4];

#line 198 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4];

#line 201 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

#line 204 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 207 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

#line 210 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 213 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

#line 216 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 219 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

#line 222 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

#line 225 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 228 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

#line 231 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

#line 234 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

#line 237 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

#line 240 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

#line 243 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

#line 246 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

#line 249 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

#line 252 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

#line 255 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

#line 258 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

#line 261 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

#line 264 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

#line 267 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 270 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 272 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 275 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 278 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 280 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 282 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 285 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 288 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 290 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 293 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 296 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 298 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 300 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 303 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 306 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 308 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 311 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 314 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 316 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 318 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 321 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
#line 324 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 326 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 329 "term.c"
static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
#line 332 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 334 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 336 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 339 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 342 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 344 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 346 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 349 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 352 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 354 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 356 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 358 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 361 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 364 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 366 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 369 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 372 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 374 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 376 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 379 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 382 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 384 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 386 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 389 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 392 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 394 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 396 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 398 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 401 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 404 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 406 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 409 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 412 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 414 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 416 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 419 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 422 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 424 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 426 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 429 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 432 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 434 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 436 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 438 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 441 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 444 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 446 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 449 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 452 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 454 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 456 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 459 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 462 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 464 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 466 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 469 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 472 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 474 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 476 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 478 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 481 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 484 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 486 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 489 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 492 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 494 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 496 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 499 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 502 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 504 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 506 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 509 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 512 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 514 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 516 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 518 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 521 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 524 "term.c"
  MR_Box mercury__term__closure_arg,
#line 526 "term.c"
  MR_Box mercury__term__wrapper_arg_1);

#line 529 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 532 "term.c"
  MR_Box mercury__term__closure_arg,
#line 534 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 536 "term.c"
  MR_Box * mercury__term__wrapper_arg_2);

#line 522 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 522 "list.int"
  MR_Word mercury__term__V_13_13,
#line 522 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 522 "list.int"
  MR_Word mercury__term__HeadVar__2_2);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1028 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1028 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1028 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1028 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 915 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 915 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 915 "term.m"
  MR_Word mercury__term__X_6,
#line 915 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 915 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 915 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 915 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14);


static /* final */ const MR_Box mercury__term_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__term_scalar_common_1[3][2] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 781 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 786 "term.c"
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

#line 801 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 806 "term.c"
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

#line 821 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_integer_base_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

#line 827 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2 = {
  (MR_String) "big_integer",
  (MR_Integer) 2,
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

#line 842 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 847 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3 = {
  (MR_String) "string",
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

#line 862 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 867 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4 = {
  (MR_String) "float",
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

#line 882 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 887 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_5 = {
  (MR_String) "implementation_defined",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__term__term__field_types_const_0_5,
  NULL,
  NULL,
  NULL
};

#line 902 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 907 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 912 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 917 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5
};

#line 924 "term.c"
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__term__term__du_stag_ordered_const_0_3
  }
};

#line 948 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_2,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_3
};

#line 958 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 968 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_const_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____const_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____const_0_0_10001)),
  (MR_String) "term",
  (MR_String) "const",
  {     mercury__term__term__du_name_ordered_const_0 },
  {     mercury__term__term__du_ptag_ordered_const_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_const_0
};

#line 985 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 991 "term.c"
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

#line 1006 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1011 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1020 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1025 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1030 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "context",
  {     mercury__term__term__du_name_ordered_context_0 },
  {     mercury__term__term__du_ptag_ordered_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_context_0
};

#line 1047 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1053 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1058 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1063 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1068 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_generic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__term____Unify____generic_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____generic_0_0_10001)),
  (MR_String) "term",
  (MR_String) "generic",
  {     mercury__term__term__enum_name_ordered_generic_0 },
  {     mercury__term__term__enum_value_ordered_generic_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_generic_0
};

#line 1085 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  (MR_Integer) 0
};

#line 1091 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  (MR_Integer) 1
};

#line 1097 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  (MR_Integer) 2
};

#line 1103 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  (MR_Integer) 3
};

#line 1109 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1,
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3
};

#line 1117 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3,
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1
};

#line 1125 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1133 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_integer_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_base_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_base",
  {     mercury__term__term__enum_name_ordered_integer_base_0 },
  {     mercury__term__term__enum_value_ordered_integer_base_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_integer_base_0
};

#line 1150 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1158 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1167 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____renaming_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_1_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1184 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1192 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1201 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____renaming_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_0_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1218 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1226 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1235 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____substitution_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_1_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1252 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1260 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1269 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____substitution_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_0_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1286 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1294 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1301 "term.c"
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

#line 1316 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1322 "term.c"
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

#line 1337 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1342 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1347 "term.c"
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

#line 1361 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1367 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1373 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     mercury__term__term__du_name_ordered_term_1 },
  {     mercury__term__term__du_ptag_ordered_term_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_1
};

#line 1390 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1407 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 1412 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1419 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     &mercury__term__term__notag_functor_desc_var_1 },
  {     &mercury__term__term__notag_functor_desc_var_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_1
};

#line 1436 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____var_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_0_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1453 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 1458 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1465 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_supply_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_supply_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_supply_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var_supply",
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_supply_1
};

#line 1482 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1493 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 1496 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1498 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1500 "term.c"
{
#line 1502 "term.c"
  {
#line 1504 "term.c"
    MR_bool mercury__term__succeeded;

#line 1507 "term.c"
    {
#line 1509 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1512 "term.c"
    return mercury__term__succeeded;
#line 1514 "term.c"
  }
#line 1516 "term.c"
}

#line 1519 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 1522 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1524 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1526 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1528 "term.c"
{
#line 1530 "term.c"
  {
#line 1532 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1535 "term.c"
    {
#line 1537 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1540 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1542 "term.c"
  }
#line 1544 "term.c"
}

#line 1547 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 1550 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1552 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1554 "term.c"
{
#line 1556 "term.c"
  {
#line 1558 "term.c"
    MR_bool mercury__term__succeeded;

#line 1561 "term.c"
    {
#line 1563 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1566 "term.c"
    return mercury__term__succeeded;
#line 1568 "term.c"
  }
#line 1570 "term.c"
}

#line 1573 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 1576 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1578 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1580 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1582 "term.c"
{
#line 1584 "term.c"
  {
#line 1586 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1589 "term.c"
    {
#line 1591 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1594 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1596 "term.c"
  }
#line 1598 "term.c"
}

#line 1601 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 1604 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1606 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1608 "term.c"
{
#line 1610 "term.c"
  {
#line 1612 "term.c"
    MR_bool mercury__term__succeeded;

#line 1615 "term.c"
    {
#line 1617 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 1620 "term.c"
    return mercury__term__succeeded;
#line 1622 "term.c"
  }
#line 1624 "term.c"
}

#line 1627 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 1630 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1632 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1634 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1636 "term.c"
{
#line 1638 "term.c"
  {
#line 1640 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1643 "term.c"
    {
#line 1645 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 1648 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1650 "term.c"
  }
#line 1652 "term.c"
}

#line 1655 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
#line 1658 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1660 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1662 "term.c"
{
#line 1664 "term.c"
  {
#line 1666 "term.c"
    MR_bool mercury__term__succeeded;

#line 1669 "term.c"
    {
#line 1671 "term.c"
      mercury__term__succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1674 "term.c"
    return mercury__term__succeeded;
#line 1676 "term.c"
  }
#line 1678 "term.c"
}

#line 1681 "term.c"
static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
#line 1684 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1686 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1688 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1690 "term.c"
{
#line 1692 "term.c"
  {
#line 1694 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1697 "term.c"
    {
#line 1699 "term.c"
      mercury__term____Compare____integer_base_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1702 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1704 "term.c"
  }
#line 1706 "term.c"
}

#line 1709 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 1712 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1714 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1716 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1718 "term.c"
{
#line 1720 "term.c"
  {
#line 1722 "term.c"
    MR_bool mercury__term__succeeded;

#line 1725 "term.c"
    {
#line 1727 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1730 "term.c"
    return mercury__term__succeeded;
#line 1732 "term.c"
  }
#line 1734 "term.c"
}

#line 1737 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 1740 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1742 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1744 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1746 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1748 "term.c"
{
#line 1750 "term.c"
  {
#line 1752 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1755 "term.c"
    {
#line 1757 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1760 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1762 "term.c"
  }
#line 1764 "term.c"
}

#line 1767 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 1770 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1772 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1774 "term.c"
{
#line 1776 "term.c"
  {
#line 1778 "term.c"
    MR_bool mercury__term__succeeded;

#line 1781 "term.c"
    {
#line 1783 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1786 "term.c"
    return mercury__term__succeeded;
#line 1788 "term.c"
  }
#line 1790 "term.c"
}

#line 1793 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 1796 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1798 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1800 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1802 "term.c"
{
#line 1804 "term.c"
  {
#line 1806 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1809 "term.c"
    {
#line 1811 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1814 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1816 "term.c"
  }
#line 1818 "term.c"
}

#line 1821 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 1824 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1826 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1828 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1830 "term.c"
{
#line 1832 "term.c"
  {
#line 1834 "term.c"
    MR_bool mercury__term__succeeded;

#line 1837 "term.c"
    {
#line 1839 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1842 "term.c"
    return mercury__term__succeeded;
#line 1844 "term.c"
  }
#line 1846 "term.c"
}

#line 1849 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 1852 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1854 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1856 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1858 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1860 "term.c"
{
#line 1862 "term.c"
  {
#line 1864 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1867 "term.c"
    {
#line 1869 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1872 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1874 "term.c"
  }
#line 1876 "term.c"
}

#line 1879 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 1882 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1884 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1886 "term.c"
{
#line 1888 "term.c"
  {
#line 1890 "term.c"
    MR_bool mercury__term__succeeded;

#line 1893 "term.c"
    {
#line 1895 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1898 "term.c"
    return mercury__term__succeeded;
#line 1900 "term.c"
  }
#line 1902 "term.c"
}

#line 1905 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 1908 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1910 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1912 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1914 "term.c"
{
#line 1916 "term.c"
  {
#line 1918 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1921 "term.c"
    {
#line 1923 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1926 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1928 "term.c"
  }
#line 1930 "term.c"
}

#line 1933 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 1936 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1938 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1940 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1942 "term.c"
{
#line 1944 "term.c"
  {
#line 1946 "term.c"
    MR_bool mercury__term__succeeded;

#line 1949 "term.c"
    {
#line 1951 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1954 "term.c"
    return mercury__term__succeeded;
#line 1956 "term.c"
  }
#line 1958 "term.c"
}

#line 1961 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 1964 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1966 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1968 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1970 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1972 "term.c"
{
#line 1974 "term.c"
  {
#line 1976 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1979 "term.c"
    {
#line 1981 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1984 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1986 "term.c"
  }
#line 1988 "term.c"
}

#line 1991 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 1994 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1996 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1998 "term.c"
{
#line 2000 "term.c"
  {
#line 2002 "term.c"
    MR_bool mercury__term__succeeded;

#line 2005 "term.c"
    {
#line 2007 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2010 "term.c"
    return mercury__term__succeeded;
#line 2012 "term.c"
  }
#line 2014 "term.c"
}

#line 2017 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2020 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2022 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2024 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2026 "term.c"
{
#line 2028 "term.c"
  {
#line 2030 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2033 "term.c"
    {
#line 2035 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2038 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2040 "term.c"
  }
#line 2042 "term.c"
}

#line 2045 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 2048 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2050 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2052 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2054 "term.c"
{
#line 2056 "term.c"
  {
#line 2058 "term.c"
    MR_bool mercury__term__succeeded;

#line 2061 "term.c"
    {
#line 2063 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2066 "term.c"
    return mercury__term__succeeded;
#line 2068 "term.c"
  }
#line 2070 "term.c"
}

#line 2073 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 2076 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2078 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2080 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2082 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2084 "term.c"
{
#line 2086 "term.c"
  {
#line 2088 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2091 "term.c"
    {
#line 2093 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2096 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2098 "term.c"
  }
#line 2100 "term.c"
}

#line 2103 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 2106 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2108 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2110 "term.c"
{
#line 2112 "term.c"
  {
#line 2114 "term.c"
    MR_bool mercury__term__succeeded;

#line 2117 "term.c"
    {
#line 2119 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2122 "term.c"
    return mercury__term__succeeded;
#line 2124 "term.c"
  }
#line 2126 "term.c"
}

#line 2129 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 2132 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2134 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2136 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2138 "term.c"
{
#line 2140 "term.c"
  {
#line 2142 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2145 "term.c"
    {
#line 2147 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2150 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2152 "term.c"
  }
#line 2154 "term.c"
}

#line 2157 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 2160 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2162 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2164 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2166 "term.c"
{
#line 2168 "term.c"
  {
#line 2170 "term.c"
    MR_bool mercury__term__succeeded;

#line 2173 "term.c"
    {
#line 2175 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2178 "term.c"
    return mercury__term__succeeded;
#line 2180 "term.c"
  }
#line 2182 "term.c"
}

#line 2185 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 2188 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2190 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2192 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2194 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2196 "term.c"
{
#line 2198 "term.c"
  {
#line 2200 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2203 "term.c"
    {
#line 2205 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2208 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2210 "term.c"
  }
#line 2212 "term.c"
}

#line 2215 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 2218 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2220 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 2222 "term.c"
{
#line 2224 "term.c"
  {
#line 2226 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 2228 "term.c"
    MR_Box mercury__term__closure;
#line 2230 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 2233 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2235 "term.c"
    {
#line 2237 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 2240 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2242 "term.c"
    return mercury__term__wrapper_arg_2;
#line 2244 "term.c"
  }
#line 2246 "term.c"
}

#line 2249 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 2252 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2254 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2256 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 2258 "term.c"
{
#line 2260 "term.c"
  {
#line 2262 "term.c"
    MR_bool mercury__term__succeeded;
#line 2264 "term.c"
    MR_Box mercury__term__closure;
#line 2266 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 2269 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2271 "term.c"
    {
#line 2273 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 2276 "term.c"
    if (mercury__term__succeeded)
#line 2278 "term.c"
      {
#line 2280 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2282 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 2284 "term.c"
      }
#line 2286 "term.c"
    return mercury__term__succeeded;
#line 2288 "term.c"
  }
#line 2290 "term.c"
}

#line 522 "list.int"
static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
#line 522 "list.int"
  MR_Word mercury__term__V_13_13,
#line 522 "list.int"
  MR_Word mercury__term__HeadVar__1_1,
#line 522 "list.int"
  MR_Word mercury__term__HeadVar__2_2)
#line 522 "list.int"
{
#line 78 "list.opt"
  while (MR_TRUE)
#line 78 "list.opt"
    {
#line 78 "list.opt"
      /* tailcall optimized into a loop */
#line 78 "list.opt"
      {
#line 78 "list.opt"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 78 "list.opt"
        MR_Word mercury__term__V_10_10;
#line 78 "list.opt"
        MR_Word mercury__term__V_11_11;

#line 78 "list.opt"
        if (mercury__term__succeeded)
#line 78 "list.opt"
          {
#line 78 "list.opt"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "list.opt"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "list.opt"
            {
#line 78 "list.opt"
              MR_Integer mercury__term__V_14_14 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 78 "list.opt"
              MR_Integer mercury__term__V_15_15 = (MR_Integer) mercury__term__V_11_11;

#line 78 "list.opt"
              mercury__term__succeeded = (mercury__term__V_14_14 == mercury__term__V_15_15);
#line 78 "list.opt"
            }
#line 78 "list.opt"
            if (!(mercury__term__succeeded))
#line 80 "list.opt"
              {
#line 80 "list.opt"
                /* direct tailcall eliminated */
#line 80 "list.opt"
                {
#line 80 "list.opt"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__V_10_10;

#line 80 "list.opt"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 80 "list.opt"
                }
#line 80 "list.opt"
                continue;
#line 80 "list.opt"
              }
#line 78 "list.opt"
          }
#line 78 "list.opt"
        return mercury__term__succeeded;
#line 78 "list.opt"
      }
#line 78 "list.opt"
      break;
#line 78 "list.opt"
    }
#line 522 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__term__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 67 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 67 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 67 "term.m"
{
#line 67 "term.m"
  {
#line 67 "term.m"
    MR_bool mercury__term__succeeded;

#line 67 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "term.m"
  }
#line 67 "term.m"
}

#line 67 "term.m"
MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 67 "term.m"
{
#line 67 "term.m"
  {
#line 67 "term.m"
    return MR_TRUE;
#line 67 "term.m"
  }
#line 67 "term.m"
}

#line 652 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
#line 652 "term.m"
{
#line 1284 "term.m"
  {
#line 1284 "term.m"
    MR_bool mercury__term__succeeded;

#line 1284 "term.m"
  }
#line 652 "term.m"
}

#line 745 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 745 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 745 "term.m"
  MR_Integer mercury__term__X_4,
#line 745 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 745 "term.m"
{
#line 752 "term.m"
  {
#line 752 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 752 "term.m"
    return MR_TRUE;
#line 752 "term.m"
  }
#line 745 "term.m"
}

#line 744 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 744 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 744 "term.m"
  MR_Word mercury__term__X_4)
#line 744 "term.m"
{
#line 754 "term.m"
  {
#line 754 "term.m"
    MR_bool mercury__term__succeeded;
#line 754 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 754 "term.m"
    return mercury__term__HeadVar__2_2;
#line 754 "term.m"
  }
#line 744 "term.m"
}

#line 725 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 725 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 725 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 725 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 725 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 725 "term.m"
{
#line 725 "term.m"
  {
#line 725 "term.m"
    MR_bool mercury__term__succeeded;
#line 725 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 725 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 725 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 725 "term.m"
    if (mercury__term__succeeded)
#line 2506 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 725 "term.m"
    else
#line 725 "term.m"
      {
#line 725 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 725 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 34 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 37 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
        else
#line 42 "private_builtin.opt"
          {
#line 39 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 42 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
          }
#line 725 "term.m"
      }
#line 725 "term.m"
  }
#line 725 "term.m"
}

#line 725 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 725 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 725 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 725 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 725 "term.m"
{
#line 725 "term.m"
  {
#line 725 "term.m"
    MR_bool mercury__term__succeeded;
#line 725 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 725 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 725 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 725 "term.m"
    if (mercury__term__succeeded)
#line 725 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 725 "term.m"
    else
#line 725 "term.m"
      {
#line 725 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 725 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2581 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 725 "term.m"
      }
#line 725 "term.m"
    return mercury__term__succeeded;
#line 725 "term.m"
  }
#line 725 "term.m"
}

#line 722 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 722 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 722 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 722 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 722 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 722 "term.m"
{
#line 722 "term.m"
  {
#line 722 "term.m"
    MR_bool mercury__term__succeeded;
#line 722 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 722 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 722 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 722 "term.m"
    if (mercury__term__succeeded)
#line 2618 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 722 "term.m"
    else
#line 722 "term.m"
      {
#line 722 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 722 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 34 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 37 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
        else
#line 42 "private_builtin.opt"
          {
#line 39 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 42 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
          }
#line 722 "term.m"
      }
#line 722 "term.m"
  }
#line 722 "term.m"
}

#line 722 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 722 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 722 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 722 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 722 "term.m"
{
#line 722 "term.m"
  {
#line 722 "term.m"
    MR_bool mercury__term__succeeded;
#line 722 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 722 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 722 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 722 "term.m"
    if (mercury__term__succeeded)
#line 722 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
    else
#line 722 "term.m"
      {
#line 722 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 722 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2693 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 722 "term.m"
      }
#line 722 "term.m"
    return mercury__term__succeeded;
#line 722 "term.m"
  }
#line 722 "term.m"
}

#line 71 "term.m"
void MR_CALL 
mercury__term____Compare____var_0_0(
#line 71 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 71 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 71 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 71 "term.m"
{
#line 71 "term.m"
  {
#line 71 "term.m"
    MR_bool mercury__term__succeeded;
#line 71 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[0];
#line 71 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 71 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 71 "term.m"
    {
#line 71 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 71 "term.m"
      return;
    }
#line 71 "term.m"
  }
#line 71 "term.m"
}

#line 71 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
#line 71 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 71 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 71 "term.m"
{
#line 71 "term.m"
  {
#line 71 "term.m"
    MR_bool mercury__term__succeeded;
#line 71 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 71 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;
#line 722 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 722 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 722 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 722 "term.m"
    if (mercury__term__succeeded)
#line 722 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
    else
#line 722 "term.m"
      {
#line 722 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 722 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 2775 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 722 "term.m"
      }
#line 71 "term.m"
    return mercury__term__succeeded;
#line 71 "term.m"
  }
#line 71 "term.m"
}

#line 39 "term.m"
void MR_CALL 
mercury__term____Compare____term_1_0(
#line 39 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_29,
#line 39 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 39 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 39 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 39 "term.m"
{
#line 39 "term.m"
  {
#line 39 "term.m"
    MR_bool mercury__term__succeeded;
#line 39 "term.m"
    MR_Integer mercury__term__CastX_27 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 39 "term.m"
    MR_Integer mercury__term__CastY_28 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 39 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_27 == mercury__term__CastY_28);
#line 39 "term.m"
    if (mercury__term__succeeded)
#line 2812 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "term.m"
    else
#line 39 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 39 "term.m"
      {
#line 39 "term.m"
        MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "term.m"
        MR_Word mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "term.m"
        MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 39 "term.m"
          {
#line 39 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "term.m"
            MR_Word mercury__term__V_10_10;

#line 39 "term.m"
            {
#line 39 "term.m"
              mercury__term____Compare____const_0_0(&mercury__term__V_10_10, mercury__term__V_41_41, mercury__term__V_7_7);
            }
#line 2845 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == (MR_Integer) 0);
#line 39 "term.m"
            mercury__term__succeeded = !(mercury__term__succeeded);
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 39 "term.m"
              *mercury__term__HeadVar__1_1 = mercury__term__V_10_10;
#line 39 "term.m"
            else
#line 39 "term.m"
              {
#line 39 "term.m"
                MR_Word mercury__term__V_11_11;
#line 39 "term.m"
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 39 "term.m"
                MR_Word mercury__term__TypeInfo_35_35;

#line 2864 "term.c"
                {
#line 2866 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2868 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 2870 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 2872 "term.c"
                }
#line 39 "term.m"
                {
#line 39 "term.m"
                  mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                }
#line 2879 "term.c"
                mercury__term__succeeded = (mercury__term__V_11_11 == (MR_Integer) 0);
#line 39 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 39 "term.m"
                if (mercury__term__succeeded)
#line 39 "term.m"
                  *mercury__term__HeadVar__1_1 = mercury__term__V_11_11;
#line 39 "term.m"
                else
#line 39 "term.m"
                  {
#line 39 "term.m"
                    mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_39_39, mercury__term__V_9_9);
#line 39 "term.m"
                    return;
                  }
#line 39 "term.m"
              }
#line 39 "term.m"
          }
#line 39 "term.m"
        else
#line 2902 "term.c"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 39 "term.m"
      }
#line 39 "term.m"
    else
#line 39 "term.m"
      {
#line 39 "term.m"
        MR_Word mercury__term__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "term.m"
        MR_Word mercury__term__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 39 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2917 "term.c"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 39 "term.m"
        else
#line 39 "term.m"
          {
#line 39 "term.m"
            MR_Word mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "term.m"
            MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "term.m"
            MR_Word mercury__term__V_26_26;
#line 39 "term.m"
            MR_Integer mercury__term__V_44_44 = (MR_Integer) mercury__term__V_43_43;
#line 39 "term.m"
            MR_Integer mercury__term__V_45_45 = (MR_Integer) mercury__term__V_24_24;

#line 34 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_44_44 < mercury__term__V_45_45);
#line 37 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
              mercury__term__V_26_26 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
            else
#line 42 "private_builtin.opt"
              {
#line 39 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_44_44 == mercury__term__V_45_45);
#line 42 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
                  mercury__term__V_26_26 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  mercury__term__V_26_26 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
              }
#line 2956 "term.c"
            mercury__term__succeeded = (mercury__term__V_26_26 == (MR_Integer) 0);
#line 39 "term.m"
            mercury__term__succeeded = !(mercury__term__succeeded);
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 39 "term.m"
              *mercury__term__HeadVar__1_1 = mercury__term__V_26_26;
#line 39 "term.m"
            else
#line 39 "term.m"
              {
#line 39 "term.m"
                mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_42_42, mercury__term__V_25_25);
#line 39 "term.m"
                return;
              }
#line 39 "term.m"
          }
#line 39 "term.m"
      }
#line 39 "term.m"
  }
#line 39 "term.m"
}

#line 39 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
#line 39 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 39 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 39 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 39 "term.m"
{
#line 39 "term.m"
  {
#line 39 "term.m"
    MR_bool mercury__term__succeeded;
#line 39 "term.m"
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 39 "term.m"
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 39 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
#line 39 "term.m"
    if (mercury__term__succeeded)
#line 39 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 39 "term.m"
    else
#line 39 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 39 "term.m"
      {
#line 39 "term.m"
        MR_Word mercury__term__TypeCtorInfo_16_16;
#line 39 "term.m"
        MR_Word mercury__term__TypeInfo_17_17;
#line 39 "term.m"
        MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "term.m"
        MR_Word mercury__term__V_6_6;
#line 39 "term.m"
        MR_Word mercury__term__V_7_7;
#line 39 "term.m"
        MR_Word mercury__term__V_8_8;

#line 39 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 39 "term.m"
        if (mercury__term__succeeded)
#line 39 "term.m"
          {
#line 39 "term.m"
            mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "term.m"
            mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "term.m"
            mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 3043 "term.c"
            {
#line 3045 "term.c"
              mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
            }
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 39 "term.m"
              {
#line 3052 "term.c"
                mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3054 "term.c"
                {
#line 3056 "term.c"
                  mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3058 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 3060 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 3062 "term.c"
                }
#line 3064 "term.c"
                {
#line 3066 "term.c"
                  mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                }
#line 39 "term.m"
                if (mercury__term__succeeded)
#line 3071 "term.c"
                  {
#line 3073 "term.c"
                    return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_8_8);
                  }
#line 39 "term.m"
              }
#line 39 "term.m"
          }
#line 39 "term.m"
      }
#line 39 "term.m"
    else
#line 39 "term.m"
      {
#line 39 "term.m"
        MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "term.m"
        MR_Word mercury__term__V_11_11;
#line 39 "term.m"
        MR_Word mercury__term__V_12_12;
#line 722 "term.m"
        MR_Integer mercury__term__CastX_22;
#line 722 "term.m"
        MR_Integer mercury__term__CastY_23;

#line 39 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 39 "term.m"
        if (mercury__term__succeeded)
#line 39 "term.m"
          {
#line 39 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "term.m"
            mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 722 "term.m"
            mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 722 "term.m"
            mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 722 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 722 "term.m"
            if (mercury__term__succeeded)
#line 722 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
            else
#line 722 "term.m"
              {
#line 722 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 722 "term.m"
                MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 3128 "term.c"
                mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 722 "term.m"
              }
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 3134 "term.c"
              {
#line 3136 "term.c"
                return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_10_10, mercury__term__V_12_12);
              }
#line 39 "term.m"
          }
#line 39 "term.m"
      }
#line 39 "term.m"
    return mercury__term__succeeded;
#line 39 "term.m"
  }
#line 39 "term.m"
}

#line 70 "term.m"
void MR_CALL 
mercury__term____Compare____term_0_0(
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
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[1];
#line 70 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 70 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 70 "term.m"
    {
#line 70 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 70 "term.m"
      return;
    }
#line 70 "term.m"
  }
#line 70 "term.m"
}

#line 70 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_0_0(
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
    MR_Word mercury__term__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 70 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 70 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 70 "term.m"
    {
#line 70 "term.m"
      return mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeCtorInfo_5_5, mercury__term__Cast_HeadVar1_3, mercury__term__Cast_HeadVar2_4);
    }
#line 70 "term.m"
    return mercury__term__succeeded;
#line 70 "term.m"
  }
#line 70 "term.m"
}

#line 127 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_1_0(
#line 127 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 127 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 127 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 127 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 127 "term.m"
{
#line 127 "term.m"
  {
#line 127 "term.m"
    MR_bool mercury__term__succeeded;
#line 127 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 127 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 127 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9;
#line 127 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 127 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 127 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 3246 "term.c"
    {
#line 3248 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3250 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3252 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3254 "term.c"
    }
#line 3256 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3258 "term.c"
    {
#line 3260 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3262 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 3264 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3266 "term.c"
    }
#line 127 "term.m"
    {
#line 127 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_10_10, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 127 "term.m"
      return;
    }
#line 127 "term.m"
  }
#line 127 "term.m"
}

#line 127 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
#line 127 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 127 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 127 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 127 "term.m"
{
#line 127 "term.m"
  {
#line 127 "term.m"
    MR_bool mercury__term__succeeded;
#line 127 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 127 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 127 "term.m"
    MR_Word mercury__term__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 127 "term.m"
    MR_Word mercury__term__TypeInfo_9_9;
#line 127 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 127 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 3308 "term.c"
    {
#line 3310 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3312 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3314 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3316 "term.c"
    }
#line 3318 "term.c"
    {
#line 3320 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3322 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 3324 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3326 "term.c"
    }
#line 127 "term.m"
    {
#line 127 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_9_9, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 127 "term.m"
    return mercury__term__succeeded;
#line 127 "term.m"
  }
#line 127 "term.m"
}

#line 128 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_0_0(
#line 128 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 128 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 128 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 128 "term.m"
{
#line 128 "term.m"
  {
#line 128 "term.m"
    MR_bool mercury__term__succeeded;
#line 128 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 128 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 128 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 128 "term.m"
    {
#line 128 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 128 "term.m"
      return;
    }
#line 128 "term.m"
  }
#line 128 "term.m"
}

#line 128 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
#line 128 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 128 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 128 "term.m"
{
#line 128 "term.m"
  {
#line 128 "term.m"
    MR_bool mercury__term__succeeded;
#line 128 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 128 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 128 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 128 "term.m"
    {
#line 128 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 128 "term.m"
    return mercury__term__succeeded;
#line 128 "term.m"
  }
#line 128 "term.m"
}

#line 124 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_1_0(
#line 124 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 124 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 124 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 124 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 124 "term.m"
{
#line 124 "term.m"
  {
#line 124 "term.m"
    MR_bool mercury__term__succeeded;
#line 124 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 124 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 124 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 124 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 3432 "term.c"
    {
#line 3434 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3436 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3438 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3440 "term.c"
    }
#line 124 "term.m"
    {
#line 124 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_8_8, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 124 "term.m"
      return;
    }
#line 124 "term.m"
  }
#line 124 "term.m"
}

#line 124 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
#line 124 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 124 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 124 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 124 "term.m"
{
#line 124 "term.m"
  {
#line 124 "term.m"
    MR_bool mercury__term__succeeded;
#line 124 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 124 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 124 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 124 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 3478 "term.c"
    {
#line 3480 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3482 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3484 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3486 "term.c"
    }
#line 124 "term.m"
    {
#line 124 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_7_7, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 124 "term.m"
    return mercury__term__succeeded;
#line 124 "term.m"
  }
#line 124 "term.m"
}

#line 125 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_0_0(
#line 125 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 125 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 125 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 125 "term.m"
{
#line 125 "term.m"
  {
#line 125 "term.m"
    MR_bool mercury__term__succeeded;
#line 125 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 125 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 125 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 125 "term.m"
    {
#line 125 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 125 "term.m"
      return;
    }
#line 125 "term.m"
  }
#line 125 "term.m"
}

#line 125 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
#line 125 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 125 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 125 "term.m"
{
#line 125 "term.m"
  {
#line 125 "term.m"
    MR_bool mercury__term__succeeded;
#line 125 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 125 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 125 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 125 "term.m"
    {
#line 125 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 125 "term.m"
    return mercury__term__succeeded;
#line 125 "term.m"
  }
#line 125 "term.m"
}

#line 61 "term.m"
void MR_CALL 
mercury__term____Compare____integer_base_0_0(
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
    MR_Integer mercury__term__Cast_HeadVar1_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 61 "term.m"
    MR_Integer mercury__term__Cast_HeadVar2_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 34 "private_builtin.opt"
    mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 < mercury__term__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 == mercury__term__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
      }
#line 61 "term.m"
  }
#line 61 "term.m"
}

#line 61 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0(
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__2_1,
#line 61 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 61 "term.m"
{
#line 3622 "term.c"
  {
#line 3624 "term.c"
    MR_bool mercury__term__succeeded = (mercury__term__HeadVar__2_1 == mercury__term__HeadVar__2_2);

#line 3627 "term.c"
    return mercury__term__succeeded;
#line 3629 "term.c"
  }
#line 61 "term.m"
}

#line 67 "term.m"
void MR_CALL 
mercury__term____Compare____generic_0_0(
#line 67 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 67 "term.m"
{
#line 67 "term.m"
  {
#line 67 "term.m"
    MR_bool mercury__term__succeeded;

#line 67 "term.m"
    {
#line 67 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__term__HeadVar__1_1);
#line 67 "term.m"
      return;
    }
#line 67 "term.m"
  }
#line 67 "term.m"
}

#line 67 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____generic_0_0(void)
#line 67 "term.m"
{
#line 67 "term.m"
  {
#line 67 "term.m"
    MR_bool mercury__term__succeeded;

#line 67 "term.m"
    {
#line 67 "term.m"
      return mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 67 "term.m"
    return mercury__term__succeeded;
#line 67 "term.m"
  }
#line 67 "term.m"
}

#line 672 "term.m"
void MR_CALL 
mercury__term____Compare____context_0_0(
#line 672 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 672 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 672 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 672 "term.m"
{
#line 672 "term.m"
  {
#line 672 "term.m"
    MR_bool mercury__term__succeeded;
#line 672 "term.m"
    MR_Integer mercury__term__CastX_9 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 672 "term.m"
    MR_Integer mercury__term__CastY_10 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 672 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_9 == mercury__term__CastY_10);
#line 672 "term.m"
    if (mercury__term__succeeded)
#line 3704 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 672 "term.m"
    else
#line 672 "term.m"
      {
#line 672 "term.m"
        MR_String mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "term.m"
        MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 672 "term.m"
        MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 672 "term.m"
        MR_Integer mercury__term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 672 "term.m"
        MR_Word mercury__term__V_8_8;
#line 672 "term.m"
        MR_Integer mercury__term__V_7_16;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_4_4 ;
	S2 =  mercury__term__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3738 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_16  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_7_16 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 72 "private_builtin.opt"
          mercury__term__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          {
#line 75 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_7_16 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 77 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
            else
#line 79 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
          }
#line 3767 "term.c"
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
#line 672 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 672 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
#line 672 "term.m"
        else
#line 37 "private_builtin.opt"
          {
#line 34 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_5_5 < mercury__term__V_7_7);
#line 37 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
            else
#line 42 "private_builtin.opt"
              {
#line 39 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_7_7);
#line 42 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
              }
#line 37 "private_builtin.opt"
          }
#line 672 "term.m"
      }
#line 672 "term.m"
  }
#line 672 "term.m"
}

#line 672 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
#line 672 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 672 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 672 "term.m"
{
#line 672 "term.m"
  {
#line 672 "term.m"
    MR_bool mercury__term__succeeded;
#line 672 "term.m"
    MR_Integer mercury__term__CastX_7 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 672 "term.m"
    MR_Integer mercury__term__CastY_8 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 672 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_7 == mercury__term__CastY_8);
#line 672 "term.m"
    if (mercury__term__succeeded)
#line 672 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 672 "term.m"
    else
#line 672 "term.m"
      {
#line 672 "term.m"
        MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 672 "term.m"
        MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 672 "term.m"
        MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 672 "term.m"
        MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 3847 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 3851 "term.c"
          mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_6_6);
#line 672 "term.m"
      }
#line 672 "term.m"
    return mercury__term__succeeded;
#line 672 "term.m"
  }
#line 672 "term.m"
}

#line 52 "term.m"
void MR_CALL 
mercury__term____Compare____const_0_0(
#line 52 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 52 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 52 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 52 "term.m"
{
#line 52 "term.m"
  {
#line 52 "term.m"
    MR_bool mercury__term__succeeded;
#line 52 "term.m"
    MR_Integer mercury__term__CastX_89 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 52 "term.m"
    MR_Integer mercury__term__CastY_90 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 52 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_89 == mercury__term__CastY_90);
#line 52 "term.m"
    if (mercury__term__succeeded)
#line 3886 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "term.m"
    else
#line 52 "term.m"
#line 52 "term.m"
      switch (MR_tag((MR_Word) mercury__term__HeadVar__2_2)) {
#line 52 "term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
        case (MR_Integer) 0:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_String mercury__term__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
#line 52 "term.m"
            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
              case (MR_Integer) 0:
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "term.m"
                  MR_Integer mercury__term__V_7_110;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_98_98 ;
	S2 =  mercury__term__V_5_5 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3931 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_110  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_7_110 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 72 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_7_110 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 77 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 3966 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 2:
#line 3972 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 3985 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 3991 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 3997 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
            }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 1:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_Integer mercury__term__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
#line 52 "term.m"
            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
              case (MR_Integer) 0:
#line 4025 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_Integer mercury__term__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

#line 34 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_103_103 < mercury__term__V_20_20);
#line 37 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_103_103 == mercury__term__V_20_20);
#line 42 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 2:
#line 4064 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 4077 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4083 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4089 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
            }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 2:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_Word mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "term.m"
            MR_Word mercury__term__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
#line 52 "term.m"
            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
              case (MR_Integer) 0:
#line 4119 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 4125 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 2:
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "term.m"
                  MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "term.m"
                  MR_Word mercury__term__V_40_40;
#line 52 "term.m"
                  MR_Integer mercury__term__V_105_105 = (MR_Integer) mercury__term__V_100_100;
#line 52 "term.m"
                  MR_Integer mercury__term__V_106_106 = (MR_Integer) mercury__term__V_38_38;

#line 34 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_105_105 < mercury__term__V_106_106);
#line 37 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 36 "private_builtin.opt"
                    mercury__term__V_40_40 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_105_105 == mercury__term__V_106_106);
#line 42 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 41 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                    }
#line 4166 "term.c"
                  mercury__term__succeeded = (mercury__term__V_40_40 == (MR_Integer) 0);
#line 52 "term.m"
                  mercury__term__succeeded = !(mercury__term__succeeded);
#line 52 "term.m"
                  if (mercury__term__succeeded)
#line 52 "term.m"
                    *mercury__term__HeadVar__1_1 = mercury__term__V_40_40;
#line 52 "term.m"
                  else
#line 52 "term.m"
                    {
#line 52 "term.m"
                      mercury__integer____Compare____integer_0_0(mercury__term__HeadVar__1_1, mercury__term__V_99_99, mercury__term__V_39_39);
#line 52 "term.m"
                      return;
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 4196 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4202 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4208 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
            }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) {
#line 52 "term.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
            case (MR_Integer) 0:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_String mercury__term__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
#line 52 "term.m"
                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 4243 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4249 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4255 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                      case (MR_Integer) 0:
#line 52 "term.m"
                        {
#line 52 "term.m"
                          MR_String mercury__term__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "term.m"
                          MR_Integer mercury__term__V_7_129;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_104_104 ;
	S2 =  mercury__term__V_58_58 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4290 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_129  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_7_129 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 72 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            {
#line 75 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_7_129 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 77 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                            }
#line 52 "term.m"
                        }
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 4325 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 2:
#line 4331 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                    }
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
            case (MR_Integer) 1:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_Float mercury__term__V_101_101 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
#line 52 "term.m"
                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 4359 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4365 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4371 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                      case (MR_Integer) 0:
#line 4384 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 52 "term.m"
                        {
#line 52 "term.m"
                          MR_Float mercury__term__V_73_73 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));

#line 86 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_101_101 < mercury__term__V_73_73);
#line 89 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 88 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "private_builtin.opt"
                          else
#line 94 "private_builtin.opt"
                            {
#line 91 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_101_101 > mercury__term__V_73_73);
#line 94 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 93 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 94 "private_builtin.opt"
                              else
#line 95 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "private_builtin.opt"
                            }
#line 52 "term.m"
                        }
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 2:
#line 4423 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                    }
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
            case (MR_Integer) 2:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_String mercury__term__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
#line 52 "term.m"
                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
#line 52 "term.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                  case (MR_Integer) 0:
#line 4451 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4457 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4463 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
#line 52 "term.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
                      case (MR_Integer) 0:
#line 4476 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 4482 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 2:
#line 52 "term.m"
                        {
#line 52 "term.m"
                          MR_String mercury__term__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "term.m"
                          MR_Integer mercury__term__V_7_121;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_102_102 ;
	S2 =  mercury__term__V_88_88 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4510 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_121  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_7_121 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 72 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                          else
#line 78 "private_builtin.opt"
                            {
#line 75 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_7_121 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 77 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                              else
#line 79 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                            }
#line 52 "term.m"
                        }
#line 52 "term.m"
                        break;
#line 52 "term.m"
                    }
#line 52 "term.m"
                    break;
#line 52 "term.m"
                }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
      }
#line 52 "term.m"
  }
#line 52 "term.m"
}

#line 52 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
#line 52 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 52 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 52 "term.m"
{
#line 52 "term.m"
  {
#line 52 "term.m"
    MR_bool mercury__term__succeeded;
#line 52 "term.m"
    MR_Integer mercury__term__CastX_17 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 52 "term.m"
    MR_Integer mercury__term__CastY_18 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 52 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_17 == mercury__term__CastY_18);
#line 52 "term.m"
    if (mercury__term__succeeded)
#line 52 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 52 "term.m"
    else
#line 52 "term.m"
#line 52 "term.m"
      switch (MR_tag((MR_Word) mercury__term__HeadVar__1_1)) {
#line 52 "term.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
        case (MR_Integer) 0:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "term.m"
            MR_String mercury__term__V_4_4;

#line 52 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 52 "term.m"
            if (mercury__term__succeeded)
#line 52 "term.m"
              {
#line 52 "term.m"
                mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 4612 "term.c"
                mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_4_4) == 0);
#line 52 "term.m"
              }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 1:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "term.m"
            MR_Integer mercury__term__V_6_6;

#line 52 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 52 "term.m"
            if (mercury__term__succeeded)
#line 52 "term.m"
              {
#line 52 "term.m"
                mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 4637 "term.c"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_6_6);
#line 52 "term.m"
              }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 2:
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 52 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "term.m"
            MR_Word mercury__term__V_9_9;
#line 52 "term.m"
            MR_Word mercury__term__V_10_10;

#line 52 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 52 "term.m"
            if (mercury__term__succeeded)
#line 52 "term.m"
              {
#line 52 "term.m"
                mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 52 "term.m"
                mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4668 "term.c"
                mercury__term__succeeded = (mercury__term__V_7_7 == mercury__term__V_9_9);
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 4672 "term.c"
                  {
#line 4674 "term.c"
                    return mercury__term__succeeded = mercury__integer____Unify____integer_0_0(mercury__term__V_8_8, mercury__term__V_10_10);
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
        case (MR_Integer) 3:
#line 52 "term.m"
#line 52 "term.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) {
#line 52 "term.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 52 "term.m"
            case (MR_Integer) 0:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_String mercury__term__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "term.m"
                MR_String mercury__term__V_12_12;

#line 52 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 52 "term.m"
                  {
#line 52 "term.m"
                    mercury__term__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4707 "term.c"
                    mercury__term__succeeded = (strcmp(mercury__term__V_11_11, mercury__term__V_12_12) == 0);
#line 52 "term.m"
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
            case (MR_Integer) 1:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_Float mercury__term__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "term.m"
                MR_Float mercury__term__V_14_14;

#line 52 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 52 "term.m"
                  {
#line 52 "term.m"
                    mercury__term__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4732 "term.c"
                    mercury__term__succeeded = (mercury__term__V_13_13 == mercury__term__V_14_14);
#line 52 "term.m"
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
            case (MR_Integer) 2:
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_String mercury__term__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 52 "term.m"
                MR_String mercury__term__V_16_16;

#line 52 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 52 "term.m"
                  {
#line 52 "term.m"
                    mercury__term__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4757 "term.c"
                    mercury__term__succeeded = (strcmp(mercury__term__V_15_15, mercury__term__V_16_16) == 0);
#line 52 "term.m"
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
              break;
#line 52 "term.m"
          }
#line 52 "term.m"
          break;
#line 52 "term.m"
      }
#line 52 "term.m"
    return mercury__term__succeeded;
#line 52 "term.m"
  }
#line 52 "term.m"
}

#line 1189 "term.m"
void MR_CALL 
mercury__term__build_subst_4_p_0(
#line 1189 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 1189 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1189 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1189 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1189 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1189 "term.m"
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
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "term.m"
          if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "term.m"
            *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1192 "term.m"
          else
#line 1193 "term.m"
            {
#line 1194 "term.m"
              {
#line 1194 "term.m"
                mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1194 "term.m"
                return;
              }
#line 1193 "term.m"
            }
#line 1192 "term.m"
        else
#line 1192 "term.m"
          {
#line 1192 "term.m"
            MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1192 "term.m"
            MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1192 "term.m"
            if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "term.m"
              {
#line 1196 "term.m"
                {
#line 1196 "term.m"
                  mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1196 "term.m"
                  return;
                }
#line 1195 "term.m"
              }
#line 1192 "term.m"
            else
#line 1197 "term.m"
              {
#line 1197 "term.m"
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1197 "term.m"
                MR_Word mercury__term__TypeInfo_35_35;
#line 1197 "term.m"
                MR_Word mercury__term__TypeCtorInfo_36_36;
#line 1197 "term.m"
                MR_Word mercury__term__TypeInfo_37_37;
#line 1197 "term.m"
                MR_Word mercury__term__Term_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1197 "term.m"
                MR_Word mercury__term__Terms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1197 "term.m"
                MR_Word mercury__term__STATE_VARIABLE_Subst_31_31;
#line 129 "map.opt"
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

#line 4866 "term.c"
                {
#line 4868 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4870 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 4872 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4874 "term.c"
                }
#line 4876 "term.c"
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4878 "term.c"
                {
#line 4880 "term.c"
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4882 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
#line 4884 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4886 "term.c"
                }
#line 129 "map.opt"
                {
#line 129 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
#line 129 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_31_31;
#line 1199 "term.m"
                /* direct tailcall eliminated */
#line 1199 "term.m"
                {
#line 1199 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_38_38;
#line 1199 "term.m"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Terms_27;
#line 1199 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_31_31;

#line 1199 "term.m"
                  mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1199 "term.m"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1199 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1199 "term.m"
                }
#line 1199 "term.m"
                continue;
#line 1197 "term.m"
              }
#line 1192 "term.m"
          }
#line 1192 "term.m"
      }
#line 1192 "term.m"
      break;
#line 1192 "term.m"
    }
#line 1189 "term.m"
}

#line 1028 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1028 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1028 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1028 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 1028 "term.m"
{
#line 1031 "term.m"
  while (MR_TRUE)
#line 1031 "term.m"
    {
#line 1031 "term.m"
      /* tailcall optimized into a loop */
#line 1031 "term.m"
      {
#line 1031 "term.m"
        MR_bool mercury__term__succeeded;

#line 1031 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1031 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1031 "term.m"
        else
#line 1032 "term.m"
          {
#line 1032 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1033 "term.m"
            {
#line 1033 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 1032 "term.m"
            if (mercury__term__succeeded)
#line 1034 "term.m"
              {
#line 1034 "term.m"
                /* direct tailcall eliminated */
#line 1034 "term.m"
                {
#line 1034 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1034 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1034 "term.m"
                }
#line 1034 "term.m"
                continue;
#line 1034 "term.m"
              }
#line 1032 "term.m"
          }
#line 1031 "term.m"
        return mercury__term__succeeded;
#line 1031 "term.m"
      }
#line 1031 "term.m"
      break;
#line 1031 "term.m"
    }
#line 1028 "term.m"
}

#line 1013 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 1013 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 1013 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 1013 "term.m"
{
#line 1015 "term.m"
  while (MR_TRUE)
#line 1015 "term.m"
    {
#line 1015 "term.m"
      /* tailcall optimized into a loop */
#line 1015 "term.m"
      {
#line 1015 "term.m"
        MR_bool mercury__term__succeeded;

#line 1015 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1015 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1015 "term.m"
        else
#line 1016 "term.m"
          {
#line 1016 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "term.m"
            MR_Word mercury__term__ArgTerms_6;
#line 1010 "term.m"
            MR_Word mercury__term__V_5_5;
#line 1010 "term.m"
            MR_Word mercury__term__V_7_7;

#line 1010 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 1010 "term.m"
            if (mercury__term__succeeded)
#line 1010 "term.m"
              {
#line 1010 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 1010 "term.m"
                mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 1010 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 1011 "term.m"
                {
#line 1011 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__ArgTerms_6);
                }
#line 1016 "term.m"
                if (mercury__term__succeeded)
#line 1018 "term.m"
                  {
#line 1018 "term.m"
                    /* direct tailcall eliminated */
#line 1018 "term.m"
                    {
#line 1018 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 1018 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1018 "term.m"
                    }
#line 1018 "term.m"
                    continue;
#line 1018 "term.m"
                  }
#line 1010 "term.m"
              }
#line 1016 "term.m"
          }
#line 1015 "term.m"
        return mercury__term__succeeded;
#line 1015 "term.m"
      }
#line 1015 "term.m"
      break;
#line 1015 "term.m"
    }
#line 1013 "term.m"
}

#line 966 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 966 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 966 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 966 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 966 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 966 "term.m"
{
#line 969 "term.m"
  while (MR_TRUE)
#line 969 "term.m"
    {
#line 969 "term.m"
      /* tailcall optimized into a loop */
#line 969 "term.m"
      {
#line 969 "term.m"
        MR_bool mercury__term__succeeded;

#line 969 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 969 "term.m"
        else
#line 970 "term.m"
          {
#line 970 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 970 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 970 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 971 "term.m"
            {
#line 971 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 955 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 956 "term.m"
              {
#line 956 "term.m"
                MR_Word mercury__term__ArgTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 956 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 956 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 957 "term.m"
                /* direct tailcall eliminated */
#line 957 "term.m"
                {
#line 957 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__ArgTerms_22;
#line 957 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 957 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 957 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 957 "term.m"
                }
#line 957 "term.m"
                continue;
#line 956 "term.m"
              }
#line 955 "term.m"
            else
#line 953 "term.m"
              {
#line 953 "term.m"
                MR_Word mercury__term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 953 "term.m"
                MR_Word mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 954 "term.m"
                {
#line 954 "term.m"
                  MR_Word base;
#line 954 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 954 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_19));
#line 954 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 954 "term.m"
                }
#line 953 "term.m"
              }
#line 970 "term.m"
          }
#line 969 "term.m"
      }
#line 969 "term.m"
      break;
#line 969 "term.m"
    }
#line 966 "term.m"
}

#line 915 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 915 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 915 "term.m"
  MR_Word mercury__term__X_6,
#line 915 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 915 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 915 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 915 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14)
#line 915 "term.m"
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
        MR_Word mercury__term__TermBoundToX_10;
#line 919 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 919 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 919 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 919 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_TermBoundToX_10;

#line 5241 "term.c"
        {
#line 5243 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5245 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 5247 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5249 "term.c"
        }
#line 5251 "term.c"
        {
#line 5253 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5255 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 5257 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5259 "term.c"
        }
#line 51 "map.opt"
        {
#line 51 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_21_21, mercury__term__TypeInfo_23_23, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, mercury__term__X_6, &mercury__term__conv0_TermBoundToX_10);
        }
#line 51 "map.opt"
        if (mercury__term__succeeded)
#line 51 "map.opt"
          {
#line 51 "map.opt"
            mercury__term__TermBoundToX_10 = ((MR_Word) mercury__term__conv0_TermBoundToX_10);
#line 51 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
          }
#line 922 "term.m"
        if (mercury__term__succeeded)
#line 920 "term.m"
          {
#line 920 "term.m"
            MR_Word mercury__term__NewX_11;
#line 920 "term.m"
            MR_Word mercury__term__V_12_12;

#line 920 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__TermBoundToX_10)) == (MR_mktag((MR_Integer) 1)));
#line 920 "term.m"
            if (mercury__term__succeeded)
#line 920 "term.m"
              {
#line 920 "term.m"
                mercury__term__NewX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 0)));
#line 920 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 1)));
#line 921 "term.m"
                /* direct tailcall eliminated */
#line 921 "term.m"
                {
#line 921 "term.m"
                  MR_Word mercury__term__X__tmp_copy_6 = mercury__term__NewX_11;

#line 921 "term.m"
                  mercury__term__X_6 = mercury__term__X__tmp_copy_6;
#line 921 "term.m"
                }
#line 921 "term.m"
                continue;
#line 920 "term.m"
              }
#line 920 "term.m"
          }
#line 922 "term.m"
        else
#line 925 "term.m"
          {
#line 722 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__X_6;
#line 722 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundY_7;

#line 722 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 722 "term.m"
            if (mercury__term__succeeded)
#line 722 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
            else
#line 722 "term.m"
              {
#line 722 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__X_6;
#line 722 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundY_7;

#line 5336 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 722 "term.m"
              }
#line 925 "term.m"
            if (mercury__term__succeeded)
#line 925 "term.m"
              {
#line 925 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_14 = mercury__term__STATE_VARIABLE_Subst_0_13;
#line 925 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 925 "term.m"
              }
#line 925 "term.m"
            else
#line 926 "term.m"
              {
#line 926 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 926 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 926 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 926 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 926 "term.m"
                MR_Word mercury__term__V_16_16;
#line 926 "term.m"
                MR_Word mercury__term__V_18_18;
#line 926 "term.m"
                MR_String mercury__term__V_38_38;
#line 926 "term.m"
                MR_Integer mercury__term__V_39_39;
#line 927 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_14;

#line 926 "term.m"
                {
#line 926 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__X_6, mercury__term__DontBindVars_8);
                }
#line 926 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 926 "term.m"
                if (mercury__term__succeeded)
#line 926 "term.m"
                  {
#line 1318 "term.m"
                    mercury__term__V_38_38 = (MR_String) "";
#line 1318 "term.m"
                    mercury__term__V_39_39 = (MR_Integer) 0;
#line 5388 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5390 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1318 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 927 "term.m"
                    {
#line 927 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundY_7));
#line 927 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 927 "term.m"
                    }
#line 5404 "term.c"
                    {
#line 5406 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5408 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 5410 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5412 "term.c"
                    }
#line 5414 "term.c"
                    {
#line 5416 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5418 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 5420 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5422 "term.c"
                    }
#line 927 "term.m"
                    {
#line 927 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__X_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, &mercury__term__conv1_STATE_VARIABLE_Subst_14);
                    }
#line 927 "term.m"
                    *mercury__term__STATE_VARIABLE_Subst_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_14;
#line 927 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 926 "term.m"
                  }
#line 926 "term.m"
              }
#line 925 "term.m"
          }
#line 922 "term.m"
        return mercury__term__succeeded;
#line 922 "term.m"
      }
#line 922 "term.m"
      break;
#line 922 "term.m"
    }
#line 915 "term.m"
}

#line 710 "term.m"
MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
#line 710 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 710 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 710 "term.m"
{
#line 739 "term.m"
  {
#line 739 "term.m"
    MR_bool mercury__term__succeeded;
#line 739 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 739 "term.m"
    return mercury__term__V_3;
#line 739 "term.m"
  }
#line 710 "term.m"
}

#line 708 "term.m"
MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
#line 708 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 708 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 708 "term.m"
{
#line 737 "term.m"
  {
#line 737 "term.m"
    MR_bool mercury__term__succeeded;
#line 737 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 737 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 737 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 737 "term.m"
    return mercury__term__HeadVar__2_2;
#line 737 "term.m"
  }
#line 708 "term.m"
}

#line 696 "term.m"
void MR_CALL 
mercury__term__context_file_2_p_0(
#line 696 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 696 "term.m"
  MR_String * mercury__term__FileName_3)
#line 696 "term.m"
{
#line 1316 "term.m"
  {
#line 1316 "term.m"
    MR_bool mercury__term__succeeded;
#line 1316 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 1316 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1316 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1316 "term.m"
  }
#line 696 "term.m"
}

#line 695 "term.m"
MR_String MR_CALL 
mercury__term__context_file_1_f_0(
#line 695 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 695 "term.m"
{
#line 1315 "term.m"
  {
#line 1315 "term.m"
    MR_bool mercury__term__succeeded;
#line 1315 "term.m"
    MR_String mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1315 "term.m"
    MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1315 "term.m"
    return mercury__term__FileName_3;
#line 1315 "term.m"
  }
#line 695 "term.m"
}

#line 691 "term.m"
void MR_CALL 
mercury__term__context_line_2_p_0(
#line 691 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 691 "term.m"
  MR_Integer * mercury__term__LineNumber_4)
#line 691 "term.m"
{
#line 1313 "term.m"
  {
#line 1313 "term.m"
    MR_bool mercury__term__succeeded;
#line 1313 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1313 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1313 "term.m"
  }
#line 691 "term.m"
}

#line 690 "term.m"
MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
#line 690 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 690 "term.m"
{
#line 1312 "term.m"
  {
#line 1312 "term.m"
    MR_bool mercury__term__succeeded;
#line 1312 "term.m"
    MR_Integer mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1312 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1312 "term.m"
    return mercury__term__LineNumber_4;
#line 1312 "term.m"
  }
#line 690 "term.m"
}

#line 686 "term.m"
void MR_CALL 
mercury__term__context_init_3_p_0(
#line 686 "term.m"
  MR_String mercury__term__File_4,
#line 686 "term.m"
  MR_Integer mercury__term__LineNumber_5,
#line 686 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 686 "term.m"
{
#line 1322 "term.m"
  {
#line 1322 "term.m"
    MR_bool mercury__term__succeeded;

#line 1322 "term.m"
    {
#line 1322 "term.m"
      MR_Word base;
#line 1322 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 1322 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 1322 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1322 "term.m"
    }
#line 1322 "term.m"
  }
#line 686 "term.m"
}

#line 685 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
#line 685 "term.m"
  MR_String mercury__term__File_4,
#line 685 "term.m"
  MR_Integer mercury__term__LineNumber_5)
#line 685 "term.m"
{
#line 1321 "term.m"
  {
#line 1321 "term.m"
    MR_bool mercury__term__succeeded;
#line 1321 "term.m"
    MR_Word mercury__term__HeadVar__3_3;

#line 1321 "term.m"
    {
#line 1321 "term.m"
      mercury__term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 0) = ((MR_Box) (mercury__term__File_4));
#line 1321 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1321 "term.m"
    }
#line 1321 "term.m"
    return mercury__term__HeadVar__3_3;
#line 1321 "term.m"
  }
#line 685 "term.m"
}

#line 684 "term.m"
void MR_CALL 
mercury__term__context_init_1_p_0(
#line 684 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 684 "term.m"
{
#line 1319 "term.m"
  {
#line 1319 "term.m"
    MR_bool mercury__term__succeeded;

#line 1319 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 1319 "term.m"
  }
#line 684 "term.m"
}

#line 683 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 683 "term.m"
{
#line 1318 "term.m"
  {
#line 1318 "term.m"
    MR_bool mercury__term__succeeded;
#line 1318 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1318 "term.m"
    return mercury__term__HeadVar__1_1;
#line 1318 "term.m"
  }
#line 683 "term.m"
}

#line 678 "term.m"
MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
#line 678 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 678 "term.m"
  MR_Word mercury__term__Term_3)
#line 678 "term.m"
{
#line 1309 "term.m"
  {
#line 1309 "term.m"
    MR_bool mercury__term__succeeded;
#line 1309 "term.m"
    MR_Word mercury__term__Context_4;

#line 1309 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 1308 "term.m"
      {
#line 1308 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1308 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 1308 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1308 "term.m"
      }
#line 1309 "term.m"
    else
#line 1309 "term.m"
      {
#line 1309 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 1309 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 1309 "term.m"
      }
#line 1309 "term.m"
    return mercury__term__Context_4;
#line 1309 "term.m"
  }
#line 678 "term.m"
}

#line 667 "term.m"
void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
#line 667 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 667 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 667 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 667 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 667 "term.m"
{
#line 1303 "term.m"
  {
#line 1303 "term.m"
    MR_bool mercury__term__succeeded;

#line 1303 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1303 "term.m"
  }
#line 667 "term.m"
}

#line 666 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
#line 666 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 666 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 666 "term.m"
  MR_Word mercury__term__VarSupplyTypeA_3)
#line 666 "term.m"
{
#line 1303 "term.m"
  {
#line 1303 "term.m"
    MR_bool mercury__term__succeeded;
#line 1303 "term.m"
    MR_Word mercury__term__VarSupplyTypeB_4 = mercury__term__VarSupplyTypeA_3;

#line 1303 "term.m"
    return mercury__term__VarSupplyTypeB_4;
#line 1303 "term.m"
  }
#line 666 "term.m"
}

#line 662 "term.m"
void MR_CALL 
mercury__term__coerce_var_2_p_0(
#line 662 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 662 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 662 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 662 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 662 "term.m"
{
#line 1298 "term.m"
  {
#line 1298 "term.m"
    MR_bool mercury__term__succeeded;

#line 1298 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1298 "term.m"
  }
#line 662 "term.m"
}

#line 661 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
#line 661 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 661 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 661 "term.m"
  MR_Word mercury__term__VarTypeA_3)
#line 661 "term.m"
{
#line 1298 "term.m"
  {
#line 1298 "term.m"
    MR_bool mercury__term__succeeded;
#line 1298 "term.m"
    MR_Word mercury__term__VarTypeB_4 = mercury__term__VarTypeA_3;

#line 1298 "term.m"
    return mercury__term__VarTypeB_4;
#line 1298 "term.m"
  }
#line 661 "term.m"
}

#line 657 "term.m"
void MR_CALL 
mercury__term__coerce_2_p_0(
#line 657 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 657 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 657 "term.m"
  MR_Word mercury__term__TermTypeA_3,
#line 657 "term.m"
  MR_Word * mercury__term__TermTypeB_4)
#line 657 "term.m"
{
#line 1293 "term.m"
  {
#line 1293 "term.m"
    MR_bool mercury__term__succeeded;

#line 1293 "term.m"
    *mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;
#line 1293 "term.m"
  }
#line 657 "term.m"
}

#line 656 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
#line 656 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 656 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 656 "term.m"
  MR_Word mercury__term__TermTypeA_3)
#line 656 "term.m"
{
#line 1293 "term.m"
  {
#line 1293 "term.m"
    MR_bool mercury__term__succeeded;
#line 1293 "term.m"
    MR_Word mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;

#line 1293 "term.m"
    return mercury__term__TermTypeB_4;
#line 1293 "term.m"
  }
#line 656 "term.m"
}

#line 652 "term.m"
void MR_CALL 
mercury__term__generic_term_1_p_0(
#line 652 "term.m"
  MR_Word mercury__term__HeadVar__1_2)
#line 652 "term.m"
{
#line 1284 "term.m"
  {
#line 1284 "term.m"
    MR_bool mercury__term__succeeded;

#line 1284 "term.m"
    {
#line 1284 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1284 "term.m"
      return;
    }
#line 1284 "term.m"
  }
#line 652 "term.m"
}

#line 641 "term.m"
void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
#line 641 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 641 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 641 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 641 "term.m"
{
#line 1278 "term.m"
  {
#line 1278 "term.m"
    MR_bool mercury__term__succeeded;

#line 1278 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "term.m"
    else
#line 1279 "term.m"
      {
#line 1279 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1279 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1279 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1279 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1279 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1279 "term.m"
        {
#line 1279 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1279 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1279 "term.m"
        }
#line 1280 "term.m"
        {
#line 1280 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1279 "term.m"
        {
#line 1279 "term.m"
          MR_Word base;
#line 1279 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1279 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1279 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1279 "term.m"
        }
#line 1279 "term.m"
      }
#line 1278 "term.m"
  }
#line 641 "term.m"
}

#line 640 "term.m"
MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
#line 640 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 640 "term.m"
  MR_Word mercury__term__Vs_3)
#line 640 "term.m"
{
#line 1276 "term.m"
  {
#line 1276 "term.m"
    MR_bool mercury__term__succeeded;
#line 1276 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1276 "term.m"
    {
#line 1276 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1276 "term.m"
    return mercury__term__Ts_4;
#line 1276 "term.m"
  }
#line 640 "term.m"
}

#line 635 "term.m"
MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
#line 635 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 635 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 635 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 635 "term.m"
{
#line 1271 "term.m"
  {
#line 1271 "term.m"
    MR_bool mercury__term__succeeded;

#line 1271 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1271 "term.m"
      {
#line 1271 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1271 "term.m"
      }
#line 1271 "term.m"
    else
#line 1272 "term.m"
      {
#line 1272 "term.m"
        MR_Word mercury__term__Var_3;
#line 1272 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1272 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1272 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1272 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1272 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1272 "term.m"
        if (mercury__term__succeeded)
#line 1272 "term.m"
          {
#line 1272 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1272 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1273 "term.m"
            {
#line 1273 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1272 "term.m"
            if (mercury__term__succeeded)
#line 1272 "term.m"
              {
#line 1272 "term.m"
                {
#line 1272 "term.m"
                  MR_Word base;
#line 1272 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1272 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1272 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1272 "term.m"
                }
#line 1272 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1272 "term.m"
              }
#line 1272 "term.m"
          }
#line 1272 "term.m"
      }
#line 1271 "term.m"
    return mercury__term__succeeded;
#line 1271 "term.m"
  }
#line 635 "term.m"
}

#line 631 "term.m"
MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
#line 631 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 631 "term.m"
  MR_Word mercury__term__Terms_3)
#line 631 "term.m"
{
#line 1267 "term.m"
  {
#line 1267 "term.m"
    MR_bool mercury__term__succeeded;
#line 1267 "term.m"
    MR_Word mercury__term__Vars_4;
#line 1267 "term.m"
    MR_Word mercury__term__VarsPrime_5;

#line 1265 "term.m"
    {
#line 1265 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms_3, &mercury__term__VarsPrime_5);
    }
#line 1267 "term.m"
    if (mercury__term__succeeded)
#line 1266 "term.m"
      mercury__term__Vars_4 = mercury__term__VarsPrime_5;
#line 1267 "term.m"
    else
#line 1268 "term.m"
      {
#line 1268 "term.m"
        {
#line 1268 "term.m"
          mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
        }
#line 1268 "term.m"
      }
#line 1267 "term.m"
    return mercury__term__Vars_4;
#line 1267 "term.m"
  }
#line 631 "term.m"
}

#line 620 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_in_terms_3_p_0(
#line 620 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 620 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 620 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 620 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 620 "term.m"
{
#line 1257 "term.m"
  {
#line 1257 "term.m"
    MR_bool mercury__term__succeeded;

#line 1257 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1257 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1257 "term.m"
    else
#line 1258 "term.m"
      {
#line 1258 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1258 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1258 "term.m"
        MR_Word mercury__term__Term_8;
#line 1258 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1259 "term.m"
        {
#line 1259 "term.m"
          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1260 "term.m"
        {
#line 1260 "term.m"
          mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1258 "term.m"
        {
#line 1258 "term.m"
          MR_Word base;
#line 1258 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1258 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1258 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1258 "term.m"
        }
#line 1258 "term.m"
      }
#line 1257 "term.m"
  }
#line 620 "term.m"
}

#line 612 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_in_term_3_p_0(
#line 612 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 612 "term.m"
  MR_Word mercury__term__Subst_4,
#line 612 "term.m"
  MR_Word mercury__term__Term0_5,
#line 612 "term.m"
  MR_Word * mercury__term__Term_6)
#line 612 "term.m"
{
#line 1251 "term.m"
  while (MR_TRUE)
#line 1251 "term.m"
    {
#line 1251 "term.m"
      /* tailcall optimized into a loop */
#line 1251 "term.m"
      {
#line 1251 "term.m"
        MR_bool mercury__term__succeeded;

#line 1251 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1252 "term.m"
          {
#line 1252 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1252 "term.m"
            MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1252 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1252 "term.m"
            MR_Word mercury__term__ArgTerms_13;

#line 1253 "term.m"
            {
#line 1253 "term.m"
              mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
            }
#line 1254 "term.m"
            {
#line 1254 "term.m"
              MR_Word base;
#line 1254 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "term.m"
              *mercury__term__Term_6 = base;
#line 1254 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1254 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1254 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1254 "term.m"
            }
#line 1252 "term.m"
          }
#line 1251 "term.m"
        else
#line 1244 "term.m"
          {
#line 1244 "term.m"
            MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1244 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1248 "term.m"
            MR_Word mercury__term__ReplacementTerm_9;
#line 1245 "term.m"
            MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1245 "term.m"
            MR_Word mercury__term__TypeInfo_16_16;
#line 1245 "term.m"
            MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1245 "term.m"
            MR_Word mercury__term__TypeInfo_18_18;
#line 51 "map.opt"
            MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6301 "term.c"
            {
#line 6303 "term.c"
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6305 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6307 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6309 "term.c"
            }
#line 6311 "term.c"
            {
#line 6313 "term.c"
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6315 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6317 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6319 "term.c"
            }
#line 51 "map.opt"
            {
#line 51 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
            }
#line 51 "map.opt"
            if (mercury__term__succeeded)
#line 51 "map.opt"
              {
#line 51 "map.opt"
                mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
#line 51 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
              }
#line 1248 "term.m"
            if (mercury__term__succeeded)
#line 1247 "term.m"
              {
#line 1247 "term.m"
                /* direct tailcall eliminated */
#line 1247 "term.m"
                {
#line 1247 "term.m"
                  MR_Word mercury__term__Term0__tmp_copy_5 = mercury__term__ReplacementTerm_9;

#line 1247 "term.m"
                  mercury__term__Term0_5 = mercury__term__Term0__tmp_copy_5;
#line 1247 "term.m"
                }
#line 1247 "term.m"
                continue;
#line 1247 "term.m"
              }
#line 1248 "term.m"
            else
#line 1249 "term.m"
              *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1244 "term.m"
          }
#line 1251 "term.m"
      }
#line 1251 "term.m"
      break;
#line 1251 "term.m"
    }
#line 612 "term.m"
}

#line 604 "term.m"
void MR_CALL 
mercury__term__apply_substitution_in_terms_3_p_0(
#line 604 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 604 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 604 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 604 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 604 "term.m"
{
#line 1237 "term.m"
  {
#line 1237 "term.m"
    MR_bool mercury__term__succeeded;

#line 1237 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1237 "term.m"
    else
#line 1238 "term.m"
      {
#line 1238 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1238 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1238 "term.m"
        MR_Word mercury__term__Term_8;
#line 1238 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1239 "term.m"
        {
#line 1239 "term.m"
          mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1240 "term.m"
        {
#line 1240 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1238 "term.m"
        {
#line 1238 "term.m"
          MR_Word base;
#line 1238 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1238 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1238 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1238 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1238 "term.m"
        }
#line 1238 "term.m"
      }
#line 1237 "term.m"
  }
#line 604 "term.m"
}

#line 597 "term.m"
void MR_CALL 
mercury__term__apply_substitution_in_term_3_p_0(
#line 597 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 597 "term.m"
  MR_Word mercury__term__Subst_4,
#line 597 "term.m"
  MR_Word mercury__term__Term0_5,
#line 597 "term.m"
  MR_Word * mercury__term__Term_6)
#line 597 "term.m"
{
#line 1231 "term.m"
  {
#line 1231 "term.m"
    MR_bool mercury__term__succeeded;

#line 1231 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1232 "term.m"
      {
#line 1232 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1232 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1232 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1232 "term.m"
        MR_Word mercury__term__ArgTerms_13;

#line 1233 "term.m"
        {
#line 1233 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
        }
#line 1234 "term.m"
        {
#line 1234 "term.m"
          MR_Word base;
#line 1234 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1234 "term.m"
          *mercury__term__Term_6 = base;
#line 1234 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1234 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1234 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1234 "term.m"
        }
#line 1232 "term.m"
      }
#line 1231 "term.m"
    else
#line 1225 "term.m"
      {
#line 1225 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1225 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1228 "term.m"
        MR_Word mercury__term__ReplacementTerm_9;
#line 1226 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1226 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1226 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1226 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6511 "term.c"
        {
#line 6513 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6515 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6517 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6519 "term.c"
        }
#line 6521 "term.c"
        {
#line 6523 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6525 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6527 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6529 "term.c"
        }
#line 51 "map.opt"
        {
#line 51 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
        }
#line 51 "map.opt"
        if (mercury__term__succeeded)
#line 51 "map.opt"
          {
#line 51 "map.opt"
            mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
#line 51 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
          }
#line 1228 "term.m"
        if (mercury__term__succeeded)
#line 1227 "term.m"
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
#line 1228 "term.m"
        else
#line 1229 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1225 "term.m"
      }
#line 1231 "term.m"
  }
#line 597 "term.m"
}

#line 586 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
#line 586 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 586 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 586 "term.m"
  MR_Word mercury__term__Subst_5,
#line 586 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 586 "term.m"
{
#line 1219 "term.m"
  {
#line 1219 "term.m"
    MR_bool mercury__term__succeeded;

#line 1219 "term.m"
    {
#line 1219 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1219 "term.m"
      return;
    }
#line 1219 "term.m"
  }
#line 586 "term.m"
}

#line 584 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
#line 584 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 584 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 584 "term.m"
  MR_Word mercury__term__Subst_5)
#line 584 "term.m"
{
#line 1217 "term.m"
  {
#line 1217 "term.m"
    MR_bool mercury__term__succeeded;
#line 1217 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1217 "term.m"
    {
#line 1217 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1217 "term.m"
    return mercury__term__Terms_6;
#line 1217 "term.m"
  }
#line 584 "term.m"
}

#line 572 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
#line 572 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 572 "term.m"
  MR_Word mercury__term__Term0_4,
#line 572 "term.m"
  MR_Word mercury__term__Subst_5,
#line 572 "term.m"
  MR_Word * mercury__term__Term_6)
#line 572 "term.m"
{
#line 1215 "term.m"
  {
#line 1215 "term.m"
    MR_bool mercury__term__succeeded;

#line 1215 "term.m"
    {
#line 1215 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1215 "term.m"
      return;
    }
#line 1215 "term.m"
  }
#line 572 "term.m"
}

#line 571 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
#line 571 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 571 "term.m"
  MR_Word mercury__term__Term0_4,
#line 571 "term.m"
  MR_Word mercury__term__Subst_5)
#line 571 "term.m"
{
#line 1213 "term.m"
  {
#line 1213 "term.m"
    MR_bool mercury__term__succeeded;
#line 1213 "term.m"
    MR_Word mercury__term__Term_6;

#line 1213 "term.m"
    {
#line 1213 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1213 "term.m"
    return mercury__term__Term_6;
#line 1213 "term.m"
  }
#line 571 "term.m"
}

#line 559 "term.m"
void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
#line 559 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 559 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 559 "term.m"
  MR_Word mercury__term__Subst_5,
#line 559 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 559 "term.m"
{
#line 1211 "term.m"
  {
#line 1211 "term.m"
    MR_bool mercury__term__succeeded;

#line 1211 "term.m"
    {
#line 1211 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1211 "term.m"
      return;
    }
#line 1211 "term.m"
  }
#line 559 "term.m"
}

#line 557 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
#line 557 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 557 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 557 "term.m"
  MR_Word mercury__term__Subst_5)
#line 557 "term.m"
{
#line 1209 "term.m"
  {
#line 1209 "term.m"
    MR_bool mercury__term__succeeded;
#line 1209 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1209 "term.m"
    {
#line 1209 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1209 "term.m"
    return mercury__term__Terms_6;
#line 1209 "term.m"
  }
#line 557 "term.m"
}

#line 546 "term.m"
void MR_CALL 
mercury__term__apply_substitution_3_p_0(
#line 546 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 546 "term.m"
  MR_Word mercury__term__Term0_4,
#line 546 "term.m"
  MR_Word mercury__term__Subst_5,
#line 546 "term.m"
  MR_Word * mercury__term__Term_6)
#line 546 "term.m"
{
#line 1207 "term.m"
  {
#line 1207 "term.m"
    MR_bool mercury__term__succeeded;

#line 1207 "term.m"
    {
#line 1207 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1207 "term.m"
      return;
    }
#line 1207 "term.m"
  }
#line 546 "term.m"
}

#line 545 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
#line 545 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 545 "term.m"
  MR_Word mercury__term__Term0_4,
#line 545 "term.m"
  MR_Word mercury__term__Subst_5)
#line 545 "term.m"
{
#line 1205 "term.m"
  {
#line 1205 "term.m"
    MR_bool mercury__term__succeeded;
#line 1205 "term.m"
    MR_Word mercury__term__Term_6;

#line 1205 "term.m"
    {
#line 1205 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1205 "term.m"
    return mercury__term__Term_6;
#line 1205 "term.m"
  }
#line 545 "term.m"
}

#line 530 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_in_terms_4_p_0(
#line 530 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 530 "term.m"
  MR_Word mercury__term__Vars_5,
#line 530 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 530 "term.m"
  MR_Word mercury__term__Terms0_7,
#line 530 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 530 "term.m"
{
#line 1182 "term.m"
  {
#line 1182 "term.m"
    MR_bool mercury__term__succeeded;
#line 1182 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1184 "term.m"
    {
#line 1184 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1185 "term.m"
      return;
    }
#line 1182 "term.m"
  }
#line 530 "term.m"
}

#line 520 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_in_term_4_p_0(
#line 520 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 520 "term.m"
  MR_Word mercury__term__Vars_5,
#line 520 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 520 "term.m"
  MR_Word mercury__term__Term0_7,
#line 520 "term.m"
  MR_Word * mercury__term__Term_8)
#line 520 "term.m"
{
#line 1177 "term.m"
  {
#line 1177 "term.m"
    MR_bool mercury__term__succeeded;
#line 1177 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1177 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1179 "term.m"
    {
#line 1179 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1180 "term.m"
    {
#line 1180 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Term0_7, mercury__term__Term_8);
#line 1180 "term.m"
      return;
    }
#line 1177 "term.m"
  }
#line 520 "term.m"
}

#line 510 "term.m"
void MR_CALL 
mercury__term__substitute_var_in_terms_4_p_0(
#line 510 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 510 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 510 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 510 "term.m"
{
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;

#line 1171 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1171 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1171 "term.m"
    else
#line 1173 "term.m"
      {
#line 1173 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1173 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1173 "term.m"
        MR_Word mercury__term__Term_11;
#line 1173 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1174 "term.m"
        {
#line 1174 "term.m"
          mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1175 "term.m"
        {
#line 1175 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1173 "term.m"
        {
#line 1173 "term.m"
          MR_Word base;
#line 1173 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1173 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1173 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1173 "term.m"
        }
#line 1173 "term.m"
      }
#line 1171 "term.m"
  }
#line 510 "term.m"
}

#line 502 "term.m"
void MR_CALL 
mercury__term__substitute_var_in_term_4_p_0(
#line 502 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 502 "term.m"
  MR_Word mercury__term__Var_5,
#line 502 "term.m"
  MR_Word mercury__term__ReplacementTerm_6,
#line 502 "term.m"
  MR_Word mercury__term__Term0_7,
#line 502 "term.m"
  MR_Word * mercury__term__Term_8)
#line 502 "term.m"
{
#line 1165 "term.m"
  {
#line 1165 "term.m"
    MR_bool mercury__term__succeeded;

#line 1165 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1166 "term.m"
      {
#line 1166 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1166 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1166 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));
#line 1166 "term.m"
        MR_Word mercury__term__ArgTerms_14;

#line 1167 "term.m"
        {
#line 1167 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementTerm_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_14);
        }
#line 1168 "term.m"
        {
#line 1168 "term.m"
          MR_Word base;
#line 1168 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "term.m"
          *mercury__term__Term_8 = base;
#line 1168 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1168 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_14));
#line 1168 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1168 "term.m"
        }
#line 1166 "term.m"
      }
#line 1165 "term.m"
    else
#line 1159 "term.m"
      {
#line 1159 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1159 "term.m"
        MR_Word mercury__term___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 722 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 722 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 722 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 722 "term.m"
        if (mercury__term__succeeded)
#line 722 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
        else
#line 722 "term.m"
          {
#line 722 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 722 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 7035 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 722 "term.m"
          }
#line 1162 "term.m"
        if (mercury__term__succeeded)
#line 1161 "term.m"
          *mercury__term__Term_8 = mercury__term__ReplacementTerm_6;
#line 1162 "term.m"
        else
#line 1163 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1159 "term.m"
      }
#line 1165 "term.m"
  }
#line 502 "term.m"
}

#line 490 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
#line 490 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 490 "term.m"
  MR_Word mercury__term__Vars_5,
#line 490 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 490 "term.m"
  MR_Word mercury__term__Terms0_7,
#line 490 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 490 "term.m"
{
#line 1182 "term.m"
  {
#line 1182 "term.m"
    MR_bool mercury__term__succeeded;
#line 1182 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1184 "term.m"
    {
#line 1184 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1185 "term.m"
      return;
    }
#line 1182 "term.m"
  }
#line 490 "term.m"
}

#line 488 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
#line 488 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 488 "term.m"
  MR_Word mercury__term__Vars_5,
#line 488 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 488 "term.m"
  MR_Word mercury__term__Terms0_7)
#line 488 "term.m"
{
#line 1182 "term.m"
  {
#line 1182 "term.m"
    MR_bool mercury__term__succeeded;
#line 1182 "term.m"
    MR_Word mercury__term__Terms_8;
#line 1182 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1182 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1184 "term.m"
    {
#line 1184 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, &mercury__term__Terms_8);
    }
#line 1182 "term.m"
    return mercury__term__Terms_8;
#line 1182 "term.m"
  }
#line 488 "term.m"
}

#line 474 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
#line 474 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 474 "term.m"
  MR_Word mercury__term__Vars_5,
#line 474 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 474 "term.m"
  MR_Word mercury__term__Term0_7,
#line 474 "term.m"
  MR_Word * mercury__term__Term_8)
#line 474 "term.m"
{
#line 1177 "term.m"
  {
#line 1177 "term.m"
    MR_bool mercury__term__succeeded;
#line 1177 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1177 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1179 "term.m"
    {
#line 1179 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1180 "term.m"
    {
#line 1180 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, mercury__term__Term_8);
#line 1180 "term.m"
      return;
    }
#line 1177 "term.m"
  }
#line 474 "term.m"
}

#line 472 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
#line 472 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 472 "term.m"
  MR_Word mercury__term__Vars_5,
#line 472 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 472 "term.m"
  MR_Word mercury__term__Term0_7)
#line 472 "term.m"
{
#line 1177 "term.m"
  {
#line 1177 "term.m"
    MR_bool mercury__term__succeeded;
#line 1177 "term.m"
    MR_Word mercury__term__Term_8;
#line 1177 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1177 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1179 "term.m"
    {
#line 1179 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1180 "term.m"
    {
#line 1180 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, &mercury__term__Term_8);
    }
#line 1177 "term.m"
    return mercury__term__Term_8;
#line 1177 "term.m"
  }
#line 472 "term.m"
}

#line 458 "term.m"
void MR_CALL 
mercury__term__substitute_list_4_p_0(
#line 458 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 458 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 458 "term.m"
  MR_Word mercury__term__Var_6,
#line 458 "term.m"
  MR_Word mercury__term__ReplacementTerm_7,
#line 458 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 458 "term.m"
{
#line 1145 "term.m"
  {
#line 1145 "term.m"
    MR_bool mercury__term__succeeded;

#line 1145 "term.m"
    {
#line 1145 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1145 "term.m"
      return;
    }
#line 1145 "term.m"
  }
#line 458 "term.m"
}

#line 457 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
#line 457 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 457 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 457 "term.m"
  MR_Word mercury__term__Var_6,
#line 457 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 457 "term.m"
{
#line 1143 "term.m"
  {
#line 1143 "term.m"
    MR_bool mercury__term__succeeded;
#line 1143 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1143 "term.m"
    {
#line 1143 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1143 "term.m"
    return mercury__term__Terms_8;
#line 1143 "term.m"
  }
#line 457 "term.m"
}

#line 446 "term.m"
void MR_CALL 
mercury__term__substitute_4_p_0(
#line 446 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 446 "term.m"
  MR_Word mercury__term__Term0_5,
#line 446 "term.m"
  MR_Word mercury__term__Var_6,
#line 446 "term.m"
  MR_Word mercury__term__ReplacementTerm_7,
#line 446 "term.m"
  MR_Word * mercury__term__Term_8)
#line 446 "term.m"
{
#line 1141 "term.m"
  {
#line 1141 "term.m"
    MR_bool mercury__term__succeeded;

#line 1141 "term.m"
    {
#line 1141 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1141 "term.m"
      return;
    }
#line 1141 "term.m"
  }
#line 446 "term.m"
}

#line 445 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
#line 445 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 445 "term.m"
  MR_Word mercury__term__Term0_5,
#line 445 "term.m"
  MR_Word mercury__term__Var_6,
#line 445 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 445 "term.m"
{
#line 1139 "term.m"
  {
#line 1139 "term.m"
    MR_bool mercury__term__succeeded;
#line 1139 "term.m"
    MR_Word mercury__term__Term_8;

#line 1139 "term.m"
    {
#line 1139 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1139 "term.m"
    return mercury__term__Term_8;
#line 1139 "term.m"
  }
#line 445 "term.m"
}

#line 429 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_terms_3_p_0(
#line 429 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 429 "term.m"
  MR_Word mercury__term__Renaming_1,
#line 429 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 429 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 429 "term.m"
{
#line 1130 "term.m"
  {
#line 1130 "term.m"
    MR_bool mercury__term__succeeded;

#line 1130 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1130 "term.m"
    else
#line 1131 "term.m"
      {
#line 1131 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1131 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1131 "term.m"
        MR_Word mercury__term__Term_8;
#line 1131 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1132 "term.m"
        {
#line 1132 "term.m"
          mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1133 "term.m"
        {
#line 1133 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1131 "term.m"
        {
#line 1131 "term.m"
          MR_Word base;
#line 1131 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1131 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1131 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1131 "term.m"
        }
#line 1131 "term.m"
      }
#line 1130 "term.m"
  }
#line 429 "term.m"
}

#line 422 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_term_3_p_0(
#line 422 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 422 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 422 "term.m"
  MR_Word mercury__term__Term0_5,
#line 422 "term.m"
  MR_Word * mercury__term__Term_6)
#line 422 "term.m"
{
#line 1124 "term.m"
  {
#line 1124 "term.m"
    MR_bool mercury__term__succeeded;

#line 1124 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1125 "term.m"
      {
#line 1125 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1125 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1125 "term.m"
        MR_Word mercury__term__ArgTerms_12;
#line 1125 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));

#line 1126 "term.m"
        {
#line 1126 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Renaming_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_12);
        }
#line 1127 "term.m"
        {
#line 1127 "term.m"
          MR_Word base;
#line 1127 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "term.m"
          *mercury__term__Term_6 = base;
#line 1127 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1127 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
#line 1127 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1127 "term.m"
        }
#line 1125 "term.m"
      }
#line 1124 "term.m"
    else
#line 1121 "term.m"
      {
#line 1121 "term.m"
        MR_Word mercury__term__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1121 "term.m"
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1121 "term.m"
        MR_Word mercury__term__Var_9;
#line 1110 "term.m"
        MR_Word mercury__term__NewVar_18;
#line 1108 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1108 "term.m"
        MR_Word mercury__term__TypeInfo_10_20;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_NewVar_18;

#line 7485 "term.c"
        {
#line 7487 "term.c"
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7489 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
#line 7491 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 7493 "term.c"
        }
#line 51 "map.opt"
        {
#line 51 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_10_20, mercury__term__TypeInfo_10_20, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_7, &mercury__term__conv0_NewVar_18);
        }
#line 51 "map.opt"
        if (mercury__term__succeeded)
#line 51 "map.opt"
          {
#line 51 "map.opt"
            mercury__term__NewVar_18 = ((MR_Word) mercury__term__conv0_NewVar_18);
#line 51 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
          }
#line 1110 "term.m"
        if (mercury__term__succeeded)
#line 1109 "term.m"
          mercury__term__Var_9 = mercury__term__NewVar_18;
#line 1110 "term.m"
        else
#line 1111 "term.m"
          mercury__term__Var_9 = mercury__term__Var0_7;
#line 1123 "term.m"
        {
#line 1123 "term.m"
          MR_Word base;
#line 1123 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "term.m"
          *mercury__term__Term_6 = base;
#line 1123 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_9));
#line 1123 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
#line 1123 "term.m"
        }
#line 1121 "term.m"
      }
#line 1124 "term.m"
  }
#line 422 "term.m"
}

#line 415 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_vars_3_p_0(
#line 415 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 415 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 415 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 415 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 415 "term.m"
{
#line 1114 "term.m"
  {
#line 1114 "term.m"
    MR_bool mercury__term__succeeded;

#line 1114 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1114 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1114 "term.m"
    else
#line 1115 "term.m"
      {
#line 1115 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1115 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1115 "term.m"
        MR_Word mercury__term__Var_8;
#line 1115 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1110 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1108 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1108 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 7582 "term.c"
        {
#line 7584 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7586 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 7588 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 7590 "term.c"
        }
#line 51 "map.opt"
        {
#line 51 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__TypeInfo_10_16, mercury__term__TypeInfo_10_16, (MR_Word) mercury__term__HeadVar__1_1, mercury__term__Var0_6, &mercury__term__conv0_NewVar_14);
        }
#line 51 "map.opt"
        if (mercury__term__succeeded)
#line 51 "map.opt"
          {
#line 51 "map.opt"
            mercury__term__NewVar_14 = ((MR_Word) mercury__term__conv0_NewVar_14);
#line 51 "map.opt"
            mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
          }
#line 1110 "term.m"
        if (mercury__term__succeeded)
#line 1109 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1110 "term.m"
        else
#line 1111 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1117 "term.m"
        {
#line 1117 "term.m"
          mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1115 "term.m"
        {
#line 1115 "term.m"
          MR_Word base;
#line 1115 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1115 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1115 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1115 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1115 "term.m"
        }
#line 1115 "term.m"
      }
#line 1114 "term.m"
  }
#line 415 "term.m"
}

#line 408 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_var_3_p_0(
#line 408 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 408 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 408 "term.m"
  MR_Word mercury__term__Var0_5,
#line 408 "term.m"
  MR_Word * mercury__term__Var_6)
#line 408 "term.m"
{
#line 1110 "term.m"
  {
#line 1110 "term.m"
    MR_bool mercury__term__succeeded;
#line 1110 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1108 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1108 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 7667 "term.c"
    {
#line 7669 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7671 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 7673 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 7675 "term.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__TypeInfo_10_10, mercury__term__TypeInfo_10_10, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_7);
    }
#line 51 "map.opt"
    if (mercury__term__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__term__NewVar_7 = ((MR_Word) mercury__term__conv0_NewVar_7);
#line 51 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
      }
#line 1110 "term.m"
    if (mercury__term__succeeded)
#line 1109 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1110 "term.m"
    else
#line 1111 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1110 "term.m"
  }
#line 408 "term.m"
}

#line 397 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
#line 397 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 397 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 397 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 397 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 397 "term.m"
{
#line 1103 "term.m"
  {
#line 1103 "term.m"
    MR_bool mercury__term__succeeded;

#line 1103 "term.m"
    {
#line 1103 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1103 "term.m"
      return;
    }
#line 1103 "term.m"
  }
#line 397 "term.m"
}

#line 395 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
#line 395 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 395 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 395 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 395 "term.m"
{
#line 1101 "term.m"
  {
#line 1101 "term.m"
    MR_bool mercury__term__succeeded;
#line 1101 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1101 "term.m"
    {
#line 1101 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1101 "term.m"
    return mercury__term__Terms_6;
#line 1101 "term.m"
  }
#line 395 "term.m"
}

#line 386 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
#line 386 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 386 "term.m"
  MR_Word mercury__term__Term0_4,
#line 386 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 386 "term.m"
  MR_Word * mercury__term__Term_6)
#line 386 "term.m"
{
#line 1099 "term.m"
  {
#line 1099 "term.m"
    MR_bool mercury__term__succeeded;

#line 1099 "term.m"
    {
#line 1099 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1099 "term.m"
      return;
    }
#line 1099 "term.m"
  }
#line 386 "term.m"
}

#line 385 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
#line 385 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 385 "term.m"
  MR_Word mercury__term__Term0_4,
#line 385 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 385 "term.m"
{
#line 1097 "term.m"
  {
#line 1097 "term.m"
    MR_bool mercury__term__succeeded;
#line 1097 "term.m"
    MR_Word mercury__term__Term_6;

#line 1097 "term.m"
    {
#line 1097 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1097 "term.m"
    return mercury__term__Term_6;
#line 1097 "term.m"
  }
#line 385 "term.m"
}

#line 375 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
#line 375 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 375 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 375 "term.m"
  MR_Word mercury__term__Vars0_5,
#line 375 "term.m"
  MR_Word * mercury__term__Vars_6)
#line 375 "term.m"
{
#line 1095 "term.m"
  {
#line 1095 "term.m"
    MR_bool mercury__term__succeeded;

#line 1095 "term.m"
    {
#line 1095 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, mercury__term__Vars_6);
#line 1095 "term.m"
      return;
    }
#line 1095 "term.m"
  }
#line 375 "term.m"
}

#line 373 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
#line 373 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 373 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 373 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 373 "term.m"
{
#line 1093 "term.m"
  {
#line 1093 "term.m"
    MR_bool mercury__term__succeeded;
#line 1093 "term.m"
    MR_Word mercury__term__Vars_6;

#line 1093 "term.m"
    {
#line 1093 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, &mercury__term__Vars_6);
    }
#line 1093 "term.m"
    return mercury__term__Vars_6;
#line 1093 "term.m"
  }
#line 373 "term.m"
}

#line 364 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
#line 364 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 364 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 364 "term.m"
  MR_Word mercury__term__Var0_5,
#line 364 "term.m"
  MR_Word * mercury__term__Var_6)
#line 364 "term.m"
{
#line 1110 "term.m"
  {
#line 1110 "term.m"
    MR_bool mercury__term__succeeded;
#line 1110 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1108 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1108 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7911 "term.c"
    {
#line 7913 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7915 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7917 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7919 "term.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_11);
    }
#line 51 "map.opt"
    if (mercury__term__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
#line 51 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
      }
#line 1110 "term.m"
    if (mercury__term__succeeded)
#line 1109 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1110 "term.m"
    else
#line 1111 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1110 "term.m"
  }
#line 364 "term.m"
}

#line 363 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
#line 363 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 363 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 363 "term.m"
  MR_Word mercury__term__Var0_5)
#line 363 "term.m"
{
#line 1110 "term.m"
  {
#line 1110 "term.m"
    MR_bool mercury__term__succeeded;
#line 1110 "term.m"
    MR_Word mercury__term__Var_6;
#line 1110 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1108 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1108 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7975 "term.c"
    {
#line 7977 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7979 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7981 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7983 "term.c"
    }
#line 51 "map.opt"
    {
#line 51 "map.opt"
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_11);
    }
#line 51 "map.opt"
    if (mercury__term__succeeded)
#line 51 "map.opt"
      {
#line 51 "map.opt"
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
#line 51 "map.opt"
        mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
      }
#line 1110 "term.m"
    if (mercury__term__succeeded)
#line 1109 "term.m"
      mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1110 "term.m"
    else
#line 1111 "term.m"
      mercury__term__Var_6 = mercury__term__Var0_5;
#line 1110 "term.m"
    return mercury__term__Var_6;
#line 1110 "term.m"
  }
#line 363 "term.m"
}

#line 352 "term.m"
void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
#line 352 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 352 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 352 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 352 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 352 "term.m"
{
#line 1087 "term.m"
  {
#line 1087 "term.m"
    MR_bool mercury__term__succeeded;

#line 1087 "term.m"
    {
#line 1087 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1087 "term.m"
      return;
    }
#line 1087 "term.m"
  }
#line 352 "term.m"
}

#line 351 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
#line 351 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 351 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 351 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 351 "term.m"
{
#line 1085 "term.m"
  {
#line 1085 "term.m"
    MR_bool mercury__term__succeeded;
#line 1085 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1085 "term.m"
    {
#line 1085 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1085 "term.m"
    return mercury__term__Terms_6;
#line 1085 "term.m"
  }
#line 351 "term.m"
}

#line 343 "term.m"
void MR_CALL 
mercury__term__apply_renaming_3_p_0(
#line 343 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 343 "term.m"
  MR_Word mercury__term__Term0_4,
#line 343 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 343 "term.m"
  MR_Word * mercury__term__Term_6)
#line 343 "term.m"
{
#line 1083 "term.m"
  {
#line 1083 "term.m"
    MR_bool mercury__term__succeeded;

#line 1083 "term.m"
    {
#line 1083 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1083 "term.m"
      return;
    }
#line 1083 "term.m"
  }
#line 343 "term.m"
}

#line 342 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
#line 342 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 342 "term.m"
  MR_Word mercury__term__Term0_4,
#line 342 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 342 "term.m"
{
#line 1081 "term.m"
  {
#line 1081 "term.m"
    MR_bool mercury__term__succeeded;
#line 1081 "term.m"
    MR_Word mercury__term__Term_6;

#line 1081 "term.m"
    {
#line 1081 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1081 "term.m"
    return mercury__term__Term_6;
#line 1081 "term.m"
  }
#line 342 "term.m"
}

#line 327 "term.m"
void MR_CALL 
mercury__term__rename_var_in_terms_4_p_0(
#line 327 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 327 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 327 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 327 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 327 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 327 "term.m"
{
#line 1072 "term.m"
  {
#line 1072 "term.m"
    MR_bool mercury__term__succeeded;

#line 1072 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1072 "term.m"
    else
#line 1073 "term.m"
      {
#line 1073 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1073 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1073 "term.m"
        MR_Word mercury__term__Term_11;
#line 1073 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1074 "term.m"
        {
#line 1074 "term.m"
          mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1075 "term.m"
        {
#line 1075 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1073 "term.m"
        {
#line 1073 "term.m"
          MR_Word base;
#line 1073 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1073 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1073 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1073 "term.m"
        }
#line 1073 "term.m"
      }
#line 1072 "term.m"
  }
#line 327 "term.m"
}

#line 319 "term.m"
void MR_CALL 
mercury__term__rename_var_in_term_4_p_0(
#line 319 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 319 "term.m"
  MR_Word mercury__term__Var_5,
#line 319 "term.m"
  MR_Word mercury__term__ReplacementVar_6,
#line 319 "term.m"
  MR_Word mercury__term__Term0_7,
#line 319 "term.m"
  MR_Word * mercury__term__Term_8)
#line 319 "term.m"
{
#line 1066 "term.m"
  {
#line 1066 "term.m"
    MR_bool mercury__term__succeeded;

#line 1066 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1067 "term.m"
      {
#line 1067 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1067 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1067 "term.m"
        MR_Word mercury__term__ArgTerms_13;
#line 1067 "term.m"
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));

#line 1068 "term.m"
        {
#line 1068 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementVar_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_13);
        }
#line 1069 "term.m"
        {
#line 1069 "term.m"
          MR_Word base;
#line 1069 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "term.m"
          *mercury__term__Term_8 = base;
#line 1069 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1069 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1069 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_14));
#line 1069 "term.m"
        }
#line 1067 "term.m"
      }
#line 1066 "term.m"
    else
#line 1060 "term.m"
      {
#line 1060 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1060 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 722 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 722 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 722 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 722 "term.m"
        if (mercury__term__succeeded)
#line 722 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
        else
#line 722 "term.m"
          {
#line 722 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 722 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 8287 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 722 "term.m"
          }
#line 1063 "term.m"
        if (mercury__term__succeeded)
#line 1062 "term.m"
          {
#line 1062 "term.m"
            MR_Word base;
#line 1062 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1062 "term.m"
            *mercury__term__Term_8 = base;
#line 1062 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_6));
#line 1062 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1062 "term.m"
          }
#line 1063 "term.m"
        else
#line 1064 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1060 "term.m"
      }
#line 1066 "term.m"
  }
#line 319 "term.m"
}

#line 307 "term.m"
void MR_CALL 
mercury__term__rename_list_4_p_0(
#line 307 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 307 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 307 "term.m"
  MR_Word mercury__term__Var_6,
#line 307 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 307 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 307 "term.m"
{
#line 1054 "term.m"
  {
#line 1054 "term.m"
    MR_bool mercury__term__succeeded;

#line 1054 "term.m"
    {
#line 1054 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1054 "term.m"
      return;
    }
#line 1054 "term.m"
  }
#line 307 "term.m"
}

#line 306 "term.m"
MR_Word MR_CALL 
mercury__term__rename_list_3_f_0(
#line 306 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 306 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 306 "term.m"
  MR_Word mercury__term__Var_6,
#line 306 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 306 "term.m"
{
#line 1052 "term.m"
  {
#line 1052 "term.m"
    MR_bool mercury__term__succeeded;
#line 1052 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1052 "term.m"
    {
#line 1052 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1052 "term.m"
    return mercury__term__Terms_8;
#line 1052 "term.m"
  }
#line 306 "term.m"
}

#line 295 "term.m"
void MR_CALL 
mercury__term__rename_4_p_0(
#line 295 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 295 "term.m"
  MR_Word mercury__term__Term0_5,
#line 295 "term.m"
  MR_Word mercury__term__Var_6,
#line 295 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 295 "term.m"
  MR_Word * mercury__term__Term_8)
#line 295 "term.m"
{
#line 1050 "term.m"
  {
#line 1050 "term.m"
    MR_bool mercury__term__succeeded;

#line 1050 "term.m"
    {
#line 1050 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1050 "term.m"
      return;
    }
#line 1050 "term.m"
  }
#line 295 "term.m"
}

#line 294 "term.m"
MR_Word MR_CALL 
mercury__term__rename_3_f_0(
#line 294 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 294 "term.m"
  MR_Word mercury__term__Term0_5,
#line 294 "term.m"
  MR_Word mercury__term__Var_6,
#line 294 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 294 "term.m"
{
#line 1048 "term.m"
  {
#line 1048 "term.m"
    MR_bool mercury__term__succeeded;
#line 1048 "term.m"
    MR_Word mercury__term__Term_8;

#line 1048 "term.m"
    {
#line 1048 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1048 "term.m"
    return mercury__term__Term_8;
#line 1048 "term.m"
  }
#line 294 "term.m"
}

#line 280 "term.m"
void MR_CALL 
mercury__term__relabel_variables_4_p_0(
#line 280 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 280 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 280 "term.m"
  MR_Word mercury__term__Var_6,
#line 280 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 280 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 280 "term.m"
{
#line 1046 "term.m"
  {
#line 1046 "term.m"
    MR_bool mercury__term__succeeded;

#line 1046 "term.m"
    {
#line 1046 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1046 "term.m"
      return;
    }
#line 1046 "term.m"
  }
#line 280 "term.m"
}

#line 279 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
#line 279 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 279 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 279 "term.m"
  MR_Word mercury__term__Var_6,
#line 279 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 279 "term.m"
{
#line 1044 "term.m"
  {
#line 1044 "term.m"
    MR_bool mercury__term__succeeded;
#line 1044 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1044 "term.m"
    {
#line 1044 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1044 "term.m"
    return mercury__term__Terms_8;
#line 1044 "term.m"
  }
#line 279 "term.m"
}

#line 267 "term.m"
void MR_CALL 
mercury__term__relabel_variable_4_p_0(
#line 267 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 267 "term.m"
  MR_Word mercury__term__Term0_5,
#line 267 "term.m"
  MR_Word mercury__term__Var_6,
#line 267 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 267 "term.m"
  MR_Word * mercury__term__Term_8)
#line 267 "term.m"
{
#line 1042 "term.m"
  {
#line 1042 "term.m"
    MR_bool mercury__term__succeeded;

#line 1042 "term.m"
    {
#line 1042 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1042 "term.m"
      return;
    }
#line 1042 "term.m"
  }
#line 267 "term.m"
}

#line 266 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
#line 266 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 266 "term.m"
  MR_Word mercury__term__Term0_5,
#line 266 "term.m"
  MR_Word mercury__term__Var_6,
#line 266 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 266 "term.m"
{
#line 1040 "term.m"
  {
#line 1040 "term.m"
    MR_bool mercury__term__succeeded;
#line 1040 "term.m"
    MR_Word mercury__term__Term_8;

#line 1040 "term.m"
    {
#line 1040 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1040 "term.m"
    return mercury__term__Term_8;
#line 1040 "term.m"
  }
#line 266 "term.m"
}

#line 251 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
#line 251 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 251 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 251 "term.m"
  MR_Word mercury__term__Bindings_2)
#line 251 "term.m"
{
#line 1022 "term.m"
  while (MR_TRUE)
#line 1022 "term.m"
    {
#line 1022 "term.m"
      /* tailcall optimized into a loop */
#line 1022 "term.m"
      {
#line 1022 "term.m"
        MR_bool mercury__term__succeeded;

#line 1022 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1025 "term.m"
          {
#line 1025 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1025 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1025 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1026 "term.m"
            {
#line 1026 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 1025 "term.m"
          }
#line 1022 "term.m"
        else
#line 1022 "term.m"
          {
#line 1022 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1022 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 1022 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1022 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 1022 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1022 "term.m"
            MR_Word mercury__term__Binding_6;
#line 1022 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 8635 "term.c"
            {
#line 8637 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8639 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 8641 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8643 "term.c"
            }
#line 8645 "term.c"
            {
#line 8647 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8649 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 8651 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8653 "term.c"
            }
#line 51 "map.opt"
            {
#line 51 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__TypeInfo_13_13, mercury__term__TypeInfo_15_15, (MR_Word) mercury__term__Bindings_2, mercury__term__V_3, &mercury__term__conv0_Binding_6);
            }
#line 51 "map.opt"
            if (mercury__term__succeeded)
#line 51 "map.opt"
              {
#line 51 "map.opt"
                mercury__term__Binding_6 = ((MR_Word) mercury__term__conv0_Binding_6);
#line 51 "map.opt"
                mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
              }
#line 1022 "term.m"
            if (mercury__term__succeeded)
#line 1024 "term.m"
              {
#line 1024 "term.m"
                /* direct tailcall eliminated */
#line 1024 "term.m"
                {
#line 1024 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 1024 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1024 "term.m"
                }
#line 1024 "term.m"
                continue;
#line 1024 "term.m"
              }
#line 1022 "term.m"
          }
#line 1022 "term.m"
        return mercury__term__succeeded;
#line 1022 "term.m"
      }
#line 1022 "term.m"
      break;
#line 1022 "term.m"
    }
#line 251 "term.m"
}

#line 246 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
#line 246 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 246 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 246 "term.m"
{
#line 1010 "term.m"
  {
#line 1010 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1010 "term.m"
    MR_Word mercury__term__ArgTerms_3;
#line 1010 "term.m"
    MR_Word mercury__term__V_2_2;
#line 1010 "term.m"
    MR_Word mercury__term__V_4_4;

#line 1010 "term.m"
    if (mercury__term__succeeded)
#line 1010 "term.m"
      {
#line 1010 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1010 "term.m"
        mercury__term__ArgTerms_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1010 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1011 "term.m"
        {
#line 1011 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_3);
        }
#line 1010 "term.m"
      }
#line 1010 "term.m"
    return mercury__term__succeeded;
#line 1010 "term.m"
  }
#line 246 "term.m"
}

#line 241 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
#line 241 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 241 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 241 "term.m"
  MR_Word mercury__term__Var_6,
#line 241 "term.m"
  MR_Word mercury__term__Subst_7)
#line 241 "term.m"
{
#line 1001 "term.m"
  while (MR_TRUE)
#line 1001 "term.m"
    {
#line 1001 "term.m"
      /* tailcall optimized into a loop */
#line 1001 "term.m"
      {
#line 1001 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1001 "term.m"
        MR_Word mercury__term__Term_4;
#line 1001 "term.m"
        MR_Word mercury__term__Terms_5;

#line 1001 "term.m"
        if (mercury__term__succeeded)
#line 1001 "term.m"
          {
#line 1001 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1001 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1002 "term.m"
            {
#line 1002 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Var_6, mercury__term__Subst_7);
            }
#line 1004 "term.m"
            if (mercury__term__succeeded)
#line 1003 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1004 "term.m"
            else
#line 1005 "term.m"
              {
#line 1005 "term.m"
                /* direct tailcall eliminated */
#line 1005 "term.m"
                {
#line 1005 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1005 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1005 "term.m"
                }
#line 1005 "term.m"
                continue;
#line 1005 "term.m"
              }
#line 1001 "term.m"
          }
#line 1001 "term.m"
        return mercury__term__succeeded;
#line 1001 "term.m"
      }
#line 1001 "term.m"
      break;
#line 1001 "term.m"
    }
#line 241 "term.m"
}

#line 237 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
#line 237 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 237 "term.m"
  MR_Word mercury__term__Term_4,
#line 237 "term.m"
  MR_Word mercury__term__Var_5,
#line 237 "term.m"
  MR_Word mercury__term__Subst_6)
#line 237 "term.m"
{
#line 996 "term.m"
  while (MR_TRUE)
#line 996 "term.m"
    {
#line 996 "term.m"
      /* tailcall optimized into a loop */
#line 996 "term.m"
      {
#line 996 "term.m"
        MR_bool mercury__term__succeeded;

#line 996 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 997 "term.m"
          {
#line 997 "term.m"
            MR_Word mercury__term__ArgTerms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 997 "term.m"
            MR_Word mercury__term___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 997 "term.m"
            MR_Word mercury__term___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 998 "term.m"
            {
#line 998 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms_11, mercury__term__Var_5, mercury__term__Subst_6);
            }
#line 997 "term.m"
          }
#line 996 "term.m"
        else
#line 989 "term.m"
          {
#line 989 "term.m"
            MR_Word mercury__term__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 989 "term.m"
            MR_Word mercury__term___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));
#line 722 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_7;
#line 722 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Var_5;

#line 722 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 722 "term.m"
            if (mercury__term__succeeded)
#line 722 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
            else
#line 722 "term.m"
              {
#line 722 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_7;
#line 722 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Var_5;

#line 8893 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 722 "term.m"
              }
#line 992 "term.m"
            if (mercury__term__succeeded)
#line 991 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 992 "term.m"
            else
#line 993 "term.m"
              {
#line 993 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 993 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 993 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 993 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 993 "term.m"
                MR_Word mercury__term__TermBoundToX_9;
#line 51 "map.opt"
                MR_Box mercury__term__conv0_TermBoundToX_9;

#line 8918 "term.c"
                {
#line 8920 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8922 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 8924 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8926 "term.c"
                }
#line 8928 "term.c"
                {
#line 8930 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8932 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 8934 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8936 "term.c"
                }
#line 51 "map.opt"
                {
#line 51 "map.opt"
                  mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_6, mercury__term__X_7, &mercury__term__conv0_TermBoundToX_9);
                }
#line 51 "map.opt"
                if (mercury__term__succeeded)
#line 51 "map.opt"
                  {
#line 51 "map.opt"
                    mercury__term__TermBoundToX_9 = ((MR_Word) mercury__term__conv0_TermBoundToX_9);
#line 51 "map.opt"
                    mercury__term__succeeded = MR_TRUE;
#line 51 "map.opt"
                  }
#line 993 "term.m"
                if (mercury__term__succeeded)
#line 994 "term.m"
                  {
#line 994 "term.m"
                    /* direct tailcall eliminated */
#line 994 "term.m"
                    {
#line 994 "term.m"
                      MR_Word mercury__term__Term__tmp_copy_4 = mercury__term__TermBoundToX_9;

#line 994 "term.m"
                      mercury__term__Term_4 = mercury__term__Term__tmp_copy_4;
#line 994 "term.m"
                    }
#line 994 "term.m"
                    continue;
#line 994 "term.m"
                  }
#line 993 "term.m"
              }
#line 989 "term.m"
          }
#line 996 "term.m"
        return mercury__term__succeeded;
#line 996 "term.m"
      }
#line 996 "term.m"
      break;
#line 996 "term.m"
    }
#line 237 "term.m"
}

#line 225 "term.m"
void MR_CALL 
mercury__term__contains_var_list_2_p_1(
#line 225 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 225 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 225 "term.m"
  MR_Word * mercury__term__Var_2,
#line 225 "term.m"
  MR_Cont mercury__term__cont,
#line 225 "term.m"
  void * mercury__term__cont_env_ptr)
#line 225 "term.m"
{
#line 980 "term.m"
  while (MR_TRUE)
#line 980 "term.m"
    {
#line 980 "term.m"
      /* tailcall optimized into a loop */
#line 980 "term.m"
      {
#line 980 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 980 "term.m"
        MR_Word mercury__term__V_10_10;
#line 980 "term.m"
        MR_Word mercury__term__V_11_11;

#line 980 "term.m"
        if (mercury__term__succeeded)
#line 980 "term.m"
          {
#line 980 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 980 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 977 "term.m"
              {
#line 977 "term.m"
                MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 977 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 977 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 978 "term.m"
                {
#line 978 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 977 "term.m"
              }
#line 976 "term.m"
            else
#line 976 "term.m"
              {
#line 976 "term.m"
                MR_Word mercury__term__V_13_13;

#line 976 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 976 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 976 "term.m"
                {
#line 976 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 976 "term.m"
              }
#line 983 "term.m"
            {
#line 983 "term.m"
              /* direct tailcall eliminated */
#line 983 "term.m"
              {
#line 983 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 983 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 983 "term.m"
              }
#line 983 "term.m"
              continue;
#line 983 "term.m"
            }
#line 980 "term.m"
          }
#line 980 "term.m"
      }
#line 980 "term.m"
      break;
#line 980 "term.m"
    }
#line 225 "term.m"
}

#line 224 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
#line 224 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 224 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 224 "term.m"
  MR_Word mercury__term__Var_2)
#line 224 "term.m"
{
#line 980 "term.m"
  while (MR_TRUE)
#line 980 "term.m"
    {
#line 980 "term.m"
      /* tailcall optimized into a loop */
#line 980 "term.m"
      {
#line 980 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 980 "term.m"
        MR_Word mercury__term__V_10_10;
#line 980 "term.m"
        MR_Word mercury__term__V_11_11;

#line 980 "term.m"
        if (mercury__term__succeeded)
#line 980 "term.m"
          {
#line 980 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 980 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 981 "term.m"
            {
#line 981 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 980 "term.m"
            if (!(mercury__term__succeeded))
#line 983 "term.m"
              {
#line 983 "term.m"
                /* direct tailcall eliminated */
#line 983 "term.m"
                {
#line 983 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 983 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 983 "term.m"
                }
#line 983 "term.m"
                continue;
#line 983 "term.m"
              }
#line 980 "term.m"
          }
#line 980 "term.m"
        return mercury__term__succeeded;
#line 980 "term.m"
      }
#line 980 "term.m"
      break;
#line 980 "term.m"
    }
#line 224 "term.m"
}

#line 216 "term.m"
void MR_CALL 
mercury__term__contains_var_2_p_1(
#line 216 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 216 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 216 "term.m"
  MR_Word * mercury__term__Var_2,
#line 216 "term.m"
  MR_Cont mercury__term__cont,
#line 216 "term.m"
  void * mercury__term__cont_env_ptr)
#line 216 "term.m"
{
#line 976 "term.m"
  {
#line 976 "term.m"
    MR_bool mercury__term__succeeded;

#line 976 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 977 "term.m"
      {
#line 977 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 977 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 977 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 978 "term.m"
        {
#line 978 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 978 "term.m"
          return;
        }
#line 977 "term.m"
      }
#line 976 "term.m"
    else
#line 976 "term.m"
      {
#line 976 "term.m"
        MR_Word mercury__term__V_4_4;

#line 976 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "term.m"
        {
#line 976 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 976 "term.m"
          return;
        }
#line 976 "term.m"
      }
#line 976 "term.m"
  }
#line 216 "term.m"
}

#line 215 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
#line 215 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 215 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 215 "term.m"
  MR_Word mercury__term__Var_2)
#line 215 "term.m"
{
#line 976 "term.m"
  {
#line 976 "term.m"
    MR_bool mercury__term__succeeded;

#line 976 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 977 "term.m"
      {
#line 977 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 977 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 977 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 978 "term.m"
        {
#line 978 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2);
        }
#line 977 "term.m"
      }
#line 976 "term.m"
    else
#line 976 "term.m"
      {
#line 976 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 722 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 722 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 722 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 722 "term.m"
        if (mercury__term__succeeded)
#line 722 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 722 "term.m"
        else
#line 722 "term.m"
          {
#line 722 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 722 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 9287 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 722 "term.m"
          }
#line 976 "term.m"
      }
#line 976 "term.m"
    return mercury__term__succeeded;
#line 976 "term.m"
  }
#line 215 "term.m"
}

#line 207 "term.m"
void MR_CALL 
mercury__term__vars_list_2_p_0(
#line 207 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 207 "term.m"
  MR_Word mercury__term__Terms_3,
#line 207 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 207 "term.m"
{
#line 963 "term.m"
  {
#line 963 "term.m"
    MR_bool mercury__term__succeeded;
#line 963 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 964 "term.m"
    {
#line 964 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 964 "term.m"
      return;
    }
#line 963 "term.m"
  }
#line 207 "term.m"
}

#line 206 "term.m"
MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
#line 206 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 206 "term.m"
  MR_Word mercury__term__Terms_3)
#line 206 "term.m"
{
#line 963 "term.m"
  {
#line 963 "term.m"
    MR_bool mercury__term__succeeded;
#line 963 "term.m"
    MR_Word mercury__term__Vars_4;
#line 963 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 964 "term.m"
    {
#line 964 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Terms_3, mercury__term__V_8_8, &mercury__term__Vars_4);
    }
#line 963 "term.m"
    return mercury__term__Vars_4;
#line 963 "term.m"
  }
#line 206 "term.m"
}

#line 199 "term.m"
void MR_CALL 
mercury__term__vars_2_3_p_0(
#line 199 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 199 "term.m"
  MR_Word mercury__term__Term_4,
#line 199 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_11,
#line 199 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_12)
#line 199 "term.m"
{
#line 955 "term.m"
  {
#line 955 "term.m"
    MR_bool mercury__term__succeeded;

#line 955 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 956 "term.m"
      {
#line 956 "term.m"
        MR_Word mercury__term__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 956 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 956 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 957 "term.m"
        {
#line 957 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms_9, mercury__term__STATE_VARIABLE_Vars_0_11, mercury__term__STATE_VARIABLE_Vars_12);
#line 957 "term.m"
          return;
        }
#line 956 "term.m"
      }
#line 955 "term.m"
    else
#line 953 "term.m"
      {
#line 953 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 953 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 954 "term.m"
        {
#line 954 "term.m"
          MR_Word base;
#line 954 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_12 = base;
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_6));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_11));
#line 954 "term.m"
        }
#line 953 "term.m"
      }
#line 955 "term.m"
  }
#line 199 "term.m"
}

#line 198 "term.m"
MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
#line 198 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 198 "term.m"
  MR_Word mercury__term__Term_4,
#line 198 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 198 "term.m"
{
#line 955 "term.m"
  {
#line 955 "term.m"
    MR_bool mercury__term__succeeded;
#line 955 "term.m"
    MR_Word mercury__term__Vars_6;

#line 955 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 956 "term.m"
      {
#line 956 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 956 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 956 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 957 "term.m"
        {
#line 957 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__ArgTerms_15, mercury__term__Vars0_5, &mercury__term__Vars_6);
        }
#line 956 "term.m"
      }
#line 955 "term.m"
    else
#line 953 "term.m"
      {
#line 953 "term.m"
        MR_Word mercury__term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 953 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 954 "term.m"
        {
#line 954 "term.m"
          mercury__term__Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 0) = ((MR_Box) (mercury__term__Var_12));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 1) = ((MR_Box) (mercury__term__Vars0_5));
#line 954 "term.m"
        }
#line 953 "term.m"
      }
#line 955 "term.m"
    return mercury__term__Vars_6;
#line 955 "term.m"
  }
#line 198 "term.m"
}

#line 194 "term.m"
void MR_CALL 
mercury__term__vars_2_p_0(
#line 194 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 194 "term.m"
  MR_Word mercury__term__Term_3,
#line 194 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 194 "term.m"
{
#line 945 "term.m"
  {
#line 945 "term.m"
    MR_bool mercury__term__succeeded;
#line 945 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 955 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 956 "term.m"
      {
#line 956 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 956 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 956 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 957 "term.m"
        {
#line 957 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__ArgTerms_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 957 "term.m"
          return;
        }
#line 956 "term.m"
      }
#line 955 "term.m"
    else
#line 953 "term.m"
      {
#line 953 "term.m"
        MR_Word mercury__term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 953 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 954 "term.m"
        {
#line 954 "term.m"
          MR_Word base;
#line 954 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term.m"
          *mercury__term__Vars_4 = base;
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_11));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 954 "term.m"
        }
#line 953 "term.m"
      }
#line 945 "term.m"
  }
#line 194 "term.m"
}

#line 193 "term.m"
MR_Word MR_CALL 
mercury__term__vars_1_f_0(
#line 193 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 193 "term.m"
  MR_Word mercury__term__Term_3)
#line 193 "term.m"
{
#line 945 "term.m"
  {
#line 945 "term.m"
    MR_bool mercury__term__succeeded;
#line 945 "term.m"
    MR_Word mercury__term__Vars_4;
#line 945 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 955 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 956 "term.m"
      {
#line 956 "term.m"
        MR_Word mercury__term__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 956 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 956 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 957 "term.m"
        {
#line 957 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_16, mercury__term__V_8_8, &mercury__term__Vars_4);
        }
#line 956 "term.m"
      }
#line 955 "term.m"
    else
#line 953 "term.m"
      {
#line 953 "term.m"
        MR_Word mercury__term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 953 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 954 "term.m"
        {
#line 954 "term.m"
          mercury__term__Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 0) = ((MR_Box) (mercury__term__Var_13));
#line 954 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 954 "term.m"
        }
#line 953 "term.m"
      }
#line 945 "term.m"
    return mercury__term__Vars_4;
#line 945 "term.m"
  }
#line 193 "term.m"
}

#line 180 "term.m"
MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
#line 180 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 180 "term.m"
  MR_Word mercury__term__Terms1_4,
#line 180 "term.m"
  MR_Word mercury__term__Terms2_5,
#line 180 "term.m"
  MR_Word * mercury__term__Subst_6)
#line 180 "term.m"
{
#line 933 "term.m"
  {
#line 933 "term.m"
    MR_bool mercury__term__succeeded;
#line 933 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 933 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 933 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 964 "term.m"
    {
#line 964 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 64 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 938 "term.m"
    {
#line 938 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 933 "term.m"
    return mercury__term__succeeded;
#line 933 "term.m"
  }
#line 180 "term.m"
}

#line 167 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
#line 167 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_20,
#line 167 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 167 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 167 "term.m"
  MR_Word mercury__term__DontBindVars_3,
#line 167 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_4,
#line 167 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_5)
#line 167 "term.m"
{
#line 909 "term.m"
  while (MR_TRUE)
#line 909 "term.m"
    {
#line 909 "term.m"
      /* tailcall optimized into a loop */
#line 909 "term.m"
      {
#line 909 "term.m"
        MR_bool mercury__term__succeeded;

#line 909 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "term.m"
          {
#line 909 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "term.m"
            if (mercury__term__succeeded)
#line 909 "term.m"
              {
#line 909 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_5 = mercury__term__STATE_VARIABLE_Subst_0_4;
#line 909 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 909 "term.m"
              }
#line 909 "term.m"
          }
#line 909 "term.m"
        else
#line 911 "term.m"
          {
#line 911 "term.m"
            MR_Word mercury__term__TermX_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 911 "term.m"
            MR_Word mercury__term__TermXs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 911 "term.m"
            MR_Word mercury__term__TermY_12;
#line 911 "term.m"
            MR_Word mercury__term__TermYs_13;
#line 911 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_18_18;

#line 910 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 910 "term.m"
            if (mercury__term__succeeded)
#line 910 "term.m"
              {
#line 910 "term.m"
                mercury__term__TermY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 910 "term.m"
                mercury__term__TermYs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 912 "term.m"
                {
#line 912 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__TermX_10, mercury__term__TermY_12, mercury__term__DontBindVars_3, mercury__term__STATE_VARIABLE_Subst_0_4, &mercury__term__STATE_VARIABLE_Subst_18_18);
                }
#line 911 "term.m"
                if (mercury__term__succeeded)
#line 913 "term.m"
                  {
#line 913 "term.m"
                    /* direct tailcall eliminated */
#line 913 "term.m"
                    {
#line 913 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_11;
#line 913 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_13;
#line 913 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Subst_18_18;

#line 913 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_4 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 913 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 913 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 913 "term.m"
                    }
#line 913 "term.m"
                    continue;
#line 913 "term.m"
                  }
#line 910 "term.m"
              }
#line 911 "term.m"
          }
#line 909 "term.m"
        return mercury__term__succeeded;
#line 909 "term.m"
      }
#line 909 "term.m"
      break;
#line 909 "term.m"
    }
#line 167 "term.m"
}

#line 158 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
#line 158 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_56,
#line 158 "term.m"
  MR_Word mercury__term__TermX_6,
#line 158 "term.m"
  MR_Word mercury__term__TermY_7,
#line 158 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 158 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_34,
#line 158 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_35)
#line 158 "term.m"
{
#line 879 "term.m"
  while (MR_TRUE)
#line 879 "term.m"
    {
#line 879 "term.m"
      /* tailcall optimized into a loop */
#line 879 "term.m"
      {
#line 879 "term.m"
        MR_bool mercury__term__succeeded;

#line 879 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_6)) == (MR_mktag((MR_Integer) 0))))
#line 879 "term.m"
          {
#line 879 "term.m"
            MR_Word mercury__term__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 1)));
#line 879 "term.m"
            MR_Word mercury__term__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 0)));
#line 890 "term.m"
            MR_Word mercury__term__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 2)));

#line 879 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 900 "term.m"
              {
#line 900 "term.m"
                MR_Word mercury__term__TypeCtorInfo_105_105;
#line 900 "term.m"
                MR_Word mercury__term__TypeInfo_106_106;
#line 900 "term.m"
                MR_Word mercury__term__NameY_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 900 "term.m"
                MR_Integer mercury__term__ArityX_32;
#line 900 "term.m"
                MR_Integer mercury__term__ArityY_33;
#line 900 "term.m"
                MR_Word mercury__term__ArgTermsY_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 901 "term.m"
                MR_Word mercury__term___CY_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));

#line 902 "term.m"
                {
#line 902 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_111_111, mercury__term__NameY_30);
                }
#line 900 "term.m"
                if (mercury__term__succeeded)
#line 900 "term.m"
                  {
#line 9852 "term.c"
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9854 "term.c"
                    {
#line 9856 "term.c"
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9858 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9860 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9862 "term.c"
                    }
#line 903 "term.m"
                    {
#line 903 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__V_110_110, &mercury__term__ArityX_32);
                    }
#line 904 "term.m"
                    {
#line 904 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__ArgTermsY_54, &mercury__term__ArityY_33);
                    }
#line 905 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_32 == mercury__term__ArityY_33);
#line 900 "term.m"
                    if (mercury__term__succeeded)
#line 906 "term.m"
                      {
#line 906 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__ArgTermsY_54, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 900 "term.m"
                  }
#line 900 "term.m"
              }
#line 879 "term.m"
            else
#line 890 "term.m"
              {
#line 890 "term.m"
                MR_Word mercury__term__Y_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 891 "term.m"
                MR_Word mercury__term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));
#line 894 "term.m"
                MR_Word mercury__term__TermBoundToY_51;
#line 892 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 892 "term.m"
                MR_Word mercury__term__TypeInfo_96_96;
#line 892 "term.m"
                MR_Word mercury__term__TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 892 "term.m"
                MR_Word mercury__term__TypeInfo_98_98;
#line 892 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_51;

#line 9908 "term.c"
                {
#line 9910 "term.c"
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9912 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
#line 9914 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9916 "term.c"
                }
#line 9918 "term.c"
                {
#line 9920 "term.c"
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9922 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
#line 9924 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9926 "term.c"
                }
#line 892 "term.m"
                {
#line 892 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_96_96, mercury__term__TypeInfo_98_98, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_52, &mercury__term__conv0_TermBoundToY_51);
                }
#line 892 "term.m"
                if (mercury__term__succeeded)
#line 892 "term.m"
                  {
#line 892 "term.m"
                    mercury__term__TermBoundToY_51 = ((MR_Word) mercury__term__conv0_TermBoundToY_51);
#line 892 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 892 "term.m"
                  }
#line 894 "term.m"
                if (mercury__term__succeeded)
#line 893 "term.m"
                  {
#line 893 "term.m"
                    /* direct tailcall eliminated */
#line 893 "term.m"
                    {
#line 893 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_51;

#line 893 "term.m"
                      mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 893 "term.m"
                    }
#line 893 "term.m"
                    continue;
#line 893 "term.m"
                  }
#line 894 "term.m"
                else
#line 895 "term.m"
                  {
#line 895 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_101_101;
#line 895 "term.m"
                    MR_Word mercury__term__TypeInfo_102_102;
#line 895 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_103_103;
#line 895 "term.m"
                    MR_Word mercury__term__TypeInfo_104_104;
#line 897 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_35;

#line 895 "term.m"
                    {
#line 895 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__Y_52, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 895 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 895 "term.m"
                    if (mercury__term__succeeded)
#line 895 "term.m"
                      {
#line 896 "term.m"
                        {
#line 896 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_52, mercury__term__DontBindVars_8);
                        }
#line 896 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 895 "term.m"
                        if (mercury__term__succeeded)
#line 895 "term.m"
                          {
#line 9999 "term.c"
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10001 "term.c"
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10003 "term.c"
                            {
#line 10005 "term.c"
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10007 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
#line 10009 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10011 "term.c"
                            }
#line 10013 "term.c"
                            {
#line 10015 "term.c"
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10017 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
#line 10019 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10021 "term.c"
                            }
#line 897 "term.m"
                            {
#line 897 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_102_102, mercury__term__TypeInfo_104_104, mercury__term__Y_52, ((MR_Box) (mercury__term__TermX_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv1_STATE_VARIABLE_Subst_35);
                            }
#line 897 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_35;
#line 897 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 895 "term.m"
                          }
#line 895 "term.m"
                      }
#line 895 "term.m"
                  }
#line 890 "term.m"
              }
#line 879 "term.m"
          }
#line 879 "term.m"
        else
#line 879 "term.m"
          {
#line 879 "term.m"
            MR_Word mercury__term__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 0)));
#line 836 "term.m"
            MR_Word mercury__term__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 1)));

#line 879 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 880 "term.m"
              {
#line 880 "term.m"
                MR_Word mercury__term__ArgTermsY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 881 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 881 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));
#line 884 "term.m"
                MR_Word mercury__term__TermBoundToX_48;
#line 882 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 882 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 882 "term.m"
                MR_Word mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 882 "term.m"
                MR_Word mercury__term__TypeInfo_88_88;
#line 882 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_48;

#line 10074 "term.c"
                {
#line 10076 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10078 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10080 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10082 "term.c"
                }
#line 10084 "term.c"
                {
#line 10086 "term.c"
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10088 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10090 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10092 "term.c"
                }
#line 882 "term.m"
                {
#line 882 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_86_86, mercury__term__TypeInfo_88_88, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv2_TermBoundToX_48);
                }
#line 882 "term.m"
                if (mercury__term__succeeded)
#line 882 "term.m"
                  {
#line 882 "term.m"
                    mercury__term__TermBoundToX_48 = ((MR_Word) mercury__term__conv2_TermBoundToX_48);
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
                      MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_48;

#line 883 "term.m"
                      mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
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
                    MR_Word mercury__term__TypeCtorInfo_91_91;
#line 885 "term.m"
                    MR_Word mercury__term__TypeInfo_92_92;
#line 885 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_93_93;
#line 885 "term.m"
                    MR_Word mercury__term__TypeInfo_94_94;
#line 887 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_35;

#line 885 "term.m"
                    {
#line 885 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__ArgTermsY_22, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 885 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 885 "term.m"
                    if (mercury__term__succeeded)
#line 885 "term.m"
                      {
#line 886 "term.m"
                        {
#line 886 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                        }
#line 886 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 885 "term.m"
                        if (mercury__term__succeeded)
#line 885 "term.m"
                          {
#line 10165 "term.c"
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10167 "term.c"
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10169 "term.c"
                            {
#line 10171 "term.c"
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10173 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
#line 10175 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10177 "term.c"
                            }
#line 10179 "term.c"
                            {
#line 10181 "term.c"
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10183 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
#line 10185 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10187 "term.c"
                            }
#line 887 "term.m"
                            {
#line 887 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_92_92, mercury__term__TypeInfo_94_94, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv3_STATE_VARIABLE_Subst_35);
                            }
#line 887 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_35;
#line 887 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 885 "term.m"
                          }
#line 885 "term.m"
                      }
#line 885 "term.m"
                  }
#line 880 "term.m"
              }
#line 879 "term.m"
            else
#line 836 "term.m"
              {
#line 836 "term.m"
                MR_Word mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 837 "term.m"
                MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));

#line 838 "term.m"
                {
#line 838 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__DontBindVars_8);
                }
#line 840 "term.m"
                if (mercury__term__succeeded)
#line 839 "term.m"
                  {
#line 839 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                  }
#line 840 "term.m"
                else
#line 842 "term.m"
                  {
#line 840 "term.m"
                    {
#line 840 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                    }
#line 842 "term.m"
                    if (mercury__term__succeeded)
#line 841 "term.m"
                      {
#line 841 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_113_113, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 842 "term.m"
                    else
#line 859 "term.m"
                      {
#line 859 "term.m"
                        MR_Word mercury__term__TypeInfo_62_62;
#line 859 "term.m"
                        MR_Word mercury__term__TypeInfo_64_64;
#line 859 "term.m"
                        MR_Word mercury__term__TermBoundToX_14;
#line 842 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 842 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 842 "term.m"
                        MR_Box mercury__term__conv4_TermBoundToX_14;

#line 10260 "term.c"
                        {
#line 10262 "term.c"
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10264 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
#line 10266 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10268 "term.c"
                        }
#line 10270 "term.c"
                        {
#line 10272 "term.c"
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10274 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 10276 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10278 "term.c"
                        }
#line 842 "term.m"
                        {
#line 842 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv4_TermBoundToX_14);
                        }
#line 842 "term.m"
                        if (mercury__term__succeeded)
#line 842 "term.m"
                          {
#line 842 "term.m"
                            mercury__term__TermBoundToX_14 = ((MR_Word) mercury__term__conv4_TermBoundToX_14);
#line 842 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 842 "term.m"
                          }
#line 859 "term.m"
                        if (mercury__term__succeeded)
#line 848 "term.m"
                          {
#line 848 "term.m"
                            MR_Word mercury__term__TermBoundToY_15;
#line 843 "term.m"
                            MR_Box mercury__term__conv5_TermBoundToY_15;

#line 843 "term.m"
                            {
#line 843 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv5_TermBoundToY_15);
                            }
#line 843 "term.m"
                            if (mercury__term__succeeded)
#line 843 "term.m"
                              {
#line 843 "term.m"
                                mercury__term__TermBoundToY_15 = ((MR_Word) mercury__term__conv5_TermBoundToY_15);
#line 843 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 843 "term.m"
                              }
#line 848 "term.m"
                            if (mercury__term__succeeded)
#line 846 "term.m"
                              {
#line 846 "term.m"
                                /* direct tailcall eliminated */
#line 846 "term.m"
                                {
#line 846 "term.m"
                                  MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_14;
#line 846 "term.m"
                                  MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_15;

#line 846 "term.m"
                                  mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 846 "term.m"
                                  mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 846 "term.m"
                                }
#line 846 "term.m"
                                continue;
#line 846 "term.m"
                              }
#line 848 "term.m"
                            else
#line 851 "term.m"
                              {
#line 851 "term.m"
                                MR_Word mercury__term__SubstTermBoundToX_16;
#line 852 "term.m"
                                MR_Word mercury__term__V_107_107;
#line 852 "term.m"
                                MR_Word mercury__term__V_17_17;

#line 850 "term.m"
                                {
#line 850 "term.m"
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToX_14, &mercury__term__SubstTermBoundToX_16);
                                }
#line 852 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_16)) == (MR_mktag((MR_Integer) 1)));
#line 852 "term.m"
                                if (mercury__term__succeeded)
#line 852 "term.m"
                                  {
#line 852 "term.m"
                                    mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 0)));
#line 852 "term.m"
                                    mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 1)));
#line 852 "term.m"
                                    {
#line 852 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_107_107);
                                    }
#line 852 "term.m"
                                  }
#line 854 "term.m"
                                if (mercury__term__succeeded)
#line 854 "term.m"
                                  {
#line 854 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 854 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 854 "term.m"
                                  }
#line 854 "term.m"
                                else
#line 855 "term.m"
                                  {
#line 856 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_35;

#line 855 "term.m"
                                    {
#line 855 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToX_16, mercury__term__Y_12, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 855 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 855 "term.m"
                                    if (mercury__term__succeeded)
#line 855 "term.m"
                                      {
#line 856 "term.m"
                                        {
#line 856 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, mercury__term__Y_12, ((MR_Box) (mercury__term__SubstTermBoundToX_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv6_STATE_VARIABLE_Subst_35);
                                        }
#line 856 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_35;
#line 856 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 855 "term.m"
                                      }
#line 855 "term.m"
                                  }
#line 851 "term.m"
                              }
#line 848 "term.m"
                          }
#line 859 "term.m"
                        else
#line 870 "term.m"
                          {
#line 870 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 870 "term.m"
                            MR_Word mercury__term__TypeInfo_76_76;
#line 870 "term.m"
                            MR_Word mercury__term__TermBoundToY_47;
#line 860 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 860 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 860 "term.m"
                            MR_Box mercury__term__conv7_TermBoundToY_47;

#line 10437 "term.c"
                            {
#line 10439 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10441 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 10443 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10445 "term.c"
                            }
#line 10447 "term.c"
                            {
#line 10449 "term.c"
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10451 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10453 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10455 "term.c"
                            }
#line 860 "term.m"
                            {
#line 860 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv7_TermBoundToY_47);
                            }
#line 860 "term.m"
                            if (mercury__term__succeeded)
#line 860 "term.m"
                              {
#line 860 "term.m"
                                mercury__term__TermBoundToY_47 = ((MR_Word) mercury__term__conv7_TermBoundToY_47);
#line 860 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 860 "term.m"
                              }
#line 870 "term.m"
                            if (mercury__term__succeeded)
#line 863 "term.m"
                              {
#line 863 "term.m"
                                MR_Word mercury__term__SubstTermBoundToY_18;
#line 864 "term.m"
                                MR_Word mercury__term__V_108_108;
#line 864 "term.m"
                                MR_Word mercury__term__V_19_19;

#line 862 "term.m"
                                {
#line 862 "term.m"
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToY_47, &mercury__term__SubstTermBoundToY_18);
                                }
#line 864 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_18)) == (MR_mktag((MR_Integer) 1)));
#line 864 "term.m"
                                if (mercury__term__succeeded)
#line 864 "term.m"
                                  {
#line 864 "term.m"
                                    mercury__term__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 0)));
#line 864 "term.m"
                                    mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 1)));
#line 864 "term.m"
                                    {
#line 864 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__V_108_108);
                                    }
#line 864 "term.m"
                                  }
#line 866 "term.m"
                                if (mercury__term__succeeded)
#line 866 "term.m"
                                  {
#line 866 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 866 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 866 "term.m"
                                  }
#line 866 "term.m"
                                else
#line 867 "term.m"
                                  {
#line 868 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_35;

#line 867 "term.m"
                                    {
#line 867 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToY_18, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
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
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, mercury__term__V_113_113, ((MR_Box) (mercury__term__SubstTermBoundToY_18)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv8_STATE_VARIABLE_Subst_35);
                                        }
#line 868 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_35;
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
#line 874 "term.m"
                              {
#line 872 "term.m"
                                {
#line 872 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12);
                                }
#line 874 "term.m"
                                if (mercury__term__succeeded)
#line 874 "term.m"
                                  *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 874 "term.m"
                                else
#line 875 "term.m"
                                  {
#line 875 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 875 "term.m"
                                    MR_Word mercury__term__TypeInfo_82_82;
#line 875 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_83_83;
#line 875 "term.m"
                                    MR_Word mercury__term__TypeInfo_84_84;
#line 875 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_35;

#line 10576 "term.c"
                                    {
#line 10578 "term.c"
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10580 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 10582 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10584 "term.c"
                                    }
#line 10586 "term.c"
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10588 "term.c"
                                    {
#line 10590 "term.c"
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10592 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10594 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10596 "term.c"
                                    }
#line 875 "term.m"
                                    {
#line 875 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_82_82, mercury__term__TypeInfo_84_84, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv9_STATE_VARIABLE_Subst_35);
                                    }
#line 875 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_35;
#line 875 "term.m"
                                  }
#line 874 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 874 "term.m"
                              }
#line 870 "term.m"
                          }
#line 859 "term.m"
                      }
#line 842 "term.m"
                  }
#line 836 "term.m"
              }
#line 879 "term.m"
          }
#line 879 "term.m"
        return mercury__term__succeeded;
#line 879 "term.m"
      }
#line 879 "term.m"
      break;
#line 879 "term.m"
    }
#line 158 "term.m"
}

#line 149 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
#line 149 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 149 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 149 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 149 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 149 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 149 "term.m"
{
#line 827 "term.m"
  while (MR_TRUE)
#line 827 "term.m"
    {
#line 827 "term.m"
      /* tailcall optimized into a loop */
#line 827 "term.m"
      {
#line 827 "term.m"
        MR_bool mercury__term__succeeded;

#line 827 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 827 "term.m"
          {
#line 827 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "term.m"
            if (mercury__term__succeeded)
#line 827 "term.m"
              {
#line 827 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 827 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 827 "term.m"
              }
#line 827 "term.m"
          }
#line 827 "term.m"
        else
#line 828 "term.m"
          {
#line 828 "term.m"
            MR_Word mercury__term__TermX_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 828 "term.m"
            MR_Word mercury__term__TermXs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 828 "term.m"
            MR_Word mercury__term__TermY_10;
#line 828 "term.m"
            MR_Word mercury__term__TermYs_11;
#line 828 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;

#line 828 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 828 "term.m"
            if (mercury__term__succeeded)
#line 828 "term.m"
              {
#line 828 "term.m"
                mercury__term__TermY_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 828 "term.m"
                mercury__term__TermYs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 829 "term.m"
                {
#line 829 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TermX_8, mercury__term__TermY_10, mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__STATE_VARIABLE_Subst_15_15);
                }
#line 828 "term.m"
                if (mercury__term__succeeded)
#line 830 "term.m"
                  {
#line 830 "term.m"
                    /* direct tailcall eliminated */
#line 830 "term.m"
                    {
#line 830 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_9;
#line 830 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_11;
#line 830 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 830 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 830 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 830 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 830 "term.m"
                    }
#line 830 "term.m"
                    continue;
#line 830 "term.m"
                  }
#line 828 "term.m"
              }
#line 828 "term.m"
          }
#line 827 "term.m"
        return mercury__term__succeeded;
#line 827 "term.m"
      }
#line 827 "term.m"
      break;
#line 827 "term.m"
    }
#line 149 "term.m"
}

#line 140 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
#line 140 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_50,
#line 140 "term.m"
  MR_Word mercury__term__TermX_5,
#line 140 "term.m"
  MR_Word mercury__term__TermY_6,
#line 140 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_30,
#line 140 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_31)
#line 140 "term.m"
{
#line 801 "term.m"
  while (MR_TRUE)
#line 801 "term.m"
    {
#line 801 "term.m"
      /* tailcall optimized into a loop */
#line 801 "term.m"
      {
#line 801 "term.m"
        MR_bool mercury__term__succeeded;

#line 801 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_5)) == (MR_mktag((MR_Integer) 0))))
#line 801 "term.m"
          {
#line 801 "term.m"
            MR_Word mercury__term__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 1)));
#line 801 "term.m"
            MR_Word mercury__term__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 0)));
#line 811 "term.m"
            MR_Word mercury__term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 2)));

#line 801 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 820 "term.m"
              {
#line 820 "term.m"
                MR_Word mercury__term__NameY_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 820 "term.m"
                MR_Word mercury__term__ArgTermsY_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 821 "term.m"
                MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));

#line 822 "term.m"
                {
#line 822 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_95_95, mercury__term__NameY_28);
                }
#line 820 "term.m"
                if (mercury__term__succeeded)
#line 824 "term.m"
                  {
#line 824 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__ArgTermsY_48, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__STATE_VARIABLE_Subst_31);
                  }
#line 820 "term.m"
              }
#line 801 "term.m"
            else
#line 811 "term.m"
              {
#line 811 "term.m"
                MR_Word mercury__term__Y_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 812 "term.m"
                MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 815 "term.m"
                MR_Word mercury__term__TermBoundToY_45;
#line 813 "term.m"
                MR_Word mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 813 "term.m"
                MR_Word mercury__term__TypeInfo_84_84;
#line 813 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 813 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 813 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_45;

#line 10831 "term.c"
                {
#line 10833 "term.c"
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10835 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10837 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10839 "term.c"
                }
#line 10841 "term.c"
                {
#line 10843 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10845 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10847 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10849 "term.c"
                }
#line 813 "term.m"
                {
#line 813 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_84_84, mercury__term__TypeInfo_86_86, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_46, &mercury__term__conv0_TermBoundToY_45);
                }
#line 813 "term.m"
                if (mercury__term__succeeded)
#line 813 "term.m"
                  {
#line 813 "term.m"
                    mercury__term__TermBoundToY_45 = ((MR_Word) mercury__term__conv0_TermBoundToY_45);
#line 813 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 813 "term.m"
                  }
#line 815 "term.m"
                if (mercury__term__succeeded)
#line 814 "term.m"
                  {
#line 814 "term.m"
                    /* direct tailcall eliminated */
#line 814 "term.m"
                    {
#line 814 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_45;

#line 814 "term.m"
                      mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 814 "term.m"
                    }
#line 814 "term.m"
                    continue;
#line 814 "term.m"
                  }
#line 815 "term.m"
                else
#line 816 "term.m"
                  {
#line 816 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_87_87;
#line 816 "term.m"
                    MR_Word mercury__term__TypeInfo_88_88;
#line 816 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_89_89;
#line 816 "term.m"
                    MR_Word mercury__term__TypeInfo_90_90;
#line 817 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_31;

#line 816 "term.m"
                    {
#line 816 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__Y_46, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 816 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 816 "term.m"
                    if (mercury__term__succeeded)
#line 816 "term.m"
                      {
#line 10911 "term.c"
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10913 "term.c"
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10915 "term.c"
                        {
#line 10917 "term.c"
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10919 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10921 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10923 "term.c"
                        }
#line 10925 "term.c"
                        {
#line 10927 "term.c"
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10929 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
#line 10931 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10933 "term.c"
                        }
#line 817 "term.m"
                        {
#line 817 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_88_88, mercury__term__TypeInfo_90_90, mercury__term__Y_46, ((MR_Box) (mercury__term__TermX_5)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv1_STATE_VARIABLE_Subst_31);
                        }
#line 817 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_31;
#line 817 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 816 "term.m"
                      }
#line 816 "term.m"
                  }
#line 811 "term.m"
              }
#line 801 "term.m"
          }
#line 801 "term.m"
        else
#line 801 "term.m"
          {
#line 801 "term.m"
            MR_Word mercury__term__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 0)));
#line 763 "term.m"
            MR_Word mercury__term__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 1)));

#line 801 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 802 "term.m"
              {
#line 802 "term.m"
                MR_Word mercury__term__ArgTermsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 803 "term.m"
                MR_Word mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 803 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));
#line 806 "term.m"
                MR_Word mercury__term__TermBoundToX_42;
#line 804 "term.m"
                MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 804 "term.m"
                MR_Word mercury__term__TypeInfo_76_76;
#line 804 "term.m"
                MR_Word mercury__term__TypeCtorInfo_77_77 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 804 "term.m"
                MR_Word mercury__term__TypeInfo_78_78;
#line 804 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_42;

#line 10984 "term.c"
                {
#line 10986 "term.c"
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10988 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10990 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10992 "term.c"
                }
#line 10994 "term.c"
                {
#line 10996 "term.c"
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10998 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
#line 11000 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11002 "term.c"
                }
#line 804 "term.m"
                {
#line 804 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_76_76, mercury__term__TypeInfo_78_78, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv2_TermBoundToX_42);
                }
#line 804 "term.m"
                if (mercury__term__succeeded)
#line 804 "term.m"
                  {
#line 804 "term.m"
                    mercury__term__TermBoundToX_42 = ((MR_Word) mercury__term__conv2_TermBoundToX_42);
#line 804 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 804 "term.m"
                  }
#line 806 "term.m"
                if (mercury__term__succeeded)
#line 805 "term.m"
                  {
#line 805 "term.m"
                    /* direct tailcall eliminated */
#line 805 "term.m"
                    {
#line 805 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_42;

#line 805 "term.m"
                      mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 805 "term.m"
                    }
#line 805 "term.m"
                    continue;
#line 805 "term.m"
                  }
#line 806 "term.m"
                else
#line 807 "term.m"
                  {
#line 807 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_79_79;
#line 807 "term.m"
                    MR_Word mercury__term__TypeInfo_80_80;
#line 807 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_81_81;
#line 807 "term.m"
                    MR_Word mercury__term__TypeInfo_82_82;
#line 808 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_31;

#line 807 "term.m"
                    {
#line 807 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__ArgTermsY_20, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 807 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 807 "term.m"
                    if (mercury__term__succeeded)
#line 807 "term.m"
                      {
#line 11064 "term.c"
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11066 "term.c"
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11068 "term.c"
                        {
#line 11070 "term.c"
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11072 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
#line 11074 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11076 "term.c"
                        }
#line 11078 "term.c"
                        {
#line 11080 "term.c"
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11082 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 11084 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11086 "term.c"
                        }
#line 808 "term.m"
                        {
#line 808 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_80_80, mercury__term__TypeInfo_82_82, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv3_STATE_VARIABLE_Subst_31);
                        }
#line 808 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_31;
#line 808 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 807 "term.m"
                      }
#line 807 "term.m"
                  }
#line 802 "term.m"
              }
#line 801 "term.m"
            else
#line 763 "term.m"
              {
#line 763 "term.m"
                MR_Word mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 764 "term.m"
                MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 781 "term.m"
                MR_Word mercury__term__TypeInfo_52_52;
#line 781 "term.m"
                MR_Word mercury__term__TypeInfo_54_54;
#line 781 "term.m"
                MR_Word mercury__term__TermBoundToX_12;
#line 765 "term.m"
                MR_Word mercury__term__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 765 "term.m"
                MR_Word mercury__term__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 765 "term.m"
                MR_Box mercury__term__conv4_TermBoundToX_12;

#line 11124 "term.c"
                {
#line 11126 "term.c"
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11128 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
#line 11130 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11132 "term.c"
                }
#line 11134 "term.c"
                {
#line 11136 "term.c"
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11138 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
#line 11140 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11142 "term.c"
                }
#line 765 "term.m"
                {
#line 765 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv4_TermBoundToX_12);
                }
#line 765 "term.m"
                if (mercury__term__succeeded)
#line 765 "term.m"
                  {
#line 765 "term.m"
                    mercury__term__TermBoundToX_12 = ((MR_Word) mercury__term__conv4_TermBoundToX_12);
#line 765 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 765 "term.m"
                  }
#line 781 "term.m"
                if (mercury__term__succeeded)
#line 770 "term.m"
                  {
#line 770 "term.m"
                    MR_Word mercury__term__TermBoundToY_13;
#line 766 "term.m"
                    MR_Box mercury__term__conv5_TermBoundToY_13;

#line 766 "term.m"
                    {
#line 766 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv5_TermBoundToY_13);
                    }
#line 766 "term.m"
                    if (mercury__term__succeeded)
#line 766 "term.m"
                      {
#line 766 "term.m"
                        mercury__term__TermBoundToY_13 = ((MR_Word) mercury__term__conv5_TermBoundToY_13);
#line 766 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 766 "term.m"
                      }
#line 770 "term.m"
                    if (mercury__term__succeeded)
#line 769 "term.m"
                      {
#line 769 "term.m"
                        /* direct tailcall eliminated */
#line 769 "term.m"
                        {
#line 769 "term.m"
                          MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_12;
#line 769 "term.m"
                          MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_13;

#line 769 "term.m"
                          mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 769 "term.m"
                          mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 769 "term.m"
                        }
#line 769 "term.m"
                        continue;
#line 769 "term.m"
                      }
#line 770 "term.m"
                    else
#line 773 "term.m"
                      {
#line 773 "term.m"
                        MR_Word mercury__term__SubstTermBoundToX_14;
#line 774 "term.m"
                        MR_Word mercury__term__V_91_91;
#line 774 "term.m"
                        MR_Word mercury__term__V_15_15;

#line 772 "term.m"
                        {
#line 772 "term.m"
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToX_12, &mercury__term__SubstTermBoundToX_14);
                        }
#line 774 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_14)) == (MR_mktag((MR_Integer) 1)));
#line 774 "term.m"
                        if (mercury__term__succeeded)
#line 774 "term.m"
                          {
#line 774 "term.m"
                            mercury__term__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 0)));
#line 774 "term.m"
                            mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 1)));
#line 774 "term.m"
                            {
#line 774 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__Y_10, mercury__term__V_91_91);
                            }
#line 774 "term.m"
                          }
#line 776 "term.m"
                        if (mercury__term__succeeded)
#line 776 "term.m"
                          {
#line 776 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 776 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 776 "term.m"
                          }
#line 776 "term.m"
                        else
#line 777 "term.m"
                          {
#line 778 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_31;

#line 777 "term.m"
                            {
#line 777 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToX_14, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 777 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 777 "term.m"
                            if (mercury__term__succeeded)
#line 777 "term.m"
                              {
#line 778 "term.m"
                                {
#line 778 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, mercury__term__Y_10, ((MR_Box) (mercury__term__SubstTermBoundToX_14)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv6_STATE_VARIABLE_Subst_31);
                                }
#line 778 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_31;
#line 778 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 777 "term.m"
                              }
#line 777 "term.m"
                          }
#line 773 "term.m"
                      }
#line 770 "term.m"
                  }
#line 781 "term.m"
                else
#line 792 "term.m"
                  {
#line 792 "term.m"
                    MR_Word mercury__term__TypeInfo_64_64;
#line 792 "term.m"
                    MR_Word mercury__term__TypeInfo_66_66;
#line 792 "term.m"
                    MR_Word mercury__term__TermBoundToY_41;
#line 782 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 782 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 782 "term.m"
                    MR_Box mercury__term__conv7_TermBoundToY_41;

#line 11301 "term.c"
                    {
#line 11303 "term.c"
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11305 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 11307 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11309 "term.c"
                    }
#line 11311 "term.c"
                    {
#line 11313 "term.c"
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11315 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
#line 11317 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11319 "term.c"
                    }
#line 782 "term.m"
                    {
#line 782 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv7_TermBoundToY_41);
                    }
#line 782 "term.m"
                    if (mercury__term__succeeded)
#line 782 "term.m"
                      {
#line 782 "term.m"
                        mercury__term__TermBoundToY_41 = ((MR_Word) mercury__term__conv7_TermBoundToY_41);
#line 782 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 782 "term.m"
                      }
#line 792 "term.m"
                    if (mercury__term__succeeded)
#line 785 "term.m"
                      {
#line 785 "term.m"
                        MR_Word mercury__term__SubstTermBoundToY_16;
#line 786 "term.m"
                        MR_Word mercury__term__V_92_92;
#line 786 "term.m"
                        MR_Word mercury__term__V_17_17;

#line 784 "term.m"
                        {
#line 784 "term.m"
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToY_41, &mercury__term__SubstTermBoundToY_16);
                        }
#line 786 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_16)) == (MR_mktag((MR_Integer) 1)));
#line 786 "term.m"
                        if (mercury__term__succeeded)
#line 786 "term.m"
                          {
#line 786 "term.m"
                            mercury__term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 0)));
#line 786 "term.m"
                            mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 1)));
#line 786 "term.m"
                            {
#line 786 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__V_92_92);
                            }
#line 786 "term.m"
                          }
#line 788 "term.m"
                        if (mercury__term__succeeded)
#line 788 "term.m"
                          {
#line 788 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 788 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 788 "term.m"
                          }
#line 788 "term.m"
                        else
#line 789 "term.m"
                          {
#line 790 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_31;

#line 789 "term.m"
                            {
#line 789 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToY_16, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 789 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 789 "term.m"
                            if (mercury__term__succeeded)
#line 789 "term.m"
                              {
#line 790 "term.m"
                                {
#line 790 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, mercury__term__V_97_97, ((MR_Box) (mercury__term__SubstTermBoundToY_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv8_STATE_VARIABLE_Subst_31);
                                }
#line 790 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_31;
#line 790 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 789 "term.m"
                              }
#line 789 "term.m"
                          }
#line 785 "term.m"
                      }
#line 792 "term.m"
                    else
#line 796 "term.m"
                      {
#line 794 "term.m"
                        {
#line 794 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__Y_10);
                        }
#line 796 "term.m"
                        if (mercury__term__succeeded)
#line 796 "term.m"
                          *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 796 "term.m"
                        else
#line 797 "term.m"
                          {
#line 797 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 797 "term.m"
                            MR_Word mercury__term__TypeInfo_72_72;
#line 797 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73;
#line 797 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 797 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_31;

#line 11440 "term.c"
                            {
#line 11442 "term.c"
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11444 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
#line 11446 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11448 "term.c"
                            }
#line 11450 "term.c"
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11452 "term.c"
                            {
#line 11454 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11456 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 11458 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11460 "term.c"
                            }
#line 797 "term.m"
                            {
#line 797 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_72_72, mercury__term__TypeInfo_74_74, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv9_STATE_VARIABLE_Subst_31);
                            }
#line 797 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_31;
#line 797 "term.m"
                          }
#line 796 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 796 "term.m"
                      }
#line 792 "term.m"
                  }
#line 763 "term.m"
              }
#line 801 "term.m"
          }
#line 801 "term.m"
        return mercury__term__succeeded;
#line 801 "term.m"
      }
#line 801 "term.m"
      break;
#line 801 "term.m"
    }
#line 140 "term.m"
}

#line 119 "term.m"
MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
#line 119 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 119 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 119 "term.m"
{
#line 757 "term.m"
  {
#line 757 "term.m"
    MR_bool mercury__term__succeeded;
#line 757 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 757 "term.m"
    return mercury__term__VarNum_3;
#line 757 "term.m"
  }
#line 119 "term.m"
}

#line 110 "term.m"
void MR_CALL 
mercury__term__var_to_int_2_p_0(
#line 110 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 110 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 110 "term.m"
  MR_Integer * mercury__term__VarNum_3)
#line 110 "term.m"
{
#line 755 "term.m"
  {
#line 755 "term.m"
    MR_bool mercury__term__succeeded;

#line 755 "term.m"
    *mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 755 "term.m"
  }
#line 110 "term.m"
}

#line 109 "term.m"
MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
#line 109 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 109 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 109 "term.m"
{
#line 754 "term.m"
  {
#line 754 "term.m"
    MR_bool mercury__term__succeeded;
#line 754 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 754 "term.m"
    return mercury__term__VarNum_3;
#line 754 "term.m"
  }
#line 109 "term.m"
}

#line 94 "term.m"
void MR_CALL 
mercury__term__create_var_3_p_0(
#line 94 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 94 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 94 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 94 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 94 "term.m"
{
#line 733 "term.m"
  {
#line 733 "term.m"
    MR_bool mercury__term__succeeded;
#line 733 "term.m"
    MR_Integer mercury__term__V_4;
#line 733 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 735 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 733 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 733 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 733 "term.m"
  }
#line 94 "term.m"
}

#line 88 "term.m"
MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
#line 88 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 88 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 88 "term.m"
{
#line 731 "term.m"
  {
#line 731 "term.m"
    MR_bool mercury__term__succeeded;
#line 731 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 731 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 731 "term.m"
    return mercury__term__succeeded;
#line 731 "term.m"
  }
#line 88 "term.m"
}

#line 87 "term.m"
void MR_CALL 
mercury__term__init_var_supply_1_p_0(
#line 87 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 87 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 87 "term.m"
{
#line 731 "term.m"
  {
#line 731 "term.m"
    MR_bool mercury__term__succeeded;

#line 731 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 731 "term.m"
  }
#line 87 "term.m"
}

#line 85 "term.m"
MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
#line 85 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3)
#line 85 "term.m"
{
#line 730 "term.m"
  {
#line 730 "term.m"
    MR_bool mercury__term__succeeded;
#line 730 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 730 "term.m"
    return mercury__term__HeadVar__1_1;
#line 730 "term.m"
  }
#line 85 "term.m"
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
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_integer_base_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_0);
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
