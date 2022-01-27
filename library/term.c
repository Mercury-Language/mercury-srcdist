/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1];

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
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

#line 126 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

#line 129 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

#line 132 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2];

#line 135 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

#line 138 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5];

#line 141 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5];

#line 144 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

#line 147 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

#line 150 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

#line 153 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

#line 156 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

#line 159 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

#line 162 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

#line 165 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

#line 168 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

#line 171 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

#line 174 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

#line 177 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 180 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

#line 183 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

#line 186 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

#line 189 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 192 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

#line 195 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

#line 198 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

#line 201 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

#line 204 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

#line 207 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

#line 210 "term.c"
static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

#line 213 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

#line 216 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

#line 219 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

#line 222 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

#line 225 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

#line 228 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

#line 231 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

#line 234 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

#line 237 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

#line 240 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 243 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 245 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 248 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 251 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 253 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 255 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 258 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 261 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 263 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 266 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 269 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 271 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 273 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 276 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 279 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 281 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 284 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 287 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 289 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 291 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 294 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 297 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 299 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 301 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 304 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 307 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 309 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 311 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 313 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 316 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 319 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 321 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 324 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 327 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 329 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 331 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 334 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 337 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 339 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 341 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 344 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 347 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 349 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 351 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 353 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 356 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 359 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 361 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 364 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 367 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 369 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 371 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 374 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 377 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 379 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 381 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 384 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
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
mercury__term____Unify____term_0_0_10001(
#line 399 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 401 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 404 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 407 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 409 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 411 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 414 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 417 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 419 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 421 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 424 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
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
mercury__term____Unify____var_0_0_10001(
#line 439 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 441 "term.c"
  MR_Box mercury__term__wrapper_arg_2);

#line 444 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 447 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 449 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 451 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 454 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 457 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 459 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 461 "term.c"
  MR_Box mercury__term__wrapper_arg_3);

#line 464 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 467 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 469 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 471 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 473 "term.c"
  MR_Box mercury__term__wrapper_arg_4);

#line 476 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 479 "term.c"
  MR_Box mercury__term__closure_arg,
#line 481 "term.c"
  MR_Box mercury__term__wrapper_arg_1);

#line 484 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 487 "term.c"
  MR_Box mercury__term__closure_arg,
#line 489 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 491 "term.c"
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

#line 988 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 988 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 988 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 988 "term.m"
  MR_Word mercury__term__HeadVar__2_2);

#line 875 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 875 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 875 "term.m"
  MR_Word mercury__term__X_6,
#line 875 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 875 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 875 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 875 "term.m"
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



#line 926 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 931 "term.c"
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

#line 946 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 951 "term.c"
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

#line 966 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 971 "term.c"
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

#line 986 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 991 "term.c"
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

#line 1006 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1011 "term.c"
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

#line 1026 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

#line 1031 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

#line 1036 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1041 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

#line 1047 "term.c"
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

#line 1071 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_2
};

#line 1080 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_const_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1089 "term.c"
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

#line 1110 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1116 "term.c"
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

#line 1131 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1136 "term.c"
static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
  }
};

#line 1145 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

#line 1150 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

#line 1155 "term.c"
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

#line 1176 "term.c"
static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
};

#line 1182 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1187 "term.c"
static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

#line 1192 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

#line 1197 "term.c"
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

#line 1218 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1226 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

#line 1235 "term.c"
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

#line 1256 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1264 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

#line 1273 "term.c"
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

#line 1294 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1302 "term.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1311 "term.c"
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

#line 1332 "term.c"
static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1340 "term.c"
static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

#line 1349 "term.c"
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

#line 1370 "term.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

#line 1378 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1385 "term.c"
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

#line 1400 "term.c"
static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

#line 1406 "term.c"
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

#line 1421 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

#line 1426 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1431 "term.c"
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

#line 1445 "term.c"
static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

#line 1451 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1457 "term.c"
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

#line 1478 "term.c"
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

#line 1499 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

#line 1504 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1511 "term.c"
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

#line 1532 "term.c"
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

#line 1553 "term.c"
static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

#line 1558 "term.c"
static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1565 "term.c"
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

#line 1586 "term.c"
const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

#line 1597 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
#line 1600 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1602 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1604 "term.c"
{
#line 1606 "term.c"
  {
#line 1608 "term.c"
    MR_bool mercury__term__succeeded;

#line 1611 "term.c"
    {
#line 1613 "term.c"
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1616 "term.c"
    return mercury__term__succeeded;
#line 1618 "term.c"
  }
#line 1620 "term.c"
}

#line 1623 "term.c"
static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
#line 1626 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1628 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1630 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1632 "term.c"
{
#line 1634 "term.c"
  {
#line 1636 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1639 "term.c"
    {
#line 1641 "term.c"
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1644 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1646 "term.c"
  }
#line 1648 "term.c"
}

#line 1651 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
#line 1654 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1656 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1658 "term.c"
{
#line 1660 "term.c"
  {
#line 1662 "term.c"
    MR_bool mercury__term__succeeded;

#line 1665 "term.c"
    {
#line 1667 "term.c"
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1670 "term.c"
    return mercury__term__succeeded;
#line 1672 "term.c"
  }
#line 1674 "term.c"
}

#line 1677 "term.c"
static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
#line 1680 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1682 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1684 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1686 "term.c"
{
#line 1688 "term.c"
  {
#line 1690 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1693 "term.c"
    {
#line 1695 "term.c"
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1698 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1700 "term.c"
  }
#line 1702 "term.c"
}

#line 1705 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
#line 1708 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1710 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1712 "term.c"
{
#line 1714 "term.c"
  {
#line 1716 "term.c"
    MR_bool mercury__term__succeeded;

#line 1719 "term.c"
    {
#line 1721 "term.c"
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
#line 1724 "term.c"
    return mercury__term__succeeded;
#line 1726 "term.c"
  }
#line 1728 "term.c"
}

#line 1731 "term.c"
static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
#line 1734 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1736 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1738 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1740 "term.c"
{
#line 1742 "term.c"
  {
#line 1744 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1747 "term.c"
    {
#line 1749 "term.c"
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
#line 1752 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1754 "term.c"
  }
#line 1756 "term.c"
}

#line 1759 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
#line 1762 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1764 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1766 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1768 "term.c"
{
#line 1770 "term.c"
  {
#line 1772 "term.c"
    MR_bool mercury__term__succeeded;

#line 1775 "term.c"
    {
#line 1777 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1780 "term.c"
    return mercury__term__succeeded;
#line 1782 "term.c"
  }
#line 1784 "term.c"
}

#line 1787 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
#line 1790 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1792 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1794 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1796 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1798 "term.c"
{
#line 1800 "term.c"
  {
#line 1802 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1805 "term.c"
    {
#line 1807 "term.c"
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1810 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1812 "term.c"
  }
#line 1814 "term.c"
}

#line 1817 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
#line 1820 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1822 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1824 "term.c"
{
#line 1826 "term.c"
  {
#line 1828 "term.c"
    MR_bool mercury__term__succeeded;

#line 1831 "term.c"
    {
#line 1833 "term.c"
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1836 "term.c"
    return mercury__term__succeeded;
#line 1838 "term.c"
  }
#line 1840 "term.c"
}

#line 1843 "term.c"
static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
#line 1846 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1848 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1850 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1852 "term.c"
{
#line 1854 "term.c"
  {
#line 1856 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1859 "term.c"
    {
#line 1861 "term.c"
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1864 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1866 "term.c"
  }
#line 1868 "term.c"
}

#line 1871 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
#line 1874 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1876 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1878 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1880 "term.c"
{
#line 1882 "term.c"
  {
#line 1884 "term.c"
    MR_bool mercury__term__succeeded;

#line 1887 "term.c"
    {
#line 1889 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1892 "term.c"
    return mercury__term__succeeded;
#line 1894 "term.c"
  }
#line 1896 "term.c"
}

#line 1899 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
#line 1902 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1904 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 1906 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 1908 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 1910 "term.c"
{
#line 1912 "term.c"
  {
#line 1914 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1917 "term.c"
    {
#line 1919 "term.c"
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 1922 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1924 "term.c"
  }
#line 1926 "term.c"
}

#line 1929 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
#line 1932 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1934 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 1936 "term.c"
{
#line 1938 "term.c"
  {
#line 1940 "term.c"
    MR_bool mercury__term__succeeded;

#line 1943 "term.c"
    {
#line 1945 "term.c"
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 1948 "term.c"
    return mercury__term__succeeded;
#line 1950 "term.c"
  }
#line 1952 "term.c"
}

#line 1955 "term.c"
static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
#line 1958 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 1960 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1962 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1964 "term.c"
{
#line 1966 "term.c"
  {
#line 1968 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 1971 "term.c"
    {
#line 1973 "term.c"
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 1976 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 1978 "term.c"
  }
#line 1980 "term.c"
}

#line 1983 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
#line 1986 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 1988 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 1990 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 1992 "term.c"
{
#line 1994 "term.c"
  {
#line 1996 "term.c"
    MR_bool mercury__term__succeeded;

#line 1999 "term.c"
    {
#line 2001 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2004 "term.c"
    return mercury__term__succeeded;
#line 2006 "term.c"
  }
#line 2008 "term.c"
}

#line 2011 "term.c"
static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
#line 2014 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2016 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2018 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2020 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2022 "term.c"
{
#line 2024 "term.c"
  {
#line 2026 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2029 "term.c"
    {
#line 2031 "term.c"
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2034 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2036 "term.c"
  }
#line 2038 "term.c"
}

#line 2041 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
#line 2044 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2046 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2048 "term.c"
{
#line 2050 "term.c"
  {
#line 2052 "term.c"
    MR_bool mercury__term__succeeded;

#line 2055 "term.c"
    {
#line 2057 "term.c"
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2060 "term.c"
    return mercury__term__succeeded;
#line 2062 "term.c"
  }
#line 2064 "term.c"
}

#line 2067 "term.c"
static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
#line 2070 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2072 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2074 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2076 "term.c"
{
#line 2078 "term.c"
  {
#line 2080 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2083 "term.c"
    {
#line 2085 "term.c"
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2088 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2090 "term.c"
  }
#line 2092 "term.c"
}

#line 2095 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
#line 2098 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2100 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2102 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2104 "term.c"
{
#line 2106 "term.c"
  {
#line 2108 "term.c"
    MR_bool mercury__term__succeeded;

#line 2111 "term.c"
    {
#line 2113 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2116 "term.c"
    return mercury__term__succeeded;
#line 2118 "term.c"
  }
#line 2120 "term.c"
}

#line 2123 "term.c"
static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
#line 2126 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2128 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2130 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2132 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2134 "term.c"
{
#line 2136 "term.c"
  {
#line 2138 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2141 "term.c"
    {
#line 2143 "term.c"
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2146 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2148 "term.c"
  }
#line 2150 "term.c"
}

#line 2153 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
#line 2156 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2158 "term.c"
  MR_Box mercury__term__wrapper_arg_2)
#line 2160 "term.c"
{
#line 2162 "term.c"
  {
#line 2164 "term.c"
    MR_bool mercury__term__succeeded;

#line 2167 "term.c"
    {
#line 2169 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
#line 2172 "term.c"
    return mercury__term__succeeded;
#line 2174 "term.c"
  }
#line 2176 "term.c"
}

#line 2179 "term.c"
static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
#line 2182 "term.c"
  MR_Box * mercury__term__wrapper_arg_1,
#line 2184 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2186 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2188 "term.c"
{
#line 2190 "term.c"
  {
#line 2192 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2195 "term.c"
    {
#line 2197 "term.c"
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2200 "term.c"
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2202 "term.c"
  }
#line 2204 "term.c"
}

#line 2207 "term.c"
static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
#line 2210 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2212 "term.c"
  MR_Box mercury__term__wrapper_arg_2,
#line 2214 "term.c"
  MR_Box mercury__term__wrapper_arg_3)
#line 2216 "term.c"
{
#line 2218 "term.c"
  {
#line 2220 "term.c"
    MR_bool mercury__term__succeeded;

#line 2223 "term.c"
    {
#line 2225 "term.c"
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
#line 2228 "term.c"
    return mercury__term__succeeded;
#line 2230 "term.c"
  }
#line 2232 "term.c"
}

#line 2235 "term.c"
static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
#line 2238 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2240 "term.c"
  MR_Box * mercury__term__wrapper_arg_2,
#line 2242 "term.c"
  MR_Box mercury__term__wrapper_arg_3,
#line 2244 "term.c"
  MR_Box mercury__term__wrapper_arg_4)
#line 2246 "term.c"
{
#line 2248 "term.c"
  {
#line 2250 "term.c"
    MR_Word mercury__term__conv0_HeadVar__1_1;

#line 2253 "term.c"
    {
#line 2255 "term.c"
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
#line 2258 "term.c"
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
#line 2260 "term.c"
  }
#line 2262 "term.c"
}

#line 2265 "term.c"
static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
#line 2268 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2270 "term.c"
  MR_Box mercury__term__wrapper_arg_1)
#line 2272 "term.c"
{
#line 2274 "term.c"
  {
#line 2276 "term.c"
    MR_Box mercury__term__wrapper_arg_2;
#line 2278 "term.c"
    MR_Box mercury__term__closure;
#line 2280 "term.c"
    MR_Integer mercury__term__conv0_HeadVar__2_2;

#line 2283 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2285 "term.c"
    {
#line 2287 "term.c"
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
#line 2290 "term.c"
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2292 "term.c"
    return mercury__term__wrapper_arg_2;
#line 2294 "term.c"
  }
#line 2296 "term.c"
}

#line 2299 "term.c"
static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
#line 2302 "term.c"
  MR_Box mercury__term__closure_arg,
#line 2304 "term.c"
  MR_Box mercury__term__wrapper_arg_1,
#line 2306 "term.c"
  MR_Box * mercury__term__wrapper_arg_2)
#line 2308 "term.c"
{
#line 2310 "term.c"
  {
#line 2312 "term.c"
    MR_bool mercury__term__succeeded;
#line 2314 "term.c"
    MR_Box mercury__term__closure;
#line 2316 "term.c"
    MR_Word mercury__term__conv0_HeadVar__2_2;

#line 2319 "term.c"
    mercury__term__closure = mercury__term__closure_arg;
#line 2321 "term.c"
    {
#line 2323 "term.c"
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
#line 2326 "term.c"
    if (mercury__term__succeeded)
#line 2328 "term.c"
      {
#line 2330 "term.c"
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
#line 2332 "term.c"
        mercury__term__succeeded = MR_TRUE;
#line 2334 "term.c"
      }
#line 2336 "term.c"
    return mercury__term__succeeded;
#line 2338 "term.c"
  }
#line 2340 "term.c"
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

#line 58 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 58 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 58 "term.m"
{
#line 58 "term.m"
  {
#line 58 "term.m"
    MR_bool mercury__term__succeeded;

#line 58 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "term.m"
  }
#line 58 "term.m"
}

#line 58 "term.m"
MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 58 "term.m"
{
#line 58 "term.m"
  {
#line 58 "term.m"
    return MR_TRUE;
#line 58 "term.m"
  }
#line 58 "term.m"
}

#line 606 "term.m"
void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
#line 606 "term.m"
{
#line 1244 "term.m"
  {
#line 1244 "term.m"
    MR_bool mercury__term__succeeded;

#line 1244 "term.m"
  }
#line 606 "term.m"
}

#line 705 "term.m"
MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
#line 705 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 705 "term.m"
  MR_Integer mercury__term__X_4,
#line 705 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 705 "term.m"
{
#line 712 "term.m"
  {
#line 712 "term.m"
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
#line 712 "term.m"
    return MR_TRUE;
#line 712 "term.m"
  }
#line 705 "term.m"
}

#line 704 "term.m"
MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
#line 704 "term.m"
  MR_Word mercury__term__TypeInfo_5_5,
#line 704 "term.m"
  MR_Word mercury__term__X_4)
#line 704 "term.m"
{
#line 714 "term.m"
  {
#line 714 "term.m"
    MR_bool mercury__term__succeeded;
#line 714 "term.m"
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

#line 714 "term.m"
    return mercury__term__HeadVar__2_2;
#line 714 "term.m"
  }
#line 704 "term.m"
}

#line 685 "term.m"
void MR_CALL 
mercury__term____Compare____var_supply_1_0(
#line 685 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 685 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 685 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 685 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 685 "term.m"
{
#line 685 "term.m"
  {
#line 685 "term.m"
    MR_bool mercury__term__succeeded;
#line 685 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 685 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 685 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 685 "term.m"
    if (mercury__term__succeeded)
#line 2556 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 685 "term.m"
    else
#line 685 "term.m"
      {
#line 685 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 685 "term.m"
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
#line 685 "term.m"
      }
#line 685 "term.m"
  }
#line 685 "term.m"
}

#line 685 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
#line 685 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 685 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 685 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 685 "term.m"
{
#line 685 "term.m"
  {
#line 685 "term.m"
    MR_bool mercury__term__succeeded;
#line 685 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 685 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 685 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 685 "term.m"
    if (mercury__term__succeeded)
#line 685 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 685 "term.m"
    else
#line 685 "term.m"
      {
#line 685 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 685 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2631 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 685 "term.m"
      }
#line 685 "term.m"
    return mercury__term__succeeded;
#line 685 "term.m"
  }
#line 685 "term.m"
}

#line 682 "term.m"
void MR_CALL 
mercury__term____Compare____var_1_0(
#line 682 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 682 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 682 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 682 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 682 "term.m"
{
#line 682 "term.m"
  {
#line 682 "term.m"
    MR_bool mercury__term__succeeded;
#line 682 "term.m"
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 682 "term.m"
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 682 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
#line 682 "term.m"
    if (mercury__term__succeeded)
#line 2668 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 682 "term.m"
    else
#line 682 "term.m"
      {
#line 682 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 682 "term.m"
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
#line 682 "term.m"
      }
#line 682 "term.m"
  }
#line 682 "term.m"
}

#line 682 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
#line 682 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 682 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 682 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 682 "term.m"
{
#line 682 "term.m"
  {
#line 682 "term.m"
    MR_bool mercury__term__succeeded;
#line 682 "term.m"
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 682 "term.m"
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 682 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
#line 682 "term.m"
    if (mercury__term__succeeded)
#line 682 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
    else
#line 682 "term.m"
      {
#line 682 "term.m"
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 682 "term.m"
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 2743 "term.c"
        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
#line 682 "term.m"
      }
#line 682 "term.m"
    return mercury__term__succeeded;
#line 682 "term.m"
  }
#line 682 "term.m"
}

#line 62 "term.m"
void MR_CALL 
mercury__term____Compare____var_0_0(
#line 62 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 62 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 62 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 62 "term.m"
{
#line 62 "term.m"
  {
#line 62 "term.m"
    MR_bool mercury__term__succeeded;
#line 62 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[0];
#line 62 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 62 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 62 "term.m"
    {
#line 62 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 62 "term.m"
      return;
    }
#line 62 "term.m"
  }
#line 62 "term.m"
}

#line 62 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
#line 62 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 62 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 62 "term.m"
{
#line 62 "term.m"
  {
#line 62 "term.m"
    MR_bool mercury__term__succeeded;
#line 62 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 62 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;
#line 682 "term.m"
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 682 "term.m"
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 682 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
#line 682 "term.m"
    if (mercury__term__succeeded)
#line 682 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
    else
#line 682 "term.m"
      {
#line 682 "term.m"
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
#line 682 "term.m"
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

#line 2825 "term.c"
        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
#line 682 "term.m"
      }
#line 62 "term.m"
    return mercury__term__succeeded;
#line 62 "term.m"
  }
#line 62 "term.m"
}

#line 38 "term.m"
void MR_CALL 
mercury__term____Compare____term_1_0(
#line 38 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_29,
#line 38 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 38 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 38 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 38 "term.m"
{
#line 38 "term.m"
  {
#line 38 "term.m"
    MR_bool mercury__term__succeeded;
#line 38 "term.m"
    MR_Integer mercury__term__CastX_27 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 38 "term.m"
    MR_Integer mercury__term__CastY_28 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 38 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_27 == mercury__term__CastY_28);
#line 38 "term.m"
    if (mercury__term__succeeded)
#line 2862 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "term.m"
    else
#line 38 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 38 "term.m"
        {
#line 38 "term.m"
          MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "term.m"
          MR_Word mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "term.m"
          MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 38 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 38 "term.m"
            {
#line 38 "term.m"
              MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "term.m"
              MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "term.m"
              MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "term.m"
              MR_Word mercury__term__V_10_10;

#line 38 "term.m"
              {
#line 38 "term.m"
                mercury__term____Compare____const_0_0(&mercury__term__V_10_10, mercury__term__V_41_41, mercury__term__V_7_7);
              }
#line 2895 "term.c"
              mercury__term__succeeded = (mercury__term__V_10_10 == (MR_Integer) 0);
#line 38 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 38 "term.m"
              if (mercury__term__succeeded)
#line 38 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_10_10;
#line 38 "term.m"
              else
#line 38 "term.m"
                {
#line 38 "term.m"
                  MR_Word mercury__term__V_11_11;
#line 38 "term.m"
                  MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 38 "term.m"
                  MR_Word mercury__term__TypeInfo_35_35;

#line 2914 "term.c"
                  {
#line 2916 "term.c"
                    mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2918 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 2920 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
#line 2922 "term.c"
                  }
#line 38 "term.m"
                  {
#line 38 "term.m"
                    mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                  }
#line 2929 "term.c"
                  mercury__term__succeeded = (mercury__term__V_11_11 == (MR_Integer) 0);
#line 38 "term.m"
                  mercury__term__succeeded = !(mercury__term__succeeded);
#line 38 "term.m"
                  if (mercury__term__succeeded)
#line 38 "term.m"
                    *mercury__term__HeadVar__1_1 = mercury__term__V_11_11;
#line 38 "term.m"
                  else
#line 38 "term.m"
                    {
#line 38 "term.m"
                      mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_39_39, mercury__term__V_9_9);
#line 38 "term.m"
                      return;
                    }
#line 38 "term.m"
                }
#line 38 "term.m"
            }
#line 38 "term.m"
          else
#line 2952 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "term.m"
        }
#line 38 "term.m"
      else
#line 38 "term.m"
        {
#line 38 "term.m"
          MR_Word mercury__term__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "term.m"
          MR_Word mercury__term__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 38 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2967 "term.c"
            *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 38 "term.m"
          else
#line 38 "term.m"
            {
#line 38 "term.m"
              MR_Word mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "term.m"
              MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "term.m"
              MR_Word mercury__term__V_26_26;
#line 38 "term.m"
              MR_Integer mercury__term__V_44_44 = (MR_Integer) mercury__term__V_43_43;
#line 38 "term.m"
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
#line 3006 "term.c"
              mercury__term__succeeded = (mercury__term__V_26_26 == (MR_Integer) 0);
#line 38 "term.m"
              mercury__term__succeeded = !(mercury__term__succeeded);
#line 38 "term.m"
              if (mercury__term__succeeded)
#line 38 "term.m"
                *mercury__term__HeadVar__1_1 = mercury__term__V_26_26;
#line 38 "term.m"
              else
#line 38 "term.m"
                {
#line 38 "term.m"
                  mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_42_42, mercury__term__V_25_25);
#line 38 "term.m"
                  return;
                }
#line 38 "term.m"
            }
#line 38 "term.m"
        }
#line 38 "term.m"
  }
#line 38 "term.m"
}

#line 38 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
#line 38 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 38 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 38 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 38 "term.m"
{
#line 38 "term.m"
  {
#line 38 "term.m"
    MR_bool mercury__term__succeeded;
#line 38 "term.m"
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 38 "term.m"
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 38 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
#line 38 "term.m"
    if (mercury__term__succeeded)
#line 38 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 38 "term.m"
    else
#line 38 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 38 "term.m"
        {
#line 38 "term.m"
          MR_Word mercury__term__TypeCtorInfo_16_16;
#line 38 "term.m"
          MR_Word mercury__term__TypeInfo_17_17;
#line 38 "term.m"
          MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "term.m"
          MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "term.m"
          MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "term.m"
          MR_Word mercury__term__V_6_6;
#line 38 "term.m"
          MR_Word mercury__term__V_7_7;
#line 38 "term.m"
          MR_Word mercury__term__V_8_8;

#line 38 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 38 "term.m"
          if (mercury__term__succeeded)
#line 38 "term.m"
            {
#line 38 "term.m"
              mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "term.m"
              mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "term.m"
              mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
#line 3093 "term.c"
              {
#line 3095 "term.c"
                mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
              }
#line 38 "term.m"
              if (mercury__term__succeeded)
#line 38 "term.m"
                {
#line 3102 "term.c"
                  mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3104 "term.c"
                  {
#line 3106 "term.c"
                    mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3108 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
#line 3110 "term.c"
                    MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
#line 3112 "term.c"
                  }
#line 3114 "term.c"
                  {
#line 3116 "term.c"
                    mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                  }
#line 38 "term.m"
                  if (mercury__term__succeeded)
#line 3121 "term.c"
                    {
#line 3123 "term.c"
                      return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_8_8);
                    }
#line 38 "term.m"
                }
#line 38 "term.m"
            }
#line 38 "term.m"
        }
#line 38 "term.m"
      else
#line 38 "term.m"
        {
#line 38 "term.m"
          MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "term.m"
          MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "term.m"
          MR_Word mercury__term__V_11_11;
#line 38 "term.m"
          MR_Word mercury__term__V_12_12;
#line 682 "term.m"
          MR_Integer mercury__term__CastX_22;
#line 682 "term.m"
          MR_Integer mercury__term__CastY_23;

#line 38 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 38 "term.m"
          if (mercury__term__succeeded)
#line 38 "term.m"
            {
#line 38 "term.m"
              mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "term.m"
              mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 682 "term.m"
              mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
#line 682 "term.m"
              mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
#line 682 "term.m"
              mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
#line 682 "term.m"
              if (mercury__term__succeeded)
#line 682 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
              else
#line 682 "term.m"
                {
#line 682 "term.m"
                  MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
#line 682 "term.m"
                  MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

#line 3178 "term.c"
                  mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
#line 682 "term.m"
                }
#line 38 "term.m"
              if (mercury__term__succeeded)
#line 3184 "term.c"
                {
#line 3186 "term.c"
                  return mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_10_10, mercury__term__V_12_12);
                }
#line 38 "term.m"
            }
#line 38 "term.m"
        }
#line 38 "term.m"
    return mercury__term__succeeded;
#line 38 "term.m"
  }
#line 38 "term.m"
}

#line 61 "term.m"
void MR_CALL 
mercury__term____Compare____term_0_0(
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
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[1];
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
mercury__term____Unify____term_0_0(
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
    MR_Word mercury__term__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 61 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 61 "term.m"
    {
#line 61 "term.m"
      return mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeCtorInfo_5_5, mercury__term__Cast_HeadVar1_3, mercury__term__Cast_HeadVar2_4);
    }
#line 61 "term.m"
    return mercury__term__succeeded;
#line 61 "term.m"
  }
#line 61 "term.m"
}

#line 117 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_1_0(
#line 117 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 117 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 117 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 117 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 117 "term.m"
{
#line 117 "term.m"
  {
#line 117 "term.m"
    MR_bool mercury__term__succeeded;
#line 117 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 117 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 117 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9;
#line 117 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 117 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 117 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 3296 "term.c"
    {
#line 3298 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3300 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3302 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3304 "term.c"
    }
#line 3306 "term.c"
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3308 "term.c"
    {
#line 3310 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3312 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 3314 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3316 "term.c"
    }
#line 117 "term.m"
    {
#line 117 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_10_10, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 117 "term.m"
      return;
    }
#line 117 "term.m"
  }
#line 117 "term.m"
}

#line 117 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
#line 117 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 117 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 117 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 117 "term.m"
{
#line 117 "term.m"
  {
#line 117 "term.m"
    MR_bool mercury__term__succeeded;
#line 117 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 117 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 117 "term.m"
    MR_Word mercury__term__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 117 "term.m"
    MR_Word mercury__term__TypeInfo_9_9;
#line 117 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 117 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 3358 "term.c"
    {
#line 3360 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3362 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3364 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3366 "term.c"
    }
#line 3368 "term.c"
    {
#line 3370 "term.c"
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3372 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
#line 3374 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3376 "term.c"
    }
#line 117 "term.m"
    {
#line 117 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_9_9, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 117 "term.m"
    return mercury__term__succeeded;
#line 117 "term.m"
  }
#line 117 "term.m"
}

#line 118 "term.m"
void MR_CALL 
mercury__term____Compare____substitution_0_0(
#line 118 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 118 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 118 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 118 "term.m"
{
#line 118 "term.m"
  {
#line 118 "term.m"
    MR_bool mercury__term__succeeded;
#line 118 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 118 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 118 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 118 "term.m"
    {
#line 118 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 118 "term.m"
      return;
    }
#line 118 "term.m"
  }
#line 118 "term.m"
}

#line 118 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
#line 118 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 118 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 118 "term.m"
{
#line 118 "term.m"
  {
#line 118 "term.m"
    MR_bool mercury__term__succeeded;
#line 118 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[1];
#line 118 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 118 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 118 "term.m"
    {
#line 118 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 118 "term.m"
    return mercury__term__succeeded;
#line 118 "term.m"
  }
#line 118 "term.m"
}

#line 114 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_1_0(
#line 114 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 114 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 114 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 114 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 114 "term.m"
{
#line 114 "term.m"
  {
#line 114 "term.m"
    MR_bool mercury__term__succeeded;
#line 114 "term.m"
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 114 "term.m"
    MR_Word mercury__term__TypeInfo_8_8;
#line 114 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 114 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 3482 "term.c"
    {
#line 3484 "term.c"
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3486 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
#line 3488 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
#line 3490 "term.c"
    }
#line 114 "term.m"
    {
#line 114 "term.m"
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_8_8, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
#line 114 "term.m"
      return;
    }
#line 114 "term.m"
  }
#line 114 "term.m"
}

#line 114 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
#line 114 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 114 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 114 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 114 "term.m"
{
#line 114 "term.m"
  {
#line 114 "term.m"
    MR_bool mercury__term__succeeded;
#line 114 "term.m"
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 114 "term.m"
    MR_Word mercury__term__TypeInfo_7_7;
#line 114 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 114 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 3528 "term.c"
    {
#line 3530 "term.c"
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3532 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
#line 3534 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
#line 3536 "term.c"
    }
#line 114 "term.m"
    {
#line 114 "term.m"
      return mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_7_7, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
#line 114 "term.m"
    return mercury__term__succeeded;
#line 114 "term.m"
  }
#line 114 "term.m"
}

#line 115 "term.m"
void MR_CALL 
mercury__term____Compare____renaming_0_0(
#line 115 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 115 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 115 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 115 "term.m"
{
#line 115 "term.m"
  {
#line 115 "term.m"
    MR_bool mercury__term__succeeded;
#line 115 "term.m"
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 115 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
#line 115 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

#line 115 "term.m"
    {
#line 115 "term.m"
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
#line 115 "term.m"
      return;
    }
#line 115 "term.m"
  }
#line 115 "term.m"
}

#line 115 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
#line 115 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 115 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 115 "term.m"
{
#line 115 "term.m"
  {
#line 115 "term.m"
    MR_bool mercury__term__succeeded;
#line 115 "term.m"
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[0];
#line 115 "term.m"
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
#line 115 "term.m"
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

#line 115 "term.m"
    {
#line 115 "term.m"
      return mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
#line 115 "term.m"
    return mercury__term__succeeded;
#line 115 "term.m"
  }
#line 115 "term.m"
}

#line 58 "term.m"
void MR_CALL 
mercury__term____Compare____generic_0_0(
#line 58 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 58 "term.m"
{
#line 58 "term.m"
  {
#line 58 "term.m"
    MR_bool mercury__term__succeeded;

#line 58 "term.m"
    {
#line 58 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__term__HeadVar__1_1);
#line 58 "term.m"
      return;
    }
#line 58 "term.m"
  }
#line 58 "term.m"
}

#line 58 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____generic_0_0(void)
#line 58 "term.m"
{
#line 58 "term.m"
  {
#line 58 "term.m"
    MR_bool mercury__term__succeeded;

#line 58 "term.m"
    {
#line 58 "term.m"
      return mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 58 "term.m"
    return mercury__term__succeeded;
#line 58 "term.m"
  }
#line 58 "term.m"
}

#line 626 "term.m"
void MR_CALL 
mercury__term____Compare____context_0_0(
#line 626 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 626 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 626 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 626 "term.m"
{
#line 626 "term.m"
  {
#line 626 "term.m"
    MR_bool mercury__term__succeeded;
#line 626 "term.m"
    MR_Integer mercury__term__CastX_9 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 626 "term.m"
    MR_Integer mercury__term__CastY_10 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 626 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_9 == mercury__term__CastY_10);
#line 626 "term.m"
    if (mercury__term__succeeded)
#line 3686 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 626 "term.m"
    else
#line 626 "term.m"
      {
#line 626 "term.m"
        MR_String mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "term.m"
        MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "term.m"
        MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 626 "term.m"
        MR_Integer mercury__term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 626 "term.m"
        MR_Word mercury__term__V_8_8;
#line 626 "term.m"
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

#line 3720 "term.c"

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
#line 3749 "term.c"
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
#line 626 "term.m"
        mercury__term__succeeded = !(mercury__term__succeeded);
#line 626 "term.m"
        if (mercury__term__succeeded)
#line 626 "term.m"
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
#line 626 "term.m"
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
#line 626 "term.m"
      }
#line 626 "term.m"
  }
#line 626 "term.m"
}

#line 626 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
#line 626 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 626 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 626 "term.m"
{
#line 626 "term.m"
  {
#line 626 "term.m"
    MR_bool mercury__term__succeeded;
#line 626 "term.m"
    MR_Integer mercury__term__CastX_7 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 626 "term.m"
    MR_Integer mercury__term__CastY_8 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 626 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_7 == mercury__term__CastY_8);
#line 626 "term.m"
    if (mercury__term__succeeded)
#line 626 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 626 "term.m"
    else
#line 626 "term.m"
      {
#line 626 "term.m"
        MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 626 "term.m"
        MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "term.m"
        MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "term.m"
        MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 3829 "term.c"
        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
#line 626 "term.m"
        if (mercury__term__succeeded)
#line 3833 "term.c"
          mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_6_6);
#line 626 "term.m"
      }
#line 626 "term.m"
    return mercury__term__succeeded;
#line 626 "term.m"
  }
#line 626 "term.m"
}

#line 51 "term.m"
void MR_CALL 
mercury__term____Compare____const_0_0(
#line 51 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 51 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 51 "term.m"
  MR_Word mercury__term__HeadVar__3_3)
#line 51 "term.m"
{
#line 51 "term.m"
  {
#line 51 "term.m"
    MR_bool mercury__term__succeeded;
#line 51 "term.m"
    MR_Integer mercury__term__CastX_54 = (MR_Integer) mercury__term__HeadVar__2_2;
#line 51 "term.m"
    MR_Integer mercury__term__CastY_55 = (MR_Integer) mercury__term__HeadVar__3_3;

#line 51 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_54 == mercury__term__CastY_55);
#line 51 "term.m"
    if (mercury__term__succeeded)
#line 3868 "term.c"
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "term.m"
    else
#line 51 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 51 "term.m"
        {
#line 51 "term.m"
          MR_String mercury__term__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 51 "term.m"
            {
#line 51 "term.m"
              MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "term.m"
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

#line 3903 "term.c"

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
#line 51 "term.m"
            }
#line 51 "term.m"
          else
#line 51 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3938 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
            else
#line 51 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3944 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
              else
#line 51 "term.m"
                if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3950 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
                else
#line 3954 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
        }
#line 51 "term.m"
      else
#line 51 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 51 "term.m"
          {
#line 51 "term.m"
            MR_Integer mercury__term__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "term.m"
            if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3969 "term.c"
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
            else
#line 51 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 51 "term.m"
                {
#line 51 "term.m"
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
#line 51 "term.m"
                }
#line 51 "term.m"
              else
#line 51 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4008 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
                else
#line 51 "term.m"
                  if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4014 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
                  else
#line 4018 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
          }
#line 51 "term.m"
        else
#line 51 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 51 "term.m"
            {
#line 51 "term.m"
              MR_String mercury__term__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "term.m"
              if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4033 "term.c"
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
              else
#line 51 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4039 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                else
#line 51 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 51 "term.m"
                    {
#line 51 "term.m"
                      MR_String mercury__term__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "term.m"
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

#line 4067 "term.c"

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
#line 51 "term.m"
                    }
#line 51 "term.m"
                  else
#line 51 "term.m"
                    if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4102 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
                    else
#line 4106 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
            }
#line 51 "term.m"
          else
#line 51 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 51 "term.m"
              {
#line 51 "term.m"
                MR_Float mercury__term__V_62_62 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 51 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4121 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                else
#line 51 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4127 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                  else
#line 51 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4133 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                    else
#line 51 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 51 "term.m"
                        {
#line 51 "term.m"
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
#line 51 "term.m"
                        }
#line 51 "term.m"
                      else
#line 4170 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "term.m"
              }
#line 51 "term.m"
            else
#line 51 "term.m"
              {
#line 51 "term.m"
                MR_String mercury__term__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

#line 51 "term.m"
                if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4183 "term.c"
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                else
#line 51 "term.m"
                  if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4189 "term.c"
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                  else
#line 51 "term.m"
                    if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4195 "term.c"
                      *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                    else
#line 51 "term.m"
                      if (((((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4201 "term.c"
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "term.m"
                      else
#line 51 "term.m"
                        {
#line 51 "term.m"
                          MR_String mercury__term__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "term.m"
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

#line 4227 "term.c"

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
#line 51 "term.m"
                        }
#line 51 "term.m"
              }
#line 51 "term.m"
  }
#line 51 "term.m"
}

#line 51 "term.m"
MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
#line 51 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 51 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 51 "term.m"
{
#line 51 "term.m"
  {
#line 51 "term.m"
    MR_bool mercury__term__succeeded;
#line 51 "term.m"
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 51 "term.m"
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 51 "term.m"
    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
#line 51 "term.m"
    if (mercury__term__succeeded)
#line 51 "term.m"
      mercury__term__succeeded = MR_TRUE;
#line 51 "term.m"
    else
#line 51 "term.m"
      if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 51 "term.m"
        {
#line 51 "term.m"
          MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "term.m"
          MR_String mercury__term__V_4_4;

#line 51 "term.m"
          mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 51 "term.m"
          if (mercury__term__succeeded)
#line 51 "term.m"
            {
#line 51 "term.m"
              mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 4308 "term.c"
              mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_4_4) == 0);
#line 51 "term.m"
            }
#line 51 "term.m"
        }
#line 51 "term.m"
      else
#line 51 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 51 "term.m"
          {
#line 51 "term.m"
            MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "term.m"
            MR_Integer mercury__term__V_6_6;

#line 51 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 51 "term.m"
            if (mercury__term__succeeded)
#line 51 "term.m"
              {
#line 51 "term.m"
                mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 4333 "term.c"
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_6_6);
#line 51 "term.m"
              }
#line 51 "term.m"
          }
#line 51 "term.m"
        else
#line 51 "term.m"
          if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 51 "term.m"
            {
#line 51 "term.m"
              MR_String mercury__term__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "term.m"
              MR_String mercury__term__V_8_8;

#line 51 "term.m"
              mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 51 "term.m"
              if (mercury__term__succeeded)
#line 51 "term.m"
                {
#line 51 "term.m"
                  mercury__term__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 4358 "term.c"
                  mercury__term__succeeded = (strcmp(mercury__term__V_7_7, mercury__term__V_8_8) == 0);
#line 51 "term.m"
                }
#line 51 "term.m"
            }
#line 51 "term.m"
          else
#line 51 "term.m"
            if (((((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 51 "term.m"
              {
#line 51 "term.m"
                MR_Float mercury__term__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "term.m"
                MR_Float mercury__term__V_10_10;

#line 51 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 51 "term.m"
                if (mercury__term__succeeded)
#line 51 "term.m"
                  {
#line 51 "term.m"
                    mercury__term__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4383 "term.c"
                    mercury__term__succeeded = (mercury__term__V_9_9 == mercury__term__V_10_10);
#line 51 "term.m"
                  }
#line 51 "term.m"
              }
#line 51 "term.m"
            else
#line 51 "term.m"
              {
#line 51 "term.m"
                MR_String mercury__term__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "term.m"
                MR_String mercury__term__V_12_12;

#line 51 "term.m"
                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 51 "term.m"
                if (mercury__term__succeeded)
#line 51 "term.m"
                  {
#line 51 "term.m"
                    mercury__term__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 4406 "term.c"
                    mercury__term__succeeded = (strcmp(mercury__term__V_11_11, mercury__term__V_12_12) == 0);
#line 51 "term.m"
                  }
#line 51 "term.m"
              }
#line 51 "term.m"
    return mercury__term__succeeded;
#line 51 "term.m"
  }
#line 51 "term.m"
}

#line 1149 "term.m"
void MR_CALL 
mercury__term__build_subst_4_p_0(
#line 1149 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_33,
#line 1149 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 1149 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 1149 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 1149 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 1149 "term.m"
{
#line 1152 "term.m"
  while (MR_TRUE)
#line 1152 "term.m"
    {
#line 1152 "term.m"
      /* tailcall optimized into a loop */
#line 1152 "term.m"
      {
#line 1152 "term.m"
        MR_bool mercury__term__succeeded;

#line 1152 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "term.m"
          if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1152 "term.m"
            *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 1152 "term.m"
          else
#line 1153 "term.m"
            {
#line 1154 "term.m"
              {
#line 1154 "term.m"
                mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1154 "term.m"
                return;
              }
#line 1153 "term.m"
            }
#line 1152 "term.m"
        else
#line 1152 "term.m"
          {
#line 1152 "term.m"
            MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1152 "term.m"
            MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1152 "term.m"
            if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1155 "term.m"
              {
#line 1156 "term.m"
                {
#line 1156 "term.m"
                  mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
#line 1156 "term.m"
                  return;
                }
#line 1155 "term.m"
              }
#line 1152 "term.m"
            else
#line 1157 "term.m"
              {
#line 1157 "term.m"
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1157 "term.m"
                MR_Word mercury__term__TypeInfo_35_35;
#line 1157 "term.m"
                MR_Word mercury__term__TypeCtorInfo_36_36;
#line 1157 "term.m"
                MR_Word mercury__term__TypeInfo_37_37;
#line 1157 "term.m"
                MR_Word mercury__term__Term_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1157 "term.m"
                MR_Word mercury__term__Terms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1157 "term.m"
                MR_Word mercury__term__STATE_VARIABLE_Subst_31_31;
#line 119 "map.opt"
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

#line 4507 "term.c"
                {
#line 4509 "term.c"
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4511 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
#line 4513 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4515 "term.c"
                }
#line 4517 "term.c"
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4519 "term.c"
                {
#line 4521 "term.c"
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4523 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
#line 4525 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
#line 4527 "term.c"
                }
#line 119 "map.opt"
                {
#line 119 "map.opt"
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
#line 119 "map.opt"
                mercury__term__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_31_31;
#line 1159 "term.m"
                /* direct tailcall eliminated */
#line 1159 "term.m"
                {
#line 1159 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_38_38;
#line 1159 "term.m"
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Terms_27;
#line 1159 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_31_31;

#line 1159 "term.m"
                  mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1159 "term.m"
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 1159 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 1159 "term.m"
                }
#line 1159 "term.m"
                continue;
#line 1157 "term.m"
              }
#line 1152 "term.m"
          }
#line 1152 "term.m"
      }
#line 1152 "term.m"
      break;
#line 1152 "term.m"
    }
#line 1149 "term.m"
}

#line 988 "term.m"
static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
#line 988 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 988 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 988 "term.m"
  MR_Word mercury__term__HeadVar__2_2)
#line 988 "term.m"
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
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 991 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 991 "term.m"
        else
#line 992 "term.m"
          {
#line 992 "term.m"
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 992 "term.m"
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 993 "term.m"
            {
#line 993 "term.m"
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
#line 992 "term.m"
            if (mercury__term__succeeded)
#line 994 "term.m"
              {
#line 994 "term.m"
                /* direct tailcall eliminated */
#line 994 "term.m"
                {
#line 994 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 994 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 994 "term.m"
                }
#line 994 "term.m"
                continue;
#line 994 "term.m"
              }
#line 992 "term.m"
          }
#line 991 "term.m"
        return mercury__term__succeeded;
#line 991 "term.m"
      }
#line 991 "term.m"
      break;
#line 991 "term.m"
    }
#line 988 "term.m"
}

#line 973 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
#line 973 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 973 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 973 "term.m"
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
          mercury__term__succeeded = MR_TRUE;
#line 975 "term.m"
        else
#line 976 "term.m"
          {
#line 976 "term.m"
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "term.m"
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "term.m"
            MR_Word mercury__term__ArgTerms_6;
#line 970 "term.m"
            MR_Word mercury__term__V_5_5;
#line 970 "term.m"
            MR_Word mercury__term__V_7_7;

#line 970 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
#line 970 "term.m"
            if (mercury__term__succeeded)
#line 970 "term.m"
              {
#line 970 "term.m"
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
#line 970 "term.m"
                mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
#line 970 "term.m"
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
#line 971 "term.m"
                {
#line 971 "term.m"
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__ArgTerms_6);
                }
#line 976 "term.m"
                if (mercury__term__succeeded)
#line 978 "term.m"
                  {
#line 978 "term.m"
                    /* direct tailcall eliminated */
#line 978 "term.m"
                    {
#line 978 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

#line 978 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 978 "term.m"
                    }
#line 978 "term.m"
                    continue;
#line 978 "term.m"
                  }
#line 970 "term.m"
              }
#line 976 "term.m"
          }
#line 975 "term.m"
        return mercury__term__succeeded;
#line 975 "term.m"
      }
#line 975 "term.m"
      break;
#line 975 "term.m"
    }
#line 973 "term.m"
}

#line 926 "term.m"
void MR_CALL 
mercury__term__vars_2_list_3_p_0(
#line 926 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 926 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 926 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
#line 926 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
#line 926 "term.m"
{
#line 929 "term.m"
  while (MR_TRUE)
#line 929 "term.m"
    {
#line 929 "term.m"
      /* tailcall optimized into a loop */
#line 929 "term.m"
      {
#line 929 "term.m"
        MR_bool mercury__term__succeeded;

#line 929 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
#line 929 "term.m"
        else
#line 930 "term.m"
          {
#line 930 "term.m"
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 930 "term.m"
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 930 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

#line 931 "term.m"
            {
#line 931 "term.m"
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
#line 915 "term.m"
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 916 "term.m"
              {
#line 916 "term.m"
                MR_Word mercury__term__ArgTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
#line 916 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
#line 916 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

#line 917 "term.m"
                /* direct tailcall eliminated */
#line 917 "term.m"
                {
#line 917 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__ArgTerms_22;
#line 917 "term.m"
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

#line 917 "term.m"
                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
#line 917 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 917 "term.m"
                }
#line 917 "term.m"
                continue;
#line 916 "term.m"
              }
#line 915 "term.m"
            else
#line 913 "term.m"
              {
#line 913 "term.m"
                MR_Word mercury__term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
#line 913 "term.m"
                MR_Word mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

#line 914 "term.m"
                {
#line 914 "term.m"
                  MR_Word base;
#line 914 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "term.m"
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
#line 914 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_19));
#line 914 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
#line 914 "term.m"
                }
#line 913 "term.m"
              }
#line 930 "term.m"
          }
#line 929 "term.m"
      }
#line 929 "term.m"
      break;
#line 929 "term.m"
    }
#line 926 "term.m"
}

#line 875 "term.m"
static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
#line 875 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_19,
#line 875 "term.m"
  MR_Word mercury__term__X_6,
#line 875 "term.m"
  MR_Word mercury__term__BoundY_7,
#line 875 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 875 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
#line 875 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14)
#line 875 "term.m"
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
        MR_bool mercury__term__succeeded;
#line 882 "term.m"
        MR_Word mercury__term__TermBoundToX_10;
#line 879 "term.m"
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 879 "term.m"
        MR_Word mercury__term__TypeInfo_21_21;
#line 879 "term.m"
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 879 "term.m"
        MR_Word mercury__term__TypeInfo_23_23;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_TermBoundToX_10;

#line 4882 "term.c"
        {
#line 4884 "term.c"
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4886 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
#line 4888 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 4890 "term.c"
        }
#line 4892 "term.c"
        {
#line 4894 "term.c"
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4896 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
#line 4898 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 4900 "term.c"
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
#line 882 "term.m"
        if (mercury__term__succeeded)
#line 880 "term.m"
          {
#line 880 "term.m"
            MR_Word mercury__term__NewX_11;
#line 880 "term.m"
            MR_Word mercury__term__V_12_12;

#line 880 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__TermBoundToX_10)) == (MR_mktag((MR_Integer) 1)));
#line 880 "term.m"
            if (mercury__term__succeeded)
#line 880 "term.m"
              {
#line 880 "term.m"
                mercury__term__NewX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 0)));
#line 880 "term.m"
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 1)));
#line 881 "term.m"
                /* direct tailcall eliminated */
#line 881 "term.m"
                {
#line 881 "term.m"
                  MR_Word mercury__term__X__tmp_copy_6 = mercury__term__NewX_11;

#line 881 "term.m"
                  mercury__term__X_6 = mercury__term__X__tmp_copy_6;
#line 881 "term.m"
                }
#line 881 "term.m"
                continue;
#line 880 "term.m"
              }
#line 880 "term.m"
          }
#line 882 "term.m"
        else
#line 885 "term.m"
          {
#line 682 "term.m"
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__X_6;
#line 682 "term.m"
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundY_7;

#line 682 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
#line 682 "term.m"
            if (mercury__term__succeeded)
#line 682 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
            else
#line 682 "term.m"
              {
#line 682 "term.m"
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__X_6;
#line 682 "term.m"
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundY_7;

#line 4977 "term.c"
                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
#line 682 "term.m"
              }
#line 885 "term.m"
            if (mercury__term__succeeded)
#line 885 "term.m"
              {
#line 885 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_14 = mercury__term__STATE_VARIABLE_Subst_0_13;
#line 885 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 885 "term.m"
              }
#line 885 "term.m"
            else
#line 886 "term.m"
              {
#line 886 "term.m"
                MR_Word mercury__term__TypeCtorInfo_26_26;
#line 886 "term.m"
                MR_Word mercury__term__TypeInfo_27_27;
#line 886 "term.m"
                MR_Word mercury__term__TypeCtorInfo_28_28;
#line 886 "term.m"
                MR_Word mercury__term__TypeInfo_29_29;
#line 886 "term.m"
                MR_Word mercury__term__V_16_16;
#line 886 "term.m"
                MR_Word mercury__term__V_18_18;
#line 886 "term.m"
                MR_String mercury__term__V_38_38;
#line 886 "term.m"
                MR_Integer mercury__term__V_39_39;
#line 887 "term.m"
                MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_14;

#line 886 "term.m"
                {
#line 886 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__X_6, mercury__term__DontBindVars_8);
                }
#line 886 "term.m"
                mercury__term__succeeded = !(mercury__term__succeeded);
#line 886 "term.m"
                if (mercury__term__succeeded)
#line 886 "term.m"
                  {
#line 1278 "term.m"
                    mercury__term__V_38_38 = (MR_String) "";
#line 1278 "term.m"
                    mercury__term__V_39_39 = (MR_Integer) 0;
#line 5029 "term.c"
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5031 "term.c"
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1278 "term.m"
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 887 "term.m"
                    {
#line 887 "term.m"
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundY_7));
#line 887 "term.m"
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
#line 887 "term.m"
                    }
#line 5045 "term.c"
                    {
#line 5047 "term.c"
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5049 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
#line 5051 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5053 "term.c"
                    }
#line 5055 "term.c"
                    {
#line 5057 "term.c"
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5059 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
#line 5061 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
#line 5063 "term.c"
                    }
#line 887 "term.m"
                    {
#line 887 "term.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__X_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, &mercury__term__conv1_STATE_VARIABLE_Subst_14);
                    }
#line 887 "term.m"
                    *mercury__term__STATE_VARIABLE_Subst_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_14;
#line 887 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 886 "term.m"
                  }
#line 886 "term.m"
              }
#line 885 "term.m"
          }
#line 882 "term.m"
        return mercury__term__succeeded;
#line 882 "term.m"
      }
#line 882 "term.m"
      break;
#line 882 "term.m"
    }
#line 875 "term.m"
}

#line 664 "term.m"
MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
#line 664 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 664 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 664 "term.m"
{
#line 699 "term.m"
  {
#line 699 "term.m"
    MR_bool mercury__term__succeeded;
#line 699 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 699 "term.m"
    return mercury__term__V_3;
#line 699 "term.m"
  }
#line 664 "term.m"
}

#line 662 "term.m"
MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
#line 662 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 662 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 662 "term.m"
{
#line 697 "term.m"
  {
#line 697 "term.m"
    MR_bool mercury__term__succeeded;
#line 697 "term.m"
    MR_Word mercury__term__HeadVar__2_2;
#line 697 "term.m"
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 697 "term.m"
    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
#line 697 "term.m"
    return mercury__term__HeadVar__2_2;
#line 697 "term.m"
  }
#line 662 "term.m"
}

#line 650 "term.m"
void MR_CALL 
mercury__term__context_file_2_p_0(
#line 650 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 650 "term.m"
  MR_String * mercury__term__FileName_3)
#line 650 "term.m"
{
#line 1276 "term.m"
  {
#line 1276 "term.m"
    MR_bool mercury__term__succeeded;
#line 1276 "term.m"
    MR_Integer mercury__term__V_4_4;

#line 1276 "term.m"
    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1276 "term.m"
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1276 "term.m"
  }
#line 650 "term.m"
}

#line 649 "term.m"
MR_String MR_CALL 
mercury__term__context_file_1_f_0(
#line 649 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 649 "term.m"
{
#line 1275 "term.m"
  {
#line 1275 "term.m"
    MR_bool mercury__term__succeeded;
#line 1275 "term.m"
    MR_String mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1275 "term.m"
    MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

#line 1275 "term.m"
    return mercury__term__FileName_3;
#line 1275 "term.m"
  }
#line 649 "term.m"
}

#line 645 "term.m"
void MR_CALL 
mercury__term__context_line_2_p_0(
#line 645 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 645 "term.m"
  MR_Integer * mercury__term__LineNumber_4)
#line 645 "term.m"
{
#line 1273 "term.m"
  {
#line 1273 "term.m"
    MR_bool mercury__term__succeeded;
#line 1273 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1273 "term.m"
    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1273 "term.m"
  }
#line 645 "term.m"
}

#line 644 "term.m"
MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
#line 644 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 644 "term.m"
{
#line 1272 "term.m"
  {
#line 1272 "term.m"
    MR_bool mercury__term__succeeded;
#line 1272 "term.m"
    MR_Integer mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1272 "term.m"
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

#line 1272 "term.m"
    return mercury__term__LineNumber_4;
#line 1272 "term.m"
  }
#line 644 "term.m"
}

#line 640 "term.m"
void MR_CALL 
mercury__term__context_init_3_p_0(
#line 640 "term.m"
  MR_String mercury__term__File_4,
#line 640 "term.m"
  MR_Integer mercury__term__LineNumber_5,
#line 640 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 640 "term.m"
{
#line 1282 "term.m"
  {
#line 1282 "term.m"
    MR_bool mercury__term__succeeded;

#line 1282 "term.m"
    {
#line 1282 "term.m"
      MR_Word base;
#line 1282 "term.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "term.m"
      *mercury__term__HeadVar__3_3 = base;
#line 1282 "term.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
#line 1282 "term.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1282 "term.m"
    }
#line 1282 "term.m"
  }
#line 640 "term.m"
}

#line 639 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
#line 639 "term.m"
  MR_String mercury__term__File_4,
#line 639 "term.m"
  MR_Integer mercury__term__LineNumber_5)
#line 639 "term.m"
{
#line 1281 "term.m"
  {
#line 1281 "term.m"
    MR_bool mercury__term__succeeded;
#line 1281 "term.m"
    MR_Word mercury__term__HeadVar__3_3;

#line 1281 "term.m"
    {
#line 1281 "term.m"
      mercury__term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1281 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 0) = ((MR_Box) (mercury__term__File_4));
#line 1281 "term.m"
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 1) = ((MR_Box) (mercury__term__LineNumber_5));
#line 1281 "term.m"
    }
#line 1281 "term.m"
    return mercury__term__HeadVar__3_3;
#line 1281 "term.m"
  }
#line 639 "term.m"
}

#line 638 "term.m"
void MR_CALL 
mercury__term__context_init_1_p_0(
#line 638 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 638 "term.m"
{
#line 1279 "term.m"
  {
#line 1279 "term.m"
    MR_bool mercury__term__succeeded;

#line 1279 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];
#line 1279 "term.m"
  }
#line 638 "term.m"
}

#line 637 "term.m"
MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
#line 637 "term.m"
{
#line 1278 "term.m"
  {
#line 1278 "term.m"
    MR_bool mercury__term__succeeded;
#line 1278 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1278 "term.m"
    return mercury__term__HeadVar__1_1;
#line 1278 "term.m"
  }
#line 637 "term.m"
}

#line 632 "term.m"
MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
#line 632 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 632 "term.m"
  MR_Word mercury__term__Term_3)
#line 632 "term.m"
{
#line 1269 "term.m"
  {
#line 1269 "term.m"
    MR_bool mercury__term__succeeded;
#line 1269 "term.m"
    MR_Word mercury__term__Context_4;

#line 1269 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 1268 "term.m"
      {
#line 1268 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 1268 "term.m"
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

#line 1268 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
#line 1268 "term.m"
      }
#line 1269 "term.m"
    else
#line 1269 "term.m"
      {
#line 1269 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

#line 1269 "term.m"
        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
#line 1269 "term.m"
      }
#line 1269 "term.m"
    return mercury__term__Context_4;
#line 1269 "term.m"
  }
#line 632 "term.m"
}

#line 621 "term.m"
void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
#line 621 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 621 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 621 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 621 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 621 "term.m"
{
#line 1263 "term.m"
  {
#line 1263 "term.m"
    MR_bool mercury__term__succeeded;

#line 1263 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1263 "term.m"
  }
#line 621 "term.m"
}

#line 620 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
#line 620 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 620 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 620 "term.m"
  MR_Word mercury__term__VarSupplyTypeA_3)
#line 620 "term.m"
{
#line 1263 "term.m"
  {
#line 1263 "term.m"
    MR_bool mercury__term__succeeded;
#line 1263 "term.m"
    MR_Word mercury__term__VarSupplyTypeB_4 = mercury__term__VarSupplyTypeA_3;

#line 1263 "term.m"
    return mercury__term__VarSupplyTypeB_4;
#line 1263 "term.m"
  }
#line 620 "term.m"
}

#line 616 "term.m"
void MR_CALL 
mercury__term__coerce_var_2_p_0(
#line 616 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 616 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_5,
#line 616 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 616 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 616 "term.m"
{
#line 1258 "term.m"
  {
#line 1258 "term.m"
    MR_bool mercury__term__succeeded;

#line 1258 "term.m"
    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
#line 1258 "term.m"
  }
#line 616 "term.m"
}

#line 615 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
#line 615 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 615 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 615 "term.m"
  MR_Word mercury__term__VarTypeA_3)
#line 615 "term.m"
{
#line 1258 "term.m"
  {
#line 1258 "term.m"
    MR_bool mercury__term__succeeded;
#line 1258 "term.m"
    MR_Word mercury__term__VarTypeB_4 = mercury__term__VarTypeA_3;

#line 1258 "term.m"
    return mercury__term__VarTypeB_4;
#line 1258 "term.m"
  }
#line 615 "term.m"
}

#line 611 "term.m"
void MR_CALL 
mercury__term__coerce_2_p_0(
#line 611 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 611 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 611 "term.m"
  MR_Word mercury__term__TermTypeA_3,
#line 611 "term.m"
  MR_Word * mercury__term__TermTypeB_4)
#line 611 "term.m"
{
#line 1253 "term.m"
  {
#line 1253 "term.m"
    MR_bool mercury__term__succeeded;

#line 1253 "term.m"
    *mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;
#line 1253 "term.m"
  }
#line 611 "term.m"
}

#line 610 "term.m"
MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
#line 610 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 610 "term.m"
  MR_Word mercury__term__TypeInfo_for_U_6,
#line 610 "term.m"
  MR_Word mercury__term__TermTypeA_3)
#line 610 "term.m"
{
#line 1253 "term.m"
  {
#line 1253 "term.m"
    MR_bool mercury__term__succeeded;
#line 1253 "term.m"
    MR_Word mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;

#line 1253 "term.m"
    return mercury__term__TermTypeB_4;
#line 1253 "term.m"
  }
#line 610 "term.m"
}

#line 606 "term.m"
void MR_CALL 
mercury__term__generic_term_1_p_0(
#line 606 "term.m"
  MR_Word mercury__term__HeadVar__1_2)
#line 606 "term.m"
{
#line 1244 "term.m"
  {
#line 1244 "term.m"
    MR_bool mercury__term__succeeded;

#line 1244 "term.m"
    {
#line 1244 "term.m"
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0();
#line 1244 "term.m"
      return;
    }
#line 1244 "term.m"
  }
#line 606 "term.m"
}

#line 595 "term.m"
void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
#line 595 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 595 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 595 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 595 "term.m"
{
#line 1238 "term.m"
  {
#line 1238 "term.m"
    MR_bool mercury__term__succeeded;

#line 1238 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1238 "term.m"
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1238 "term.m"
    else
#line 1239 "term.m"
      {
#line 1239 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1239 "term.m"
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1239 "term.m"
        MR_Word mercury__term__Terms_5;
#line 1239 "term.m"
        MR_Word mercury__term__V_6_6;
#line 1239 "term.m"
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[2];

#line 1239 "term.m"
        {
#line 1239 "term.m"
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1239 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
#line 1239 "term.m"
        }
#line 1240 "term.m"
        {
#line 1240 "term.m"
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
#line 1239 "term.m"
        {
#line 1239 "term.m"
          MR_Word base;
#line 1239 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1239 "term.m"
          *mercury__term__HeadVar__2_2 = base;
#line 1239 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
#line 1239 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
#line 1239 "term.m"
        }
#line 1239 "term.m"
      }
#line 1238 "term.m"
  }
#line 595 "term.m"
}

#line 594 "term.m"
MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
#line 594 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 594 "term.m"
  MR_Word mercury__term__Vs_3)
#line 594 "term.m"
{
#line 1236 "term.m"
  {
#line 1236 "term.m"
    MR_bool mercury__term__succeeded;
#line 1236 "term.m"
    MR_Word mercury__term__Ts_4;

#line 1236 "term.m"
    {
#line 1236 "term.m"
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
#line 1236 "term.m"
    return mercury__term__Ts_4;
#line 1236 "term.m"
  }
#line 594 "term.m"
}

#line 589 "term.m"
MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
#line 589 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 589 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 589 "term.m"
  MR_Word * mercury__term__HeadVar__2_2)
#line 589 "term.m"
{
#line 1231 "term.m"
  {
#line 1231 "term.m"
    MR_bool mercury__term__succeeded;

#line 1231 "term.m"
    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "term.m"
      {
#line 1231 "term.m"
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1231 "term.m"
        mercury__term__succeeded = MR_TRUE;
#line 1231 "term.m"
      }
#line 1231 "term.m"
    else
#line 1232 "term.m"
      {
#line 1232 "term.m"
        MR_Word mercury__term__Var_3;
#line 1232 "term.m"
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 1232 "term.m"
        MR_Word mercury__term__Vars_6;
#line 1232 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 1232 "term.m"
        MR_Word mercury__term__V_4_4;

#line 1232 "term.m"
        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1232 "term.m"
        if (mercury__term__succeeded)
#line 1232 "term.m"
          {
#line 1232 "term.m"
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
#line 1232 "term.m"
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
#line 1233 "term.m"
            {
#line 1233 "term.m"
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
#line 1232 "term.m"
            if (mercury__term__succeeded)
#line 1232 "term.m"
              {
#line 1232 "term.m"
                {
#line 1232 "term.m"
                  MR_Word base;
#line 1232 "term.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "term.m"
                  *mercury__term__HeadVar__2_2 = base;
#line 1232 "term.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
#line 1232 "term.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
#line 1232 "term.m"
                }
#line 1232 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 1232 "term.m"
              }
#line 1232 "term.m"
          }
#line 1232 "term.m"
      }
#line 1231 "term.m"
    return mercury__term__succeeded;
#line 1231 "term.m"
  }
#line 589 "term.m"
}

#line 585 "term.m"
MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
#line 585 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 585 "term.m"
  MR_Word mercury__term__Terms_3)
#line 585 "term.m"
{
#line 1227 "term.m"
  {
#line 1227 "term.m"
    MR_bool mercury__term__succeeded;
#line 1227 "term.m"
    MR_Word mercury__term__Vars_4;
#line 1227 "term.m"
    MR_Word mercury__term__VarsPrime_5;

#line 1225 "term.m"
    {
#line 1225 "term.m"
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms_3, &mercury__term__VarsPrime_5);
    }
#line 1227 "term.m"
    if (mercury__term__succeeded)
#line 1226 "term.m"
      mercury__term__Vars_4 = mercury__term__VarsPrime_5;
#line 1227 "term.m"
    else
#line 1228 "term.m"
      {
#line 1228 "term.m"
        {
#line 1228 "term.m"
          mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
        }
#line 1228 "term.m"
      }
#line 1227 "term.m"
    return mercury__term__Vars_4;
#line 1227 "term.m"
  }
#line 585 "term.m"
}

#line 574 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_in_terms_3_p_0(
#line 574 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 574 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 574 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 574 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 574 "term.m"
{
#line 1217 "term.m"
  {
#line 1217 "term.m"
    MR_bool mercury__term__succeeded;

#line 1217 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1217 "term.m"
    else
#line 1218 "term.m"
      {
#line 1218 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1218 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1218 "term.m"
        MR_Word mercury__term__Term_8;
#line 1218 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1219 "term.m"
        {
#line 1219 "term.m"
          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1220 "term.m"
        {
#line 1220 "term.m"
          mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1218 "term.m"
        {
#line 1218 "term.m"
          MR_Word base;
#line 1218 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1218 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1218 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1218 "term.m"
        }
#line 1218 "term.m"
      }
#line 1217 "term.m"
  }
#line 574 "term.m"
}

#line 566 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_in_term_3_p_0(
#line 566 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 566 "term.m"
  MR_Word mercury__term__Subst_4,
#line 566 "term.m"
  MR_Word mercury__term__Term0_5,
#line 566 "term.m"
  MR_Word * mercury__term__Term_6)
#line 566 "term.m"
{
#line 1211 "term.m"
  while (MR_TRUE)
#line 1211 "term.m"
    {
#line 1211 "term.m"
      /* tailcall optimized into a loop */
#line 1211 "term.m"
      {
#line 1211 "term.m"
        MR_bool mercury__term__succeeded;

#line 1211 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1212 "term.m"
          {
#line 1212 "term.m"
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1212 "term.m"
            MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1212 "term.m"
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1212 "term.m"
            MR_Word mercury__term__ArgTerms_13;

#line 1213 "term.m"
            {
#line 1213 "term.m"
              mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
            }
#line 1214 "term.m"
            {
#line 1214 "term.m"
              MR_Word base;
#line 1214 "term.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "term.m"
              *mercury__term__Term_6 = base;
#line 1214 "term.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1214 "term.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1214 "term.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1214 "term.m"
            }
#line 1212 "term.m"
          }
#line 1211 "term.m"
        else
#line 1204 "term.m"
          {
#line 1204 "term.m"
            MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1204 "term.m"
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1208 "term.m"
            MR_Word mercury__term__ReplacementTerm_9;
#line 1205 "term.m"
            MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1205 "term.m"
            MR_Word mercury__term__TypeInfo_16_16;
#line 1205 "term.m"
            MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1205 "term.m"
            MR_Word mercury__term__TypeInfo_18_18;
#line 41 "map.opt"
            MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 5942 "term.c"
            {
#line 5944 "term.c"
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5946 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 5948 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 5950 "term.c"
            }
#line 5952 "term.c"
            {
#line 5954 "term.c"
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5956 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 5958 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 5960 "term.c"
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
#line 1208 "term.m"
            if (mercury__term__succeeded)
#line 1207 "term.m"
              {
#line 1207 "term.m"
                /* direct tailcall eliminated */
#line 1207 "term.m"
                {
#line 1207 "term.m"
                  MR_Word mercury__term__Term0__tmp_copy_5 = mercury__term__ReplacementTerm_9;

#line 1207 "term.m"
                  mercury__term__Term0_5 = mercury__term__Term0__tmp_copy_5;
#line 1207 "term.m"
                }
#line 1207 "term.m"
                continue;
#line 1207 "term.m"
              }
#line 1208 "term.m"
            else
#line 1209 "term.m"
              *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1204 "term.m"
          }
#line 1211 "term.m"
      }
#line 1211 "term.m"
      break;
#line 1211 "term.m"
    }
#line 566 "term.m"
}

#line 558 "term.m"
void MR_CALL 
mercury__term__apply_substitution_in_terms_3_p_0(
#line 558 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 558 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 558 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 558 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 558 "term.m"
{
#line 1197 "term.m"
  {
#line 1197 "term.m"
    MR_bool mercury__term__succeeded;

#line 1197 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1197 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1197 "term.m"
    else
#line 1198 "term.m"
      {
#line 1198 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1198 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1198 "term.m"
        MR_Word mercury__term__Term_8;
#line 1198 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1199 "term.m"
        {
#line 1199 "term.m"
          mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1200 "term.m"
        {
#line 1200 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1198 "term.m"
        {
#line 1198 "term.m"
          MR_Word base;
#line 1198 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1198 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1198 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1198 "term.m"
        }
#line 1198 "term.m"
      }
#line 1197 "term.m"
  }
#line 558 "term.m"
}

#line 551 "term.m"
void MR_CALL 
mercury__term__apply_substitution_in_term_3_p_0(
#line 551 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 551 "term.m"
  MR_Word mercury__term__Subst_4,
#line 551 "term.m"
  MR_Word mercury__term__Term0_5,
#line 551 "term.m"
  MR_Word * mercury__term__Term_6)
#line 551 "term.m"
{
#line 1191 "term.m"
  {
#line 1191 "term.m"
    MR_bool mercury__term__succeeded;

#line 1191 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1192 "term.m"
      {
#line 1192 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1192 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1192 "term.m"
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
#line 1192 "term.m"
        MR_Word mercury__term__ArgTerms_13;

#line 1193 "term.m"
        {
#line 1193 "term.m"
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
        }
#line 1194 "term.m"
        {
#line 1194 "term.m"
          MR_Word base;
#line 1194 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "term.m"
          *mercury__term__Term_6 = base;
#line 1194 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1194 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1194 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
#line 1194 "term.m"
        }
#line 1192 "term.m"
      }
#line 1191 "term.m"
    else
#line 1185 "term.m"
      {
#line 1185 "term.m"
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1185 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1188 "term.m"
        MR_Word mercury__term__ReplacementTerm_9;
#line 1186 "term.m"
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1186 "term.m"
        MR_Word mercury__term__TypeInfo_16_16;
#line 1186 "term.m"
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1186 "term.m"
        MR_Word mercury__term__TypeInfo_18_18;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_ReplacementTerm_9;

#line 6152 "term.c"
        {
#line 6154 "term.c"
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6156 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 6158 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6160 "term.c"
        }
#line 6162 "term.c"
        {
#line 6164 "term.c"
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6166 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 6168 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 6170 "term.c"
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
#line 1188 "term.m"
        if (mercury__term__succeeded)
#line 1187 "term.m"
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
#line 1188 "term.m"
        else
#line 1189 "term.m"
          *mercury__term__Term_6 = mercury__term__Term0_5;
#line 1185 "term.m"
      }
#line 1191 "term.m"
  }
#line 551 "term.m"
}

#line 542 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
#line 542 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 542 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 542 "term.m"
  MR_Word mercury__term__Subst_5,
#line 542 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 542 "term.m"
{
#line 1179 "term.m"
  {
#line 1179 "term.m"
    MR_bool mercury__term__succeeded;

#line 1179 "term.m"
    {
#line 1179 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1179 "term.m"
      return;
    }
#line 1179 "term.m"
  }
#line 542 "term.m"
}

#line 540 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
#line 540 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 540 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 540 "term.m"
  MR_Word mercury__term__Subst_5)
#line 540 "term.m"
{
#line 1177 "term.m"
  {
#line 1177 "term.m"
    MR_bool mercury__term__succeeded;
#line 1177 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1177 "term.m"
    {
#line 1177 "term.m"
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1177 "term.m"
    return mercury__term__Terms_6;
#line 1177 "term.m"
  }
#line 540 "term.m"
}

#line 530 "term.m"
void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
#line 530 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 530 "term.m"
  MR_Word mercury__term__Term0_4,
#line 530 "term.m"
  MR_Word mercury__term__Subst_5,
#line 530 "term.m"
  MR_Word * mercury__term__Term_6)
#line 530 "term.m"
{
#line 1175 "term.m"
  {
#line 1175 "term.m"
    MR_bool mercury__term__succeeded;

#line 1175 "term.m"
    {
#line 1175 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1175 "term.m"
      return;
    }
#line 1175 "term.m"
  }
#line 530 "term.m"
}

#line 529 "term.m"
MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
#line 529 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 529 "term.m"
  MR_Word mercury__term__Term0_4,
#line 529 "term.m"
  MR_Word mercury__term__Subst_5)
#line 529 "term.m"
{
#line 1173 "term.m"
  {
#line 1173 "term.m"
    MR_bool mercury__term__succeeded;
#line 1173 "term.m"
    MR_Word mercury__term__Term_6;

#line 1173 "term.m"
    {
#line 1173 "term.m"
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1173 "term.m"
    return mercury__term__Term_6;
#line 1173 "term.m"
  }
#line 529 "term.m"
}

#line 519 "term.m"
void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
#line 519 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 519 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 519 "term.m"
  MR_Word mercury__term__Subst_5,
#line 519 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 519 "term.m"
{
#line 1171 "term.m"
  {
#line 1171 "term.m"
    MR_bool mercury__term__succeeded;

#line 1171 "term.m"
    {
#line 1171 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1171 "term.m"
      return;
    }
#line 1171 "term.m"
  }
#line 519 "term.m"
}

#line 517 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
#line 517 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 517 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 517 "term.m"
  MR_Word mercury__term__Subst_5)
#line 517 "term.m"
{
#line 1169 "term.m"
  {
#line 1169 "term.m"
    MR_bool mercury__term__succeeded;
#line 1169 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1169 "term.m"
    {
#line 1169 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1169 "term.m"
    return mercury__term__Terms_6;
#line 1169 "term.m"
  }
#line 517 "term.m"
}

#line 508 "term.m"
void MR_CALL 
mercury__term__apply_substitution_3_p_0(
#line 508 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 508 "term.m"
  MR_Word mercury__term__Term0_4,
#line 508 "term.m"
  MR_Word mercury__term__Subst_5,
#line 508 "term.m"
  MR_Word * mercury__term__Term_6)
#line 508 "term.m"
{
#line 1167 "term.m"
  {
#line 1167 "term.m"
    MR_bool mercury__term__succeeded;

#line 1167 "term.m"
    {
#line 1167 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1167 "term.m"
      return;
    }
#line 1167 "term.m"
  }
#line 508 "term.m"
}

#line 507 "term.m"
MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
#line 507 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 507 "term.m"
  MR_Word mercury__term__Term0_4,
#line 507 "term.m"
  MR_Word mercury__term__Subst_5)
#line 507 "term.m"
{
#line 1165 "term.m"
  {
#line 1165 "term.m"
    MR_bool mercury__term__succeeded;
#line 1165 "term.m"
    MR_Word mercury__term__Term_6;

#line 1165 "term.m"
    {
#line 1165 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1165 "term.m"
    return mercury__term__Term_6;
#line 1165 "term.m"
  }
#line 507 "term.m"
}

#line 492 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_in_terms_4_p_0(
#line 492 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 492 "term.m"
  MR_Word mercury__term__Vars_5,
#line 492 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 492 "term.m"
  MR_Word mercury__term__Terms0_7,
#line 492 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 492 "term.m"
{
#line 1142 "term.m"
  {
#line 1142 "term.m"
    MR_bool mercury__term__succeeded;
#line 1142 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1144 "term.m"
    {
#line 1144 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1145 "term.m"
    {
#line 1145 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1145 "term.m"
      return;
    }
#line 1142 "term.m"
  }
#line 492 "term.m"
}

#line 482 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_in_term_4_p_0(
#line 482 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 482 "term.m"
  MR_Word mercury__term__Vars_5,
#line 482 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 482 "term.m"
  MR_Word mercury__term__Term0_7,
#line 482 "term.m"
  MR_Word * mercury__term__Term_8)
#line 482 "term.m"
{
#line 1137 "term.m"
  {
#line 1137 "term.m"
    MR_bool mercury__term__succeeded;
#line 1137 "term.m"
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "term.m"
    MR_Word mercury__term__Subst_10;

#line 1139 "term.m"
    {
#line 1139 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
#line 1140 "term.m"
    {
#line 1140 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Term0_7, mercury__term__Term_8);
#line 1140 "term.m"
      return;
    }
#line 1137 "term.m"
  }
#line 482 "term.m"
}

#line 472 "term.m"
void MR_CALL 
mercury__term__substitute_var_in_terms_4_p_0(
#line 472 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 472 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 472 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 472 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 472 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 472 "term.m"
{
#line 1131 "term.m"
  {
#line 1131 "term.m"
    MR_bool mercury__term__succeeded;

#line 1131 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1131 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1131 "term.m"
    else
#line 1133 "term.m"
      {
#line 1133 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1133 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1133 "term.m"
        MR_Word mercury__term__Term_11;
#line 1133 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1134 "term.m"
        {
#line 1134 "term.m"
          mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1135 "term.m"
        {
#line 1135 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1133 "term.m"
        {
#line 1133 "term.m"
          MR_Word base;
#line 1133 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1133 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1133 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1133 "term.m"
        }
#line 1133 "term.m"
      }
#line 1131 "term.m"
  }
#line 472 "term.m"
}

#line 464 "term.m"
void MR_CALL 
mercury__term__substitute_var_in_term_4_p_0(
#line 464 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 464 "term.m"
  MR_Word mercury__term__Var_5,
#line 464 "term.m"
  MR_Word mercury__term__ReplacementTerm_6,
#line 464 "term.m"
  MR_Word mercury__term__Term0_7,
#line 464 "term.m"
  MR_Word * mercury__term__Term_8)
#line 464 "term.m"
{
#line 1125 "term.m"
  {
#line 1125 "term.m"
    MR_bool mercury__term__succeeded;

#line 1125 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1126 "term.m"
      {
#line 1126 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1126 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1126 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));
#line 1126 "term.m"
        MR_Word mercury__term__ArgTerms_14;

#line 1127 "term.m"
        {
#line 1127 "term.m"
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementTerm_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_14);
        }
#line 1128 "term.m"
        {
#line 1128 "term.m"
          MR_Word base;
#line 1128 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "term.m"
          *mercury__term__Term_8 = base;
#line 1128 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1128 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_14));
#line 1128 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1128 "term.m"
        }
#line 1126 "term.m"
      }
#line 1125 "term.m"
    else
#line 1119 "term.m"
      {
#line 1119 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1119 "term.m"
        MR_Word mercury__term___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 682 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 682 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 682 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 682 "term.m"
        if (mercury__term__succeeded)
#line 682 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
        else
#line 682 "term.m"
          {
#line 682 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 682 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 6676 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 682 "term.m"
          }
#line 1122 "term.m"
        if (mercury__term__succeeded)
#line 1121 "term.m"
          *mercury__term__Term_8 = mercury__term__ReplacementTerm_6;
#line 1122 "term.m"
        else
#line 1123 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1119 "term.m"
      }
#line 1125 "term.m"
  }
#line 464 "term.m"
}

#line 454 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
#line 454 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 454 "term.m"
  MR_Word mercury__term__Vars_5,
#line 454 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 454 "term.m"
  MR_Word mercury__term__Terms0_7,
#line 454 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 454 "term.m"
{
#line 1142 "term.m"
  {
#line 1142 "term.m"
    MR_bool mercury__term__succeeded;
#line 1142 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1144 "term.m"
    {
#line 1144 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1145 "term.m"
    {
#line 1145 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, mercury__term__Terms_8);
#line 1145 "term.m"
      return;
    }
#line 1142 "term.m"
  }
#line 454 "term.m"
}

#line 452 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
#line 452 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 452 "term.m"
  MR_Word mercury__term__Vars_5,
#line 452 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 452 "term.m"
  MR_Word mercury__term__Terms0_7)
#line 452 "term.m"
{
#line 1142 "term.m"
  {
#line 1142 "term.m"
    MR_bool mercury__term__succeeded;
#line 1142 "term.m"
    MR_Word mercury__term__Terms_8;
#line 1142 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1144 "term.m"
    {
#line 1144 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1145 "term.m"
    {
#line 1145 "term.m"
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, &mercury__term__Terms_8);
    }
#line 1142 "term.m"
    return mercury__term__Terms_8;
#line 1142 "term.m"
  }
#line 452 "term.m"
}

#line 440 "term.m"
void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
#line 440 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 440 "term.m"
  MR_Word mercury__term__Vars_5,
#line 440 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 440 "term.m"
  MR_Word mercury__term__Term0_7,
#line 440 "term.m"
  MR_Word * mercury__term__Term_8)
#line 440 "term.m"
{
#line 1137 "term.m"
  {
#line 1137 "term.m"
    MR_bool mercury__term__succeeded;
#line 1137 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1139 "term.m"
    {
#line 1139 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1140 "term.m"
    {
#line 1140 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, mercury__term__Term_8);
#line 1140 "term.m"
      return;
    }
#line 1137 "term.m"
  }
#line 440 "term.m"
}

#line 438 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
#line 438 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 438 "term.m"
  MR_Word mercury__term__Vars_5,
#line 438 "term.m"
  MR_Word mercury__term__ReplacementTerms_6,
#line 438 "term.m"
  MR_Word mercury__term__Term0_7)
#line 438 "term.m"
{
#line 1137 "term.m"
  {
#line 1137 "term.m"
    MR_bool mercury__term__succeeded;
#line 1137 "term.m"
    MR_Word mercury__term__Term_8;
#line 1137 "term.m"
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "term.m"
    MR_Word mercury__term__Subst_15;

#line 1139 "term.m"
    {
#line 1139 "term.m"
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
#line 1140 "term.m"
    {
#line 1140 "term.m"
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, &mercury__term__Term_8);
    }
#line 1137 "term.m"
    return mercury__term__Term_8;
#line 1137 "term.m"
  }
#line 438 "term.m"
}

#line 426 "term.m"
void MR_CALL 
mercury__term__substitute_list_4_p_0(
#line 426 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 426 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 426 "term.m"
  MR_Word mercury__term__Var_6,
#line 426 "term.m"
  MR_Word mercury__term__ReplacementTerm_7,
#line 426 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 426 "term.m"
{
#line 1105 "term.m"
  {
#line 1105 "term.m"
    MR_bool mercury__term__succeeded;

#line 1105 "term.m"
    {
#line 1105 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1105 "term.m"
      return;
    }
#line 1105 "term.m"
  }
#line 426 "term.m"
}

#line 425 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
#line 425 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 425 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 425 "term.m"
  MR_Word mercury__term__Var_6,
#line 425 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 425 "term.m"
{
#line 1103 "term.m"
  {
#line 1103 "term.m"
    MR_bool mercury__term__succeeded;
#line 1103 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1103 "term.m"
    {
#line 1103 "term.m"
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1103 "term.m"
    return mercury__term__Terms_8;
#line 1103 "term.m"
  }
#line 425 "term.m"
}

#line 416 "term.m"
void MR_CALL 
mercury__term__substitute_4_p_0(
#line 416 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 416 "term.m"
  MR_Word mercury__term__Term0_5,
#line 416 "term.m"
  MR_Word mercury__term__Var_6,
#line 416 "term.m"
  MR_Word mercury__term__ReplacementTerm_7,
#line 416 "term.m"
  MR_Word * mercury__term__Term_8)
#line 416 "term.m"
{
#line 1101 "term.m"
  {
#line 1101 "term.m"
    MR_bool mercury__term__succeeded;

#line 1101 "term.m"
    {
#line 1101 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1101 "term.m"
      return;
    }
#line 1101 "term.m"
  }
#line 416 "term.m"
}

#line 415 "term.m"
MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
#line 415 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 415 "term.m"
  MR_Word mercury__term__Term0_5,
#line 415 "term.m"
  MR_Word mercury__term__Var_6,
#line 415 "term.m"
  MR_Word mercury__term__ReplacementTerm_7)
#line 415 "term.m"
{
#line 1099 "term.m"
  {
#line 1099 "term.m"
    MR_bool mercury__term__succeeded;
#line 1099 "term.m"
    MR_Word mercury__term__Term_8;

#line 1099 "term.m"
    {
#line 1099 "term.m"
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1099 "term.m"
    return mercury__term__Term_8;
#line 1099 "term.m"
  }
#line 415 "term.m"
}

#line 399 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_terms_3_p_0(
#line 399 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 399 "term.m"
  MR_Word mercury__term__Renaming_1,
#line 399 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 399 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 399 "term.m"
{
#line 1090 "term.m"
  {
#line 1090 "term.m"
    MR_bool mercury__term__succeeded;

#line 1090 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1090 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1090 "term.m"
    else
#line 1091 "term.m"
      {
#line 1091 "term.m"
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1091 "term.m"
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1091 "term.m"
        MR_Word mercury__term__Term_8;
#line 1091 "term.m"
        MR_Word mercury__term__Terms_9;

#line 1092 "term.m"
        {
#line 1092 "term.m"
          mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
#line 1093 "term.m"
        {
#line 1093 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
#line 1091 "term.m"
        {
#line 1091 "term.m"
          MR_Word base;
#line 1091 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1091 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
#line 1091 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
#line 1091 "term.m"
        }
#line 1091 "term.m"
      }
#line 1090 "term.m"
  }
#line 399 "term.m"
}

#line 392 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_term_3_p_0(
#line 392 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 392 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 392 "term.m"
  MR_Word mercury__term__Term0_5,
#line 392 "term.m"
  MR_Word * mercury__term__Term_6)
#line 392 "term.m"
{
#line 1084 "term.m"
  {
#line 1084 "term.m"
    MR_bool mercury__term__succeeded;

#line 1084 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1085 "term.m"
      {
#line 1085 "term.m"
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1085 "term.m"
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1085 "term.m"
        MR_Word mercury__term__ArgTerms_12;
#line 1085 "term.m"
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));

#line 1086 "term.m"
        {
#line 1086 "term.m"
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Renaming_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_12);
        }
#line 1087 "term.m"
        {
#line 1087 "term.m"
          MR_Word base;
#line 1087 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "term.m"
          *mercury__term__Term_6 = base;
#line 1087 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
#line 1087 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
#line 1087 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
#line 1087 "term.m"
        }
#line 1085 "term.m"
      }
#line 1084 "term.m"
    else
#line 1081 "term.m"
      {
#line 1081 "term.m"
        MR_Word mercury__term__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
#line 1081 "term.m"
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
#line 1081 "term.m"
        MR_Word mercury__term__Var_9;
#line 1070 "term.m"
        MR_Word mercury__term__NewVar_18;
#line 1068 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1068 "term.m"
        MR_Word mercury__term__TypeInfo_10_20;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_18;

#line 7126 "term.c"
        {
#line 7128 "term.c"
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7130 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
#line 7132 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 7134 "term.c"
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
#line 1070 "term.m"
        if (mercury__term__succeeded)
#line 1069 "term.m"
          mercury__term__Var_9 = mercury__term__NewVar_18;
#line 1070 "term.m"
        else
#line 1071 "term.m"
          mercury__term__Var_9 = mercury__term__Var0_7;
#line 1083 "term.m"
        {
#line 1083 "term.m"
          MR_Word base;
#line 1083 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "term.m"
          *mercury__term__Term_6 = base;
#line 1083 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_9));
#line 1083 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
#line 1083 "term.m"
        }
#line 1081 "term.m"
      }
#line 1084 "term.m"
  }
#line 392 "term.m"
}

#line 385 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_vars_3_p_0(
#line 385 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_10,
#line 385 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 385 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 385 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 385 "term.m"
{
#line 1074 "term.m"
  {
#line 1074 "term.m"
    MR_bool mercury__term__succeeded;

#line 1074 "term.m"
    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1074 "term.m"
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1074 "term.m"
    else
#line 1075 "term.m"
      {
#line 1075 "term.m"
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 1075 "term.m"
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 1075 "term.m"
        MR_Word mercury__term__Var_8;
#line 1075 "term.m"
        MR_Word mercury__term__Vars_9;
#line 1070 "term.m"
        MR_Word mercury__term__NewVar_14;
#line 1068 "term.m"
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1068 "term.m"
        MR_Word mercury__term__TypeInfo_10_16;
#line 41 "map.opt"
        MR_Box mercury__term__conv0_NewVar_14;

#line 7223 "term.c"
        {
#line 7225 "term.c"
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7227 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
#line 7229 "term.c"
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
#line 7231 "term.c"
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
#line 1070 "term.m"
        if (mercury__term__succeeded)
#line 1069 "term.m"
          mercury__term__Var_8 = mercury__term__NewVar_14;
#line 1070 "term.m"
        else
#line 1071 "term.m"
          mercury__term__Var_8 = mercury__term__Var0_6;
#line 1077 "term.m"
        {
#line 1077 "term.m"
          mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
#line 1075 "term.m"
        {
#line 1075 "term.m"
          MR_Word base;
#line 1075 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "term.m"
          *mercury__term__HeadVar__3_3 = base;
#line 1075 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
#line 1075 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
#line 1075 "term.m"
        }
#line 1075 "term.m"
      }
#line 1074 "term.m"
  }
#line 385 "term.m"
}

#line 378 "term.m"
void MR_CALL 
mercury__term__apply_renaming_in_var_3_p_0(
#line 378 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 378 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 378 "term.m"
  MR_Word mercury__term__Var0_5,
#line 378 "term.m"
  MR_Word * mercury__term__Var_6)
#line 378 "term.m"
{
#line 1070 "term.m"
  {
#line 1070 "term.m"
    MR_bool mercury__term__succeeded;
#line 1070 "term.m"
    MR_Word mercury__term__NewVar_7;
#line 1068 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1068 "term.m"
    MR_Word mercury__term__TypeInfo_10_10;
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_7;

#line 7308 "term.c"
    {
#line 7310 "term.c"
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7312 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
#line 7314 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
#line 7316 "term.c"
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
#line 1070 "term.m"
    if (mercury__term__succeeded)
#line 1069 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_7;
#line 1070 "term.m"
    else
#line 1071 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1070 "term.m"
  }
#line 378 "term.m"
}

#line 369 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
#line 369 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 369 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 369 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 369 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 369 "term.m"
{
#line 1063 "term.m"
  {
#line 1063 "term.m"
    MR_bool mercury__term__succeeded;

#line 1063 "term.m"
    {
#line 1063 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1063 "term.m"
      return;
    }
#line 1063 "term.m"
  }
#line 369 "term.m"
}

#line 367 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
#line 367 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 367 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 367 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 367 "term.m"
{
#line 1061 "term.m"
  {
#line 1061 "term.m"
    MR_bool mercury__term__succeeded;
#line 1061 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1061 "term.m"
    {
#line 1061 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1061 "term.m"
    return mercury__term__Terms_6;
#line 1061 "term.m"
  }
#line 367 "term.m"
}

#line 360 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
#line 360 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 360 "term.m"
  MR_Word mercury__term__Term0_4,
#line 360 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 360 "term.m"
  MR_Word * mercury__term__Term_6)
#line 360 "term.m"
{
#line 1059 "term.m"
  {
#line 1059 "term.m"
    MR_bool mercury__term__succeeded;

#line 1059 "term.m"
    {
#line 1059 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1059 "term.m"
      return;
    }
#line 1059 "term.m"
  }
#line 360 "term.m"
}

#line 359 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
#line 359 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 359 "term.m"
  MR_Word mercury__term__Term0_4,
#line 359 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 359 "term.m"
{
#line 1057 "term.m"
  {
#line 1057 "term.m"
    MR_bool mercury__term__succeeded;
#line 1057 "term.m"
    MR_Word mercury__term__Term_6;

#line 1057 "term.m"
    {
#line 1057 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1057 "term.m"
    return mercury__term__Term_6;
#line 1057 "term.m"
  }
#line 359 "term.m"
}

#line 351 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
#line 351 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 351 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 351 "term.m"
  MR_Word mercury__term__Vars0_5,
#line 351 "term.m"
  MR_Word * mercury__term__Vars_6)
#line 351 "term.m"
{
#line 1055 "term.m"
  {
#line 1055 "term.m"
    MR_bool mercury__term__succeeded;

#line 1055 "term.m"
    {
#line 1055 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, mercury__term__Vars_6);
#line 1055 "term.m"
      return;
    }
#line 1055 "term.m"
  }
#line 351 "term.m"
}

#line 349 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
#line 349 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 349 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 349 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 349 "term.m"
{
#line 1053 "term.m"
  {
#line 1053 "term.m"
    MR_bool mercury__term__succeeded;
#line 1053 "term.m"
    MR_Word mercury__term__Vars_6;

#line 1053 "term.m"
    {
#line 1053 "term.m"
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, &mercury__term__Vars_6);
    }
#line 1053 "term.m"
    return mercury__term__Vars_6;
#line 1053 "term.m"
  }
#line 349 "term.m"
}

#line 342 "term.m"
void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
#line 342 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 342 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 342 "term.m"
  MR_Word mercury__term__Var0_5,
#line 342 "term.m"
  MR_Word * mercury__term__Var_6)
#line 342 "term.m"
{
#line 1070 "term.m"
  {
#line 1070 "term.m"
    MR_bool mercury__term__succeeded;
#line 1070 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1068 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1068 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7552 "term.c"
    {
#line 7554 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7556 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7558 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7560 "term.c"
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
#line 1070 "term.m"
    if (mercury__term__succeeded)
#line 1069 "term.m"
      *mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1070 "term.m"
    else
#line 1071 "term.m"
      *mercury__term__Var_6 = mercury__term__Var0_5;
#line 1070 "term.m"
  }
#line 342 "term.m"
}

#line 341 "term.m"
MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
#line 341 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 341 "term.m"
  MR_Word mercury__term__Renaming_4,
#line 341 "term.m"
  MR_Word mercury__term__Var0_5)
#line 341 "term.m"
{
#line 1070 "term.m"
  {
#line 1070 "term.m"
    MR_bool mercury__term__succeeded;
#line 1070 "term.m"
    MR_Word mercury__term__Var_6;
#line 1070 "term.m"
    MR_Word mercury__term__NewVar_11;
#line 1068 "term.m"
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1068 "term.m"
    MR_Word mercury__term__TypeInfo_10_13;
#line 41 "map.opt"
    MR_Box mercury__term__conv0_NewVar_11;

#line 7616 "term.c"
    {
#line 7618 "term.c"
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7620 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
#line 7622 "term.c"
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
#line 7624 "term.c"
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
#line 1070 "term.m"
    if (mercury__term__succeeded)
#line 1069 "term.m"
      mercury__term__Var_6 = mercury__term__NewVar_11;
#line 1070 "term.m"
    else
#line 1071 "term.m"
      mercury__term__Var_6 = mercury__term__Var0_5;
#line 1070 "term.m"
    return mercury__term__Var_6;
#line 1070 "term.m"
  }
#line 341 "term.m"
}

#line 332 "term.m"
void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
#line 332 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 332 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 332 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 332 "term.m"
  MR_Word * mercury__term__Terms_6)
#line 332 "term.m"
{
#line 1047 "term.m"
  {
#line 1047 "term.m"
    MR_bool mercury__term__succeeded;

#line 1047 "term.m"
    {
#line 1047 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
#line 1047 "term.m"
      return;
    }
#line 1047 "term.m"
  }
#line 332 "term.m"
}

#line 331 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
#line 331 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 331 "term.m"
  MR_Word mercury__term__Terms0_4,
#line 331 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 331 "term.m"
{
#line 1045 "term.m"
  {
#line 1045 "term.m"
    MR_bool mercury__term__succeeded;
#line 1045 "term.m"
    MR_Word mercury__term__Terms_6;

#line 1045 "term.m"
    {
#line 1045 "term.m"
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
#line 1045 "term.m"
    return mercury__term__Terms_6;
#line 1045 "term.m"
  }
#line 331 "term.m"
}

#line 325 "term.m"
void MR_CALL 
mercury__term__apply_renaming_3_p_0(
#line 325 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 325 "term.m"
  MR_Word mercury__term__Term0_4,
#line 325 "term.m"
  MR_Word mercury__term__Renaming_5,
#line 325 "term.m"
  MR_Word * mercury__term__Term_6)
#line 325 "term.m"
{
#line 1043 "term.m"
  {
#line 1043 "term.m"
    MR_bool mercury__term__succeeded;

#line 1043 "term.m"
    {
#line 1043 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
#line 1043 "term.m"
      return;
    }
#line 1043 "term.m"
  }
#line 325 "term.m"
}

#line 324 "term.m"
MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
#line 324 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 324 "term.m"
  MR_Word mercury__term__Term0_4,
#line 324 "term.m"
  MR_Word mercury__term__Renaming_5)
#line 324 "term.m"
{
#line 1041 "term.m"
  {
#line 1041 "term.m"
    MR_bool mercury__term__succeeded;
#line 1041 "term.m"
    MR_Word mercury__term__Term_6;

#line 1041 "term.m"
    {
#line 1041 "term.m"
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
#line 1041 "term.m"
    return mercury__term__Term_6;
#line 1041 "term.m"
  }
#line 324 "term.m"
}

#line 309 "term.m"
void MR_CALL 
mercury__term__rename_var_in_terms_4_p_0(
#line 309 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_13,
#line 309 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 309 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 309 "term.m"
  MR_Word mercury__term__HeadVar__3_3,
#line 309 "term.m"
  MR_Word * mercury__term__HeadVar__4_4)
#line 309 "term.m"
{
#line 1032 "term.m"
  {
#line 1032 "term.m"
    MR_bool mercury__term__succeeded;

#line 1032 "term.m"
    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "term.m"
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1032 "term.m"
    else
#line 1033 "term.m"
      {
#line 1033 "term.m"
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
#line 1033 "term.m"
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
#line 1033 "term.m"
        MR_Word mercury__term__Term_11;
#line 1033 "term.m"
        MR_Word mercury__term__Terms_12;

#line 1034 "term.m"
        {
#line 1034 "term.m"
          mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
#line 1035 "term.m"
        {
#line 1035 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
#line 1033 "term.m"
        {
#line 1033 "term.m"
          MR_Word base;
#line 1033 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "term.m"
          *mercury__term__HeadVar__4_4 = base;
#line 1033 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
#line 1033 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
#line 1033 "term.m"
        }
#line 1033 "term.m"
      }
#line 1032 "term.m"
  }
#line 309 "term.m"
}

#line 301 "term.m"
void MR_CALL 
mercury__term__rename_var_in_term_4_p_0(
#line 301 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 301 "term.m"
  MR_Word mercury__term__Var_5,
#line 301 "term.m"
  MR_Word mercury__term__ReplacementVar_6,
#line 301 "term.m"
  MR_Word mercury__term__Term0_7,
#line 301 "term.m"
  MR_Word * mercury__term__Term_8)
#line 301 "term.m"
{
#line 1026 "term.m"
  {
#line 1026 "term.m"
    MR_bool mercury__term__succeeded;

#line 1026 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
#line 1027 "term.m"
      {
#line 1027 "term.m"
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1027 "term.m"
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
#line 1027 "term.m"
        MR_Word mercury__term__ArgTerms_13;
#line 1027 "term.m"
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));

#line 1028 "term.m"
        {
#line 1028 "term.m"
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementVar_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_13);
        }
#line 1029 "term.m"
        {
#line 1029 "term.m"
          MR_Word base;
#line 1029 "term.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1029 "term.m"
          *mercury__term__Term_8 = base;
#line 1029 "term.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
#line 1029 "term.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
#line 1029 "term.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_14));
#line 1029 "term.m"
        }
#line 1027 "term.m"
      }
#line 1026 "term.m"
    else
#line 1020 "term.m"
      {
#line 1020 "term.m"
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
#line 1020 "term.m"
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
#line 682 "term.m"
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
#line 682 "term.m"
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

#line 682 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
#line 682 "term.m"
        if (mercury__term__succeeded)
#line 682 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
        else
#line 682 "term.m"
          {
#line 682 "term.m"
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
#line 682 "term.m"
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

#line 7928 "term.c"
            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
#line 682 "term.m"
          }
#line 1023 "term.m"
        if (mercury__term__succeeded)
#line 1022 "term.m"
          {
#line 1022 "term.m"
            MR_Word base;
#line 1022 "term.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "term.m"
            *mercury__term__Term_8 = base;
#line 1022 "term.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_6));
#line 1022 "term.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
#line 1022 "term.m"
          }
#line 1023 "term.m"
        else
#line 1024 "term.m"
          *mercury__term__Term_8 = mercury__term__Term0_7;
#line 1020 "term.m"
      }
#line 1026 "term.m"
  }
#line 301 "term.m"
}

#line 291 "term.m"
void MR_CALL 
mercury__term__rename_list_4_p_0(
#line 291 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 291 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 291 "term.m"
  MR_Word mercury__term__Var_6,
#line 291 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 291 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 291 "term.m"
{
#line 1014 "term.m"
  {
#line 1014 "term.m"
    MR_bool mercury__term__succeeded;

#line 1014 "term.m"
    {
#line 1014 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1014 "term.m"
      return;
    }
#line 1014 "term.m"
  }
#line 291 "term.m"
}

#line 290 "term.m"
MR_Word MR_CALL 
mercury__term__rename_list_3_f_0(
#line 290 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 290 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 290 "term.m"
  MR_Word mercury__term__Var_6,
#line 290 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 290 "term.m"
{
#line 1012 "term.m"
  {
#line 1012 "term.m"
    MR_bool mercury__term__succeeded;
#line 1012 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1012 "term.m"
    {
#line 1012 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1012 "term.m"
    return mercury__term__Terms_8;
#line 1012 "term.m"
  }
#line 290 "term.m"
}

#line 281 "term.m"
void MR_CALL 
mercury__term__rename_4_p_0(
#line 281 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 281 "term.m"
  MR_Word mercury__term__Term0_5,
#line 281 "term.m"
  MR_Word mercury__term__Var_6,
#line 281 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 281 "term.m"
  MR_Word * mercury__term__Term_8)
#line 281 "term.m"
{
#line 1010 "term.m"
  {
#line 1010 "term.m"
    MR_bool mercury__term__succeeded;

#line 1010 "term.m"
    {
#line 1010 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1010 "term.m"
      return;
    }
#line 1010 "term.m"
  }
#line 281 "term.m"
}

#line 280 "term.m"
MR_Word MR_CALL 
mercury__term__rename_3_f_0(
#line 280 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 280 "term.m"
  MR_Word mercury__term__Term0_5,
#line 280 "term.m"
  MR_Word mercury__term__Var_6,
#line 280 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 280 "term.m"
{
#line 1008 "term.m"
  {
#line 1008 "term.m"
    MR_bool mercury__term__succeeded;
#line 1008 "term.m"
    MR_Word mercury__term__Term_8;

#line 1008 "term.m"
    {
#line 1008 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1008 "term.m"
    return mercury__term__Term_8;
#line 1008 "term.m"
  }
#line 280 "term.m"
}

#line 268 "term.m"
void MR_CALL 
mercury__term__relabel_variables_4_p_0(
#line 268 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 268 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 268 "term.m"
  MR_Word mercury__term__Var_6,
#line 268 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 268 "term.m"
  MR_Word * mercury__term__Terms_8)
#line 268 "term.m"
{
#line 1006 "term.m"
  {
#line 1006 "term.m"
    MR_bool mercury__term__succeeded;

#line 1006 "term.m"
    {
#line 1006 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
#line 1006 "term.m"
      return;
    }
#line 1006 "term.m"
  }
#line 268 "term.m"
}

#line 267 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
#line 267 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 267 "term.m"
  MR_Word mercury__term__Terms0_5,
#line 267 "term.m"
  MR_Word mercury__term__Var_6,
#line 267 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 267 "term.m"
{
#line 1004 "term.m"
  {
#line 1004 "term.m"
    MR_bool mercury__term__succeeded;
#line 1004 "term.m"
    MR_Word mercury__term__Terms_8;

#line 1004 "term.m"
    {
#line 1004 "term.m"
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
#line 1004 "term.m"
    return mercury__term__Terms_8;
#line 1004 "term.m"
  }
#line 267 "term.m"
}

#line 257 "term.m"
void MR_CALL 
mercury__term__relabel_variable_4_p_0(
#line 257 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 257 "term.m"
  MR_Word mercury__term__Term0_5,
#line 257 "term.m"
  MR_Word mercury__term__Var_6,
#line 257 "term.m"
  MR_Word mercury__term__ReplacementVar_7,
#line 257 "term.m"
  MR_Word * mercury__term__Term_8)
#line 257 "term.m"
{
#line 1002 "term.m"
  {
#line 1002 "term.m"
    MR_bool mercury__term__succeeded;

#line 1002 "term.m"
    {
#line 1002 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
#line 1002 "term.m"
      return;
    }
#line 1002 "term.m"
  }
#line 257 "term.m"
}

#line 256 "term.m"
MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
#line 256 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 256 "term.m"
  MR_Word mercury__term__Term0_5,
#line 256 "term.m"
  MR_Word mercury__term__Var_6,
#line 256 "term.m"
  MR_Word mercury__term__ReplacementVar_7)
#line 256 "term.m"
{
#line 1000 "term.m"
  {
#line 1000 "term.m"
    MR_bool mercury__term__succeeded;
#line 1000 "term.m"
    MR_Word mercury__term__Term_8;

#line 1000 "term.m"
    {
#line 1000 "term.m"
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
#line 1000 "term.m"
    return mercury__term__Term_8;
#line 1000 "term.m"
  }
#line 256 "term.m"
}

#line 241 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
#line 241 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_11,
#line 241 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 241 "term.m"
  MR_Word mercury__term__Bindings_2)
#line 241 "term.m"
{
#line 982 "term.m"
  while (MR_TRUE)
#line 982 "term.m"
    {
#line 982 "term.m"
      /* tailcall optimized into a loop */
#line 982 "term.m"
      {
#line 982 "term.m"
        MR_bool mercury__term__succeeded;

#line 982 "term.m"
        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 985 "term.m"
          {
#line 985 "term.m"
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 985 "term.m"
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 985 "term.m"
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 986 "term.m"
            {
#line 986 "term.m"
              return mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
#line 985 "term.m"
          }
#line 982 "term.m"
        else
#line 982 "term.m"
          {
#line 982 "term.m"
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 982 "term.m"
            MR_Word mercury__term__TypeInfo_13_13;
#line 982 "term.m"
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 982 "term.m"
            MR_Word mercury__term__TypeInfo_15_15;
#line 982 "term.m"
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 982 "term.m"
            MR_Word mercury__term__Binding_6;
#line 982 "term.m"
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "map.opt"
            MR_Box mercury__term__conv0_Binding_6;

#line 8276 "term.c"
            {
#line 8278 "term.c"
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8280 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
#line 8282 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8284 "term.c"
            }
#line 8286 "term.c"
            {
#line 8288 "term.c"
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8290 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
#line 8292 "term.c"
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
#line 8294 "term.c"
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
#line 982 "term.m"
            if (mercury__term__succeeded)
#line 984 "term.m"
              {
#line 984 "term.m"
                /* direct tailcall eliminated */
#line 984 "term.m"
                {
#line 984 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

#line 984 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 984 "term.m"
                }
#line 984 "term.m"
                continue;
#line 984 "term.m"
              }
#line 982 "term.m"
          }
#line 982 "term.m"
        return mercury__term__succeeded;
#line 982 "term.m"
      }
#line 982 "term.m"
      break;
#line 982 "term.m"
    }
#line 241 "term.m"
}

#line 236 "term.m"
MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
#line 236 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 236 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 236 "term.m"
{
#line 970 "term.m"
  {
#line 970 "term.m"
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 970 "term.m"
    MR_Word mercury__term__ArgTerms_3;
#line 970 "term.m"
    MR_Word mercury__term__V_2_2;
#line 970 "term.m"
    MR_Word mercury__term__V_4_4;

#line 970 "term.m"
    if (mercury__term__succeeded)
#line 970 "term.m"
      {
#line 970 "term.m"
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 970 "term.m"
        mercury__term__ArgTerms_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 970 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
#line 971 "term.m"
        {
#line 971 "term.m"
          return mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_3);
        }
#line 970 "term.m"
      }
#line 970 "term.m"
    return mercury__term__succeeded;
#line 970 "term.m"
  }
#line 236 "term.m"
}

#line 231 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
#line 231 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_8,
#line 231 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 231 "term.m"
  MR_Word mercury__term__Var_6,
#line 231 "term.m"
  MR_Word mercury__term__Subst_7)
#line 231 "term.m"
{
#line 961 "term.m"
  while (MR_TRUE)
#line 961 "term.m"
    {
#line 961 "term.m"
      /* tailcall optimized into a loop */
#line 961 "term.m"
      {
#line 961 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 961 "term.m"
        MR_Word mercury__term__Term_4;
#line 961 "term.m"
        MR_Word mercury__term__Terms_5;

#line 961 "term.m"
        if (mercury__term__succeeded)
#line 961 "term.m"
          {
#line 961 "term.m"
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 961 "term.m"
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 962 "term.m"
            {
#line 962 "term.m"
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Var_6, mercury__term__Subst_7);
            }
#line 964 "term.m"
            if (mercury__term__succeeded)
#line 963 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 964 "term.m"
            else
#line 965 "term.m"
              {
#line 965 "term.m"
                /* direct tailcall eliminated */
#line 965 "term.m"
                {
#line 965 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

#line 965 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 965 "term.m"
                }
#line 965 "term.m"
                continue;
#line 965 "term.m"
              }
#line 961 "term.m"
          }
#line 961 "term.m"
        return mercury__term__succeeded;
#line 961 "term.m"
      }
#line 961 "term.m"
      break;
#line 961 "term.m"
    }
#line 231 "term.m"
}

#line 227 "term.m"
MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
#line 227 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_14,
#line 227 "term.m"
  MR_Word mercury__term__Term_4,
#line 227 "term.m"
  MR_Word mercury__term__Var_5,
#line 227 "term.m"
  MR_Word mercury__term__Subst_6)
#line 227 "term.m"
{
#line 956 "term.m"
  while (MR_TRUE)
#line 956 "term.m"
    {
#line 956 "term.m"
      /* tailcall optimized into a loop */
#line 956 "term.m"
      {
#line 956 "term.m"
        MR_bool mercury__term__succeeded;

#line 956 "term.m"
        if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 957 "term.m"
          {
#line 957 "term.m"
            MR_Word mercury__term__ArgTerms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 957 "term.m"
            MR_Word mercury__term___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 957 "term.m"
            MR_Word mercury__term___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 958 "term.m"
            {
#line 958 "term.m"
              return mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms_11, mercury__term__Var_5, mercury__term__Subst_6);
            }
#line 957 "term.m"
          }
#line 956 "term.m"
        else
#line 949 "term.m"
          {
#line 949 "term.m"
            MR_Word mercury__term__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 949 "term.m"
            MR_Word mercury__term___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));
#line 682 "term.m"
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_7;
#line 682 "term.m"
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Var_5;

#line 682 "term.m"
            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
#line 682 "term.m"
            if (mercury__term__succeeded)
#line 682 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
            else
#line 682 "term.m"
              {
#line 682 "term.m"
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_7;
#line 682 "term.m"
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Var_5;

#line 8534 "term.c"
                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
#line 682 "term.m"
              }
#line 952 "term.m"
            if (mercury__term__succeeded)
#line 951 "term.m"
              mercury__term__succeeded = MR_TRUE;
#line 952 "term.m"
            else
#line 953 "term.m"
              {
#line 953 "term.m"
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 953 "term.m"
                MR_Word mercury__term__TypeInfo_16_16;
#line 953 "term.m"
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 953 "term.m"
                MR_Word mercury__term__TypeInfo_18_18;
#line 953 "term.m"
                MR_Word mercury__term__TermBoundToX_9;
#line 41 "map.opt"
                MR_Box mercury__term__conv0_TermBoundToX_9;

#line 8559 "term.c"
                {
#line 8561 "term.c"
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8563 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
#line 8565 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8567 "term.c"
                }
#line 8569 "term.c"
                {
#line 8571 "term.c"
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8573 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
#line 8575 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
#line 8577 "term.c"
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
#line 953 "term.m"
                if (mercury__term__succeeded)
#line 954 "term.m"
                  {
#line 954 "term.m"
                    /* direct tailcall eliminated */
#line 954 "term.m"
                    {
#line 954 "term.m"
                      MR_Word mercury__term__Term__tmp_copy_4 = mercury__term__TermBoundToX_9;

#line 954 "term.m"
                      mercury__term__Term_4 = mercury__term__Term__tmp_copy_4;
#line 954 "term.m"
                    }
#line 954 "term.m"
                    continue;
#line 954 "term.m"
                  }
#line 953 "term.m"
              }
#line 949 "term.m"
          }
#line 956 "term.m"
        return mercury__term__succeeded;
#line 956 "term.m"
      }
#line 956 "term.m"
      break;
#line 956 "term.m"
    }
#line 227 "term.m"
}

#line 215 "term.m"
void MR_CALL 
mercury__term__contains_var_list_2_p_1(
#line 215 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 215 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 215 "term.m"
  MR_Word * mercury__term__Var_2,
#line 215 "term.m"
  MR_Cont mercury__term__cont,
#line 215 "term.m"
  void * mercury__term__cont_env_ptr)
#line 215 "term.m"
{
#line 940 "term.m"
  while (MR_TRUE)
#line 940 "term.m"
    {
#line 940 "term.m"
      /* tailcall optimized into a loop */
#line 940 "term.m"
      {
#line 940 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 940 "term.m"
        MR_Word mercury__term__V_10_10;
#line 940 "term.m"
        MR_Word mercury__term__V_11_11;

#line 940 "term.m"
        if (mercury__term__succeeded)
#line 940 "term.m"
          {
#line 940 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 940 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "term.m"
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
#line 937 "term.m"
              {
#line 937 "term.m"
                MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
#line 937 "term.m"
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
#line 937 "term.m"
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

#line 938 "term.m"
                {
#line 938 "term.m"
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
#line 937 "term.m"
              }
#line 936 "term.m"
            else
#line 936 "term.m"
              {
#line 936 "term.m"
                MR_Word mercury__term__V_13_13;

#line 936 "term.m"
                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
#line 936 "term.m"
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
#line 936 "term.m"
                {
#line 936 "term.m"
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
#line 936 "term.m"
              }
#line 943 "term.m"
            {
#line 943 "term.m"
              /* direct tailcall eliminated */
#line 943 "term.m"
              {
#line 943 "term.m"
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 943 "term.m"
                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 943 "term.m"
              }
#line 943 "term.m"
              continue;
#line 943 "term.m"
            }
#line 940 "term.m"
          }
#line 940 "term.m"
      }
#line 940 "term.m"
      break;
#line 940 "term.m"
    }
#line 215 "term.m"
}

#line 214 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
#line 214 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 214 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 214 "term.m"
  MR_Word mercury__term__Var_2)
#line 214 "term.m"
{
#line 940 "term.m"
  while (MR_TRUE)
#line 940 "term.m"
    {
#line 940 "term.m"
      /* tailcall optimized into a loop */
#line 940 "term.m"
      {
#line 940 "term.m"
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 940 "term.m"
        MR_Word mercury__term__V_10_10;
#line 940 "term.m"
        MR_Word mercury__term__V_11_11;

#line 940 "term.m"
        if (mercury__term__succeeded)
#line 940 "term.m"
          {
#line 940 "term.m"
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 940 "term.m"
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 941 "term.m"
            {
#line 941 "term.m"
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
#line 940 "term.m"
            if (!(mercury__term__succeeded))
#line 943 "term.m"
              {
#line 943 "term.m"
                /* direct tailcall eliminated */
#line 943 "term.m"
                {
#line 943 "term.m"
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

#line 943 "term.m"
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 943 "term.m"
                }
#line 943 "term.m"
                continue;
#line 943 "term.m"
              }
#line 940 "term.m"
          }
#line 940 "term.m"
        return mercury__term__succeeded;
#line 940 "term.m"
      }
#line 940 "term.m"
      break;
#line 940 "term.m"
    }
#line 214 "term.m"
}

#line 206 "term.m"
void MR_CALL 
mercury__term__contains_var_2_p_1(
#line 206 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 206 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 206 "term.m"
  MR_Word * mercury__term__Var_2,
#line 206 "term.m"
  MR_Cont mercury__term__cont,
#line 206 "term.m"
  void * mercury__term__cont_env_ptr)
#line 206 "term.m"
{
#line 936 "term.m"
  {
#line 936 "term.m"
    MR_bool mercury__term__succeeded;

#line 936 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 937 "term.m"
      {
#line 937 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 937 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 937 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 938 "term.m"
        {
#line 938 "term.m"
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
#line 938 "term.m"
          return;
        }
#line 937 "term.m"
      }
#line 936 "term.m"
    else
#line 936 "term.m"
      {
#line 936 "term.m"
        MR_Word mercury__term__V_4_4;

#line 936 "term.m"
        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 936 "term.m"
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "term.m"
        {
#line 936 "term.m"
          mercury__term__cont(mercury__term__cont_env_ptr);
#line 936 "term.m"
          return;
        }
#line 936 "term.m"
      }
#line 936 "term.m"
  }
#line 206 "term.m"
}

#line 205 "term.m"
MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
#line 205 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 205 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 205 "term.m"
  MR_Word mercury__term__Var_2)
#line 205 "term.m"
{
#line 936 "term.m"
  {
#line 936 "term.m"
    MR_bool mercury__term__succeeded;

#line 936 "term.m"
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 937 "term.m"
      {
#line 937 "term.m"
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 937 "term.m"
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 937 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

#line 938 "term.m"
        {
#line 938 "term.m"
          return mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2);
        }
#line 937 "term.m"
      }
#line 936 "term.m"
    else
#line 936 "term.m"
      {
#line 936 "term.m"
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 936 "term.m"
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "term.m"
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
#line 682 "term.m"
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

#line 682 "term.m"
        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
#line 682 "term.m"
        if (mercury__term__succeeded)
#line 682 "term.m"
          mercury__term__succeeded = MR_TRUE;
#line 682 "term.m"
        else
#line 682 "term.m"
          {
#line 682 "term.m"
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
#line 682 "term.m"
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

#line 8928 "term.c"
            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
#line 682 "term.m"
          }
#line 936 "term.m"
      }
#line 936 "term.m"
    return mercury__term__succeeded;
#line 936 "term.m"
  }
#line 205 "term.m"
}

#line 197 "term.m"
void MR_CALL 
mercury__term__vars_list_2_p_0(
#line 197 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 197 "term.m"
  MR_Word mercury__term__Terms_3,
#line 197 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 197 "term.m"
{
#line 923 "term.m"
  {
#line 923 "term.m"
    MR_bool mercury__term__succeeded;
#line 923 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 924 "term.m"
    {
#line 924 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
#line 924 "term.m"
      return;
    }
#line 923 "term.m"
  }
#line 197 "term.m"
}

#line 196 "term.m"
MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
#line 196 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 196 "term.m"
  MR_Word mercury__term__Terms_3)
#line 196 "term.m"
{
#line 923 "term.m"
  {
#line 923 "term.m"
    MR_bool mercury__term__succeeded;
#line 923 "term.m"
    MR_Word mercury__term__Vars_4;
#line 923 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 924 "term.m"
    {
#line 924 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Terms_3, mercury__term__V_8_8, &mercury__term__Vars_4);
    }
#line 923 "term.m"
    return mercury__term__Vars_4;
#line 923 "term.m"
  }
#line 196 "term.m"
}

#line 189 "term.m"
void MR_CALL 
mercury__term__vars_2_3_p_0(
#line 189 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_15,
#line 189 "term.m"
  MR_Word mercury__term__Term_4,
#line 189 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_11,
#line 189 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Vars_12)
#line 189 "term.m"
{
#line 915 "term.m"
  {
#line 915 "term.m"
    MR_bool mercury__term__succeeded;

#line 915 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 916 "term.m"
      {
#line 916 "term.m"
        MR_Word mercury__term__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 916 "term.m"
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 916 "term.m"
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 917 "term.m"
        {
#line 917 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms_9, mercury__term__STATE_VARIABLE_Vars_0_11, mercury__term__STATE_VARIABLE_Vars_12);
#line 917 "term.m"
          return;
        }
#line 916 "term.m"
      }
#line 915 "term.m"
    else
#line 913 "term.m"
      {
#line 913 "term.m"
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 913 "term.m"
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 914 "term.m"
        {
#line 914 "term.m"
          MR_Word base;
#line 914 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "term.m"
          *mercury__term__STATE_VARIABLE_Vars_12 = base;
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_6));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_11));
#line 914 "term.m"
        }
#line 913 "term.m"
      }
#line 915 "term.m"
  }
#line 189 "term.m"
}

#line 188 "term.m"
MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
#line 188 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 188 "term.m"
  MR_Word mercury__term__Term_4,
#line 188 "term.m"
  MR_Word mercury__term__Vars0_5)
#line 188 "term.m"
{
#line 915 "term.m"
  {
#line 915 "term.m"
    MR_bool mercury__term__succeeded;
#line 915 "term.m"
    MR_Word mercury__term__Vars_6;

#line 915 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
#line 916 "term.m"
      {
#line 916 "term.m"
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
#line 916 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
#line 916 "term.m"
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

#line 917 "term.m"
        {
#line 917 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__ArgTerms_15, mercury__term__Vars0_5, &mercury__term__Vars_6);
        }
#line 916 "term.m"
      }
#line 915 "term.m"
    else
#line 913 "term.m"
      {
#line 913 "term.m"
        MR_Word mercury__term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
#line 913 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

#line 914 "term.m"
        {
#line 914 "term.m"
          mercury__term__Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 0) = ((MR_Box) (mercury__term__Var_12));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 1) = ((MR_Box) (mercury__term__Vars0_5));
#line 914 "term.m"
        }
#line 913 "term.m"
      }
#line 915 "term.m"
    return mercury__term__Vars_6;
#line 915 "term.m"
  }
#line 188 "term.m"
}

#line 184 "term.m"
void MR_CALL 
mercury__term__vars_2_p_0(
#line 184 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_6,
#line 184 "term.m"
  MR_Word mercury__term__Term_3,
#line 184 "term.m"
  MR_Word * mercury__term__Vars_4)
#line 184 "term.m"
{
#line 905 "term.m"
  {
#line 905 "term.m"
    MR_bool mercury__term__succeeded;
#line 905 "term.m"
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 915 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 916 "term.m"
      {
#line 916 "term.m"
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 916 "term.m"
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 916 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 917 "term.m"
        {
#line 917 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__ArgTerms_14, mercury__term__V_5_5, mercury__term__Vars_4);
#line 917 "term.m"
          return;
        }
#line 916 "term.m"
      }
#line 915 "term.m"
    else
#line 913 "term.m"
      {
#line 913 "term.m"
        MR_Word mercury__term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 913 "term.m"
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 914 "term.m"
        {
#line 914 "term.m"
          MR_Word base;
#line 914 "term.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "term.m"
          *mercury__term__Vars_4 = base;
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_11));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
#line 914 "term.m"
        }
#line 913 "term.m"
      }
#line 905 "term.m"
  }
#line 184 "term.m"
}

#line 183 "term.m"
MR_Word MR_CALL 
mercury__term__vars_1_f_0(
#line 183 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_5,
#line 183 "term.m"
  MR_Word mercury__term__Term_3)
#line 183 "term.m"
{
#line 905 "term.m"
  {
#line 905 "term.m"
    MR_bool mercury__term__succeeded;
#line 905 "term.m"
    MR_Word mercury__term__Vars_4;
#line 905 "term.m"
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 915 "term.m"
    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
#line 916 "term.m"
      {
#line 916 "term.m"
        MR_Word mercury__term__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
#line 916 "term.m"
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
#line 916 "term.m"
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

#line 917 "term.m"
        {
#line 917 "term.m"
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_16, mercury__term__V_8_8, &mercury__term__Vars_4);
        }
#line 916 "term.m"
      }
#line 915 "term.m"
    else
#line 913 "term.m"
      {
#line 913 "term.m"
        MR_Word mercury__term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
#line 913 "term.m"
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

#line 914 "term.m"
        {
#line 914 "term.m"
          mercury__term__Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 0) = ((MR_Box) (mercury__term__Var_13));
#line 914 "term.m"
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 1) = ((MR_Box) (mercury__term__V_8_8));
#line 914 "term.m"
        }
#line 913 "term.m"
      }
#line 905 "term.m"
    return mercury__term__Vars_4;
#line 905 "term.m"
  }
#line 183 "term.m"
}

#line 170 "term.m"
MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
#line 170 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_9,
#line 170 "term.m"
  MR_Word mercury__term__Terms1_4,
#line 170 "term.m"
  MR_Word mercury__term__Terms2_5,
#line 170 "term.m"
  MR_Word * mercury__term__Subst_6)
#line 170 "term.m"
{
#line 893 "term.m"
  {
#line 893 "term.m"
    MR_bool mercury__term__succeeded;
#line 893 "term.m"
    MR_Word mercury__term__Terms2Vars_7;
#line 893 "term.m"
    MR_Word mercury__term__Subst0_8;
#line 893 "term.m"
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 924 "term.m"
    {
#line 924 "term.m"
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
#line 48 "tree234.opt"
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 898 "term.m"
    {
#line 898 "term.m"
      return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
#line 893 "term.m"
    return mercury__term__succeeded;
#line 893 "term.m"
  }
#line 170 "term.m"
}

#line 157 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
#line 157 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_20,
#line 157 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 157 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 157 "term.m"
  MR_Word mercury__term__DontBindVars_3,
#line 157 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_4,
#line 157 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_5)
#line 157 "term.m"
{
#line 869 "term.m"
  while (MR_TRUE)
#line 869 "term.m"
    {
#line 869 "term.m"
      /* tailcall optimized into a loop */
#line 869 "term.m"
      {
#line 869 "term.m"
        MR_bool mercury__term__succeeded;

#line 869 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "term.m"
          {
#line 869 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "term.m"
            if (mercury__term__succeeded)
#line 869 "term.m"
              {
#line 869 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_5 = mercury__term__STATE_VARIABLE_Subst_0_4;
#line 869 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 869 "term.m"
              }
#line 869 "term.m"
          }
#line 869 "term.m"
        else
#line 871 "term.m"
          {
#line 871 "term.m"
            MR_Word mercury__term__TermX_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "term.m"
            MR_Word mercury__term__TermXs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 871 "term.m"
            MR_Word mercury__term__TermY_12;
#line 871 "term.m"
            MR_Word mercury__term__TermYs_13;
#line 871 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_18_18;

#line 870 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 870 "term.m"
            if (mercury__term__succeeded)
#line 870 "term.m"
              {
#line 870 "term.m"
                mercury__term__TermY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 870 "term.m"
                mercury__term__TermYs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 872 "term.m"
                {
#line 872 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__TermX_10, mercury__term__TermY_12, mercury__term__DontBindVars_3, mercury__term__STATE_VARIABLE_Subst_0_4, &mercury__term__STATE_VARIABLE_Subst_18_18);
                }
#line 871 "term.m"
                if (mercury__term__succeeded)
#line 873 "term.m"
                  {
#line 873 "term.m"
                    /* direct tailcall eliminated */
#line 873 "term.m"
                    {
#line 873 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_11;
#line 873 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_13;
#line 873 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Subst_18_18;

#line 873 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_4 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 873 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 873 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 873 "term.m"
                    }
#line 873 "term.m"
                    continue;
#line 873 "term.m"
                  }
#line 870 "term.m"
              }
#line 871 "term.m"
          }
#line 869 "term.m"
        return mercury__term__succeeded;
#line 869 "term.m"
      }
#line 869 "term.m"
      break;
#line 869 "term.m"
    }
#line 157 "term.m"
}

#line 148 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
#line 148 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_56,
#line 148 "term.m"
  MR_Word mercury__term__TermX_6,
#line 148 "term.m"
  MR_Word mercury__term__TermY_7,
#line 148 "term.m"
  MR_Word mercury__term__DontBindVars_8,
#line 148 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_34,
#line 148 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_35)
#line 148 "term.m"
{
#line 839 "term.m"
  while (MR_TRUE)
#line 839 "term.m"
    {
#line 839 "term.m"
      /* tailcall optimized into a loop */
#line 839 "term.m"
      {
#line 839 "term.m"
        MR_bool mercury__term__succeeded;

#line 839 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_6)) == (MR_mktag((MR_Integer) 0))))
#line 839 "term.m"
          {
#line 839 "term.m"
            MR_Word mercury__term__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 1)));
#line 839 "term.m"
            MR_Word mercury__term__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 0)));
#line 850 "term.m"
            MR_Word mercury__term__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 2)));

#line 839 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 860 "term.m"
              {
#line 860 "term.m"
                MR_Word mercury__term__TypeCtorInfo_105_105;
#line 860 "term.m"
                MR_Word mercury__term__TypeInfo_106_106;
#line 860 "term.m"
                MR_Word mercury__term__NameY_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 860 "term.m"
                MR_Integer mercury__term__ArityX_32;
#line 860 "term.m"
                MR_Integer mercury__term__ArityY_33;
#line 860 "term.m"
                MR_Word mercury__term__ArgTermsY_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 861 "term.m"
                MR_Word mercury__term___CY_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));

#line 862 "term.m"
                {
#line 862 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_111_111, mercury__term__NameY_30);
                }
#line 860 "term.m"
                if (mercury__term__succeeded)
#line 860 "term.m"
                  {
#line 9493 "term.c"
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9495 "term.c"
                    {
#line 9497 "term.c"
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9499 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
#line 9501 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9503 "term.c"
                    }
#line 863 "term.m"
                    {
#line 863 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__V_110_110, &mercury__term__ArityX_32);
                    }
#line 864 "term.m"
                    {
#line 864 "term.m"
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__ArgTermsY_54, &mercury__term__ArityY_33);
                    }
#line 865 "term.m"
                    mercury__term__succeeded = (mercury__term__ArityX_32 == mercury__term__ArityY_33);
#line 860 "term.m"
                    if (mercury__term__succeeded)
#line 866 "term.m"
                      {
#line 866 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__ArgTermsY_54, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 860 "term.m"
                  }
#line 860 "term.m"
              }
#line 839 "term.m"
            else
#line 850 "term.m"
              {
#line 850 "term.m"
                MR_Word mercury__term__Y_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 851 "term.m"
                MR_Word mercury__term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));
#line 854 "term.m"
                MR_Word mercury__term__TermBoundToY_51;
#line 852 "term.m"
                MR_Word mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 852 "term.m"
                MR_Word mercury__term__TypeInfo_96_96;
#line 852 "term.m"
                MR_Word mercury__term__TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 852 "term.m"
                MR_Word mercury__term__TypeInfo_98_98;
#line 852 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_51;

#line 9549 "term.c"
                {
#line 9551 "term.c"
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9553 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
#line 9555 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9557 "term.c"
                }
#line 9559 "term.c"
                {
#line 9561 "term.c"
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9563 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
#line 9565 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9567 "term.c"
                }
#line 852 "term.m"
                {
#line 852 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_96_96, mercury__term__TypeInfo_98_98, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_52, &mercury__term__conv0_TermBoundToY_51);
                }
#line 852 "term.m"
                if (mercury__term__succeeded)
#line 852 "term.m"
                  {
#line 852 "term.m"
                    mercury__term__TermBoundToY_51 = ((MR_Word) mercury__term__conv0_TermBoundToY_51);
#line 852 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 852 "term.m"
                  }
#line 854 "term.m"
                if (mercury__term__succeeded)
#line 853 "term.m"
                  {
#line 853 "term.m"
                    /* direct tailcall eliminated */
#line 853 "term.m"
                    {
#line 853 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_51;

#line 853 "term.m"
                      mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 853 "term.m"
                    }
#line 853 "term.m"
                    continue;
#line 853 "term.m"
                  }
#line 854 "term.m"
                else
#line 855 "term.m"
                  {
#line 855 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_101_101;
#line 855 "term.m"
                    MR_Word mercury__term__TypeInfo_102_102;
#line 855 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_103_103;
#line 855 "term.m"
                    MR_Word mercury__term__TypeInfo_104_104;
#line 857 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_35;

#line 855 "term.m"
                    {
#line 855 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__Y_52, mercury__term__STATE_VARIABLE_Subst_0_34);
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
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_52, mercury__term__DontBindVars_8);
                        }
#line 856 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 855 "term.m"
                        if (mercury__term__succeeded)
#line 855 "term.m"
                          {
#line 9640 "term.c"
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9642 "term.c"
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9644 "term.c"
                            {
#line 9646 "term.c"
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9648 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
#line 9650 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9652 "term.c"
                            }
#line 9654 "term.c"
                            {
#line 9656 "term.c"
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9658 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
#line 9660 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9662 "term.c"
                            }
#line 857 "term.m"
                            {
#line 857 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_102_102, mercury__term__TypeInfo_104_104, mercury__term__Y_52, ((MR_Box) (mercury__term__TermX_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv1_STATE_VARIABLE_Subst_35);
                            }
#line 857 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_35;
#line 857 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 855 "term.m"
                          }
#line 855 "term.m"
                      }
#line 855 "term.m"
                  }
#line 850 "term.m"
              }
#line 839 "term.m"
          }
#line 839 "term.m"
        else
#line 839 "term.m"
          {
#line 839 "term.m"
            MR_Word mercury__term__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 0)));
#line 796 "term.m"
            MR_Word mercury__term__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 1)));

#line 839 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
#line 840 "term.m"
              {
#line 840 "term.m"
                MR_Word mercury__term__ArgTermsY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
#line 841 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
#line 841 "term.m"
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));
#line 844 "term.m"
                MR_Word mercury__term__TermBoundToX_48;
#line 842 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 842 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 842 "term.m"
                MR_Word mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 842 "term.m"
                MR_Word mercury__term__TypeInfo_88_88;
#line 842 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_48;

#line 9715 "term.c"
                {
#line 9717 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9719 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 9721 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9723 "term.c"
                }
#line 9725 "term.c"
                {
#line 9727 "term.c"
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9729 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 9731 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9733 "term.c"
                }
#line 842 "term.m"
                {
#line 842 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_86_86, mercury__term__TypeInfo_88_88, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv2_TermBoundToX_48);
                }
#line 842 "term.m"
                if (mercury__term__succeeded)
#line 842 "term.m"
                  {
#line 842 "term.m"
                    mercury__term__TermBoundToX_48 = ((MR_Word) mercury__term__conv2_TermBoundToX_48);
#line 842 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 842 "term.m"
                  }
#line 844 "term.m"
                if (mercury__term__succeeded)
#line 843 "term.m"
                  {
#line 843 "term.m"
                    /* direct tailcall eliminated */
#line 843 "term.m"
                    {
#line 843 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_48;

#line 843 "term.m"
                      mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 843 "term.m"
                    }
#line 843 "term.m"
                    continue;
#line 843 "term.m"
                  }
#line 844 "term.m"
                else
#line 845 "term.m"
                  {
#line 845 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_91_91;
#line 845 "term.m"
                    MR_Word mercury__term__TypeInfo_92_92;
#line 845 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_93_93;
#line 845 "term.m"
                    MR_Word mercury__term__TypeInfo_94_94;
#line 847 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_35;

#line 845 "term.m"
                    {
#line 845 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__ArgTermsY_22, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
#line 845 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 845 "term.m"
                    if (mercury__term__succeeded)
#line 845 "term.m"
                      {
#line 846 "term.m"
                        {
#line 846 "term.m"
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                        }
#line 846 "term.m"
                        mercury__term__succeeded = !(mercury__term__succeeded);
#line 845 "term.m"
                        if (mercury__term__succeeded)
#line 845 "term.m"
                          {
#line 9806 "term.c"
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 9808 "term.c"
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 9810 "term.c"
                            {
#line 9812 "term.c"
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9814 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
#line 9816 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9818 "term.c"
                            }
#line 9820 "term.c"
                            {
#line 9822 "term.c"
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9824 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
#line 9826 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9828 "term.c"
                            }
#line 847 "term.m"
                            {
#line 847 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_92_92, mercury__term__TypeInfo_94_94, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv3_STATE_VARIABLE_Subst_35);
                            }
#line 847 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_35;
#line 847 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 845 "term.m"
                          }
#line 845 "term.m"
                      }
#line 845 "term.m"
                  }
#line 840 "term.m"
              }
#line 839 "term.m"
            else
#line 796 "term.m"
              {
#line 796 "term.m"
                MR_Word mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
#line 797 "term.m"
                MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));

#line 798 "term.m"
                {
#line 798 "term.m"
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__DontBindVars_8);
                }
#line 800 "term.m"
                if (mercury__term__succeeded)
#line 799 "term.m"
                  {
#line 799 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                  }
#line 800 "term.m"
                else
#line 802 "term.m"
                  {
#line 800 "term.m"
                    {
#line 800 "term.m"
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                    }
#line 802 "term.m"
                    if (mercury__term__succeeded)
#line 801 "term.m"
                      {
#line 801 "term.m"
                        return mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_113_113, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
#line 802 "term.m"
                    else
#line 819 "term.m"
                      {
#line 819 "term.m"
                        MR_Word mercury__term__TypeInfo_62_62;
#line 819 "term.m"
                        MR_Word mercury__term__TypeInfo_64_64;
#line 819 "term.m"
                        MR_Word mercury__term__TermBoundToX_14;
#line 802 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 802 "term.m"
                        MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 802 "term.m"
                        MR_Box mercury__term__conv4_TermBoundToX_14;

#line 9901 "term.c"
                        {
#line 9903 "term.c"
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9905 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
#line 9907 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9909 "term.c"
                        }
#line 9911 "term.c"
                        {
#line 9913 "term.c"
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9915 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 9917 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 9919 "term.c"
                        }
#line 802 "term.m"
                        {
#line 802 "term.m"
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv4_TermBoundToX_14);
                        }
#line 802 "term.m"
                        if (mercury__term__succeeded)
#line 802 "term.m"
                          {
#line 802 "term.m"
                            mercury__term__TermBoundToX_14 = ((MR_Word) mercury__term__conv4_TermBoundToX_14);
#line 802 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 802 "term.m"
                          }
#line 819 "term.m"
                        if (mercury__term__succeeded)
#line 808 "term.m"
                          {
#line 808 "term.m"
                            MR_Word mercury__term__TermBoundToY_15;
#line 803 "term.m"
                            MR_Box mercury__term__conv5_TermBoundToY_15;

#line 803 "term.m"
                            {
#line 803 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv5_TermBoundToY_15);
                            }
#line 803 "term.m"
                            if (mercury__term__succeeded)
#line 803 "term.m"
                              {
#line 803 "term.m"
                                mercury__term__TermBoundToY_15 = ((MR_Word) mercury__term__conv5_TermBoundToY_15);
#line 803 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 803 "term.m"
                              }
#line 808 "term.m"
                            if (mercury__term__succeeded)
#line 806 "term.m"
                              {
#line 806 "term.m"
                                /* direct tailcall eliminated */
#line 806 "term.m"
                                {
#line 806 "term.m"
                                  MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_14;
#line 806 "term.m"
                                  MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_15;

#line 806 "term.m"
                                  mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
#line 806 "term.m"
                                  mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
#line 806 "term.m"
                                }
#line 806 "term.m"
                                continue;
#line 806 "term.m"
                              }
#line 808 "term.m"
                            else
#line 811 "term.m"
                              {
#line 811 "term.m"
                                MR_Word mercury__term__SubstTermBoundToX_16;
#line 812 "term.m"
                                MR_Word mercury__term__V_107_107;
#line 812 "term.m"
                                MR_Word mercury__term__V_17_17;

#line 810 "term.m"
                                {
#line 810 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TermBoundToX_14, mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__SubstTermBoundToX_16);
                                }
#line 812 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_16)) == (MR_mktag((MR_Integer) 1)));
#line 812 "term.m"
                                if (mercury__term__succeeded)
#line 812 "term.m"
                                  {
#line 812 "term.m"
                                    mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 0)));
#line 812 "term.m"
                                    mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 1)));
#line 812 "term.m"
                                    {
#line 812 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_107_107);
                                    }
#line 812 "term.m"
                                  }
#line 814 "term.m"
                                if (mercury__term__succeeded)
#line 814 "term.m"
                                  {
#line 814 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 814 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 814 "term.m"
                                  }
#line 814 "term.m"
                                else
#line 815 "term.m"
                                  {
#line 816 "term.m"
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_35;

#line 815 "term.m"
                                    {
#line 815 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToX_16, mercury__term__Y_12, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 815 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 815 "term.m"
                                    if (mercury__term__succeeded)
#line 815 "term.m"
                                      {
#line 816 "term.m"
                                        {
#line 816 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, mercury__term__Y_12, ((MR_Box) (mercury__term__SubstTermBoundToX_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv6_STATE_VARIABLE_Subst_35);
                                        }
#line 816 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_35;
#line 816 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 815 "term.m"
                                      }
#line 815 "term.m"
                                  }
#line 811 "term.m"
                              }
#line 808 "term.m"
                          }
#line 819 "term.m"
                        else
#line 830 "term.m"
                          {
#line 830 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 830 "term.m"
                            MR_Word mercury__term__TypeInfo_76_76;
#line 830 "term.m"
                            MR_Word mercury__term__TermBoundToY_47;
#line 820 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 820 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 820 "term.m"
                            MR_Box mercury__term__conv7_TermBoundToY_47;

#line 10078 "term.c"
                            {
#line 10080 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10082 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 10084 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10086 "term.c"
                            }
#line 10088 "term.c"
                            {
#line 10090 "term.c"
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10092 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10094 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10096 "term.c"
                            }
#line 820 "term.m"
                            {
#line 820 "term.m"
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv7_TermBoundToY_47);
                            }
#line 820 "term.m"
                            if (mercury__term__succeeded)
#line 820 "term.m"
                              {
#line 820 "term.m"
                                mercury__term__TermBoundToY_47 = ((MR_Word) mercury__term__conv7_TermBoundToY_47);
#line 820 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 820 "term.m"
                              }
#line 830 "term.m"
                            if (mercury__term__succeeded)
#line 823 "term.m"
                              {
#line 823 "term.m"
                                MR_Word mercury__term__SubstTermBoundToY_18;
#line 824 "term.m"
                                MR_Word mercury__term__V_108_108;
#line 824 "term.m"
                                MR_Word mercury__term__V_19_19;

#line 822 "term.m"
                                {
#line 822 "term.m"
                                  mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TermBoundToY_47, mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__SubstTermBoundToY_18);
                                }
#line 824 "term.m"
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_18)) == (MR_mktag((MR_Integer) 1)));
#line 824 "term.m"
                                if (mercury__term__succeeded)
#line 824 "term.m"
                                  {
#line 824 "term.m"
                                    mercury__term__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 0)));
#line 824 "term.m"
                                    mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 1)));
#line 824 "term.m"
                                    {
#line 824 "term.m"
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__V_108_108);
                                    }
#line 824 "term.m"
                                  }
#line 826 "term.m"
                                if (mercury__term__succeeded)
#line 826 "term.m"
                                  {
#line 826 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 826 "term.m"
                                    mercury__term__succeeded = MR_TRUE;
#line 826 "term.m"
                                  }
#line 826 "term.m"
                                else
#line 827 "term.m"
                                  {
#line 828 "term.m"
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_35;

#line 827 "term.m"
                                    {
#line 827 "term.m"
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToY_18, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
#line 827 "term.m"
                                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 827 "term.m"
                                    if (mercury__term__succeeded)
#line 827 "term.m"
                                      {
#line 828 "term.m"
                                        {
#line 828 "term.m"
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, mercury__term__V_113_113, ((MR_Box) (mercury__term__SubstTermBoundToY_18)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv8_STATE_VARIABLE_Subst_35);
                                        }
#line 828 "term.m"
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_35;
#line 828 "term.m"
                                        mercury__term__succeeded = MR_TRUE;
#line 827 "term.m"
                                      }
#line 827 "term.m"
                                  }
#line 823 "term.m"
                              }
#line 830 "term.m"
                            else
#line 834 "term.m"
                              {
#line 832 "term.m"
                                {
#line 832 "term.m"
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12);
                                }
#line 834 "term.m"
                                if (mercury__term__succeeded)
#line 834 "term.m"
                                  *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
#line 834 "term.m"
                                else
#line 835 "term.m"
                                  {
#line 835 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 835 "term.m"
                                    MR_Word mercury__term__TypeInfo_82_82;
#line 835 "term.m"
                                    MR_Word mercury__term__TypeCtorInfo_83_83;
#line 835 "term.m"
                                    MR_Word mercury__term__TypeInfo_84_84;
#line 835 "term.m"
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_35;

#line 10217 "term.c"
                                    {
#line 10219 "term.c"
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10221 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 10223 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10225 "term.c"
                                    }
#line 10227 "term.c"
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10229 "term.c"
                                    {
#line 10231 "term.c"
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10233 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10235 "term.c"
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
#line 10237 "term.c"
                                    }
#line 835 "term.m"
                                    {
#line 835 "term.m"
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_82_82, mercury__term__TypeInfo_84_84, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv9_STATE_VARIABLE_Subst_35);
                                    }
#line 835 "term.m"
                                    *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_35;
#line 835 "term.m"
                                  }
#line 834 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 834 "term.m"
                              }
#line 830 "term.m"
                          }
#line 819 "term.m"
                      }
#line 802 "term.m"
                  }
#line 796 "term.m"
              }
#line 839 "term.m"
          }
#line 839 "term.m"
        return mercury__term__succeeded;
#line 839 "term.m"
      }
#line 839 "term.m"
      break;
#line 839 "term.m"
    }
#line 148 "term.m"
}

#line 139 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
#line 139 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_17,
#line 139 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 139 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 139 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
#line 139 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
#line 139 "term.m"
{
#line 787 "term.m"
  while (MR_TRUE)
#line 787 "term.m"
    {
#line 787 "term.m"
      /* tailcall optimized into a loop */
#line 787 "term.m"
      {
#line 787 "term.m"
        MR_bool mercury__term__succeeded;

#line 787 "term.m"
        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "term.m"
          {
#line 787 "term.m"
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 787 "term.m"
            if (mercury__term__succeeded)
#line 787 "term.m"
              {
#line 787 "term.m"
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
#line 787 "term.m"
                mercury__term__succeeded = MR_TRUE;
#line 787 "term.m"
              }
#line 787 "term.m"
          }
#line 787 "term.m"
        else
#line 788 "term.m"
          {
#line 788 "term.m"
            MR_Word mercury__term__TermX_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
#line 788 "term.m"
            MR_Word mercury__term__TermXs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
#line 788 "term.m"
            MR_Word mercury__term__TermY_10;
#line 788 "term.m"
            MR_Word mercury__term__TermYs_11;
#line 788 "term.m"
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;

#line 788 "term.m"
            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 788 "term.m"
            if (mercury__term__succeeded)
#line 788 "term.m"
              {
#line 788 "term.m"
                mercury__term__TermY_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
#line 788 "term.m"
                mercury__term__TermYs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
#line 789 "term.m"
                {
#line 789 "term.m"
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TermX_8, mercury__term__TermY_10, mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__STATE_VARIABLE_Subst_15_15);
                }
#line 788 "term.m"
                if (mercury__term__succeeded)
#line 790 "term.m"
                  {
#line 790 "term.m"
                    /* direct tailcall eliminated */
#line 790 "term.m"
                    {
#line 790 "term.m"
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_9;
#line 790 "term.m"
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_11;
#line 790 "term.m"
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

#line 790 "term.m"
                      mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 790 "term.m"
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
#line 790 "term.m"
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
#line 790 "term.m"
                    }
#line 790 "term.m"
                    continue;
#line 790 "term.m"
                  }
#line 788 "term.m"
              }
#line 788 "term.m"
          }
#line 787 "term.m"
        return mercury__term__succeeded;
#line 787 "term.m"
      }
#line 787 "term.m"
      break;
#line 787 "term.m"
    }
#line 139 "term.m"
}

#line 130 "term.m"
MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
#line 130 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_50,
#line 130 "term.m"
  MR_Word mercury__term__TermX_5,
#line 130 "term.m"
  MR_Word mercury__term__TermY_6,
#line 130 "term.m"
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_30,
#line 130 "term.m"
  MR_Word * mercury__term__STATE_VARIABLE_Subst_31)
#line 130 "term.m"
{
#line 761 "term.m"
  while (MR_TRUE)
#line 761 "term.m"
    {
#line 761 "term.m"
      /* tailcall optimized into a loop */
#line 761 "term.m"
      {
#line 761 "term.m"
        MR_bool mercury__term__succeeded;

#line 761 "term.m"
        if (((MR_tag((MR_Word) mercury__term__TermX_5)) == (MR_mktag((MR_Integer) 0))))
#line 761 "term.m"
          {
#line 761 "term.m"
            MR_Word mercury__term__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 1)));
#line 761 "term.m"
            MR_Word mercury__term__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 0)));
#line 771 "term.m"
            MR_Word mercury__term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 2)));

#line 761 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 780 "term.m"
              {
#line 780 "term.m"
                MR_Word mercury__term__NameY_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 780 "term.m"
                MR_Word mercury__term__ArgTermsY_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 781 "term.m"
                MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));

#line 782 "term.m"
                {
#line 782 "term.m"
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_95_95, mercury__term__NameY_28);
                }
#line 780 "term.m"
                if (mercury__term__succeeded)
#line 784 "term.m"
                  {
#line 784 "term.m"
                    return mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__ArgTermsY_48, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__STATE_VARIABLE_Subst_31);
                  }
#line 780 "term.m"
              }
#line 761 "term.m"
            else
#line 771 "term.m"
              {
#line 771 "term.m"
                MR_Word mercury__term__Y_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 772 "term.m"
                MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 775 "term.m"
                MR_Word mercury__term__TermBoundToY_45;
#line 773 "term.m"
                MR_Word mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 773 "term.m"
                MR_Word mercury__term__TypeInfo_84_84;
#line 773 "term.m"
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 773 "term.m"
                MR_Word mercury__term__TypeInfo_86_86;
#line 773 "term.m"
                MR_Box mercury__term__conv0_TermBoundToY_45;

#line 10472 "term.c"
                {
#line 10474 "term.c"
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10476 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
#line 10478 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10480 "term.c"
                }
#line 10482 "term.c"
                {
#line 10484 "term.c"
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10486 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
#line 10488 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10490 "term.c"
                }
#line 773 "term.m"
                {
#line 773 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_84_84, mercury__term__TypeInfo_86_86, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_46, &mercury__term__conv0_TermBoundToY_45);
                }
#line 773 "term.m"
                if (mercury__term__succeeded)
#line 773 "term.m"
                  {
#line 773 "term.m"
                    mercury__term__TermBoundToY_45 = ((MR_Word) mercury__term__conv0_TermBoundToY_45);
#line 773 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 773 "term.m"
                  }
#line 775 "term.m"
                if (mercury__term__succeeded)
#line 774 "term.m"
                  {
#line 774 "term.m"
                    /* direct tailcall eliminated */
#line 774 "term.m"
                    {
#line 774 "term.m"
                      MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_45;

#line 774 "term.m"
                      mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 774 "term.m"
                    }
#line 774 "term.m"
                    continue;
#line 774 "term.m"
                  }
#line 775 "term.m"
                else
#line 776 "term.m"
                  {
#line 776 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_87_87;
#line 776 "term.m"
                    MR_Word mercury__term__TypeInfo_88_88;
#line 776 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_89_89;
#line 776 "term.m"
                    MR_Word mercury__term__TypeInfo_90_90;
#line 777 "term.m"
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_31;

#line 776 "term.m"
                    {
#line 776 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__Y_46, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 776 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 776 "term.m"
                    if (mercury__term__succeeded)
#line 776 "term.m"
                      {
#line 10552 "term.c"
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10554 "term.c"
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10556 "term.c"
                        {
#line 10558 "term.c"
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10560 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
#line 10562 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10564 "term.c"
                        }
#line 10566 "term.c"
                        {
#line 10568 "term.c"
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10570 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
#line 10572 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10574 "term.c"
                        }
#line 777 "term.m"
                        {
#line 777 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_88_88, mercury__term__TypeInfo_90_90, mercury__term__Y_46, ((MR_Box) (mercury__term__TermX_5)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv1_STATE_VARIABLE_Subst_31);
                        }
#line 777 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_31;
#line 777 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 776 "term.m"
                      }
#line 776 "term.m"
                  }
#line 771 "term.m"
              }
#line 761 "term.m"
          }
#line 761 "term.m"
        else
#line 761 "term.m"
          {
#line 761 "term.m"
            MR_Word mercury__term__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 0)));
#line 723 "term.m"
            MR_Word mercury__term__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 1)));

#line 761 "term.m"
            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
#line 762 "term.m"
              {
#line 762 "term.m"
                MR_Word mercury__term__ArgTermsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
#line 763 "term.m"
                MR_Word mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
#line 763 "term.m"
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));
#line 766 "term.m"
                MR_Word mercury__term__TermBoundToX_42;
#line 764 "term.m"
                MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 764 "term.m"
                MR_Word mercury__term__TypeInfo_76_76;
#line 764 "term.m"
                MR_Word mercury__term__TypeCtorInfo_77_77 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 764 "term.m"
                MR_Word mercury__term__TypeInfo_78_78;
#line 764 "term.m"
                MR_Box mercury__term__conv2_TermBoundToX_42;

#line 10625 "term.c"
                {
#line 10627 "term.c"
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10629 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
#line 10631 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10633 "term.c"
                }
#line 10635 "term.c"
                {
#line 10637 "term.c"
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10639 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
#line 10641 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10643 "term.c"
                }
#line 764 "term.m"
                {
#line 764 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_76_76, mercury__term__TypeInfo_78_78, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv2_TermBoundToX_42);
                }
#line 764 "term.m"
                if (mercury__term__succeeded)
#line 764 "term.m"
                  {
#line 764 "term.m"
                    mercury__term__TermBoundToX_42 = ((MR_Word) mercury__term__conv2_TermBoundToX_42);
#line 764 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 764 "term.m"
                  }
#line 766 "term.m"
                if (mercury__term__succeeded)
#line 765 "term.m"
                  {
#line 765 "term.m"
                    /* direct tailcall eliminated */
#line 765 "term.m"
                    {
#line 765 "term.m"
                      MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_42;

#line 765 "term.m"
                      mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 765 "term.m"
                    }
#line 765 "term.m"
                    continue;
#line 765 "term.m"
                  }
#line 766 "term.m"
                else
#line 767 "term.m"
                  {
#line 767 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_79_79;
#line 767 "term.m"
                    MR_Word mercury__term__TypeInfo_80_80;
#line 767 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_81_81;
#line 767 "term.m"
                    MR_Word mercury__term__TypeInfo_82_82;
#line 768 "term.m"
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_31;

#line 767 "term.m"
                    {
#line 767 "term.m"
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__ArgTermsY_20, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
#line 767 "term.m"
                    mercury__term__succeeded = !(mercury__term__succeeded);
#line 767 "term.m"
                    if (mercury__term__succeeded)
#line 767 "term.m"
                      {
#line 10705 "term.c"
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 10707 "term.c"
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 10709 "term.c"
                        {
#line 10711 "term.c"
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10713 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
#line 10715 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10717 "term.c"
                        }
#line 10719 "term.c"
                        {
#line 10721 "term.c"
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10723 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
#line 10725 "term.c"
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10727 "term.c"
                        }
#line 768 "term.m"
                        {
#line 768 "term.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_80_80, mercury__term__TypeInfo_82_82, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv3_STATE_VARIABLE_Subst_31);
                        }
#line 768 "term.m"
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_31;
#line 768 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 767 "term.m"
                      }
#line 767 "term.m"
                  }
#line 762 "term.m"
              }
#line 761 "term.m"
            else
#line 723 "term.m"
              {
#line 723 "term.m"
                MR_Word mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
#line 724 "term.m"
                MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
#line 741 "term.m"
                MR_Word mercury__term__TypeInfo_52_52;
#line 741 "term.m"
                MR_Word mercury__term__TypeInfo_54_54;
#line 741 "term.m"
                MR_Word mercury__term__TermBoundToX_12;
#line 725 "term.m"
                MR_Word mercury__term__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 725 "term.m"
                MR_Word mercury__term__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 725 "term.m"
                MR_Box mercury__term__conv4_TermBoundToX_12;

#line 10765 "term.c"
                {
#line 10767 "term.c"
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10769 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
#line 10771 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10773 "term.c"
                }
#line 10775 "term.c"
                {
#line 10777 "term.c"
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10779 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
#line 10781 "term.c"
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10783 "term.c"
                }
#line 725 "term.m"
                {
#line 725 "term.m"
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv4_TermBoundToX_12);
                }
#line 725 "term.m"
                if (mercury__term__succeeded)
#line 725 "term.m"
                  {
#line 725 "term.m"
                    mercury__term__TermBoundToX_12 = ((MR_Word) mercury__term__conv4_TermBoundToX_12);
#line 725 "term.m"
                    mercury__term__succeeded = MR_TRUE;
#line 725 "term.m"
                  }
#line 741 "term.m"
                if (mercury__term__succeeded)
#line 730 "term.m"
                  {
#line 730 "term.m"
                    MR_Word mercury__term__TermBoundToY_13;
#line 726 "term.m"
                    MR_Box mercury__term__conv5_TermBoundToY_13;

#line 726 "term.m"
                    {
#line 726 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv5_TermBoundToY_13);
                    }
#line 726 "term.m"
                    if (mercury__term__succeeded)
#line 726 "term.m"
                      {
#line 726 "term.m"
                        mercury__term__TermBoundToY_13 = ((MR_Word) mercury__term__conv5_TermBoundToY_13);
#line 726 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 726 "term.m"
                      }
#line 730 "term.m"
                    if (mercury__term__succeeded)
#line 729 "term.m"
                      {
#line 729 "term.m"
                        /* direct tailcall eliminated */
#line 729 "term.m"
                        {
#line 729 "term.m"
                          MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_12;
#line 729 "term.m"
                          MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_13;

#line 729 "term.m"
                          mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
#line 729 "term.m"
                          mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
#line 729 "term.m"
                        }
#line 729 "term.m"
                        continue;
#line 729 "term.m"
                      }
#line 730 "term.m"
                    else
#line 733 "term.m"
                      {
#line 733 "term.m"
                        MR_Word mercury__term__SubstTermBoundToX_14;
#line 734 "term.m"
                        MR_Word mercury__term__V_91_91;
#line 734 "term.m"
                        MR_Word mercury__term__V_15_15;

#line 732 "term.m"
                        {
#line 732 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TermBoundToX_12, mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__SubstTermBoundToX_14);
                        }
#line 734 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_14)) == (MR_mktag((MR_Integer) 1)));
#line 734 "term.m"
                        if (mercury__term__succeeded)
#line 734 "term.m"
                          {
#line 734 "term.m"
                            mercury__term__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 0)));
#line 734 "term.m"
                            mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 1)));
#line 734 "term.m"
                            {
#line 734 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__Y_10, mercury__term__V_91_91);
                            }
#line 734 "term.m"
                          }
#line 736 "term.m"
                        if (mercury__term__succeeded)
#line 736 "term.m"
                          {
#line 736 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 736 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 736 "term.m"
                          }
#line 736 "term.m"
                        else
#line 737 "term.m"
                          {
#line 738 "term.m"
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_31;

#line 737 "term.m"
                            {
#line 737 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToX_14, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 737 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 737 "term.m"
                            if (mercury__term__succeeded)
#line 737 "term.m"
                              {
#line 738 "term.m"
                                {
#line 738 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, mercury__term__Y_10, ((MR_Box) (mercury__term__SubstTermBoundToX_14)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv6_STATE_VARIABLE_Subst_31);
                                }
#line 738 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_31;
#line 738 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 737 "term.m"
                              }
#line 737 "term.m"
                          }
#line 733 "term.m"
                      }
#line 730 "term.m"
                  }
#line 741 "term.m"
                else
#line 752 "term.m"
                  {
#line 752 "term.m"
                    MR_Word mercury__term__TypeInfo_64_64;
#line 752 "term.m"
                    MR_Word mercury__term__TypeInfo_66_66;
#line 752 "term.m"
                    MR_Word mercury__term__TermBoundToY_41;
#line 742 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 742 "term.m"
                    MR_Word mercury__term__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 742 "term.m"
                    MR_Box mercury__term__conv7_TermBoundToY_41;

#line 10942 "term.c"
                    {
#line 10944 "term.c"
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10946 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
#line 10948 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10950 "term.c"
                    }
#line 10952 "term.c"
                    {
#line 10954 "term.c"
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10956 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
#line 10958 "term.c"
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 10960 "term.c"
                    }
#line 742 "term.m"
                    {
#line 742 "term.m"
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv7_TermBoundToY_41);
                    }
#line 742 "term.m"
                    if (mercury__term__succeeded)
#line 742 "term.m"
                      {
#line 742 "term.m"
                        mercury__term__TermBoundToY_41 = ((MR_Word) mercury__term__conv7_TermBoundToY_41);
#line 742 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 742 "term.m"
                      }
#line 752 "term.m"
                    if (mercury__term__succeeded)
#line 745 "term.m"
                      {
#line 745 "term.m"
                        MR_Word mercury__term__SubstTermBoundToY_16;
#line 746 "term.m"
                        MR_Word mercury__term__V_92_92;
#line 746 "term.m"
                        MR_Word mercury__term__V_17_17;

#line 744 "term.m"
                        {
#line 744 "term.m"
                          mercury__term__apply_rec_substitution_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TermBoundToY_41, mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__SubstTermBoundToY_16);
                        }
#line 746 "term.m"
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_16)) == (MR_mktag((MR_Integer) 1)));
#line 746 "term.m"
                        if (mercury__term__succeeded)
#line 746 "term.m"
                          {
#line 746 "term.m"
                            mercury__term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 0)));
#line 746 "term.m"
                            mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 1)));
#line 746 "term.m"
                            {
#line 746 "term.m"
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__V_92_92);
                            }
#line 746 "term.m"
                          }
#line 748 "term.m"
                        if (mercury__term__succeeded)
#line 748 "term.m"
                          {
#line 748 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 748 "term.m"
                            mercury__term__succeeded = MR_TRUE;
#line 748 "term.m"
                          }
#line 748 "term.m"
                        else
#line 749 "term.m"
                          {
#line 750 "term.m"
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_31;

#line 749 "term.m"
                            {
#line 749 "term.m"
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToY_16, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
#line 749 "term.m"
                            mercury__term__succeeded = !(mercury__term__succeeded);
#line 749 "term.m"
                            if (mercury__term__succeeded)
#line 749 "term.m"
                              {
#line 750 "term.m"
                                {
#line 750 "term.m"
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, mercury__term__V_97_97, ((MR_Box) (mercury__term__SubstTermBoundToY_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv8_STATE_VARIABLE_Subst_31);
                                }
#line 750 "term.m"
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_31;
#line 750 "term.m"
                                mercury__term__succeeded = MR_TRUE;
#line 749 "term.m"
                              }
#line 749 "term.m"
                          }
#line 745 "term.m"
                      }
#line 752 "term.m"
                    else
#line 756 "term.m"
                      {
#line 754 "term.m"
                        {
#line 754 "term.m"
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__Y_10);
                        }
#line 756 "term.m"
                        if (mercury__term__succeeded)
#line 756 "term.m"
                          *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
#line 756 "term.m"
                        else
#line 757 "term.m"
                          {
#line 757 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 757 "term.m"
                            MR_Word mercury__term__TypeInfo_72_72;
#line 757 "term.m"
                            MR_Word mercury__term__TypeCtorInfo_73_73;
#line 757 "term.m"
                            MR_Word mercury__term__TypeInfo_74_74;
#line 757 "term.m"
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_31;

#line 11081 "term.c"
                            {
#line 11083 "term.c"
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11085 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
#line 11087 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11089 "term.c"
                            }
#line 11091 "term.c"
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 11093 "term.c"
                            {
#line 11095 "term.c"
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11097 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
#line 11099 "term.c"
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
#line 11101 "term.c"
                            }
#line 757 "term.m"
                            {
#line 757 "term.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_72_72, mercury__term__TypeInfo_74_74, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv9_STATE_VARIABLE_Subst_31);
                            }
#line 757 "term.m"
                            *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_31;
#line 757 "term.m"
                          }
#line 756 "term.m"
                        mercury__term__succeeded = MR_TRUE;
#line 756 "term.m"
                      }
#line 752 "term.m"
                  }
#line 723 "term.m"
              }
#line 761 "term.m"
          }
#line 761 "term.m"
        return mercury__term__succeeded;
#line 761 "term.m"
      }
#line 761 "term.m"
      break;
#line 761 "term.m"
    }
#line 130 "term.m"
}

#line 110 "term.m"
MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
#line 110 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 110 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 110 "term.m"
{
#line 717 "term.m"
  {
#line 717 "term.m"
    MR_bool mercury__term__succeeded;
#line 717 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 717 "term.m"
    return mercury__term__VarNum_3;
#line 717 "term.m"
  }
#line 110 "term.m"
}

#line 101 "term.m"
void MR_CALL 
mercury__term__var_to_int_2_p_0(
#line 101 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 101 "term.m"
  MR_Word mercury__term__HeadVar__1_1,
#line 101 "term.m"
  MR_Integer * mercury__term__VarNum_3)
#line 101 "term.m"
{
#line 715 "term.m"
  {
#line 715 "term.m"
    MR_bool mercury__term__succeeded;

#line 715 "term.m"
    *mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;
#line 715 "term.m"
  }
#line 101 "term.m"
}

#line 100 "term.m"
MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
#line 100 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_4,
#line 100 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 100 "term.m"
{
#line 714 "term.m"
  {
#line 714 "term.m"
    MR_bool mercury__term__succeeded;
#line 714 "term.m"
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 714 "term.m"
    return mercury__term__VarNum_3;
#line 714 "term.m"
  }
#line 100 "term.m"
}

#line 85 "term.m"
void MR_CALL 
mercury__term__create_var_3_p_0(
#line 85 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_7,
#line 85 "term.m"
  MR_Word * mercury__term__HeadVar__1_1,
#line 85 "term.m"
  MR_Word mercury__term__HeadVar__2_2,
#line 85 "term.m"
  MR_Word * mercury__term__HeadVar__3_3)
#line 85 "term.m"
{
#line 693 "term.m"
  {
#line 693 "term.m"
    MR_bool mercury__term__succeeded;
#line 693 "term.m"
    MR_Integer mercury__term__V_4;
#line 693 "term.m"
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

#line 695 "term.m"
    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
#line 693 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
#line 693 "term.m"
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
#line 693 "term.m"
  }
#line 85 "term.m"
}

#line 79 "term.m"
MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
#line 79 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 79 "term.m"
  MR_Word mercury__term__HeadVar__1_1)
#line 79 "term.m"
{
#line 691 "term.m"
  {
#line 691 "term.m"
    MR_bool mercury__term__succeeded;
#line 691 "term.m"
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

#line 691 "term.m"
    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
#line 691 "term.m"
    return mercury__term__succeeded;
#line 691 "term.m"
  }
#line 79 "term.m"
}

#line 78 "term.m"
void MR_CALL 
mercury__term__init_var_supply_1_p_0(
#line 78 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3,
#line 78 "term.m"
  MR_Word * mercury__term__HeadVar__1_1)
#line 78 "term.m"
{
#line 691 "term.m"
  {
#line 691 "term.m"
    MR_bool mercury__term__succeeded;

#line 691 "term.m"
    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 691 "term.m"
  }
#line 78 "term.m"
}

#line 76 "term.m"
MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
#line 76 "term.m"
  MR_Word mercury__term__TypeInfo_for_T_3)
#line 76 "term.m"
{
#line 690 "term.m"
  {
#line 690 "term.m"
    MR_bool mercury__term__succeeded;
#line 690 "term.m"
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 690 "term.m"
    return mercury__term__HeadVar__1_1;
#line 690 "term.m"
  }
#line 76 "term.m"
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
