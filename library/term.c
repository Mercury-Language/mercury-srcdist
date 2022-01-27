/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "type_desc.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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



#line 971 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 976 "term.c"
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

#line 991 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 996 "term.c"
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

#line 1011 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_integer_base_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

#line 1017 "term.c"
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

#line 1032 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1037 "term.c"
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

#line 1052 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1057 "term.c"
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

#line 1072 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1077 "term.c"
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

#line 1092 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 1097 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 1102 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1107 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5
};

#line 1114 "term.c"
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

#line 1138 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_2,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_3
};

#line 1148 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1158 "term.c"
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
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_const_0
};

#line 1179 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1185 "term.c"
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

#line 1200 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1205 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1214 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1219 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1224 "term.c"
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

#line 1245 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1251 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1256 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1261 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1266 "term.c"
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

#line 1287 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  (MR_Integer) 0
};

#line 1293 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  (MR_Integer) 1
};

#line 1299 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  (MR_Integer) 2
};

#line 1305 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  (MR_Integer) 3
};

#line 1311 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1,
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3
};

#line 1319 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3,
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1
};

#line 1327 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1335 "term.c"
const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_integer_base_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_base_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_base",
  {
    mercury__term__term__enum_name_ordered_integer_base_0
  },
  {
    mercury__term__term__enum_value_ordered_integer_base_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_integer_base_0
};

#line 1356 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1364 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1373 "term.c"
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

#line 1394 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1402 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1411 "term.c"
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

#line 1432 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1440 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1449 "term.c"
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

#line 1470 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1478 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1487 "term.c"
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

#line 1508 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1516 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1523 "term.c"
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

#line 1538 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1544 "term.c"
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

#line 1559 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1564 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1569 "term.c"
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

#line 1583 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1589 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1595 "term.c"
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

#line 1616 "term.c"
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

#line 1637 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 1642 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1649 "term.c"
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

#line 1670 "term.c"
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

#line 1691 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 1696 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1703 "term.c"
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

#line 1724 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1735 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 1738 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1740 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1742 "term.c"
{
#line 1744 "term.c"
  {
#line 1746 "term.c"
    MR_bool mercury__term__succeeded;

#line 1749 "term.c"
    {
#line 1751 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1754 "term.c"
    return mercury__term__succeeded;
#line 1756 "term.c"
  }
#line 1758 "term.c"
}

#line 1761 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 1764 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1766 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1768 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1770 "term.c"
{
#line 1772 "term.c"
  {
#line 1774 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1777 "term.c"
    {
#line 1779 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1782 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1784 "term.c"
  }
#line 1786 "term.c"
}

#line 1789 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 1792 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1794 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1796 "term.c"
{
#line 1798 "term.c"
  {
#line 1800 "term.c"
    MR_bool mercury__term__succeeded;

#line 1803 "term.c"
    {
#line 1805 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1808 "term.c"
    return mercury__term__succeeded;
#line 1810 "term.c"
  }
#line 1812 "term.c"
}

#line 1815 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 1818 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1820 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1822 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1824 "term.c"
{
#line 1826 "term.c"
  {
#line 1828 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1831 "term.c"
    {
#line 1833 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1836 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1838 "term.c"
  }
#line 1840 "term.c"
}

#line 1843 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 1846 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1848 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1850 "term.c"
{
#line 1852 "term.c"
  {
#line 1854 "term.c"
    MR_bool mercury__term__succeeded;

#line 1857 "term.c"
    {
#line 1859 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 1862 "term.c"
    return mercury__term__succeeded;
#line 1864 "term.c"
  }
#line 1866 "term.c"
}

#line 1869 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 1872 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1874 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1876 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1878 "term.c"
{
#line 1880 "term.c"
  {
#line 1882 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1885 "term.c"
    {
#line 1887 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 1890 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1892 "term.c"
  }
#line 1894 "term.c"
}

#line 1897 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
#line 1900 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1902 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1904 "term.c"
{
#line 1906 "term.c"
  {
#line 1908 "term.c"
    MR_bool mercury__term__succeeded;

#line 1911 "term.c"
    {
#line 1913 "term.c"
      mercury__term__succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1916 "term.c"
    return mercury__term__succeeded;
#line 1918 "term.c"
  }
#line 1920 "term.c"
}

#line 1923 "term.c"
static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
#line 1926 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1928 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1930 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1932 "term.c"
{
#line 1934 "term.c"
  {
#line 1936 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1939 "term.c"
    {
#line 1941 "term.c"
      mercury__term____Compare____integer_base_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1944 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1946 "term.c"
  }
#line 1948 "term.c"
}

#line 1951 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 1954 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1956 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1958 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1960 "term.c"
{
#line 1962 "term.c"
  {
#line 1964 "term.c"
    MR_bool mercury__term__succeeded;

#line 1967 "term.c"
    {
#line 1969 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1972 "term.c"
    return mercury__term__succeeded;
#line 1974 "term.c"
  }
#line 1976 "term.c"
}

#line 1979 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 1982 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1984 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1986 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1988 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1990 "term.c"
{
#line 1992 "term.c"
  {
#line 1994 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1997 "term.c"
    {
#line 1999 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2002 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2004 "term.c"
  }
#line 2006 "term.c"
}

#line 2009 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 2012 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2014 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2016 "term.c"
{
#line 2018 "term.c"
  {
#line 2020 "term.c"
    MR_bool mercury__term__succeeded;

#line 2023 "term.c"
    {
#line 2025 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2028 "term.c"
    return mercury__term__succeeded;
#line 2030 "term.c"
  }
#line 2032 "term.c"
}

#line 2035 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 2038 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2040 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2042 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2044 "term.c"
{
#line 2046 "term.c"
  {
#line 2048 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2051 "term.c"
    {
#line 2053 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2056 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2058 "term.c"
  }
#line 2060 "term.c"
}

#line 2063 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 2066 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2068 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2070 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2072 "term.c"
{
#line 2074 "term.c"
  {
#line 2076 "term.c"
    MR_bool mercury__term__succeeded;

#line 2079 "term.c"
    {
#line 2081 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2084 "term.c"
    return mercury__term__succeeded;
#line 2086 "term.c"
  }
#line 2088 "term.c"
}

#line 2091 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 2094 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2096 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2098 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2100 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2102 "term.c"
{
#line 2104 "term.c"
  {
#line 2106 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2109 "term.c"
    {
#line 2111 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2114 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2116 "term.c"
  }
#line 2118 "term.c"
}

#line 2121 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 2124 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2126 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2128 "term.c"
{
#line 2130 "term.c"
  {
#line 2132 "term.c"
    MR_bool mercury__term__succeeded;

#line 2135 "term.c"
    {
#line 2137 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2140 "term.c"
    return mercury__term__succeeded;
#line 2142 "term.c"
  }
#line 2144 "term.c"
}

#line 2147 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 2150 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2152 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2154 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2156 "term.c"
{
#line 2158 "term.c"
  {
#line 2160 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2163 "term.c"
    {
#line 2165 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2168 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2170 "term.c"
  }
#line 2172 "term.c"
}

#line 2175 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 2178 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2180 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2182 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2184 "term.c"
{
#line 2186 "term.c"
  {
#line 2188 "term.c"
    MR_bool mercury__term__succeeded;

#line 2191 "term.c"
    {
#line 2193 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2196 "term.c"
    return mercury__term__succeeded;
#line 2198 "term.c"
  }
#line 2200 "term.c"
}

#line 2203 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 2206 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2208 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2210 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2212 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2214 "term.c"
{
#line 2216 "term.c"
  {
#line 2218 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2221 "term.c"
    {
#line 2223 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2226 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2228 "term.c"
  }
#line 2230 "term.c"
}

#line 2233 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 2236 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2238 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2240 "term.c"
{
#line 2242 "term.c"
  {
#line 2244 "term.c"
    MR_bool mercury__term__succeeded;

#line 2247 "term.c"
    {
#line 2249 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2252 "term.c"
    return mercury__term__succeeded;
#line 2254 "term.c"
  }
#line 2256 "term.c"
}

#line 2259 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2262 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2264 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2266 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2268 "term.c"
{
#line 2270 "term.c"
  {
#line 2272 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2275 "term.c"
    {
#line 2277 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2280 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2282 "term.c"
  }
#line 2284 "term.c"
}

#line 2287 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 2290 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2292 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2294 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2296 "term.c"
{
#line 2298 "term.c"
  {
#line 2300 "term.c"
    MR_bool mercury__term__succeeded;

#line 2303 "term.c"
    {
#line 2305 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2308 "term.c"
    return mercury__term__succeeded;
#line 2310 "term.c"
  }
#line 2312 "term.c"
}

#line 2315 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 2318 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2320 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2322 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2324 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2326 "term.c"
{
#line 2328 "term.c"
  {
#line 2330 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2333 "term.c"
    {
#line 2335 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2338 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2340 "term.c"
  }
#line 2342 "term.c"
}

#line 2345 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 2348 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2350 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2352 "term.c"
{
#line 2354 "term.c"
  {
#line 2356 "term.c"
    MR_bool mercury__term__succeeded;

#line 2359 "term.c"
    {
#line 2361 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2364 "term.c"
    return mercury__term__succeeded;
#line 2366 "term.c"
  }
#line 2368 "term.c"
}

#line 2371 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 2374 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2376 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2378 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2380 "term.c"
{
#line 2382 "term.c"
  {
#line 2384 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2387 "term.c"
    {
#line 2389 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2392 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2394 "term.c"
  }
#line 2396 "term.c"
}

#line 2399 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 2402 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2404 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2406 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2408 "term.c"
{
#line 2410 "term.c"
  {
#line 2412 "term.c"
    MR_bool mercury__term__succeeded;

#line 2415 "term.c"
    {
#line 2417 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2420 "term.c"
    return mercury__term__succeeded;
#line 2422 "term.c"
  }
#line 2424 "term.c"
}

#line 2427 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 2430 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2432 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2434 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2436 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2438 "term.c"
{
#line 2440 "term.c"
  {
#line 2442 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2445 "term.c"
    {
#line 2447 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2450 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2452 "term.c"
  }
#line 2454 "term.c"
}

#line 2457 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 2460 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2462 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 2464 "term.c"
{
#line 2466 "term.c"
  {
#line 2468 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 2470 "term.c"
    MR_Box mercury__term__closure;
#line 2472 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 2475 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2477 "term.c"
    {
#line 2479 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 2482 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2484 "term.c"
    return mercury__term__wrapper_arg_2;
#line 2486 "term.c"
  }
#line 2488 "term.c"
}

#line 2491 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 2494 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2496 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2498 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 2500 "term.c"
{
#line 2502 "term.c"
  {
#line 2504 "term.c"
    MR_bool mercury__term__succeeded;
#line 2506 "term.c"
    MR_Box mercury__term__closure;
#line 2508 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 2511 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2513 "term.c"
    {
#line 2515 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 2518 "term.c"
    if (mercury__term__succeeded)
#line 2520 "term.c"
      {
#line 2522 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2524 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 2526 "term.c"
      }
#line 2528 "term.c"
    return mercury__term__succeeded;
#line 2530 "term.c"
  }
#line 2532 "term.c"
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
#line 2748 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 731 "term.m"
    else
#line 731 "term.m"
      {
#line 731 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 731 "term.m"
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

#line 2823 "term.c"
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
#line 2860 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 728 "term.m"
    else
#line 728 "term.m"
      {
#line 728 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 728 "term.m"
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

#line 2935 "term.c"
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

#line 3017 "term.c"
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
#line 3054 "term.c"
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
#line 3087 "term.c"
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

#line 3106 "term.c"
                  {
#line 3108 "term.c"
                    mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3110 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 3112 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 3114 "term.c"
                  }
#line 39 "term.m"
                  {
#line 39 "term.m"
                    mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                  }
#line 3121 "term.c"
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
#line 3144 "term.c"
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
#line 3159 "term.c"
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
#line 3198 "term.c"
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
#line 3285 "term.c"
              {
#line 3287 "term.c"
                mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
              }
#line 39 "term.m"
              if (mercury__term__succeeded)
#line 39 "term.m"
                {
#line 3294 "term.c"
                  mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3296 "term.c"
                  {
#line 3298 "term.c"
                    mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3300 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 3302 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 3304 "term.c"
                  }
#line 3306 "term.c"
                  {
#line 3308 "term.c"
                    mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                  }
#line 39 "term.m"
                  if (mercury__term__succeeded)
#line 3313 "term.c"
                    {
#line 3315 "term.c"
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

#line 3370 "term.c"
                  mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 728 "term.m"
                }
#line 39 "term.m"
              if (mercury__term__succeeded)
#line 3376 "term.c"
                {
#line 3378 "term.c"
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

#line 3488 "term.c"
    {
#line 3490 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3492 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3494 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3496 "term.c"
    }
#line 3498 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3500 "term.c"
    {
#line 3502 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3504 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 3506 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3508 "term.c"
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

#line 3550 "term.c"
    {
#line 3552 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3554 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3556 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3558 "term.c"
    }
#line 3560 "term.c"
    {
#line 3562 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3564 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 3566 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3568 "term.c"
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

#line 3674 "term.c"
    {
#line 3676 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3678 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3680 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3682 "term.c"
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

#line 3720 "term.c"
    {
#line 3722 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3724 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3726 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3728 "term.c"
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

#line 66 "private_builtin.opt"
    mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 < mercury__term__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 == mercury__term__Cast_HeadVar2_5);
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
#line 3864 "term.c"
  {
#line 3866 "term.c"
    MR_bool mercury__term__succeeded = (mercury__term__HeadVar__2_1 == mercury__term__HeadVar__2_2);

#line 3869 "term.c"
    return mercury__term__succeeded;
#line 3871 "term.c"
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
#line 3946 "term.c"
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

#line 3980 "term.c"

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
#line 4009 "term.c"
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
#line 672 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 672 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
#line 672 "term.m"
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

#line 4089 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 672 "term.m"
        if (mercury__term__succeeded)
#line 4093 "term.c"
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
#line 4128 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 52 "term.m"
    else
#line 52 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 52 "term.m"
        {
#line 52 "term.m"
          MR_String mercury__term__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 52 "term.m"
            {
#line 52 "term.m"
              MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 52 "term.m"
              MR_Integer mercury__term__Res_7_110;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_98_98 ;
	S2 =  mercury__term__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4163 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_110  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__term__succeeded = (mercury__term__Res_7_110 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__Res_7_110 == (MR_Integer) 0);
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
#line 52 "term.m"
            }
#line 52 "term.m"
          else
#line 52 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4198 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
            else
#line 52 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4204 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
              else
#line 52 "term.m"
                if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4210 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                else
#line 52 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4216 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                  else
#line 4220 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
        }
#line 52 "term.m"
      else
#line 52 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 52 "term.m"
          {
#line 52 "term.m"
            MR_Word mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 52 "term.m"
            MR_Word mercury__term__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4237 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
            else
#line 52 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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

#line 66 "private_builtin.opt"
                  mercury__term__succeeded = (mercury__term__V_105_105 < mercury__term__V_106_106);
#line 69 "private_builtin.opt"
                  if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
                    mercury__term__V_40_40 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                  else
#line 74 "private_builtin.opt"
                    {
#line 71 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_105_105 == mercury__term__V_106_106);
#line 74 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 73 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                      else
#line 75 "private_builtin.opt"
                        mercury__term__V_40_40 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                    }
#line 4278 "term.c"
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
              else
#line 52 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4301 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                else
#line 52 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4307 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                  else
#line 52 "term.m"
                    if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4313 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    else
#line 4317 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
          }
#line 52 "term.m"
        else
#line 52 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 52 "term.m"
            {
#line 52 "term.m"
              MR_Integer mercury__term__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 52 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4332 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
              else
#line 52 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4338 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                else
#line 52 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 52 "term.m"
                    {
#line 52 "term.m"
                      MR_Integer mercury__term__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                      mercury__term__succeeded = (mercury__term__V_103_103 < mercury__term__V_20_20);
#line 69 "private_builtin.opt"
                      if (mercury__term__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_103_103 == mercury__term__V_20_20);
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
#line 52 "term.m"
                    }
#line 52 "term.m"
                  else
#line 52 "term.m"
                    if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4377 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                    else
#line 52 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4383 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                      else
#line 4387 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
            }
#line 52 "term.m"
          else
#line 52 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 52 "term.m"
              {
#line 52 "term.m"
                MR_Float mercury__term__V_101_101 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4402 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                else
#line 52 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4408 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                  else
#line 52 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4414 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    else
#line 52 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 52 "term.m"
                        {
#line 52 "term.m"
                          MR_Float mercury__term__V_73_73 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));

#line 118 "private_builtin.opt"
                          mercury__term__succeeded = (mercury__term__V_101_101 < mercury__term__V_73_73);
#line 121 "private_builtin.opt"
                          if (mercury__term__succeeded)
#line 120 "private_builtin.opt"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                          else
#line 126 "private_builtin.opt"
                            {
#line 123 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__V_101_101 > mercury__term__V_73_73);
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
#line 52 "term.m"
                        }
#line 52 "term.m"
                      else
#line 52 "term.m"
                        if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4453 "term.c"
                          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        else
#line 4457 "term.c"
                          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
              }
#line 52 "term.m"
            else
#line 52 "term.m"
              if (((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_String mercury__term__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4472 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                  else
#line 52 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4478 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    else
#line 52 "term.m"
                      if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4484 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                      else
#line 52 "term.m"
                        if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4490 "term.c"
                          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                        else
#line 52 "term.m"
                          if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 52 "term.m"
                            {
#line 52 "term.m"
                              MR_String mercury__term__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "term.m"
                              MR_Integer mercury__term__Res_7_121;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_102_102 ;
	S2 =  mercury__term__V_88_88 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4518 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_121  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__Res_7_121 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__term__succeeded = (mercury__term__Res_7_121 == (MR_Integer) 0);
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
#line 52 "term.m"
                            }
#line 52 "term.m"
                          else
#line 4551 "term.c"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                }
#line 52 "term.m"
              else
#line 52 "term.m"
                {
#line 52 "term.m"
                  MR_String mercury__term__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 52 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4564 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                  else
#line 52 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4570 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                    else
#line 52 "term.m"
                      if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4576 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 52 "term.m"
                      else
#line 52 "term.m"
                        if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4582 "term.c"
                          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                        else
#line 52 "term.m"
                          if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4588 "term.c"
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 52 "term.m"
                          else
#line 52 "term.m"
                            {
#line 52 "term.m"
                              MR_String mercury__term__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 52 "term.m"
                              MR_Integer mercury__term__Res_7_129;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_104_104 ;
	S2 =  mercury__term__V_58_58 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4614 "term.c"

		;}
#undef MR_PROC_LABEL
	 mercury__term__Res_7_129  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                              mercury__term__succeeded = (mercury__term__Res_7_129 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                              if (mercury__term__succeeded)
#line 104 "private_builtin.opt"
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                              else
#line 110 "private_builtin.opt"
                                {
#line 107 "private_builtin.opt"
                                  mercury__term__succeeded = (mercury__term__Res_7_129 == (MR_Integer) 0);
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
#line 52 "term.m"
                            }
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
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 4695 "term.c"
              mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_4_4) == 0);
#line 52 "term.m"
            }
#line 52 "term.m"
        }
#line 52 "term.m"
      else
#line 52 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 4726 "term.c"
                mercury__term__succeeded = (mercury__term__V_7_7 == mercury__term__V_9_9);
#line 52 "term.m"
                if (mercury__term__succeeded)
#line 4730 "term.c"
                  {
#line 4732 "term.c"
                    return mercury__term__succeeded = mercury__integer____Unify____integer_0_0(mercury__term__V_8_8, mercury__term__V_10_10);
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
          }
#line 52 "term.m"
        else
#line 52 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 4758 "term.c"
                  mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_6_6);
#line 52 "term.m"
                }
#line 52 "term.m"
            }
#line 52 "term.m"
          else
#line 52 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 4783 "term.c"
                    mercury__term__succeeded = (mercury__term__V_13_13 == mercury__term__V_14_14);
#line 52 "term.m"
                  }
#line 52 "term.m"
              }
#line 52 "term.m"
            else
#line 52 "term.m"
              if (((((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 4808 "term.c"
                      mercury__term__succeeded = (strcmp(mercury__term__V_15_15, mercury__term__V_16_16) == 0);
#line 52 "term.m"
                    }
#line 52 "term.m"
                }
#line 52 "term.m"
              else
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
#line 4831 "term.c"
                      mercury__term__succeeded = (strcmp(mercury__term__V_11_11, mercury__term__V_12_12) == 0);
#line 52 "term.m"
                    }
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
#line 119 "map.opt"
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

#line 4932 "term.c"
                {
#line 4934 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4936 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 4938 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4940 "term.c"
                }
#line 4942 "term.c"
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4944 "term.c"
                {
#line 4946 "term.c"
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4948 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
#line 4950 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4952 "term.c"
                }
#line 119 "map.opt"
                {
#line 119 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
#line 119 "map.opt"
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
#line 41 "map.opt"
        MR_Box mercury__term__conv0_TermBoundToX_10;

#line 5307 "term.c"
        {
#line 5309 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5311 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 5313 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5315 "term.c"
        }
#line 5317 "term.c"
        {
#line 5319 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5321 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 5323 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5325 "term.c"
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

#line 5402 "term.c"
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
#line 5454 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5456 "term.c"
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
#line 5470 "term.c"
                    {
#line 5472 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5474 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 5476 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5478 "term.c"
                    }
#line 5480 "term.c"
                    {
#line 5482 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5484 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 5486 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5488 "term.c"
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
#line 41 "map.opt"
            MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6367 "term.c"
            {
#line 6369 "term.c"
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6371 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6373 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6375 "term.c"
            }
#line 6377 "term.c"
            {
#line 6379 "term.c"
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6381 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6383 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6385 "term.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
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
#line 41 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6577 "term.c"
        {
#line 6579 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6581 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6583 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6585 "term.c"
        }
#line 6587 "term.c"
        {
#line 6589 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6591 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6593 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6595 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
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

#line 7101 "term.c"
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
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_18;

#line 7551 "term.c"
        {
#line 7553 "term.c"
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7555 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
#line 7557 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 7559 "term.c"
        }
#line 41 "map.opt"
        {
#line 41 "map.opt"
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_10_20, mercury__term__TypeInfo_10_20, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_7, &mercury__term__conv0_NewVar_18);
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
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 7648 "term.c"
        {
#line 7650 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7652 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 7654 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 7656 "term.c"
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
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 7733 "term.c"
    {
#line 7735 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7737 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 7739 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 7741 "term.c"
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
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7977 "term.c"
    {
#line 7979 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7981 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7983 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7985 "term.c"
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
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 8041 "term.c"
    {
#line 8043 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8045 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 8047 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 8049 "term.c"
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

#line 8353 "term.c"
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
#line 41 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 8701 "term.c"
            {
#line 8703 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8705 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 8707 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8709 "term.c"
            }
#line 8711 "term.c"
            {
#line 8713 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8715 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 8717 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8719 "term.c"
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

#line 8959 "term.c"
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
#line 41 "map.opt"
                MR_Box mercury__term__conv0_TermBoundToX_9;

#line 8984 "term.c"
                {
#line 8986 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8988 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 8990 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8992 "term.c"
                }
#line 8994 "term.c"
                {
#line 8996 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8998 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 9000 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 9002 "term.c"
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

#line 9353 "term.c"
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
#line 48 "tree234.opt"
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
#line 9918 "term.c"
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9920 "term.c"
                    {
#line 9922 "term.c"
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9924 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9926 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9928 "term.c"
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

#line 9974 "term.c"
                {
#line 9976 "term.c"
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9978 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
#line 9980 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9982 "term.c"
                }
#line 9984 "term.c"
                {
#line 9986 "term.c"
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9988 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
#line 9990 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9992 "term.c"
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
#line 10065 "term.c"
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10067 "term.c"
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10069 "term.c"
                            {
#line 10071 "term.c"
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10073 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
#line 10075 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10077 "term.c"
                            }
#line 10079 "term.c"
                            {
#line 10081 "term.c"
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10083 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
#line 10085 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10087 "term.c"
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

#line 10140 "term.c"
                {
#line 10142 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10144 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10146 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10148 "term.c"
                }
#line 10150 "term.c"
                {
#line 10152 "term.c"
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10154 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10156 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10158 "term.c"
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
#line 10231 "term.c"
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10233 "term.c"
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10235 "term.c"
                            {
#line 10237 "term.c"
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10239 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
#line 10241 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10243 "term.c"
                            }
#line 10245 "term.c"
                            {
#line 10247 "term.c"
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10249 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
#line 10251 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10253 "term.c"
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

#line 10326 "term.c"
                        {
#line 10328 "term.c"
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10330 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
#line 10332 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10334 "term.c"
                        }
#line 10336 "term.c"
                        {
#line 10338 "term.c"
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10340 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 10342 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10344 "term.c"
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

#line 10503 "term.c"
                            {
#line 10505 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10507 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 10509 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10511 "term.c"
                            }
#line 10513 "term.c"
                            {
#line 10515 "term.c"
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10517 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10519 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10521 "term.c"
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

#line 10642 "term.c"
                                    {
#line 10644 "term.c"
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10646 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 10648 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10650 "term.c"
                                    }
#line 10652 "term.c"
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10654 "term.c"
                                    {
#line 10656 "term.c"
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10658 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10660 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10662 "term.c"
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

#line 10897 "term.c"
                {
#line 10899 "term.c"
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10901 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10903 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10905 "term.c"
                }
#line 10907 "term.c"
                {
#line 10909 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10911 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10913 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10915 "term.c"
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
#line 10977 "term.c"
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10979 "term.c"
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10981 "term.c"
                        {
#line 10983 "term.c"
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10985 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10987 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10989 "term.c"
                        }
#line 10991 "term.c"
                        {
#line 10993 "term.c"
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10995 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
#line 10997 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10999 "term.c"
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

#line 11050 "term.c"
                {
#line 11052 "term.c"
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11054 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 11056 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11058 "term.c"
                }
#line 11060 "term.c"
                {
#line 11062 "term.c"
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11064 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
#line 11066 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11068 "term.c"
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
#line 11130 "term.c"
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 11132 "term.c"
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11134 "term.c"
                        {
#line 11136 "term.c"
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11138 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
#line 11140 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11142 "term.c"
                        }
#line 11144 "term.c"
                        {
#line 11146 "term.c"
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11148 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 11150 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11152 "term.c"
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

#line 11190 "term.c"
                {
#line 11192 "term.c"
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11194 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
#line 11196 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11198 "term.c"
                }
#line 11200 "term.c"
                {
#line 11202 "term.c"
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11204 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
#line 11206 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11208 "term.c"
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

#line 11367 "term.c"
                    {
#line 11369 "term.c"
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11371 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 11373 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11375 "term.c"
                    }
#line 11377 "term.c"
                    {
#line 11379 "term.c"
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11381 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
#line 11383 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11385 "term.c"
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

#line 11506 "term.c"
                            {
#line 11508 "term.c"
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11510 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
#line 11512 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11514 "term.c"
                            }
#line 11516 "term.c"
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11518 "term.c"
                            {
#line 11520 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11522 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 11524 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11526 "term.c"
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
