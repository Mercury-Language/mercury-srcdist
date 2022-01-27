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

#line 1034 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1034 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1034 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1034 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 921 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 921 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 921 "term.m"
  MR_Word mercury__term__X_6,
#line 921 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 921 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 921 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 921 "term.m"
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



#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
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
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
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
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 784 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 789 "term.c"
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

#line 804 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 809 "term.c"
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

#line 824 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_integer_base_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

#line 830 "term.c"
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

#line 845 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 850 "term.c"
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

#line 865 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 870 "term.c"
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

#line 885 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 890 "term.c"
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

#line 905 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 910 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 915 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 920 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5
};

#line 927 "term.c"
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

#line 951 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_2,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_3
};

#line 961 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 971 "term.c"
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

#line 988 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 994 "term.c"
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

#line 1009 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1014 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1023 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1028 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1033 "term.c"
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

#line 1050 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1056 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1061 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1066 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1071 "term.c"
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

#line 1088 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  (MR_Integer) 0
};

#line 1094 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  (MR_Integer) 1
};

#line 1100 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  (MR_Integer) 2
};

#line 1106 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  (MR_Integer) 3
};

#line 1112 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1,
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3
};

#line 1120 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3,
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1
};

#line 1128 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1136 "term.c"
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

#line 1153 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1161 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1170 "term.c"
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

#line 1187 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1195 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1204 "term.c"
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

#line 1221 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1229 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1238 "term.c"
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

#line 1255 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1263 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1272 "term.c"
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

#line 1289 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1297 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1304 "term.c"
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

#line 1319 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1325 "term.c"
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

#line 1340 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1345 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1350 "term.c"
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

#line 1364 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1370 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1376 "term.c"
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

#line 1393 "term.c"
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

#line 1410 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 1415 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1422 "term.c"
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

#line 1439 "term.c"
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

#line 1456 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 1461 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1468 "term.c"
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

#line 1485 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1496 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 1499 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1501 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1503 "term.c"
{
#line 1505 "term.c"
  {
#line 1507 "term.c"
    MR_bool mercury__term__succeeded;

#line 1510 "term.c"
    {
#line 1512 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1515 "term.c"
    return mercury__term__succeeded;
#line 1517 "term.c"
  }
#line 1519 "term.c"
}

#line 1522 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 1525 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1527 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1529 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1531 "term.c"
{
#line 1533 "term.c"
  {
#line 1535 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1538 "term.c"
    {
#line 1540 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1543 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1545 "term.c"
  }
#line 1547 "term.c"
}

#line 1550 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 1553 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1555 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1557 "term.c"
{
#line 1559 "term.c"
  {
#line 1561 "term.c"
    MR_bool mercury__term__succeeded;

#line 1564 "term.c"
    {
#line 1566 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1569 "term.c"
    return mercury__term__succeeded;
#line 1571 "term.c"
  }
#line 1573 "term.c"
}

#line 1576 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 1579 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1581 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1583 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1585 "term.c"
{
#line 1587 "term.c"
  {
#line 1589 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1592 "term.c"
    {
#line 1594 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1597 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1599 "term.c"
  }
#line 1601 "term.c"
}

#line 1604 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 1607 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1609 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1611 "term.c"
{
#line 1613 "term.c"
  {
#line 1615 "term.c"
    MR_bool mercury__term__succeeded;

#line 1618 "term.c"
    {
#line 1620 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 1623 "term.c"
    return mercury__term__succeeded;
#line 1625 "term.c"
  }
#line 1627 "term.c"
}

#line 1630 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 1633 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1635 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1637 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1639 "term.c"
{
#line 1641 "term.c"
  {
#line 1643 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1646 "term.c"
    {
#line 1648 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 1651 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1653 "term.c"
  }
#line 1655 "term.c"
}

#line 1658 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
#line 1661 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1663 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1665 "term.c"
{
#line 1667 "term.c"
  {
#line 1669 "term.c"
    MR_bool mercury__term__succeeded;

#line 1672 "term.c"
    {
#line 1674 "term.c"
      mercury__term__succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1677 "term.c"
    return mercury__term__succeeded;
#line 1679 "term.c"
  }
#line 1681 "term.c"
}

#line 1684 "term.c"
static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
#line 1687 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1689 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1691 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1693 "term.c"
{
#line 1695 "term.c"
  {
#line 1697 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1700 "term.c"
    {
#line 1702 "term.c"
      mercury__term____Compare____integer_base_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1705 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1707 "term.c"
  }
#line 1709 "term.c"
}

#line 1712 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 1715 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1717 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1719 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1721 "term.c"
{
#line 1723 "term.c"
  {
#line 1725 "term.c"
    MR_bool mercury__term__succeeded;

#line 1728 "term.c"
    {
#line 1730 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1733 "term.c"
    return mercury__term__succeeded;
#line 1735 "term.c"
  }
#line 1737 "term.c"
}

#line 1740 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 1743 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1745 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1747 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1749 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1751 "term.c"
{
#line 1753 "term.c"
  {
#line 1755 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1758 "term.c"
    {
#line 1760 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1763 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1765 "term.c"
  }
#line 1767 "term.c"
}

#line 1770 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 1773 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1775 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1777 "term.c"
{
#line 1779 "term.c"
  {
#line 1781 "term.c"
    MR_bool mercury__term__succeeded;

#line 1784 "term.c"
    {
#line 1786 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1789 "term.c"
    return mercury__term__succeeded;
#line 1791 "term.c"
  }
#line 1793 "term.c"
}

#line 1796 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 1799 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1801 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1803 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1805 "term.c"
{
#line 1807 "term.c"
  {
#line 1809 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1812 "term.c"
    {
#line 1814 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1817 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1819 "term.c"
  }
#line 1821 "term.c"
}

#line 1824 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 1827 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1829 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1831 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1833 "term.c"
{
#line 1835 "term.c"
  {
#line 1837 "term.c"
    MR_bool mercury__term__succeeded;

#line 1840 "term.c"
    {
#line 1842 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1845 "term.c"
    return mercury__term__succeeded;
#line 1847 "term.c"
  }
#line 1849 "term.c"
}

#line 1852 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 1855 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1857 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1859 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1861 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1863 "term.c"
{
#line 1865 "term.c"
  {
#line 1867 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1870 "term.c"
    {
#line 1872 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1875 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1877 "term.c"
  }
#line 1879 "term.c"
}

#line 1882 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 1885 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1887 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1889 "term.c"
{
#line 1891 "term.c"
  {
#line 1893 "term.c"
    MR_bool mercury__term__succeeded;

#line 1896 "term.c"
    {
#line 1898 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1901 "term.c"
    return mercury__term__succeeded;
#line 1903 "term.c"
  }
#line 1905 "term.c"
}

#line 1908 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 1911 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1913 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1915 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1917 "term.c"
{
#line 1919 "term.c"
  {
#line 1921 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1924 "term.c"
    {
#line 1926 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1929 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1931 "term.c"
  }
#line 1933 "term.c"
}

#line 1936 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 1939 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1941 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1943 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1945 "term.c"
{
#line 1947 "term.c"
  {
#line 1949 "term.c"
    MR_bool mercury__term__succeeded;

#line 1952 "term.c"
    {
#line 1954 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1957 "term.c"
    return mercury__term__succeeded;
#line 1959 "term.c"
  }
#line 1961 "term.c"
}

#line 1964 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 1967 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1969 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1971 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1973 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1975 "term.c"
{
#line 1977 "term.c"
  {
#line 1979 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1982 "term.c"
    {
#line 1984 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1987 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1989 "term.c"
  }
#line 1991 "term.c"
}

#line 1994 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 1997 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1999 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2001 "term.c"
{
#line 2003 "term.c"
  {
#line 2005 "term.c"
    MR_bool mercury__term__succeeded;

#line 2008 "term.c"
    {
#line 2010 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2013 "term.c"
    return mercury__term__succeeded;
#line 2015 "term.c"
  }
#line 2017 "term.c"
}

#line 2020 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2023 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2025 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2027 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2029 "term.c"
{
#line 2031 "term.c"
  {
#line 2033 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2036 "term.c"
    {
#line 2038 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2041 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2043 "term.c"
  }
#line 2045 "term.c"
}

#line 2048 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 2051 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2053 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2055 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2057 "term.c"
{
#line 2059 "term.c"
  {
#line 2061 "term.c"
    MR_bool mercury__term__succeeded;

#line 2064 "term.c"
    {
#line 2066 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2069 "term.c"
    return mercury__term__succeeded;
#line 2071 "term.c"
  }
#line 2073 "term.c"
}

#line 2076 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 2079 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2081 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2083 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2085 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2087 "term.c"
{
#line 2089 "term.c"
  {
#line 2091 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2094 "term.c"
    {
#line 2096 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2099 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2101 "term.c"
  }
#line 2103 "term.c"
}

#line 2106 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 2109 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2111 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2113 "term.c"
{
#line 2115 "term.c"
  {
#line 2117 "term.c"
    MR_bool mercury__term__succeeded;

#line 2120 "term.c"
    {
#line 2122 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2125 "term.c"
    return mercury__term__succeeded;
#line 2127 "term.c"
  }
#line 2129 "term.c"
}

#line 2132 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 2135 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2137 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2139 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2141 "term.c"
{
#line 2143 "term.c"
  {
#line 2145 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2148 "term.c"
    {
#line 2150 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2153 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2155 "term.c"
  }
#line 2157 "term.c"
}

#line 2160 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 2163 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2165 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2167 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2169 "term.c"
{
#line 2171 "term.c"
  {
#line 2173 "term.c"
    MR_bool mercury__term__succeeded;

#line 2176 "term.c"
    {
#line 2178 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2181 "term.c"
    return mercury__term__succeeded;
#line 2183 "term.c"
  }
#line 2185 "term.c"
}

#line 2188 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 2191 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2193 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2195 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2197 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2199 "term.c"
{
#line 2201 "term.c"
  {
#line 2203 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2206 "term.c"
    {
#line 2208 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2211 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2213 "term.c"
  }
#line 2215 "term.c"
}

#line 2218 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 2221 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2223 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 2225 "term.c"
{
#line 2227 "term.c"
  {
#line 2229 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 2231 "term.c"
    MR_Box mercury__term__closure;
#line 2233 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 2236 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2238 "term.c"
    {
#line 2240 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 2243 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2245 "term.c"
    return mercury__term__wrapper_arg_2;
#line 2247 "term.c"
  }
#line 2249 "term.c"
}

#line 2252 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 2255 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2257 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2259 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 2261 "term.c"
{
#line 2263 "term.c"
  {
#line 2265 "term.c"
    MR_bool mercury__term__succeeded;
#line 2267 "term.c"
    MR_Box mercury__term__closure;
#line 2269 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 2272 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2274 "term.c"
    {
#line 2276 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 2279 "term.c"
    if (mercury__term__succeeded)
#line 2281 "term.c"
      {
#line 2283 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2285 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 2287 "term.c"
      }
#line 2289 "term.c"
    return mercury__term__succeeded;
#line 2291 "term.c"
  }
#line 2293 "term.c"
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
#line 80 "list.opt"
  while (MR_TRUE)
#line 80 "list.opt"
    {
#line 80 "list.opt"
      /* tailcall optimized into a loop */
#line 80 "list.opt"
      {
#line 80 "list.opt"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 80 "list.opt"
        MR_Word mercury__term__V_10_10;
#line 80 "list.opt"
        MR_Word mercury__term__V_11_11;

#line 80 "list.opt"
        if (mercury__term__succeeded)
#line 80 "list.opt"
          {
#line 80 "list.opt"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "list.opt"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "list.opt"
            {
#line 80 "list.opt"
              MR_Integer mercury__term__V_14_14 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 80 "list.opt"
              MR_Integer mercury__term__V_15_15 = (MR_Integer) mercury__term__V_11_11;

#line 80 "list.opt"
              mercury__term__succeeded = (mercury__term__V_14_14 == mercury__term__V_15_15);
#line 80 "list.opt"
            }
#line 80 "list.opt"
            if (!(mercury__term__succeeded))
#line 82 "list.opt"
              {
#line 82 "list.opt"
                /* direct tailcall eliminated */
#line 82 "list.opt"
                {
#line 82 "list.opt"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__V_10_10;

#line 82 "list.opt"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 82 "list.opt"
                }
#line 82 "list.opt"
                continue;
#line 82 "list.opt"
              }
#line 80 "list.opt"
          }
#line 80 "list.opt"
        return mercury__term__succeeded;
#line 80 "list.opt"
      }
#line 80 "list.opt"
      break;
#line 80 "list.opt"
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
#line 1290 "term.m"
  {
#line 1290 "term.m"
    MR_bool mercury__term__succeeded;

#line 1290 "term.m"
  }
#line 652 "term.m"
}

#line 751 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 751 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 751 "term.m"
  MR_Integer mercury__term__X_4,
#line 751 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 751 "term.m"
{
#line 758 "term.m"
  {
#line 758 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 758 "term.m"
    return MR_TRUE;
#line 758 "term.m"
  }
#line 751 "term.m"
}

#line 750 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 750 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 750 "term.m"
  MR_Word mercury__term__X_4)
#line 750 "term.m"
{
#line 760 "term.m"
  {
#line 760 "term.m"
    MR_bool mercury__term__succeeded;
#line 760 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 760 "term.m"
    return mercury__term__HeadVar__2_2;
#line 760 "term.m"
  }
#line 750 "term.m"
}

#line 731 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 731 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 731 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 731 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 731 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 731 "term.m"
{
#line 731 "term.m"
  {
#line 731 "term.m"
    MR_bool mercury__term__succeeded;
#line 731 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 731 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 731 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 731 "term.m"
    if (mercury__term__succeeded)
#line 2509 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 731 "term.m"
    else
#line 731 "term.m"
      {
#line 731 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 731 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 35 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 38 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          {
#line 40 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 43 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
            else
#line 44 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
          }
#line 731 "term.m"
      }
#line 731 "term.m"
  }
#line 731 "term.m"
}

#line 731 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 731 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 731 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 731 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 731 "term.m"
{
#line 731 "term.m"
  {
#line 731 "term.m"
    MR_bool mercury__term__succeeded;
#line 731 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 731 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 731 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 731 "term.m"
    if (mercury__term__succeeded)
#line 731 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 731 "term.m"
    else
#line 731 "term.m"
      {
#line 731 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 731 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2584 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 731 "term.m"
      }
#line 731 "term.m"
    return mercury__term__succeeded;
#line 731 "term.m"
  }
#line 731 "term.m"
}

#line 728 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 728 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 728 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 728 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 728 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 728 "term.m"
{
#line 728 "term.m"
  {
#line 728 "term.m"
    MR_bool mercury__term__succeeded;
#line 728 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 728 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 728 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 728 "term.m"
    if (mercury__term__succeeded)
#line 2621 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 728 "term.m"
    else
#line 728 "term.m"
      {
#line 728 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 728 "term.m"
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 35 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
#line 38 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          {
#line 40 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
#line 43 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
            else
#line 44 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
          }
#line 728 "term.m"
      }
#line 728 "term.m"
  }
#line 728 "term.m"
}

#line 728 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 728 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 728 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 728 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 728 "term.m"
{
#line 728 "term.m"
  {
#line 728 "term.m"
    MR_bool mercury__term__succeeded;
#line 728 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 728 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 728 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 728 "term.m"
    if (mercury__term__succeeded)
#line 728 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
    else
#line 728 "term.m"
      {
#line 728 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 728 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2696 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 728 "term.m"
      }
#line 728 "term.m"
    return mercury__term__succeeded;
#line 728 "term.m"
  }
#line 728 "term.m"
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
#line 728 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 728 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 728 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 728 "term.m"
    if (mercury__term__succeeded)
#line 728 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
    else
#line 728 "term.m"
      {
#line 728 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 728 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 2778 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 728 "term.m"
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
#line 2815 "term.c"
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
#line 2848 "term.c"
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

#line 2867 "term.c"
                {
#line 2869 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2871 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 2873 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 2875 "term.c"
                }
#line 39 "term.m"
                {
#line 39 "term.m"
                  mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                }
#line 2882 "term.c"
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
#line 2905 "term.c"
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
#line 2920 "term.c"
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

#line 35 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_44_44 < mercury__term__V_45_45);
#line 38 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
              mercury__term__V_26_26 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              {
#line 40 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_44_44 == mercury__term__V_45_45);
#line 43 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
                  mercury__term__V_26_26 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                else
#line 44 "private_builtin.opt"
                  mercury__term__V_26_26 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
              }
#line 2959 "term.c"
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
#line 3046 "term.c"
            {
#line 3048 "term.c"
              mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
            }
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 39 "term.m"
              {
#line 3055 "term.c"
                mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3057 "term.c"
                {
#line 3059 "term.c"
                  mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3061 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 3063 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 3065 "term.c"
                }
#line 3067 "term.c"
                {
#line 3069 "term.c"
                  mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                }
#line 39 "term.m"
                if (mercury__term__succeeded)
#line 3074 "term.c"
                  {
#line 3076 "term.c"
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
#line 728 "term.m"
        MR_Integer mercury__term__CastX_22;
#line 728 "term.m"
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
#line 728 "term.m"
            mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 728 "term.m"
            mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 728 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 728 "term.m"
            if (mercury__term__succeeded)
#line 728 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
            else
#line 728 "term.m"
              {
#line 728 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 728 "term.m"
                MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 3131 "term.c"
                mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 728 "term.m"
              }
#line 39 "term.m"
            if (mercury__term__succeeded)
#line 3137 "term.c"
              {
#line 3139 "term.c"
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

#line 3249 "term.c"
    {
#line 3251 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3253 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3255 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3257 "term.c"
    }
#line 3259 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3261 "term.c"
    {
#line 3263 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3265 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 3267 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3269 "term.c"
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

#line 3311 "term.c"
    {
#line 3313 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3315 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3317 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3319 "term.c"
    }
#line 3321 "term.c"
    {
#line 3323 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3325 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 3327 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3329 "term.c"
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

#line 3435 "term.c"
    {
#line 3437 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3439 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3441 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3443 "term.c"
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

#line 3481 "term.c"
    {
#line 3483 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3485 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3487 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3489 "term.c"
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

#line 35 "private_builtin.opt"
    mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 < mercury__term__Cast_HeadVar2_5);
#line 38 "private_builtin.opt"
    if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
    else
#line 43 "private_builtin.opt"
      {
#line 40 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 == mercury__term__Cast_HeadVar2_5);
#line 43 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
        else
#line 44 "private_builtin.opt"
          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
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
#line 3625 "term.c"
  {
#line 3627 "term.c"
    MR_bool mercury__term__succeeded = (mercury__term__HeadVar__2_1 == mercury__term__HeadVar__2_2);

#line 3630 "term.c"
    return mercury__term__succeeded;
#line 3632 "term.c"
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
#line 3707 "term.c"
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
        MR_Integer mercury__term__Res_7_16;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_4_4 ;
	S2 =  mercury__term__V_6_6 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3741 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_16  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__Res_7_16 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
        if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
          mercury__term__V_8_8 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__Res_7_16 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 78 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              mercury__term__V_8_8 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 3770 "term.c"
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
#line 672 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 672 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
#line 672 "term.m"
        else
#line 38 "private_builtin.opt"
          {
#line 35 "private_builtin.opt"
            mercury__term__succeeded = (mercury__term__V_5_5 < mercury__term__V_7_7);
#line 38 "private_builtin.opt"
            if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              {
#line 40 "private_builtin.opt"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_7_7);
#line 43 "private_builtin.opt"
                if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                else
#line 44 "private_builtin.opt"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
              }
#line 38 "private_builtin.opt"
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

#line 3850 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 3854 "term.c"
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
#line 3889 "term.c"
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
                  MR_Integer mercury__term__Res_7_110;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_98_98 ;
	S2 =  mercury__term__V_5_5 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3934 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_110  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__Res_7_110 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                  else
#line 79 "private_builtin.opt"
                    {
#line 76 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__Res_7_110 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 78 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                      else
#line 80 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 3969 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 2:
#line 3975 "term.c"
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
#line 3988 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 3994 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4000 "term.c"
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
#line 4028 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_Integer mercury__term__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

#line 35 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_103_103 < mercury__term__V_20_20);
#line 38 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                  else
#line 43 "private_builtin.opt"
                    {
#line 40 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_103_103 == mercury__term__V_20_20);
#line 43 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                      else
#line 44 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 2:
#line 4067 "term.c"
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
#line 4080 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4086 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4092 "term.c"
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
#line 4122 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                break;
#line 52 "term.m"
              case (MR_Integer) 1:
#line 4128 "term.c"
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

#line 35 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_105_105 < mercury__term__V_106_106);
#line 38 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 37 "private_builtin.opt"
                    mercury__term__V_40_40 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                  else
#line 43 "private_builtin.opt"
                    {
#line 40 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_105_105 == mercury__term__V_106_106);
#line 43 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 42 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                      else
#line 44 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                    }
#line 4169 "term.c"
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
#line 4199 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4205 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4211 "term.c"
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
#line 4246 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4252 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4258 "term.c"
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
                          MR_Integer mercury__term__Res_7_129;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_104_104 ;
	S2 =  mercury__term__V_58_58 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4293 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_129  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__Res_7_129 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            {
#line 76 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__Res_7_129 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 78 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                              else
#line 80 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                            }
#line 52 "term.m"
                        }
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 4328 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 2:
#line 4334 "term.c"
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
#line 4362 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4368 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4374 "term.c"
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
#line 4387 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 52 "term.m"
                        {
#line 52 "term.m"
                          MR_Float mercury__term__V_73_73 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));

#line 87 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_101_101 < mercury__term__V_73_73);
#line 90 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 89 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
                          else
#line 95 "private_builtin.opt"
                            {
#line 92 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_101_101 > mercury__term__V_73_73);
#line 95 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 94 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
                              else
#line 96 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                            }
#line 52 "term.m"
                        }
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 2:
#line 4426 "term.c"
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
#line 4454 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 1:
#line 4460 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    break;
#line 52 "term.m"
                  case (MR_Integer) 2:
#line 4466 "term.c"
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
#line 4479 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        break;
#line 52 "term.m"
                      case (MR_Integer) 1:
#line 4485 "term.c"
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
                          MR_Integer mercury__term__Res_7_121;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_102_102 ;
	S2 =  mercury__term__V_88_88 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4513 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_121  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__Res_7_121 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                          else
#line 79 "private_builtin.opt"
                            {
#line 76 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__Res_7_121 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 78 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                              else
#line 80 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
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
#line 4615 "term.c"
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
#line 4640 "term.c"
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
#line 4671 "term.c"
                mercury__term__succeeded = (mercury__term__V_7_7 == mercury__term__V_9_9);
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 4675 "term.c"
                  {
#line 4677 "term.c"
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
#line 4710 "term.c"
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
#line 4735 "term.c"
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
#line 4760 "term.c"
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

#line 1195 "term.m"
void MR_CALL 
mercury__term__build_subst_4_p_0(
#line 1195 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 1195 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1195 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1195 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1195 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1195 "term.m"
{
#line 1198 "term.m"
  while (MR_TRUE)
#line 1198 "term.m"
    {
#line 1198 "term.m"
      /* tailcall optimized into a loop */
#line 1198 "term.m"
      {
#line 1198 "term.m"
        MR_bool mercury__term__succeeded;

#line 1198 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "term.m"
          if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "term.m"
            *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1198 "term.m"
          else
#line 1199 "term.m"
            {
#line 1200 "term.m"
              {
#line 1200 "term.m"
                mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1200 "term.m"
                return;
              }
#line 1199 "term.m"
            }
#line 1198 "term.m"
        else
#line 1198 "term.m"
          {
#line 1198 "term.m"
            MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1198 "term.m"
            MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1198 "term.m"
            if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "term.m"
              {
#line 1202 "term.m"
                {
#line 1202 "term.m"
                  mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1202 "term.m"
                  return;
                }
#line 1201 "term.m"
              }
#line 1198 "term.m"
            else
#line 1203 "term.m"
              {
#line 1203 "term.m"
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1203 "term.m"
                MR_Word mercury__term__TypeInfo_35_35;
#line 1203 "term.m"
                MR_Word mercury__term__TypeCtorInfo_36_36;
#line 1203 "term.m"
                MR_Word mercury__term__TypeInfo_37_37;
#line 1203 "term.m"
                MR_Word mercury__term__Term_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1203 "term.m"
                MR_Word mercury__term__Terms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1203 "term.m"
                MR_Word mercury__term__STATE_VARIABLE_Subst_31_31;
#line 129 "map.opt"
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

#line 4869 "term.c"
                {
#line 4871 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4873 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 4875 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4877 "term.c"
                }
#line 4879 "term.c"
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4881 "term.c"
                {
#line 4883 "term.c"
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4885 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
#line 4887 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4889 "term.c"
                }
#line 129 "map.opt"
                {
#line 129 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
#line 129 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_31_31;
#line 1205 "term.m"
                /* direct tailcall eliminated */
#line 1205 "term.m"
                {
#line 1205 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_38_38;
#line 1205 "term.m"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Terms_27;
#line 1205 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_31_31;

#line 1205 "term.m"
                  mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1205 "term.m"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1205 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1205 "term.m"
                }
#line 1205 "term.m"
                continue;
#line 1203 "term.m"
              }
#line 1198 "term.m"
          }
#line 1198 "term.m"
      }
#line 1198 "term.m"
      break;
#line 1198 "term.m"
    }
#line 1195 "term.m"
}

#line 1034 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 1034 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 1034 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1034 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 1034 "term.m"
{
#line 1037 "term.m"
  while (MR_TRUE)
#line 1037 "term.m"
    {
#line 1037 "term.m"
      /* tailcall optimized into a loop */
#line 1037 "term.m"
      {
#line 1037 "term.m"
        MR_bool mercury__term__succeeded;

#line 1037 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1037 "term.m"
        else
#line 1038 "term.m"
          {
#line 1038 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1038 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1039 "term.m"
            {
#line 1039 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 1038 "term.m"
            if (mercury__term__succeeded)
#line 1040 "term.m"
              {
#line 1040 "term.m"
                /* direct tailcall eliminated */
#line 1040 "term.m"
                {
#line 1040 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1040 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1040 "term.m"
                }
#line 1040 "term.m"
                continue;
#line 1040 "term.m"
              }
#line 1038 "term.m"
          }
#line 1037 "term.m"
        return mercury__term__succeeded;
#line 1037 "term.m"
      }
#line 1037 "term.m"
      break;
#line 1037 "term.m"
    }
#line 1034 "term.m"
}

#line 1019 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 1019 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 1019 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 1019 "term.m"
{
#line 1021 "term.m"
  while (MR_TRUE)
#line 1021 "term.m"
    {
#line 1021 "term.m"
      /* tailcall optimized into a loop */
#line 1021 "term.m"
      {
#line 1021 "term.m"
        MR_bool mercury__term__succeeded;

#line 1021 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1021 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 1021 "term.m"
        else
#line 1022 "term.m"
          {
#line 1022 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1022 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1022 "term.m"
            MR_Word mercury__term__ArgTerms_6;
#line 1016 "term.m"
            MR_Word mercury__term__V_5_5;
#line 1016 "term.m"
            MR_Word mercury__term__V_7_7;

#line 1016 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 1016 "term.m"
            if (mercury__term__succeeded)
#line 1016 "term.m"
              {
#line 1016 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 1016 "term.m"
                mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 1016 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 1017 "term.m"
                {
#line 1017 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__ArgTerms_6);
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
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 1024 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1024 "term.m"
                    }
#line 1024 "term.m"
                    continue;
#line 1024 "term.m"
                  }
#line 1016 "term.m"
              }
#line 1022 "term.m"
          }
#line 1021 "term.m"
        return mercury__term__succeeded;
#line 1021 "term.m"
      }
#line 1021 "term.m"
      break;
#line 1021 "term.m"
    }
#line 1019 "term.m"
}

#line 972 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 972 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 972 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 972 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 972 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 972 "term.m"
{
#line 975 "term.m"
  while (MR_TRUE)
#line 975 "term.m"
    {
#line 975 "term.m"
      /* tailcall optimized into a loop */
#line 975 "term.m"
      {
#line 975 "term.m"
        MR_bool mercury__term__succeeded;

#line 975 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 975 "term.m"
        else
#line 976 "term.m"
          {
#line 976 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 977 "term.m"
            {
#line 977 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 961 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
              {
#line 962 "term.m"
                MR_Word mercury__term__ArgTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 962 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 962 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 963 "term.m"
                /* direct tailcall eliminated */
#line 963 "term.m"
                {
#line 963 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__ArgTerms_22;
#line 963 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 963 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 963 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 963 "term.m"
                }
#line 963 "term.m"
                continue;
#line 962 "term.m"
              }
#line 961 "term.m"
            else
#line 959 "term.m"
              {
#line 959 "term.m"
                MR_Word mercury__term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 959 "term.m"
                MR_Word mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 960 "term.m"
                {
#line 960 "term.m"
                  MR_Word base;
#line 960 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 960 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_19));
#line 960 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 960 "term.m"
                }
#line 959 "term.m"
              }
#line 976 "term.m"
          }
#line 975 "term.m"
      }
#line 975 "term.m"
      break;
#line 975 "term.m"
    }
#line 972 "term.m"
}

#line 921 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 921 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 921 "term.m"
  MR_Word mercury__term__X_6,
#line 921 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 921 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 921 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 921 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14)
#line 921 "term.m"
{
#line 928 "term.m"
  while (MR_TRUE)
#line 928 "term.m"
    {
#line 928 "term.m"
      /* tailcall optimized into a loop */
#line 928 "term.m"
      {
#line 928 "term.m"
        MR_bool mercury__term__succeeded;
#line 928 "term.m"
        MR_Word mercury__term__TermBoundToX_10;
#line 925 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 925 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 925 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 925 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_TermBoundToX_10;

#line 5244 "term.c"
        {
#line 5246 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5248 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 5250 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5252 "term.c"
        }
#line 5254 "term.c"
        {
#line 5256 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5258 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 5260 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5262 "term.c"
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
#line 928 "term.m"
        if (mercury__term__succeeded)
#line 926 "term.m"
          {
#line 926 "term.m"
            MR_Word mercury__term__NewX_11;
#line 926 "term.m"
            MR_Word mercury__term__V_12_12;

#line 926 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__TermBoundToX_10)) == (MR_mktag((MR_Integer) 1)));
#line 926 "term.m"
            if (mercury__term__succeeded)
#line 926 "term.m"
              {
#line 926 "term.m"
                mercury__term__NewX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 0)));
#line 926 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 1)));
#line 927 "term.m"
                /* direct tailcall eliminated */
#line 927 "term.m"
                {
#line 927 "term.m"
                  MR_Word mercury__term__X__tmp_copy_6 = mercury__term__NewX_11;

#line 927 "term.m"
                  mercury__term__X_6 = mercury__term__X__tmp_copy_6;
#line 927 "term.m"
                }
#line 927 "term.m"
                continue;
#line 926 "term.m"
              }
#line 926 "term.m"
          }
#line 928 "term.m"
        else
#line 931 "term.m"
          {
#line 728 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__X_6;
#line 728 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundY_7;

#line 728 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 728 "term.m"
            if (mercury__term__succeeded)
#line 728 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
            else
#line 728 "term.m"
              {
#line 728 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__X_6;
#line 728 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundY_7;

#line 5339 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 728 "term.m"
              }
#line 931 "term.m"
            if (mercury__term__succeeded)
#line 931 "term.m"
              {
#line 931 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_14 = mercury__term__STATE_VARIABLE_Subst_0_13;
#line 931 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 931 "term.m"
              }
#line 931 "term.m"
            else
#line 932 "term.m"
              {
#line 932 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 932 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 932 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 932 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 932 "term.m"
                MR_Word mercury__term__V_16_16;
#line 932 "term.m"
                MR_Word mercury__term__V_18_18;
#line 932 "term.m"
                MR_String mercury__term__V_38_38;
#line 932 "term.m"
                MR_Integer mercury__term__V_39_39;
#line 933 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_14;

#line 932 "term.m"
                {
#line 932 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__X_6, mercury__term__DontBindVars_8);
                }
#line 932 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 932 "term.m"
                if (mercury__term__succeeded)
#line 932 "term.m"
                  {
#line 1324 "term.m"
                    mercury__term__V_38_38 = (MR_String) "";
#line 1324 "term.m"
                    mercury__term__V_39_39 = (MR_Integer) 0;
#line 5391 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5393 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1324 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 933 "term.m"
                    {
#line 933 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundY_7));
#line 933 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 933 "term.m"
                    }
#line 5407 "term.c"
                    {
#line 5409 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5411 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 5413 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5415 "term.c"
                    }
#line 5417 "term.c"
                    {
#line 5419 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5421 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 5423 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5425 "term.c"
                    }
#line 933 "term.m"
                    {
#line 933 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__X_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, &mercury__term__conv1_STATE_VARIABLE_Subst_14);
                    }
#line 933 "term.m"
                    *mercury__term__STATE_VARIABLE_Subst_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_14;
#line 933 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 932 "term.m"
                  }
#line 932 "term.m"
              }
#line 931 "term.m"
          }
#line 928 "term.m"
        return mercury__term__succeeded;
#line 928 "term.m"
      }
#line 928 "term.m"
      break;
#line 928 "term.m"
    }
#line 921 "term.m"
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
#line 745 "term.m"
  {
#line 745 "term.m"
    MR_bool mercury__term__succeeded;
#line 745 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 745 "term.m"
    return mercury__term__V_3;
#line 745 "term.m"
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
#line 743 "term.m"
  {
#line 743 "term.m"
    MR_bool mercury__term__succeeded;
#line 743 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 743 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 743 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 743 "term.m"
    return mercury__term__HeadVar__2_2;
#line 743 "term.m"
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
#line 1322 "term.m"
  {
#line 1322 "term.m"
    MR_bool mercury__term__succeeded;
#line 1322 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 1322 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1322 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1322 "term.m"
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
#line 1321 "term.m"
  {
#line 1321 "term.m"
    MR_bool mercury__term__succeeded;
#line 1321 "term.m"
    MR_String mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1321 "term.m"
    MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1321 "term.m"
    return mercury__term__FileName_3;
#line 1321 "term.m"
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
#line 1319 "term.m"
  {
#line 1319 "term.m"
    MR_bool mercury__term__succeeded;
#line 1319 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1319 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1319 "term.m"
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
#line 1318 "term.m"
  {
#line 1318 "term.m"
    MR_bool mercury__term__succeeded;
#line 1318 "term.m"
    MR_Integer mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1318 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1318 "term.m"
    return mercury__term__LineNumber_4;
#line 1318 "term.m"
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
#line 1328 "term.m"
  {
#line 1328 "term.m"
    MR_bool mercury__term__succeeded;

#line 1328 "term.m"
    {
#line 1328 "term.m"
      MR_Word base;
#line 1328 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 1328 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 1328 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1328 "term.m"
    }
#line 1328 "term.m"
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
#line 1327 "term.m"
  {
#line 1327 "term.m"
    MR_bool mercury__term__succeeded;
#line 1327 "term.m"
    MR_Word mercury__term__HeadVar__3_3;

#line 1327 "term.m"
    {
#line 1327 "term.m"
      mercury__term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 0) = ((MR_Box) (mercury__term__File_4));
#line 1327 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1327 "term.m"
    }
#line 1327 "term.m"
    return mercury__term__HeadVar__3_3;
#line 1327 "term.m"
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
#line 1325 "term.m"
  {
#line 1325 "term.m"
    MR_bool mercury__term__succeeded;

#line 1325 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 1325 "term.m"
  }
#line 684 "term.m"
}

#line 683 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 683 "term.m"
{
#line 1324 "term.m"
  {
#line 1324 "term.m"
    MR_bool mercury__term__succeeded;
#line 1324 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1324 "term.m"
    return mercury__term__HeadVar__1_1;
#line 1324 "term.m"
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
#line 1315 "term.m"
  {
#line 1315 "term.m"
    MR_bool mercury__term__succeeded;
#line 1315 "term.m"
    MR_Word mercury__term__Context_4;

#line 1315 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 1314 "term.m"
      {
#line 1314 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1314 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 1314 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1314 "term.m"
      }
#line 1315 "term.m"
    else
#line 1315 "term.m"
      {
#line 1315 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 1315 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 1315 "term.m"
      }
#line 1315 "term.m"
    return mercury__term__Context_4;
#line 1315 "term.m"
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
#line 1309 "term.m"
  {
#line 1309 "term.m"
    MR_bool mercury__term__succeeded;

#line 1309 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1309 "term.m"
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
#line 1309 "term.m"
  {
#line 1309 "term.m"
    MR_bool mercury__term__succeeded;
#line 1309 "term.m"
    MR_Word mercury__term__VarSupplyTypeB_4 = mercury__term__VarSupplyTypeA_3;

#line 1309 "term.m"
    return mercury__term__VarSupplyTypeB_4;
#line 1309 "term.m"
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
#line 1304 "term.m"
  {
#line 1304 "term.m"
    MR_bool mercury__term__succeeded;

#line 1304 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1304 "term.m"
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
#line 1304 "term.m"
  {
#line 1304 "term.m"
    MR_bool mercury__term__succeeded;
#line 1304 "term.m"
    MR_Word mercury__term__VarTypeB_4 = mercury__term__VarTypeA_3;

#line 1304 "term.m"
    return mercury__term__VarTypeB_4;
#line 1304 "term.m"
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
#line 1299 "term.m"
  {
#line 1299 "term.m"
    MR_bool mercury__term__succeeded;

#line 1299 "term.m"
    *mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;
#line 1299 "term.m"
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
#line 1299 "term.m"
  {
#line 1299 "term.m"
    MR_bool mercury__term__succeeded;
#line 1299 "term.m"
    MR_Word mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;

#line 1299 "term.m"
    return mercury__term__TermTypeB_4;
#line 1299 "term.m"
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
#line 1290 "term.m"
  {
#line 1290 "term.m"
    MR_bool mercury__term__succeeded;

#line 1290 "term.m"
    {
#line 1290 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1290 "term.m"
      return;
    }
#line 1290 "term.m"
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
#line 1284 "term.m"
  {
#line 1284 "term.m"
    MR_bool mercury__term__succeeded;

#line 1284 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1284 "term.m"
    else
#line 1285 "term.m"
      {
#line 1285 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1285 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1285 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1285 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1285 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1285 "term.m"
        {
#line 1285 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1285 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1285 "term.m"
        }
#line 1286 "term.m"
        {
#line 1286 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1285 "term.m"
        {
#line 1285 "term.m"
          MR_Word base;
#line 1285 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1285 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1285 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1285 "term.m"
        }
#line 1285 "term.m"
      }
#line 1284 "term.m"
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
#line 1282 "term.m"
  {
#line 1282 "term.m"
    MR_bool mercury__term__succeeded;
#line 1282 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1282 "term.m"
    {
#line 1282 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1282 "term.m"
    return mercury__term__Ts_4;
#line 1282 "term.m"
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
#line 1277 "term.m"
  {
#line 1277 "term.m"
    MR_bool mercury__term__succeeded;

#line 1277 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1277 "term.m"
      {
#line 1277 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1277 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1277 "term.m"
      }
#line 1277 "term.m"
    else
#line 1278 "term.m"
      {
#line 1278 "term.m"
        MR_Word mercury__term__Var_3;
#line 1278 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1278 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1278 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1278 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1278 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1278 "term.m"
        if (mercury__term__succeeded)
#line 1278 "term.m"
          {
#line 1278 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1278 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1279 "term.m"
            {
#line 1279 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1278 "term.m"
            if (mercury__term__succeeded)
#line 1278 "term.m"
              {
#line 1278 "term.m"
                {
#line 1278 "term.m"
                  MR_Word base;
#line 1278 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1278 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1278 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1278 "term.m"
                }
#line 1278 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1278 "term.m"
              }
#line 1278 "term.m"
          }
#line 1278 "term.m"
      }
#line 1277 "term.m"
    return mercury__term__succeeded;
#line 1277 "term.m"
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
#line 1273 "term.m"
  {
#line 1273 "term.m"
    MR_bool mercury__term__succeeded;
#line 1273 "term.m"
    MR_Word mercury__term__Vars_4;
#line 1273 "term.m"
    MR_Word mercury__term__VarsPrime_5;

#line 1271 "term.m"
    {
#line 1271 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms_3, &mercury__term__VarsPrime_5);
    }
#line 1273 "term.m"
    if (mercury__term__succeeded)
#line 1272 "term.m"
      mercury__term__Vars_4 = mercury__term__VarsPrime_5;
#line 1273 "term.m"
    else
#line 1274 "term.m"
      {
#line 1274 "term.m"
        {
#line 1274 "term.m"
          mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
        }
#line 1274 "term.m"
      }
#line 1273 "term.m"
    return mercury__term__Vars_4;
#line 1273 "term.m"
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
#line 1263 "term.m"
  {
#line 1263 "term.m"
    MR_bool mercury__term__succeeded;

#line 1263 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "term.m"
    else
#line 1264 "term.m"
      {
#line 1264 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1264 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1264 "term.m"
        MR_Word mercury__term__Term_8;
#line 1264 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1265 "term.m"
        {
#line 1265 "term.m"
          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1266 "term.m"
        {
#line 1266 "term.m"
          mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1264 "term.m"
        {
#line 1264 "term.m"
          MR_Word base;
#line 1264 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1264 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1264 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1264 "term.m"
        }
#line 1264 "term.m"
      }
#line 1263 "term.m"
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
#line 1257 "term.m"
  while (MR_TRUE)
#line 1257 "term.m"
    {
#line 1257 "term.m"
      /* tailcall optimized into a loop */
#line 1257 "term.m"
      {
#line 1257 "term.m"
        MR_bool mercury__term__succeeded;

#line 1257 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1258 "term.m"
          {
#line 1258 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1258 "term.m"
            MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1258 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1258 "term.m"
            MR_Word mercury__term__ArgTerms_13;

#line 1259 "term.m"
            {
#line 1259 "term.m"
              mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
            }
#line 1260 "term.m"
            {
#line 1260 "term.m"
              MR_Word base;
#line 1260 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "term.m"
              *mercury__term__Term_6 = base;
#line 1260 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1260 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1260 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1260 "term.m"
            }
#line 1258 "term.m"
          }
#line 1257 "term.m"
        else
#line 1250 "term.m"
          {
#line 1250 "term.m"
            MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1250 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1254 "term.m"
            MR_Word mercury__term__ReplacementTerm_9;
#line 1251 "term.m"
            MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1251 "term.m"
            MR_Word mercury__term__TypeInfo_16_16;
#line 1251 "term.m"
            MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1251 "term.m"
            MR_Word mercury__term__TypeInfo_18_18;
#line 51 "map.opt"
            MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6304 "term.c"
            {
#line 6306 "term.c"
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6308 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6310 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6312 "term.c"
            }
#line 6314 "term.c"
            {
#line 6316 "term.c"
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6318 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6320 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6322 "term.c"
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
#line 1254 "term.m"
            if (mercury__term__succeeded)
#line 1253 "term.m"
              {
#line 1253 "term.m"
                /* direct tailcall eliminated */
#line 1253 "term.m"
                {
#line 1253 "term.m"
                  MR_Word mercury__term__Term0__tmp_copy_5 = mercury__term__ReplacementTerm_9;

#line 1253 "term.m"
                  mercury__term__Term0_5 = mercury__term__Term0__tmp_copy_5;
#line 1253 "term.m"
                }
#line 1253 "term.m"
                continue;
#line 1253 "term.m"
              }
#line 1254 "term.m"
            else
#line 1255 "term.m"
              *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1250 "term.m"
          }
#line 1257 "term.m"
      }
#line 1257 "term.m"
      break;
#line 1257 "term.m"
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
#line 1243 "term.m"
  {
#line 1243 "term.m"
    MR_bool mercury__term__succeeded;

#line 1243 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1243 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1243 "term.m"
    else
#line 1244 "term.m"
      {
#line 1244 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1244 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1244 "term.m"
        MR_Word mercury__term__Term_8;
#line 1244 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1245 "term.m"
        {
#line 1245 "term.m"
          mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1246 "term.m"
        {
#line 1246 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1244 "term.m"
        {
#line 1244 "term.m"
          MR_Word base;
#line 1244 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1244 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1244 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1244 "term.m"
        }
#line 1244 "term.m"
      }
#line 1243 "term.m"
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
#line 1237 "term.m"
  {
#line 1237 "term.m"
    MR_bool mercury__term__succeeded;

#line 1237 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1238 "term.m"
      {
#line 1238 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1238 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1238 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1238 "term.m"
        MR_Word mercury__term__ArgTerms_13;

#line 1239 "term.m"
        {
#line 1239 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
        }
#line 1240 "term.m"
        {
#line 1240 "term.m"
          MR_Word base;
#line 1240 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "term.m"
          *mercury__term__Term_6 = base;
#line 1240 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1240 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1240 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1240 "term.m"
        }
#line 1238 "term.m"
      }
#line 1237 "term.m"
    else
#line 1231 "term.m"
      {
#line 1231 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1231 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1234 "term.m"
        MR_Word mercury__term__ReplacementTerm_9;
#line 1232 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1232 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1232 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1232 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6514 "term.c"
        {
#line 6516 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6518 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6520 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6522 "term.c"
        }
#line 6524 "term.c"
        {
#line 6526 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6528 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6530 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6532 "term.c"
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
#line 1234 "term.m"
        if (mercury__term__succeeded)
#line 1233 "term.m"
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
#line 1234 "term.m"
        else
#line 1235 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1231 "term.m"
      }
#line 1237 "term.m"
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
#line 1225 "term.m"
  {
#line 1225 "term.m"
    MR_bool mercury__term__succeeded;

#line 1225 "term.m"
    {
#line 1225 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1225 "term.m"
      return;
    }
#line 1225 "term.m"
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
#line 1223 "term.m"
  {
#line 1223 "term.m"
    MR_bool mercury__term__succeeded;
#line 1223 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1223 "term.m"
    {
#line 1223 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1223 "term.m"
    return mercury__term__Terms_6;
#line 1223 "term.m"
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
#line 1221 "term.m"
  {
#line 1221 "term.m"
    MR_bool mercury__term__succeeded;

#line 1221 "term.m"
    {
#line 1221 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1221 "term.m"
      return;
    }
#line 1221 "term.m"
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
#line 1219 "term.m"
  {
#line 1219 "term.m"
    MR_bool mercury__term__succeeded;
#line 1219 "term.m"
    MR_Word mercury__term__Term_6;

#line 1219 "term.m"
    {
#line 1219 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1219 "term.m"
    return mercury__term__Term_6;
#line 1219 "term.m"
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
#line 1217 "term.m"
  {
#line 1217 "term.m"
    MR_bool mercury__term__succeeded;

#line 1217 "term.m"
    {
#line 1217 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1217 "term.m"
      return;
    }
#line 1217 "term.m"
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
#line 1215 "term.m"
  {
#line 1215 "term.m"
    MR_bool mercury__term__succeeded;
#line 1215 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1215 "term.m"
    {
#line 1215 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1215 "term.m"
    return mercury__term__Terms_6;
#line 1215 "term.m"
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
#line 1213 "term.m"
  {
#line 1213 "term.m"
    MR_bool mercury__term__succeeded;

#line 1213 "term.m"
    {
#line 1213 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1213 "term.m"
      return;
    }
#line 1213 "term.m"
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
#line 1211 "term.m"
  {
#line 1211 "term.m"
    MR_bool mercury__term__succeeded;
#line 1211 "term.m"
    MR_Word mercury__term__Term_6;

#line 1211 "term.m"
    {
#line 1211 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1211 "term.m"
    return mercury__term__Term_6;
#line 1211 "term.m"
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
#line 1188 "term.m"
  {
#line 1188 "term.m"
    MR_bool mercury__term__succeeded;
#line 1188 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1190 "term.m"
    {
#line 1190 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1191 "term.m"
    {
#line 1191 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1191 "term.m"
      return;
    }
#line 1188 "term.m"
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
#line 1183 "term.m"
  {
#line 1183 "term.m"
    MR_bool mercury__term__succeeded;
#line 1183 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1186 "term.m"
    {
#line 1186 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Term0_7, mercury__term__Term_8);
#line 1186 "term.m"
      return;
    }
#line 1183 "term.m"
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
#line 1177 "term.m"
  {
#line 1177 "term.m"
    MR_bool mercury__term__succeeded;

#line 1177 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1177 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1177 "term.m"
    else
#line 1179 "term.m"
      {
#line 1179 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1179 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1179 "term.m"
        MR_Word mercury__term__Term_11;
#line 1179 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1180 "term.m"
        {
#line 1180 "term.m"
          mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1181 "term.m"
        {
#line 1181 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1179 "term.m"
        {
#line 1179 "term.m"
          MR_Word base;
#line 1179 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1179 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1179 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1179 "term.m"
        }
#line 1179 "term.m"
      }
#line 1177 "term.m"
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
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;

#line 1171 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1172 "term.m"
      {
#line 1172 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1172 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1172 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));
#line 1172 "term.m"
        MR_Word mercury__term__ArgTerms_14;

#line 1173 "term.m"
        {
#line 1173 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementTerm_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_14);
        }
#line 1174 "term.m"
        {
#line 1174 "term.m"
          MR_Word base;
#line 1174 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "term.m"
          *mercury__term__Term_8 = base;
#line 1174 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1174 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_14));
#line 1174 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1174 "term.m"
        }
#line 1172 "term.m"
      }
#line 1171 "term.m"
    else
#line 1165 "term.m"
      {
#line 1165 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1165 "term.m"
        MR_Word mercury__term___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 728 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 728 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 728 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 728 "term.m"
        if (mercury__term__succeeded)
#line 728 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
        else
#line 728 "term.m"
          {
#line 728 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 728 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 7038 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 728 "term.m"
          }
#line 1168 "term.m"
        if (mercury__term__succeeded)
#line 1167 "term.m"
          *mercury__term__Term_8 = mercury__term__ReplacementTerm_6;
#line 1168 "term.m"
        else
#line 1169 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1165 "term.m"
      }
#line 1171 "term.m"
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
#line 1188 "term.m"
  {
#line 1188 "term.m"
    MR_bool mercury__term__succeeded;
#line 1188 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1190 "term.m"
    {
#line 1190 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1191 "term.m"
    {
#line 1191 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1191 "term.m"
      return;
    }
#line 1188 "term.m"
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
#line 1188 "term.m"
  {
#line 1188 "term.m"
    MR_bool mercury__term__succeeded;
#line 1188 "term.m"
    MR_Word mercury__term__Terms_8;
#line 1188 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1190 "term.m"
    {
#line 1190 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1191 "term.m"
    {
#line 1191 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, &mercury__term__Terms_8);
    }
#line 1188 "term.m"
    return mercury__term__Terms_8;
#line 1188 "term.m"
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
#line 1183 "term.m"
  {
#line 1183 "term.m"
    MR_bool mercury__term__succeeded;
#line 1183 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1186 "term.m"
    {
#line 1186 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, mercury__term__Term_8);
#line 1186 "term.m"
      return;
    }
#line 1183 "term.m"
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
#line 1183 "term.m"
  {
#line 1183 "term.m"
    MR_bool mercury__term__succeeded;
#line 1183 "term.m"
    MR_Word mercury__term__Term_8;
#line 1183 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1185 "term.m"
    {
#line 1185 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1186 "term.m"
    {
#line 1186 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, &mercury__term__Term_8);
    }
#line 1183 "term.m"
    return mercury__term__Term_8;
#line 1183 "term.m"
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
#line 1151 "term.m"
  {
#line 1151 "term.m"
    MR_bool mercury__term__succeeded;

#line 1151 "term.m"
    {
#line 1151 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1151 "term.m"
      return;
    }
#line 1151 "term.m"
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
#line 1149 "term.m"
  {
#line 1149 "term.m"
    MR_bool mercury__term__succeeded;
#line 1149 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1149 "term.m"
    {
#line 1149 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1149 "term.m"
    return mercury__term__Terms_8;
#line 1149 "term.m"
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
#line 1147 "term.m"
  {
#line 1147 "term.m"
    MR_bool mercury__term__succeeded;

#line 1147 "term.m"
    {
#line 1147 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1147 "term.m"
      return;
    }
#line 1147 "term.m"
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
#line 1145 "term.m"
  {
#line 1145 "term.m"
    MR_bool mercury__term__succeeded;
#line 1145 "term.m"
    MR_Word mercury__term__Term_8;

#line 1145 "term.m"
    {
#line 1145 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1145 "term.m"
    return mercury__term__Term_8;
#line 1145 "term.m"
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
#line 1136 "term.m"
  {
#line 1136 "term.m"
    MR_bool mercury__term__succeeded;

#line 1136 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1136 "term.m"
    else
#line 1137 "term.m"
      {
#line 1137 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1137 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1137 "term.m"
        MR_Word mercury__term__Term_8;
#line 1137 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1138 "term.m"
        {
#line 1138 "term.m"
          mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1139 "term.m"
        {
#line 1139 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1137 "term.m"
        {
#line 1137 "term.m"
          MR_Word base;
#line 1137 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1137 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1137 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1137 "term.m"
        }
#line 1137 "term.m"
      }
#line 1136 "term.m"
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
#line 1130 "term.m"
  {
#line 1130 "term.m"
    MR_bool mercury__term__succeeded;

#line 1130 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1131 "term.m"
      {
#line 1131 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1131 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1131 "term.m"
        MR_Word mercury__term__ArgTerms_12;
#line 1131 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));

#line 1132 "term.m"
        {
#line 1132 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Renaming_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_12);
        }
#line 1133 "term.m"
        {
#line 1133 "term.m"
          MR_Word base;
#line 1133 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "term.m"
          *mercury__term__Term_6 = base;
#line 1133 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1133 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
#line 1133 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1133 "term.m"
        }
#line 1131 "term.m"
      }
#line 1130 "term.m"
    else
#line 1127 "term.m"
      {
#line 1127 "term.m"
        MR_Word mercury__term__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1127 "term.m"
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1127 "term.m"
        MR_Word mercury__term__Var_9;
#line 1116 "term.m"
        MR_Word mercury__term__NewVar_18;
#line 1114 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1114 "term.m"
        MR_Word mercury__term__TypeInfo_10_20;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_NewVar_18;

#line 7488 "term.c"
        {
#line 7490 "term.c"
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7492 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
#line 7494 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 7496 "term.c"
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
#line 1116 "term.m"
        if (mercury__term__succeeded)
#line 1115 "term.m"
          mercury__term__Var_9 = mercury__term__NewVar_18;
#line 1116 "term.m"
        else
#line 1117 "term.m"
          mercury__term__Var_9 = mercury__term__Var0_7;
#line 1129 "term.m"
        {
#line 1129 "term.m"
          MR_Word base;
#line 1129 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "term.m"
          *mercury__term__Term_6 = base;
#line 1129 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_9));
#line 1129 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
#line 1129 "term.m"
        }
#line 1127 "term.m"
      }
#line 1130 "term.m"
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
#line 1120 "term.m"
  {
#line 1120 "term.m"
    MR_bool mercury__term__succeeded;

#line 1120 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "term.m"
    else
#line 1121 "term.m"
      {
#line 1121 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1121 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1121 "term.m"
        MR_Word mercury__term__Var_8;
#line 1121 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1116 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1114 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1114 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 51 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 7585 "term.c"
        {
#line 7587 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7589 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 7591 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 7593 "term.c"
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
#line 1116 "term.m"
        if (mercury__term__succeeded)
#line 1115 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1116 "term.m"
        else
#line 1117 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1123 "term.m"
        {
#line 1123 "term.m"
          mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1121 "term.m"
        {
#line 1121 "term.m"
          MR_Word base;
#line 1121 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1121 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1121 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1121 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1121 "term.m"
        }
#line 1121 "term.m"
      }
#line 1120 "term.m"
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
#line 1116 "term.m"
  {
#line 1116 "term.m"
    MR_bool mercury__term__succeeded;
#line 1116 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1114 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1114 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 7670 "term.c"
    {
#line 7672 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7674 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 7676 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 7678 "term.c"
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
#line 1116 "term.m"
    if (mercury__term__succeeded)
#line 1115 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1116 "term.m"
    else
#line 1117 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1116 "term.m"
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
#line 1109 "term.m"
  {
#line 1109 "term.m"
    MR_bool mercury__term__succeeded;

#line 1109 "term.m"
    {
#line 1109 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1109 "term.m"
      return;
    }
#line 1109 "term.m"
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
#line 1107 "term.m"
  {
#line 1107 "term.m"
    MR_bool mercury__term__succeeded;
#line 1107 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1107 "term.m"
    {
#line 1107 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1107 "term.m"
    return mercury__term__Terms_6;
#line 1107 "term.m"
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
#line 1105 "term.m"
  {
#line 1105 "term.m"
    MR_bool mercury__term__succeeded;

#line 1105 "term.m"
    {
#line 1105 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1105 "term.m"
      return;
    }
#line 1105 "term.m"
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
#line 1103 "term.m"
  {
#line 1103 "term.m"
    MR_bool mercury__term__succeeded;
#line 1103 "term.m"
    MR_Word mercury__term__Term_6;

#line 1103 "term.m"
    {
#line 1103 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1103 "term.m"
    return mercury__term__Term_6;
#line 1103 "term.m"
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
#line 1101 "term.m"
  {
#line 1101 "term.m"
    MR_bool mercury__term__succeeded;

#line 1101 "term.m"
    {
#line 1101 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, mercury__term__Vars_6);
#line 1101 "term.m"
      return;
    }
#line 1101 "term.m"
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
#line 1099 "term.m"
  {
#line 1099 "term.m"
    MR_bool mercury__term__succeeded;
#line 1099 "term.m"
    MR_Word mercury__term__Vars_6;

#line 1099 "term.m"
    {
#line 1099 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, &mercury__term__Vars_6);
    }
#line 1099 "term.m"
    return mercury__term__Vars_6;
#line 1099 "term.m"
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
#line 1116 "term.m"
  {
#line 1116 "term.m"
    MR_bool mercury__term__succeeded;
#line 1116 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1114 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1114 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7914 "term.c"
    {
#line 7916 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7918 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7920 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7922 "term.c"
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
#line 1116 "term.m"
    if (mercury__term__succeeded)
#line 1115 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1116 "term.m"
    else
#line 1117 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1116 "term.m"
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
#line 1116 "term.m"
  {
#line 1116 "term.m"
    MR_bool mercury__term__succeeded;
#line 1116 "term.m"
    MR_Word mercury__term__Var_6;
#line 1116 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1114 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1114 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 51 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7978 "term.c"
    {
#line 7980 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7982 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7984 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7986 "term.c"
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
#line 1116 "term.m"
    if (mercury__term__succeeded)
#line 1115 "term.m"
      mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1116 "term.m"
    else
#line 1117 "term.m"
      mercury__term__Var_6 = mercury__term__Var0_5;
#line 1116 "term.m"
    return mercury__term__Var_6;
#line 1116 "term.m"
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
#line 1093 "term.m"
  {
#line 1093 "term.m"
    MR_bool mercury__term__succeeded;

#line 1093 "term.m"
    {
#line 1093 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1093 "term.m"
      return;
    }
#line 1093 "term.m"
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
#line 1091 "term.m"
  {
#line 1091 "term.m"
    MR_bool mercury__term__succeeded;
#line 1091 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1091 "term.m"
    {
#line 1091 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1091 "term.m"
    return mercury__term__Terms_6;
#line 1091 "term.m"
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
#line 1089 "term.m"
  {
#line 1089 "term.m"
    MR_bool mercury__term__succeeded;

#line 1089 "term.m"
    {
#line 1089 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1089 "term.m"
      return;
    }
#line 1089 "term.m"
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
#line 1087 "term.m"
  {
#line 1087 "term.m"
    MR_bool mercury__term__succeeded;
#line 1087 "term.m"
    MR_Word mercury__term__Term_6;

#line 1087 "term.m"
    {
#line 1087 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1087 "term.m"
    return mercury__term__Term_6;
#line 1087 "term.m"
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
#line 1078 "term.m"
  {
#line 1078 "term.m"
    MR_bool mercury__term__succeeded;

#line 1078 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1078 "term.m"
    else
#line 1079 "term.m"
      {
#line 1079 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1079 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1079 "term.m"
        MR_Word mercury__term__Term_11;
#line 1079 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1080 "term.m"
        {
#line 1080 "term.m"
          mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1081 "term.m"
        {
#line 1081 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1079 "term.m"
        {
#line 1079 "term.m"
          MR_Word base;
#line 1079 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1079 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1079 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1079 "term.m"
        }
#line 1079 "term.m"
      }
#line 1078 "term.m"
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
#line 1072 "term.m"
  {
#line 1072 "term.m"
    MR_bool mercury__term__succeeded;

#line 1072 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1073 "term.m"
      {
#line 1073 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1073 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1073 "term.m"
        MR_Word mercury__term__ArgTerms_13;
#line 1073 "term.m"
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));

#line 1074 "term.m"
        {
#line 1074 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementVar_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_13);
        }
#line 1075 "term.m"
        {
#line 1075 "term.m"
          MR_Word base;
#line 1075 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "term.m"
          *mercury__term__Term_8 = base;
#line 1075 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1075 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1075 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_14));
#line 1075 "term.m"
        }
#line 1073 "term.m"
      }
#line 1072 "term.m"
    else
#line 1066 "term.m"
      {
#line 1066 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1066 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 728 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 728 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 728 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 728 "term.m"
        if (mercury__term__succeeded)
#line 728 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
        else
#line 728 "term.m"
          {
#line 728 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 728 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 8290 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 728 "term.m"
          }
#line 1069 "term.m"
        if (mercury__term__succeeded)
#line 1068 "term.m"
          {
#line 1068 "term.m"
            MR_Word base;
#line 1068 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "term.m"
            *mercury__term__Term_8 = base;
#line 1068 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_6));
#line 1068 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1068 "term.m"
          }
#line 1069 "term.m"
        else
#line 1070 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1066 "term.m"
      }
#line 1072 "term.m"
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
#line 1060 "term.m"
  {
#line 1060 "term.m"
    MR_bool mercury__term__succeeded;

#line 1060 "term.m"
    {
#line 1060 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1060 "term.m"
      return;
    }
#line 1060 "term.m"
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
#line 1058 "term.m"
  {
#line 1058 "term.m"
    MR_bool mercury__term__succeeded;
#line 1058 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1058 "term.m"
    {
#line 1058 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1058 "term.m"
    return mercury__term__Terms_8;
#line 1058 "term.m"
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
#line 1056 "term.m"
  {
#line 1056 "term.m"
    MR_bool mercury__term__succeeded;

#line 1056 "term.m"
    {
#line 1056 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1056 "term.m"
      return;
    }
#line 1056 "term.m"
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
#line 1054 "term.m"
  {
#line 1054 "term.m"
    MR_bool mercury__term__succeeded;
#line 1054 "term.m"
    MR_Word mercury__term__Term_8;

#line 1054 "term.m"
    {
#line 1054 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1054 "term.m"
    return mercury__term__Term_8;
#line 1054 "term.m"
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
#line 1052 "term.m"
  {
#line 1052 "term.m"
    MR_bool mercury__term__succeeded;

#line 1052 "term.m"
    {
#line 1052 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1052 "term.m"
      return;
    }
#line 1052 "term.m"
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
#line 1050 "term.m"
  {
#line 1050 "term.m"
    MR_bool mercury__term__succeeded;
#line 1050 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1050 "term.m"
    {
#line 1050 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1050 "term.m"
    return mercury__term__Terms_8;
#line 1050 "term.m"
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
#line 1048 "term.m"
  {
#line 1048 "term.m"
    MR_bool mercury__term__succeeded;

#line 1048 "term.m"
    {
#line 1048 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1048 "term.m"
      return;
    }
#line 1048 "term.m"
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
#line 1046 "term.m"
  {
#line 1046 "term.m"
    MR_bool mercury__term__succeeded;
#line 1046 "term.m"
    MR_Word mercury__term__Term_8;

#line 1046 "term.m"
    {
#line 1046 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1046 "term.m"
    return mercury__term__Term_8;
#line 1046 "term.m"
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
#line 1028 "term.m"
  while (MR_TRUE)
#line 1028 "term.m"
    {
#line 1028 "term.m"
      /* tailcall optimized into a loop */
#line 1028 "term.m"
      {
#line 1028 "term.m"
        MR_bool mercury__term__succeeded;

#line 1028 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1031 "term.m"
          {
#line 1031 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1031 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1031 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 1032 "term.m"
            {
#line 1032 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 1031 "term.m"
          }
#line 1028 "term.m"
        else
#line 1028 "term.m"
          {
#line 1028 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1028 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 1028 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1028 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 1028 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "term.m"
            MR_Word mercury__term__Binding_6;
#line 1028 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 8638 "term.c"
            {
#line 8640 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8642 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 8644 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8646 "term.c"
            }
#line 8648 "term.c"
            {
#line 8650 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8652 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 8654 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8656 "term.c"
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
#line 1028 "term.m"
            if (mercury__term__succeeded)
#line 1030 "term.m"
              {
#line 1030 "term.m"
                /* direct tailcall eliminated */
#line 1030 "term.m"
                {
#line 1030 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 1030 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1030 "term.m"
                }
#line 1030 "term.m"
                continue;
#line 1030 "term.m"
              }
#line 1028 "term.m"
          }
#line 1028 "term.m"
        return mercury__term__succeeded;
#line 1028 "term.m"
      }
#line 1028 "term.m"
      break;
#line 1028 "term.m"
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
#line 1016 "term.m"
  {
#line 1016 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 1016 "term.m"
    MR_Word mercury__term__ArgTerms_3;
#line 1016 "term.m"
    MR_Word mercury__term__V_2_2;
#line 1016 "term.m"
    MR_Word mercury__term__V_4_4;

#line 1016 "term.m"
    if (mercury__term__succeeded)
#line 1016 "term.m"
      {
#line 1016 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "term.m"
        mercury__term__ArgTerms_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 1017 "term.m"
        {
#line 1017 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_3);
        }
#line 1016 "term.m"
      }
#line 1016 "term.m"
    return mercury__term__succeeded;
#line 1016 "term.m"
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
#line 1007 "term.m"
  while (MR_TRUE)
#line 1007 "term.m"
    {
#line 1007 "term.m"
      /* tailcall optimized into a loop */
#line 1007 "term.m"
      {
#line 1007 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1007 "term.m"
        MR_Word mercury__term__Term_4;
#line 1007 "term.m"
        MR_Word mercury__term__Terms_5;

#line 1007 "term.m"
        if (mercury__term__succeeded)
#line 1007 "term.m"
          {
#line 1007 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1007 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1008 "term.m"
            {
#line 1008 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Var_6, mercury__term__Subst_7);
            }
#line 1010 "term.m"
            if (mercury__term__succeeded)
#line 1009 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 1010 "term.m"
            else
#line 1011 "term.m"
              {
#line 1011 "term.m"
                /* direct tailcall eliminated */
#line 1011 "term.m"
                {
#line 1011 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 1011 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1011 "term.m"
                }
#line 1011 "term.m"
                continue;
#line 1011 "term.m"
              }
#line 1007 "term.m"
          }
#line 1007 "term.m"
        return mercury__term__succeeded;
#line 1007 "term.m"
      }
#line 1007 "term.m"
      break;
#line 1007 "term.m"
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
#line 1002 "term.m"
  while (MR_TRUE)
#line 1002 "term.m"
    {
#line 1002 "term.m"
      /* tailcall optimized into a loop */
#line 1002 "term.m"
      {
#line 1002 "term.m"
        MR_bool mercury__term__succeeded;

#line 1002 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 1003 "term.m"
          {
#line 1003 "term.m"
            MR_Word mercury__term__ArgTerms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 1003 "term.m"
            MR_Word mercury__term___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 1003 "term.m"
            MR_Word mercury__term___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 1004 "term.m"
            {
#line 1004 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms_11, mercury__term__Var_5, mercury__term__Subst_6);
            }
#line 1003 "term.m"
          }
#line 1002 "term.m"
        else
#line 995 "term.m"
          {
#line 995 "term.m"
            MR_Word mercury__term__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 995 "term.m"
            MR_Word mercury__term___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));
#line 728 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_7;
#line 728 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Var_5;

#line 728 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 728 "term.m"
            if (mercury__term__succeeded)
#line 728 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
            else
#line 728 "term.m"
              {
#line 728 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_7;
#line 728 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Var_5;

#line 8896 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 728 "term.m"
              }
#line 998 "term.m"
            if (mercury__term__succeeded)
#line 997 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 998 "term.m"
            else
#line 999 "term.m"
              {
#line 999 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 999 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 999 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 999 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 999 "term.m"
                MR_Word mercury__term__TermBoundToX_9;
#line 51 "map.opt"
                MR_Box mercury__term__conv0_TermBoundToX_9;

#line 8921 "term.c"
                {
#line 8923 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8925 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 8927 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8929 "term.c"
                }
#line 8931 "term.c"
                {
#line 8933 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8935 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 8937 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8939 "term.c"
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
#line 999 "term.m"
                if (mercury__term__succeeded)
#line 1000 "term.m"
                  {
#line 1000 "term.m"
                    /* direct tailcall eliminated */
#line 1000 "term.m"
                    {
#line 1000 "term.m"
                      MR_Word mercury__term__Term__tmp_copy_4 = mercury__term__TermBoundToX_9;

#line 1000 "term.m"
                      mercury__term__Term_4 = mercury__term__Term__tmp_copy_4;
#line 1000 "term.m"
                    }
#line 1000 "term.m"
                    continue;
#line 1000 "term.m"
                  }
#line 999 "term.m"
              }
#line 995 "term.m"
          }
#line 1002 "term.m"
        return mercury__term__succeeded;
#line 1002 "term.m"
      }
#line 1002 "term.m"
      break;
#line 1002 "term.m"
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
#line 986 "term.m"
  while (MR_TRUE)
#line 986 "term.m"
    {
#line 986 "term.m"
      /* tailcall optimized into a loop */
#line 986 "term.m"
      {
#line 986 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 986 "term.m"
        MR_Word mercury__term__V_10_10;
#line 986 "term.m"
        MR_Word mercury__term__V_11_11;

#line 986 "term.m"
        if (mercury__term__succeeded)
#line 986 "term.m"
          {
#line 986 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 986 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 983 "term.m"
              {
#line 983 "term.m"
                MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 983 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 983 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 984 "term.m"
                {
#line 984 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 983 "term.m"
              }
#line 982 "term.m"
            else
#line 982 "term.m"
              {
#line 982 "term.m"
                MR_Word mercury__term__V_13_13;

#line 982 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 982 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 982 "term.m"
                {
#line 982 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 982 "term.m"
              }
#line 989 "term.m"
            {
#line 989 "term.m"
              /* direct tailcall eliminated */
#line 989 "term.m"
              {
#line 989 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 989 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 989 "term.m"
              }
#line 989 "term.m"
              continue;
#line 989 "term.m"
            }
#line 986 "term.m"
          }
#line 986 "term.m"
      }
#line 986 "term.m"
      break;
#line 986 "term.m"
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
#line 986 "term.m"
  while (MR_TRUE)
#line 986 "term.m"
    {
#line 986 "term.m"
      /* tailcall optimized into a loop */
#line 986 "term.m"
      {
#line 986 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 986 "term.m"
        MR_Word mercury__term__V_10_10;
#line 986 "term.m"
        MR_Word mercury__term__V_11_11;

#line 986 "term.m"
        if (mercury__term__succeeded)
#line 986 "term.m"
          {
#line 986 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 986 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 987 "term.m"
            {
#line 987 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 986 "term.m"
            if (!(mercury__term__succeeded))
#line 989 "term.m"
              {
#line 989 "term.m"
                /* direct tailcall eliminated */
#line 989 "term.m"
                {
#line 989 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 989 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 989 "term.m"
                }
#line 989 "term.m"
                continue;
#line 989 "term.m"
              }
#line 986 "term.m"
          }
#line 986 "term.m"
        return mercury__term__succeeded;
#line 986 "term.m"
      }
#line 986 "term.m"
      break;
#line 986 "term.m"
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
#line 982 "term.m"
  {
#line 982 "term.m"
    MR_bool mercury__term__succeeded;

#line 982 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 983 "term.m"
      {
#line 983 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 984 "term.m"
        {
#line 984 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 984 "term.m"
          return;
        }
#line 983 "term.m"
      }
#line 982 "term.m"
    else
#line 982 "term.m"
      {
#line 982 "term.m"
        MR_Word mercury__term__V_4_4;

#line 982 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 982 "term.m"
        {
#line 982 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 982 "term.m"
          return;
        }
#line 982 "term.m"
      }
#line 982 "term.m"
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
#line 982 "term.m"
  {
#line 982 "term.m"
    MR_bool mercury__term__succeeded;

#line 982 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 983 "term.m"
      {
#line 983 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 983 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 983 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 984 "term.m"
        {
#line 984 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2);
        }
#line 983 "term.m"
      }
#line 982 "term.m"
    else
#line 982 "term.m"
      {
#line 982 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 728 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 728 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 728 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 728 "term.m"
        if (mercury__term__succeeded)
#line 728 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 728 "term.m"
        else
#line 728 "term.m"
          {
#line 728 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 728 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 9290 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 728 "term.m"
          }
#line 982 "term.m"
      }
#line 982 "term.m"
    return mercury__term__succeeded;
#line 982 "term.m"
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
#line 969 "term.m"
  {
#line 969 "term.m"
    MR_bool mercury__term__succeeded;
#line 969 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 970 "term.m"
    {
#line 970 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 970 "term.m"
      return;
    }
#line 969 "term.m"
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
#line 969 "term.m"
  {
#line 969 "term.m"
    MR_bool mercury__term__succeeded;
#line 969 "term.m"
    MR_Word mercury__term__Vars_4;
#line 969 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 970 "term.m"
    {
#line 970 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Terms_3, mercury__term__V_8_8, &mercury__term__Vars_4);
    }
#line 969 "term.m"
    return mercury__term__Vars_4;
#line 969 "term.m"
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
#line 961 "term.m"
  {
#line 961 "term.m"
    MR_bool mercury__term__succeeded;

#line 961 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
      {
#line 962 "term.m"
        MR_Word mercury__term__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 962 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 962 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 963 "term.m"
        {
#line 963 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms_9, mercury__term__STATE_VARIABLE_Vars_0_11, mercury__term__STATE_VARIABLE_Vars_12);
#line 963 "term.m"
          return;
        }
#line 962 "term.m"
      }
#line 961 "term.m"
    else
#line 959 "term.m"
      {
#line 959 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 959 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 960 "term.m"
        {
#line 960 "term.m"
          MR_Word base;
#line 960 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_12 = base;
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_6));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_11));
#line 960 "term.m"
        }
#line 959 "term.m"
      }
#line 961 "term.m"
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
#line 961 "term.m"
  {
#line 961 "term.m"
    MR_bool mercury__term__succeeded;
#line 961 "term.m"
    MR_Word mercury__term__Vars_6;

#line 961 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
      {
#line 962 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 962 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 962 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 963 "term.m"
        {
#line 963 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__ArgTerms_15, mercury__term__Vars0_5, &mercury__term__Vars_6);
        }
#line 962 "term.m"
      }
#line 961 "term.m"
    else
#line 959 "term.m"
      {
#line 959 "term.m"
        MR_Word mercury__term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 959 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 960 "term.m"
        {
#line 960 "term.m"
          mercury__term__Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 0) = ((MR_Box) (mercury__term__Var_12));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 1) = ((MR_Box) (mercury__term__Vars0_5));
#line 960 "term.m"
        }
#line 959 "term.m"
      }
#line 961 "term.m"
    return mercury__term__Vars_6;
#line 961 "term.m"
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
#line 951 "term.m"
  {
#line 951 "term.m"
    MR_bool mercury__term__succeeded;
#line 951 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 961 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
      {
#line 962 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 962 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 962 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 963 "term.m"
        {
#line 963 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__ArgTerms_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 963 "term.m"
          return;
        }
#line 962 "term.m"
      }
#line 961 "term.m"
    else
#line 959 "term.m"
      {
#line 959 "term.m"
        MR_Word mercury__term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 959 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 960 "term.m"
        {
#line 960 "term.m"
          MR_Word base;
#line 960 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "term.m"
          *mercury__term__Vars_4 = base;
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_11));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 960 "term.m"
        }
#line 959 "term.m"
      }
#line 951 "term.m"
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
#line 951 "term.m"
  {
#line 951 "term.m"
    MR_bool mercury__term__succeeded;
#line 951 "term.m"
    MR_Word mercury__term__Vars_4;
#line 951 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 961 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 962 "term.m"
      {
#line 962 "term.m"
        MR_Word mercury__term__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 962 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 962 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 963 "term.m"
        {
#line 963 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_16, mercury__term__V_8_8, &mercury__term__Vars_4);
        }
#line 962 "term.m"
      }
#line 961 "term.m"
    else
#line 959 "term.m"
      {
#line 959 "term.m"
        MR_Word mercury__term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 959 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 960 "term.m"
        {
#line 960 "term.m"
          mercury__term__Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 0) = ((MR_Box) (mercury__term__Var_13));
#line 960 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 960 "term.m"
        }
#line 959 "term.m"
      }
#line 951 "term.m"
    return mercury__term__Vars_4;
#line 951 "term.m"
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
#line 939 "term.m"
  {
#line 939 "term.m"
    MR_bool mercury__term__succeeded;
#line 939 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 939 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 939 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 970 "term.m"
    {
#line 970 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 64 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "term.m"
    {
#line 944 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 939 "term.m"
    return mercury__term__succeeded;
#line 939 "term.m"
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
#line 915 "term.m"
  while (MR_TRUE)
#line 915 "term.m"
    {
#line 915 "term.m"
      /* tailcall optimized into a loop */
#line 915 "term.m"
      {
#line 915 "term.m"
        MR_bool mercury__term__succeeded;

#line 915 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 915 "term.m"
          {
#line 915 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "term.m"
            if (mercury__term__succeeded)
#line 915 "term.m"
              {
#line 915 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_5 = mercury__term__STATE_VARIABLE_Subst_0_4;
#line 915 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 915 "term.m"
              }
#line 915 "term.m"
          }
#line 915 "term.m"
        else
#line 917 "term.m"
          {
#line 917 "term.m"
            MR_Word mercury__term__TermX_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 917 "term.m"
            MR_Word mercury__term__TermXs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "term.m"
            MR_Word mercury__term__TermY_12;
#line 917 "term.m"
            MR_Word mercury__term__TermYs_13;
#line 917 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_18_18;

#line 916 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 916 "term.m"
            if (mercury__term__succeeded)
#line 916 "term.m"
              {
#line 916 "term.m"
                mercury__term__TermY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 916 "term.m"
                mercury__term__TermYs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 918 "term.m"
                {
#line 918 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__TermX_10, mercury__term__TermY_12, mercury__term__DontBindVars_3, mercury__term__STATE_VARIABLE_Subst_0_4, &mercury__term__STATE_VARIABLE_Subst_18_18);
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
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_11;
#line 919 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_13;
#line 919 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Subst_18_18;

#line 919 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_4 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4;
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
#line 916 "term.m"
              }
#line 917 "term.m"
          }
#line 915 "term.m"
        return mercury__term__succeeded;
#line 915 "term.m"
      }
#line 915 "term.m"
      break;
#line 915 "term.m"
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
#line 885 "term.m"
  while (MR_TRUE)
#line 885 "term.m"
    {
#line 885 "term.m"
      /* tailcall optimized into a loop */
#line 885 "term.m"
      {
#line 885 "term.m"
        MR_bool mercury__term__succeeded;

#line 885 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_6)) == (MR_mktag((MR_Integer) 0))))
#line 885 "term.m"
          {
#line 885 "term.m"
            MR_Word mercury__term__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 1)));
#line 885 "term.m"
            MR_Word mercury__term__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 0)));
#line 896 "term.m"
            MR_Word mercury__term__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 2)));

#line 885 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 906 "term.m"
              {
#line 906 "term.m"
                MR_Word mercury__term__TypeCtorInfo_105_105;
#line 906 "term.m"
                MR_Word mercury__term__TypeInfo_106_106;
#line 906 "term.m"
                MR_Word mercury__term__NameY_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 906 "term.m"
                MR_Integer mercury__term__ArityX_32;
#line 906 "term.m"
                MR_Integer mercury__term__ArityY_33;
#line 906 "term.m"
                MR_Word mercury__term__ArgTermsY_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 907 "term.m"
                MR_Word mercury__term___CY_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));

#line 908 "term.m"
                {
#line 908 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_111_111, mercury__term__NameY_30);
                }
#line 906 "term.m"
                if (mercury__term__succeeded)
#line 906 "term.m"
                  {
#line 9855 "term.c"
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9857 "term.c"
                    {
#line 9859 "term.c"
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9861 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9863 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9865 "term.c"
                    }
#line 909 "term.m"
                    {
#line 909 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__V_110_110, &mercury__term__ArityX_32);
                    }
#line 910 "term.m"
                    {
#line 910 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__ArgTermsY_54, &mercury__term__ArityY_33);
                    }
#line 911 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_32 == mercury__term__ArityY_33);
#line 906 "term.m"
                    if (mercury__term__succeeded)
#line 912 "term.m"
                      {
#line 912 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__ArgTermsY_54, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 906 "term.m"
                  }
#line 906 "term.m"
              }
#line 885 "term.m"
            else
#line 896 "term.m"
              {
#line 896 "term.m"
                MR_Word mercury__term__Y_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 897 "term.m"
                MR_Word mercury__term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));
#line 900 "term.m"
                MR_Word mercury__term__TermBoundToY_51;
#line 898 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 898 "term.m"
                MR_Word mercury__term__TypeInfo_96_96;
#line 898 "term.m"
                MR_Word mercury__term__TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 898 "term.m"
                MR_Word mercury__term__TypeInfo_98_98;
#line 898 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_51;

#line 9911 "term.c"
                {
#line 9913 "term.c"
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9915 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
#line 9917 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9919 "term.c"
                }
#line 9921 "term.c"
                {
#line 9923 "term.c"
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9925 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
#line 9927 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9929 "term.c"
                }
#line 898 "term.m"
                {
#line 898 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_96_96, mercury__term__TypeInfo_98_98, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_52, &mercury__term__conv0_TermBoundToY_51);
                }
#line 898 "term.m"
                if (mercury__term__succeeded)
#line 898 "term.m"
                  {
#line 898 "term.m"
                    mercury__term__TermBoundToY_51 = ((MR_Word) mercury__term__conv0_TermBoundToY_51);
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
                      MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_51;

#line 899 "term.m"
                      mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
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
                    MR_Word mercury__term__TypeCtorInfo_101_101;
#line 901 "term.m"
                    MR_Word mercury__term__TypeInfo_102_102;
#line 901 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_103_103;
#line 901 "term.m"
                    MR_Word mercury__term__TypeInfo_104_104;
#line 903 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_35;

#line 901 "term.m"
                    {
#line 901 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__Y_52, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 901 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 901 "term.m"
                    if (mercury__term__succeeded)
#line 901 "term.m"
                      {
#line 902 "term.m"
                        {
#line 902 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_52, mercury__term__DontBindVars_8);
                        }
#line 902 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 901 "term.m"
                        if (mercury__term__succeeded)
#line 901 "term.m"
                          {
#line 10002 "term.c"
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10004 "term.c"
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10006 "term.c"
                            {
#line 10008 "term.c"
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10010 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
#line 10012 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10014 "term.c"
                            }
#line 10016 "term.c"
                            {
#line 10018 "term.c"
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10020 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
#line 10022 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10024 "term.c"
                            }
#line 903 "term.m"
                            {
#line 903 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_102_102, mercury__term__TypeInfo_104_104, mercury__term__Y_52, ((MR_Box) (mercury__term__TermX_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv1_STATE_VARIABLE_Subst_35);
                            }
#line 903 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_35;
#line 903 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 901 "term.m"
                          }
#line 901 "term.m"
                      }
#line 901 "term.m"
                  }
#line 896 "term.m"
              }
#line 885 "term.m"
          }
#line 885 "term.m"
        else
#line 885 "term.m"
          {
#line 885 "term.m"
            MR_Word mercury__term__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 0)));
#line 842 "term.m"
            MR_Word mercury__term__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 1)));

#line 885 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 886 "term.m"
              {
#line 886 "term.m"
                MR_Word mercury__term__ArgTermsY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 887 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 887 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));
#line 890 "term.m"
                MR_Word mercury__term__TermBoundToX_48;
#line 888 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 888 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 888 "term.m"
                MR_Word mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 888 "term.m"
                MR_Word mercury__term__TypeInfo_88_88;
#line 888 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_48;

#line 10077 "term.c"
                {
#line 10079 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10081 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10083 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10085 "term.c"
                }
#line 10087 "term.c"
                {
#line 10089 "term.c"
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10091 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10093 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10095 "term.c"
                }
#line 888 "term.m"
                {
#line 888 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_86_86, mercury__term__TypeInfo_88_88, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv2_TermBoundToX_48);
                }
#line 888 "term.m"
                if (mercury__term__succeeded)
#line 888 "term.m"
                  {
#line 888 "term.m"
                    mercury__term__TermBoundToX_48 = ((MR_Word) mercury__term__conv2_TermBoundToX_48);
#line 888 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 888 "term.m"
                  }
#line 890 "term.m"
                if (mercury__term__succeeded)
#line 889 "term.m"
                  {
#line 889 "term.m"
                    /* direct tailcall eliminated */
#line 889 "term.m"
                    {
#line 889 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_48;

#line 889 "term.m"
                      mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 889 "term.m"
                    }
#line 889 "term.m"
                    continue;
#line 889 "term.m"
                  }
#line 890 "term.m"
                else
#line 891 "term.m"
                  {
#line 891 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_91_91;
#line 891 "term.m"
                    MR_Word mercury__term__TypeInfo_92_92;
#line 891 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_93_93;
#line 891 "term.m"
                    MR_Word mercury__term__TypeInfo_94_94;
#line 893 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_35;

#line 891 "term.m"
                    {
#line 891 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__ArgTermsY_22, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 891 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 891 "term.m"
                    if (mercury__term__succeeded)
#line 891 "term.m"
                      {
#line 892 "term.m"
                        {
#line 892 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                        }
#line 892 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 891 "term.m"
                        if (mercury__term__succeeded)
#line 891 "term.m"
                          {
#line 10168 "term.c"
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10170 "term.c"
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10172 "term.c"
                            {
#line 10174 "term.c"
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10176 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
#line 10178 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10180 "term.c"
                            }
#line 10182 "term.c"
                            {
#line 10184 "term.c"
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10186 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
#line 10188 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10190 "term.c"
                            }
#line 893 "term.m"
                            {
#line 893 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_92_92, mercury__term__TypeInfo_94_94, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv3_STATE_VARIABLE_Subst_35);
                            }
#line 893 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_35;
#line 893 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 891 "term.m"
                          }
#line 891 "term.m"
                      }
#line 891 "term.m"
                  }
#line 886 "term.m"
              }
#line 885 "term.m"
            else
#line 842 "term.m"
              {
#line 842 "term.m"
                MR_Word mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 843 "term.m"
                MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));

#line 844 "term.m"
                {
#line 844 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__DontBindVars_8);
                }
#line 846 "term.m"
                if (mercury__term__succeeded)
#line 845 "term.m"
                  {
#line 845 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                  }
#line 846 "term.m"
                else
#line 848 "term.m"
                  {
#line 846 "term.m"
                    {
#line 846 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                    }
#line 848 "term.m"
                    if (mercury__term__succeeded)
#line 847 "term.m"
                      {
#line 847 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_113_113, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 848 "term.m"
                    else
#line 865 "term.m"
                      {
#line 865 "term.m"
                        MR_Word mercury__term__TypeInfo_62_62;
#line 865 "term.m"
                        MR_Word mercury__term__TypeInfo_64_64;
#line 865 "term.m"
                        MR_Word mercury__term__TermBoundToX_14;
#line 848 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 848 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 848 "term.m"
                        MR_Box mercury__term__conv4_TermBoundToX_14;

#line 10263 "term.c"
                        {
#line 10265 "term.c"
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10267 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
#line 10269 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10271 "term.c"
                        }
#line 10273 "term.c"
                        {
#line 10275 "term.c"
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10277 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 10279 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10281 "term.c"
                        }
#line 848 "term.m"
                        {
#line 848 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv4_TermBoundToX_14);
                        }
#line 848 "term.m"
                        if (mercury__term__succeeded)
#line 848 "term.m"
                          {
#line 848 "term.m"
                            mercury__term__TermBoundToX_14 = ((MR_Word) mercury__term__conv4_TermBoundToX_14);
#line 848 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 848 "term.m"
                          }
#line 865 "term.m"
                        if (mercury__term__succeeded)
#line 854 "term.m"
                          {
#line 854 "term.m"
                            MR_Word mercury__term__TermBoundToY_15;
#line 849 "term.m"
                            MR_Box mercury__term__conv5_TermBoundToY_15;

#line 849 "term.m"
                            {
#line 849 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv5_TermBoundToY_15);
                            }
#line 849 "term.m"
                            if (mercury__term__succeeded)
#line 849 "term.m"
                              {
#line 849 "term.m"
                                mercury__term__TermBoundToY_15 = ((MR_Word) mercury__term__conv5_TermBoundToY_15);
#line 849 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 849 "term.m"
                              }
#line 854 "term.m"
                            if (mercury__term__succeeded)
#line 852 "term.m"
                              {
#line 852 "term.m"
                                /* direct tailcall eliminated */
#line 852 "term.m"
                                {
#line 852 "term.m"
                                  MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_14;
#line 852 "term.m"
                                  MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_15;

#line 852 "term.m"
                                  mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 852 "term.m"
                                  mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 852 "term.m"
                                }
#line 852 "term.m"
                                continue;
#line 852 "term.m"
                              }
#line 854 "term.m"
                            else
#line 857 "term.m"
                              {
#line 857 "term.m"
                                MR_Word mercury__term__SubstTermBoundToX_16;
#line 858 "term.m"
                                MR_Word mercury__term__V_107_107;
#line 858 "term.m"
                                MR_Word mercury__term__V_17_17;

#line 856 "term.m"
                                {
#line 856 "term.m"
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToX_14, &mercury__term__SubstTermBoundToX_16);
                                }
#line 858 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_16)) == (MR_mktag((MR_Integer) 1)));
#line 858 "term.m"
                                if (mercury__term__succeeded)
#line 858 "term.m"
                                  {
#line 858 "term.m"
                                    mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 0)));
#line 858 "term.m"
                                    mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 1)));
#line 858 "term.m"
                                    {
#line 858 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_107_107);
                                    }
#line 858 "term.m"
                                  }
#line 860 "term.m"
                                if (mercury__term__succeeded)
#line 860 "term.m"
                                  {
#line 860 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 860 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 860 "term.m"
                                  }
#line 860 "term.m"
                                else
#line 861 "term.m"
                                  {
#line 862 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_35;

#line 861 "term.m"
                                    {
#line 861 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToX_16, mercury__term__Y_12, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 861 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 861 "term.m"
                                    if (mercury__term__succeeded)
#line 861 "term.m"
                                      {
#line 862 "term.m"
                                        {
#line 862 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, mercury__term__Y_12, ((MR_Box) (mercury__term__SubstTermBoundToX_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv6_STATE_VARIABLE_Subst_35);
                                        }
#line 862 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_35;
#line 862 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 861 "term.m"
                                      }
#line 861 "term.m"
                                  }
#line 857 "term.m"
                              }
#line 854 "term.m"
                          }
#line 865 "term.m"
                        else
#line 876 "term.m"
                          {
#line 876 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 876 "term.m"
                            MR_Word mercury__term__TypeInfo_76_76;
#line 876 "term.m"
                            MR_Word mercury__term__TermBoundToY_47;
#line 866 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 866 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 866 "term.m"
                            MR_Box mercury__term__conv7_TermBoundToY_47;

#line 10440 "term.c"
                            {
#line 10442 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10444 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 10446 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10448 "term.c"
                            }
#line 10450 "term.c"
                            {
#line 10452 "term.c"
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10454 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10456 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10458 "term.c"
                            }
#line 866 "term.m"
                            {
#line 866 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv7_TermBoundToY_47);
                            }
#line 866 "term.m"
                            if (mercury__term__succeeded)
#line 866 "term.m"
                              {
#line 866 "term.m"
                                mercury__term__TermBoundToY_47 = ((MR_Word) mercury__term__conv7_TermBoundToY_47);
#line 866 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 866 "term.m"
                              }
#line 876 "term.m"
                            if (mercury__term__succeeded)
#line 869 "term.m"
                              {
#line 869 "term.m"
                                MR_Word mercury__term__SubstTermBoundToY_18;
#line 870 "term.m"
                                MR_Word mercury__term__V_108_108;
#line 870 "term.m"
                                MR_Word mercury__term__V_19_19;

#line 868 "term.m"
                                {
#line 868 "term.m"
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToY_47, &mercury__term__SubstTermBoundToY_18);
                                }
#line 870 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_18)) == (MR_mktag((MR_Integer) 1)));
#line 870 "term.m"
                                if (mercury__term__succeeded)
#line 870 "term.m"
                                  {
#line 870 "term.m"
                                    mercury__term__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 0)));
#line 870 "term.m"
                                    mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 1)));
#line 870 "term.m"
                                    {
#line 870 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__V_108_108);
                                    }
#line 870 "term.m"
                                  }
#line 872 "term.m"
                                if (mercury__term__succeeded)
#line 872 "term.m"
                                  {
#line 872 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 872 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 872 "term.m"
                                  }
#line 872 "term.m"
                                else
#line 873 "term.m"
                                  {
#line 874 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_35;

#line 873 "term.m"
                                    {
#line 873 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToY_18, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 873 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 873 "term.m"
                                    if (mercury__term__succeeded)
#line 873 "term.m"
                                      {
#line 874 "term.m"
                                        {
#line 874 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, mercury__term__V_113_113, ((MR_Box) (mercury__term__SubstTermBoundToY_18)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv8_STATE_VARIABLE_Subst_35);
                                        }
#line 874 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_35;
#line 874 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 873 "term.m"
                                      }
#line 873 "term.m"
                                  }
#line 869 "term.m"
                              }
#line 876 "term.m"
                            else
#line 880 "term.m"
                              {
#line 878 "term.m"
                                {
#line 878 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12);
                                }
#line 880 "term.m"
                                if (mercury__term__succeeded)
#line 880 "term.m"
                                  *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 880 "term.m"
                                else
#line 881 "term.m"
                                  {
#line 881 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 881 "term.m"
                                    MR_Word mercury__term__TypeInfo_82_82;
#line 881 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_83_83;
#line 881 "term.m"
                                    MR_Word mercury__term__TypeInfo_84_84;
#line 881 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_35;

#line 10579 "term.c"
                                    {
#line 10581 "term.c"
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10583 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 10585 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10587 "term.c"
                                    }
#line 10589 "term.c"
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10591 "term.c"
                                    {
#line 10593 "term.c"
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10595 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10597 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10599 "term.c"
                                    }
#line 881 "term.m"
                                    {
#line 881 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_82_82, mercury__term__TypeInfo_84_84, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv9_STATE_VARIABLE_Subst_35);
                                    }
#line 881 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_35;
#line 881 "term.m"
                                  }
#line 880 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 880 "term.m"
                              }
#line 876 "term.m"
                          }
#line 865 "term.m"
                      }
#line 848 "term.m"
                  }
#line 842 "term.m"
              }
#line 885 "term.m"
          }
#line 885 "term.m"
        return mercury__term__succeeded;
#line 885 "term.m"
      }
#line 885 "term.m"
      break;
#line 885 "term.m"
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
#line 833 "term.m"
  while (MR_TRUE)
#line 833 "term.m"
    {
#line 833 "term.m"
      /* tailcall optimized into a loop */
#line 833 "term.m"
      {
#line 833 "term.m"
        MR_bool mercury__term__succeeded;

#line 833 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "term.m"
          {
#line 833 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "term.m"
            if (mercury__term__succeeded)
#line 833 "term.m"
              {
#line 833 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 833 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 833 "term.m"
              }
#line 833 "term.m"
          }
#line 833 "term.m"
        else
#line 834 "term.m"
          {
#line 834 "term.m"
            MR_Word mercury__term__TermX_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "term.m"
            MR_Word mercury__term__TermXs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 834 "term.m"
            MR_Word mercury__term__TermY_10;
#line 834 "term.m"
            MR_Word mercury__term__TermYs_11;
#line 834 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;

#line 834 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 834 "term.m"
            if (mercury__term__succeeded)
#line 834 "term.m"
              {
#line 834 "term.m"
                mercury__term__TermY_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 834 "term.m"
                mercury__term__TermYs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 835 "term.m"
                {
#line 835 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TermX_8, mercury__term__TermY_10, mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__STATE_VARIABLE_Subst_15_15);
                }
#line 834 "term.m"
                if (mercury__term__succeeded)
#line 836 "term.m"
                  {
#line 836 "term.m"
                    /* direct tailcall eliminated */
#line 836 "term.m"
                    {
#line 836 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_9;
#line 836 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_11;
#line 836 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 836 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 836 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 836 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 836 "term.m"
                    }
#line 836 "term.m"
                    continue;
#line 836 "term.m"
                  }
#line 834 "term.m"
              }
#line 834 "term.m"
          }
#line 833 "term.m"
        return mercury__term__succeeded;
#line 833 "term.m"
      }
#line 833 "term.m"
      break;
#line 833 "term.m"
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
#line 807 "term.m"
  while (MR_TRUE)
#line 807 "term.m"
    {
#line 807 "term.m"
      /* tailcall optimized into a loop */
#line 807 "term.m"
      {
#line 807 "term.m"
        MR_bool mercury__term__succeeded;

#line 807 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_5)) == (MR_mktag((MR_Integer) 0))))
#line 807 "term.m"
          {
#line 807 "term.m"
            MR_Word mercury__term__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 1)));
#line 807 "term.m"
            MR_Word mercury__term__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 0)));
#line 817 "term.m"
            MR_Word mercury__term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 2)));

#line 807 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 826 "term.m"
              {
#line 826 "term.m"
                MR_Word mercury__term__NameY_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 826 "term.m"
                MR_Word mercury__term__ArgTermsY_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 827 "term.m"
                MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));

#line 828 "term.m"
                {
#line 828 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_95_95, mercury__term__NameY_28);
                }
#line 826 "term.m"
                if (mercury__term__succeeded)
#line 830 "term.m"
                  {
#line 830 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__ArgTermsY_48, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__STATE_VARIABLE_Subst_31);
                  }
#line 826 "term.m"
              }
#line 807 "term.m"
            else
#line 817 "term.m"
              {
#line 817 "term.m"
                MR_Word mercury__term__Y_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 818 "term.m"
                MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 821 "term.m"
                MR_Word mercury__term__TermBoundToY_45;
#line 819 "term.m"
                MR_Word mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 819 "term.m"
                MR_Word mercury__term__TypeInfo_84_84;
#line 819 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 819 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 819 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_45;

#line 10834 "term.c"
                {
#line 10836 "term.c"
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10838 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10840 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10842 "term.c"
                }
#line 10844 "term.c"
                {
#line 10846 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10848 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10850 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10852 "term.c"
                }
#line 819 "term.m"
                {
#line 819 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_84_84, mercury__term__TypeInfo_86_86, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_46, &mercury__term__conv0_TermBoundToY_45);
                }
#line 819 "term.m"
                if (mercury__term__succeeded)
#line 819 "term.m"
                  {
#line 819 "term.m"
                    mercury__term__TermBoundToY_45 = ((MR_Word) mercury__term__conv0_TermBoundToY_45);
#line 819 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 819 "term.m"
                  }
#line 821 "term.m"
                if (mercury__term__succeeded)
#line 820 "term.m"
                  {
#line 820 "term.m"
                    /* direct tailcall eliminated */
#line 820 "term.m"
                    {
#line 820 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_45;

#line 820 "term.m"
                      mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 820 "term.m"
                    }
#line 820 "term.m"
                    continue;
#line 820 "term.m"
                  }
#line 821 "term.m"
                else
#line 822 "term.m"
                  {
#line 822 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_87_87;
#line 822 "term.m"
                    MR_Word mercury__term__TypeInfo_88_88;
#line 822 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_89_89;
#line 822 "term.m"
                    MR_Word mercury__term__TypeInfo_90_90;
#line 823 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_31;

#line 822 "term.m"
                    {
#line 822 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__Y_46, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 822 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 822 "term.m"
                    if (mercury__term__succeeded)
#line 822 "term.m"
                      {
#line 10914 "term.c"
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10916 "term.c"
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10918 "term.c"
                        {
#line 10920 "term.c"
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10922 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10924 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10926 "term.c"
                        }
#line 10928 "term.c"
                        {
#line 10930 "term.c"
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10932 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
#line 10934 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10936 "term.c"
                        }
#line 823 "term.m"
                        {
#line 823 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_88_88, mercury__term__TypeInfo_90_90, mercury__term__Y_46, ((MR_Box) (mercury__term__TermX_5)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv1_STATE_VARIABLE_Subst_31);
                        }
#line 823 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_31;
#line 823 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 822 "term.m"
                      }
#line 822 "term.m"
                  }
#line 817 "term.m"
              }
#line 807 "term.m"
          }
#line 807 "term.m"
        else
#line 807 "term.m"
          {
#line 807 "term.m"
            MR_Word mercury__term__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 0)));
#line 769 "term.m"
            MR_Word mercury__term__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 1)));

#line 807 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 808 "term.m"
              {
#line 808 "term.m"
                MR_Word mercury__term__ArgTermsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 809 "term.m"
                MR_Word mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 809 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));
#line 812 "term.m"
                MR_Word mercury__term__TermBoundToX_42;
#line 810 "term.m"
                MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 810 "term.m"
                MR_Word mercury__term__TypeInfo_76_76;
#line 810 "term.m"
                MR_Word mercury__term__TypeCtorInfo_77_77 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 810 "term.m"
                MR_Word mercury__term__TypeInfo_78_78;
#line 810 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_42;

#line 10987 "term.c"
                {
#line 10989 "term.c"
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10991 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10993 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10995 "term.c"
                }
#line 10997 "term.c"
                {
#line 10999 "term.c"
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11001 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
#line 11003 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11005 "term.c"
                }
#line 810 "term.m"
                {
#line 810 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_76_76, mercury__term__TypeInfo_78_78, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv2_TermBoundToX_42);
                }
#line 810 "term.m"
                if (mercury__term__succeeded)
#line 810 "term.m"
                  {
#line 810 "term.m"
                    mercury__term__TermBoundToX_42 = ((MR_Word) mercury__term__conv2_TermBoundToX_42);
#line 810 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 810 "term.m"
                  }
#line 812 "term.m"
                if (mercury__term__succeeded)
#line 811 "term.m"
                  {
#line 811 "term.m"
                    /* direct tailcall eliminated */
#line 811 "term.m"
                    {
#line 811 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_42;

#line 811 "term.m"
                      mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 811 "term.m"
                    }
#line 811 "term.m"
                    continue;
#line 811 "term.m"
                  }
#line 812 "term.m"
                else
#line 813 "term.m"
                  {
#line 813 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_79_79;
#line 813 "term.m"
                    MR_Word mercury__term__TypeInfo_80_80;
#line 813 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_81_81;
#line 813 "term.m"
                    MR_Word mercury__term__TypeInfo_82_82;
#line 814 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_31;

#line 813 "term.m"
                    {
#line 813 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__ArgTermsY_20, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 813 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 813 "term.m"
                    if (mercury__term__succeeded)
#line 813 "term.m"
                      {
#line 11067 "term.c"
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11069 "term.c"
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11071 "term.c"
                        {
#line 11073 "term.c"
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11075 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
#line 11077 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11079 "term.c"
                        }
#line 11081 "term.c"
                        {
#line 11083 "term.c"
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11085 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 11087 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11089 "term.c"
                        }
#line 814 "term.m"
                        {
#line 814 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_80_80, mercury__term__TypeInfo_82_82, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv3_STATE_VARIABLE_Subst_31);
                        }
#line 814 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_31;
#line 814 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 813 "term.m"
                      }
#line 813 "term.m"
                  }
#line 808 "term.m"
              }
#line 807 "term.m"
            else
#line 769 "term.m"
              {
#line 769 "term.m"
                MR_Word mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 770 "term.m"
                MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 787 "term.m"
                MR_Word mercury__term__TypeInfo_52_52;
#line 787 "term.m"
                MR_Word mercury__term__TypeInfo_54_54;
#line 787 "term.m"
                MR_Word mercury__term__TermBoundToX_12;
#line 771 "term.m"
                MR_Word mercury__term__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 771 "term.m"
                MR_Word mercury__term__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 771 "term.m"
                MR_Box mercury__term__conv4_TermBoundToX_12;

#line 11127 "term.c"
                {
#line 11129 "term.c"
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11131 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
#line 11133 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11135 "term.c"
                }
#line 11137 "term.c"
                {
#line 11139 "term.c"
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11141 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
#line 11143 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11145 "term.c"
                }
#line 771 "term.m"
                {
#line 771 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv4_TermBoundToX_12);
                }
#line 771 "term.m"
                if (mercury__term__succeeded)
#line 771 "term.m"
                  {
#line 771 "term.m"
                    mercury__term__TermBoundToX_12 = ((MR_Word) mercury__term__conv4_TermBoundToX_12);
#line 771 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 771 "term.m"
                  }
#line 787 "term.m"
                if (mercury__term__succeeded)
#line 776 "term.m"
                  {
#line 776 "term.m"
                    MR_Word mercury__term__TermBoundToY_13;
#line 772 "term.m"
                    MR_Box mercury__term__conv5_TermBoundToY_13;

#line 772 "term.m"
                    {
#line 772 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv5_TermBoundToY_13);
                    }
#line 772 "term.m"
                    if (mercury__term__succeeded)
#line 772 "term.m"
                      {
#line 772 "term.m"
                        mercury__term__TermBoundToY_13 = ((MR_Word) mercury__term__conv5_TermBoundToY_13);
#line 772 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 772 "term.m"
                      }
#line 776 "term.m"
                    if (mercury__term__succeeded)
#line 775 "term.m"
                      {
#line 775 "term.m"
                        /* direct tailcall eliminated */
#line 775 "term.m"
                        {
#line 775 "term.m"
                          MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_12;
#line 775 "term.m"
                          MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_13;

#line 775 "term.m"
                          mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 775 "term.m"
                          mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 775 "term.m"
                        }
#line 775 "term.m"
                        continue;
#line 775 "term.m"
                      }
#line 776 "term.m"
                    else
#line 779 "term.m"
                      {
#line 779 "term.m"
                        MR_Word mercury__term__SubstTermBoundToX_14;
#line 780 "term.m"
                        MR_Word mercury__term__V_91_91;
#line 780 "term.m"
                        MR_Word mercury__term__V_15_15;

#line 778 "term.m"
                        {
#line 778 "term.m"
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToX_12, &mercury__term__SubstTermBoundToX_14);
                        }
#line 780 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_14)) == (MR_mktag((MR_Integer) 1)));
#line 780 "term.m"
                        if (mercury__term__succeeded)
#line 780 "term.m"
                          {
#line 780 "term.m"
                            mercury__term__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 0)));
#line 780 "term.m"
                            mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 1)));
#line 780 "term.m"
                            {
#line 780 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__Y_10, mercury__term__V_91_91);
                            }
#line 780 "term.m"
                          }
#line 782 "term.m"
                        if (mercury__term__succeeded)
#line 782 "term.m"
                          {
#line 782 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 782 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 782 "term.m"
                          }
#line 782 "term.m"
                        else
#line 783 "term.m"
                          {
#line 784 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_31;

#line 783 "term.m"
                            {
#line 783 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToX_14, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 783 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 783 "term.m"
                            if (mercury__term__succeeded)
#line 783 "term.m"
                              {
#line 784 "term.m"
                                {
#line 784 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, mercury__term__Y_10, ((MR_Box) (mercury__term__SubstTermBoundToX_14)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv6_STATE_VARIABLE_Subst_31);
                                }
#line 784 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_31;
#line 784 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 783 "term.m"
                              }
#line 783 "term.m"
                          }
#line 779 "term.m"
                      }
#line 776 "term.m"
                  }
#line 787 "term.m"
                else
#line 798 "term.m"
                  {
#line 798 "term.m"
                    MR_Word mercury__term__TypeInfo_64_64;
#line 798 "term.m"
                    MR_Word mercury__term__TypeInfo_66_66;
#line 798 "term.m"
                    MR_Word mercury__term__TermBoundToY_41;
#line 788 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 788 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 788 "term.m"
                    MR_Box mercury__term__conv7_TermBoundToY_41;

#line 11304 "term.c"
                    {
#line 11306 "term.c"
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11308 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 11310 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11312 "term.c"
                    }
#line 11314 "term.c"
                    {
#line 11316 "term.c"
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11318 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
#line 11320 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11322 "term.c"
                    }
#line 788 "term.m"
                    {
#line 788 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv7_TermBoundToY_41);
                    }
#line 788 "term.m"
                    if (mercury__term__succeeded)
#line 788 "term.m"
                      {
#line 788 "term.m"
                        mercury__term__TermBoundToY_41 = ((MR_Word) mercury__term__conv7_TermBoundToY_41);
#line 788 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 788 "term.m"
                      }
#line 798 "term.m"
                    if (mercury__term__succeeded)
#line 791 "term.m"
                      {
#line 791 "term.m"
                        MR_Word mercury__term__SubstTermBoundToY_16;
#line 792 "term.m"
                        MR_Word mercury__term__V_92_92;
#line 792 "term.m"
                        MR_Word mercury__term__V_17_17;

#line 790 "term.m"
                        {
#line 790 "term.m"
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToY_41, &mercury__term__SubstTermBoundToY_16);
                        }
#line 792 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_16)) == (MR_mktag((MR_Integer) 1)));
#line 792 "term.m"
                        if (mercury__term__succeeded)
#line 792 "term.m"
                          {
#line 792 "term.m"
                            mercury__term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 0)));
#line 792 "term.m"
                            mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 1)));
#line 792 "term.m"
                            {
#line 792 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__V_92_92);
                            }
#line 792 "term.m"
                          }
#line 794 "term.m"
                        if (mercury__term__succeeded)
#line 794 "term.m"
                          {
#line 794 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 794 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 794 "term.m"
                          }
#line 794 "term.m"
                        else
#line 795 "term.m"
                          {
#line 796 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_31;

#line 795 "term.m"
                            {
#line 795 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToY_16, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 795 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 795 "term.m"
                            if (mercury__term__succeeded)
#line 795 "term.m"
                              {
#line 796 "term.m"
                                {
#line 796 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, mercury__term__V_97_97, ((MR_Box) (mercury__term__SubstTermBoundToY_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv8_STATE_VARIABLE_Subst_31);
                                }
#line 796 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_31;
#line 796 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 795 "term.m"
                              }
#line 795 "term.m"
                          }
#line 791 "term.m"
                      }
#line 798 "term.m"
                    else
#line 802 "term.m"
                      {
#line 800 "term.m"
                        {
#line 800 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__Y_10);
                        }
#line 802 "term.m"
                        if (mercury__term__succeeded)
#line 802 "term.m"
                          *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 802 "term.m"
                        else
#line 803 "term.m"
                          {
#line 803 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 803 "term.m"
                            MR_Word mercury__term__TypeInfo_72_72;
#line 803 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73;
#line 803 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 803 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_31;

#line 11443 "term.c"
                            {
#line 11445 "term.c"
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11447 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
#line 11449 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11451 "term.c"
                            }
#line 11453 "term.c"
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11455 "term.c"
                            {
#line 11457 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11459 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 11461 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11463 "term.c"
                            }
#line 803 "term.m"
                            {
#line 803 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_72_72, mercury__term__TypeInfo_74_74, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv9_STATE_VARIABLE_Subst_31);
                            }
#line 803 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_31;
#line 803 "term.m"
                          }
#line 802 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 802 "term.m"
                      }
#line 798 "term.m"
                  }
#line 769 "term.m"
              }
#line 807 "term.m"
          }
#line 807 "term.m"
        return mercury__term__succeeded;
#line 807 "term.m"
      }
#line 807 "term.m"
      break;
#line 807 "term.m"
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
#line 763 "term.m"
  {
#line 763 "term.m"
    MR_bool mercury__term__succeeded;
#line 763 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 763 "term.m"
    return mercury__term__VarNum_3;
#line 763 "term.m"
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
#line 761 "term.m"
  {
#line 761 "term.m"
    MR_bool mercury__term__succeeded;

#line 761 "term.m"
    *mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 761 "term.m"
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
#line 760 "term.m"
  {
#line 760 "term.m"
    MR_bool mercury__term__succeeded;
#line 760 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 760 "term.m"
    return mercury__term__VarNum_3;
#line 760 "term.m"
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
#line 739 "term.m"
  {
#line 739 "term.m"
    MR_bool mercury__term__succeeded;
#line 739 "term.m"
    MR_Integer mercury__term__V_4;
#line 739 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 741 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 739 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 739 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 739 "term.m"
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
#line 737 "term.m"
  {
#line 737 "term.m"
    MR_bool mercury__term__succeeded;
#line 737 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 737 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 737 "term.m"
    return mercury__term__succeeded;
#line 737 "term.m"
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
#line 737 "term.m"
  {
#line 737 "term.m"
    MR_bool mercury__term__succeeded;

#line 737 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 737 "term.m"
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
#line 736 "term.m"
  {
#line 736 "term.m"
    MR_bool mercury__term__succeeded;
#line 736 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 736 "term.m"
    return mercury__term__HeadVar__1_1;
#line 736 "term.m"
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
