/*
** Automatically generated from `stream.m'
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


/* :- module stream. */
/* :- implementation. */

/*
INIT mercury__stream__init
ENDINIT
*/

#include "stream.mih"


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
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
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




#line 93 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1];

#line 96 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0;

#line 99 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2];

#line 102 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1;

#line 105 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1];

#line 108 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1];

#line 111 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2];

#line 114 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2];

#line 117 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2];

#line 120 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1];

#line 123 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0;

#line 126 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1];

#line 129 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1;

#line 132 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1];

#line 135 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1];

#line 138 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2];

#line 141 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2];

#line 144 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2];

#line 147 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0;

#line 150 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1];

#line 153 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1;

#line 156 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1];

#line 159 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1];

#line 162 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2];

#line 165 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2];

#line 168 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2];

#line 171 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1];

#line 174 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0;

#line 177 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1;

#line 180 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1];

#line 183 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2;

#line 186 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1];

#line 189 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1];

#line 192 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1];

#line 195 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3];

#line 198 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3];

#line 201 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3];

#line 204 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0;

#line 207 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1;

#line 210 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1];

#line 213 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2;

#line 216 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2];

#line 219 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1];

#line 222 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2];

#line 225 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3];

#line 228 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3];

#line 231 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0;

#line 234 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1;

#line 237 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2;

#line 240 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3];

#line 243 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3];

#line 246 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3];

#line 249 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3];

#line 252 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1];

#line 255 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3;

#line 258 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1;

#line 261 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1];

#line 264 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4];

#line 267 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4;

#line 270 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1;

#line 273 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1];

#line 276 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2];

#line 279 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1];

#line 282 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2;

#line 285 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2];

#line 288 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1];

#line 291 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2;

#line 294 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1;

#line 297 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1];

#line 300 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4];

#line 303 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1];

#line 306 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4;

#line 309 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1;

#line 312 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2;

#line 315 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2];

#line 318 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4];

#line 321 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1];

#line 324 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4;

#line 327 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1;

#line 330 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1];

#line 333 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2];

#line 336 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1];

#line 339 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2;

#line 342 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1;

#line 345 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1];

#line 348 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2];

#line 351 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2];

#line 354 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2;

#line 357 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1;

#line 360 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1];

#line 363 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2];

#line 366 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2;

#line 369 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1;

#line 372 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1];

#line 375 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1];

#line 378 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1];

#line 381 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1;

#line 384 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2];

#line 387 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2;

#line 390 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1;

#line 393 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2;

#line 396 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2];

#line 399 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5];

#line 402 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1];

#line 405 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5;

#line 408 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1;

#line 411 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2;

#line 414 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2];

#line 417 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 420 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 422 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 424 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 426 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 429 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 432 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 434 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 436 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 438 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 440 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 443 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 446 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 448 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 451 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 454 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 456 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 458 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 461 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 464 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 466 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 468 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 470 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 473 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 476 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 478 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 480 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 482 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 484 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 487 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 490 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 492 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 494 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 497 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 500 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 502 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 504 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 506 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 509 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 512 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 514 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 516 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 518 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 521 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 524 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 526 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 528 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 530 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 532 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5);

#line 535 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 538 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 540 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 542 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 545 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 548 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 550 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 552 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 554 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4);

#line 557 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 560 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 562 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2);

#line 565 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 568 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 570 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 572 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__stream__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__stream_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stream_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stream_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__stream_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_2[0])),
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
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
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
#include "dir.mh"
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
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
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
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 749 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 754 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__stream__stream__field_types_maybe_partial_res_2_0,
  NULL,
  NULL,
  NULL
};

#line 769 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 775 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1 = {
  (MR_String) "error",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__stream__stream__field_types_maybe_partial_res_2_1,
  NULL,
  NULL,
  NULL
};

#line 790 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 795 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1
};

#line 800 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1
  }
};

#line 814 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1,
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

#line 820 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 826 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_maybe_partial_res_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____maybe_partial_res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____maybe_partial_res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "maybe_partial_res",
  {     mercury__stream__stream__du_name_ordered_maybe_partial_res_2 },
  {     mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_maybe_partial_res_2
};

#line 843 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__stream____Unify____name_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____name_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 860 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 865 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__stream__stream__field_types_res_2_0,
  NULL,
  NULL,
  NULL
};

#line 880 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 885 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__stream__stream__field_types_res_2_1,
  NULL,
  NULL,
  NULL
};

#line 900 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 905 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_1
};

#line 910 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_2_1
  }
};

#line 924 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_res_2_1,
  &mercury__stream__stream__du_functor_desc_res_2_0
};

#line 930 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 936 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {     mercury__stream__stream__du_name_ordered_res_2 },
  {     mercury__stream__stream__du_ptag_ordered_res_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_res_2
};

#line 953 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0 = {
  (MR_String) "ok",
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

#line 968 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 973 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__stream__stream__field_types_res_1_1,
  NULL,
  NULL,
  NULL
};

#line 988 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 993 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_1
};

#line 998 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__stream__stream__du_stag_ordered_res_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_1_1
  }
};

#line 1012 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2] = {
  &mercury__stream__stream__du_functor_desc_res_1_1,
  &mercury__stream__stream__du_functor_desc_res_1_0
};

#line 1018 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1024 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {     mercury__stream__stream__du_name_ordered_res_1 },
  {     mercury__stream__stream__du_ptag_ordered_res_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_res_1
};

#line 1041 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1046 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__stream__stream__field_types_result_2_0,
  NULL,
  NULL,
  NULL
};

#line 1061 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1076 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 1081 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__stream__stream__field_types_result_2_2,
  NULL,
  NULL,
  NULL
};

#line 1096 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_1
};

#line 1101 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1106 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_2
};

#line 1111 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__stream__stream__du_stag_ordered_result_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_2_2
  }
};

#line 1130 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3] = {
  &mercury__stream__stream__du_functor_desc_result_2_1,
  &mercury__stream__stream__du_functor_desc_result_2_2,
  &mercury__stream__stream__du_functor_desc_result_2_0
};

#line 1137 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1144 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {     mercury__stream__stream__du_name_ordered_result_2 },
  {     mercury__stream__stream__du_ptag_ordered_result_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_result_2
};

#line 1161 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0 = {
  (MR_String) "ok",
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

#line 1176 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1 = {
  (MR_String) "eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1191 "stream.c"
static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1196 "stream.c"
static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__stream__stream__field_types_result_1_2,
  NULL,
  NULL,
  NULL
};

#line 1211 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2] = {
  &mercury__stream__stream__du_functor_desc_result_1_0,
  &mercury__stream__stream__du_functor_desc_result_1_1
};

#line 1217 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_1_2
};

#line 1222 "stream.c"
static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__stream__stream__du_stag_ordered_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_1_1
  }
};

#line 1236 "stream.c"
static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3] = {
  &mercury__stream__stream__du_functor_desc_result_1_1,
  &mercury__stream__stream__du_functor_desc_result_1_2,
  &mercury__stream__stream__du_functor_desc_result_1_0
};

#line 1243 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1250 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {     mercury__stream__stream__du_name_ordered_result_1 },
  {     mercury__stream__stream__du_ptag_ordered_result_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_result_1
};

#line 1267 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  (MR_Integer) 0
};

#line 1273 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  (MR_Integer) 1
};

#line 1279 "stream.c"
static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  (MR_Integer) 2
};

#line 1285 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_0,
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2
};

#line 1292 "stream.c"
static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2,
  &mercury__stream__stream__enum_functor_desc_whence_0_0
};

#line 1299 "stream.c"
static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1306 "stream.c"
const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_whence_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__stream____Unify____whence_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____whence_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "whence",
  {     mercury__stream__stream__enum_name_ordered_whence_0 },
  {     mercury__stream__stream__enum_value_ordered_whence_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__stream__stream__functor_number_map_whence_0
};

#line 1323 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State"
};

#line 1330 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1] = {
  {
    (MR_String) "put",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1339 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3 = {
  (MR_String) "stream",
  (MR_String) "writer",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_writer_3,
  mercury__stream__stream__type_class_id_method_ids_writer_3
};

#line 1350 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1359 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_writer_3_1
};

#line 1364 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_writer_3 = {
  &mercury__stream__stream__type_class_id_writer_3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1372 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1380 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4 = {
  (MR_String) "stream",
  (MR_String) "unbounded_putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_unbounded_putback_4,
  NULL
};

#line 1391 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_putback_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1402 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1
};

#line 1407 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_unbounded_putback_4 = {
  &mercury__stream__stream__type_class_id_unbounded_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1415 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1421 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1] = {
  {
    (MR_String) "name",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1430 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2 = {
  (MR_String) "stream",
  (MR_String) "stream",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_stream_2,
  mercury__stream__stream__type_class_id_method_ids_stream_2
};

#line 1441 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_stream_2 = {
  &mercury__stream__stream__type_class_id_stream_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1449 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1455 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1] = {
  {
    (MR_String) "seek",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1464 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2 = {
  (MR_String) "stream",
  (MR_String) "seekable",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_seekable_2,
  mercury__stream__stream__type_class_id_method_ids_seekable_2
};

#line 1475 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1484 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_seekable_2_1
};

#line 1489 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_seekable_2 = {
  &mercury__stream__stream__type_class_id_seekable_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1497 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1505 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1] = {
  {
    (MR_String) "get",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1514 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4 = {
  (MR_String) "stream",
  (MR_String) "reader",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_reader_4,
  mercury__stream__stream__type_class_id_method_ids_reader_4
};

#line 1525 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 3
  }
};

#line 1534 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1542 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_reader_4_2
};

#line 1548 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_reader_4 = {
  &mercury__stream__stream__type_class_id_reader_4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1556 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1564 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1] = {
  {
    (MR_String) "unget",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1573 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4 = {
  (MR_String) "stream",
  (MR_String) "putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_putback_4,
  mercury__stream__stream__type_class_id_method_ids_putback_4
};

#line 1584 "stream.c"
static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_reader_4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) (MR_Integer) 3,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1595 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_putback_4_1
};

#line 1600 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_putback_4 = {
  &mercury__stream__stream__type_class_id_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1608 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1614 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1] = {
  {
    (MR_String) "flush",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1623 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2 = {
  (MR_String) "stream",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_output_2,
  mercury__stream__stream__type_class_id_method_ids_output_2
};

#line 1634 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1643 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_output_2_1
};

#line 1648 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_output_2 = {
  &mercury__stream__stream__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1656 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1662 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2] = {
  {
    (MR_String) "get_line",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "set_line",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1676 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2 = {
  (MR_String) "stream",
  (MR_String) "line_oriented",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__stream__stream__type_class_id_var_names_line_oriented_2,
  mercury__stream__stream__type_class_id_method_ids_line_oriented_2
};

#line 1687 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1696 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_line_oriented_2_1
};

#line 1701 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_line_oriented_2 = {
  &mercury__stream__stream__type_class_id_line_oriented_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1709 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1715 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2 = {
  (MR_String) "stream",
  (MR_String) "input",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_input_2,
  NULL
};

#line 1726 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1735 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_input_2_1
};

#line 1740 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_input_2 = {
  &mercury__stream__stream__type_class_id_input_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

#line 1748 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1] = {
  (MR_String) "Error"
};

#line 1753 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1] = {
  {
    (MR_String) "error_message",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1762 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1 = {
  (MR_String) "stream",
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_error_1,
  mercury__stream__stream__type_class_id_method_ids_error_1
};

#line 1773 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_error_1 = {
  &mercury__stream__stream__type_class_id_error_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1781 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

#line 1787 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2 = {
  (MR_String) "stream",
  (MR_String) "duplex",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_duplex_2,
  NULL
};

#line 1798 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1807 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1816 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_duplex_2_2
};

#line 1822 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_duplex_2 = {
  &mercury__stream__stream__type_class_id_duplex_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1830 "stream.c"
static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5] = {
  (MR_String) "Stream",
  (MR_String) "Index",
  (MR_String) "Store",
  (MR_String) "State",
  (MR_String) "Error"
};

#line 1839 "stream.c"
static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1] = {
  {
    (MR_String) "bulk_get",
    (MR_Integer) 9,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 1848 "stream.c"
static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5 = {
  (MR_String) "stream",
  (MR_String) "bulk_reader",
  (MR_Integer) 5,
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_bulk_reader_5,
  mercury__stream__stream__type_class_id_method_ids_bulk_reader_5
};

#line 1859 "stream.c"
static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 4
  }
};

#line 1868 "stream.c"
static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 5
  }
};

#line 1876 "stream.c"
static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2] = {
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_1,
  (MR_TypeClassConstraint) &mercury__stream__stream__type_class_decl_super_bulk_reader_5_2
};

#line 1882 "stream.c"
const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_bulk_reader_5 = {
  &mercury__stream__stream__type_class_id_bulk_reader_5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

#line 1890 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
#line 1893 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 1895 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 1897 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 1899 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 1901 "stream.c"
{
#line 1903 "stream.c"
  {
#line 1905 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 1908 "stream.c"
    {
#line 1910 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 1913 "stream.c"
    return mercury__stream__succeeded;
#line 1915 "stream.c"
  }
#line 1917 "stream.c"
}

#line 1920 "stream.c"
static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
#line 1923 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 1925 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 1927 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 1929 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 1931 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 1933 "stream.c"
{
#line 1935 "stream.c"
  {
#line 1937 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 1940 "stream.c"
    {
#line 1942 "stream.c"
      mercury__stream____Compare____maybe_partial_res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 1945 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 1947 "stream.c"
  }
#line 1949 "stream.c"
}

#line 1952 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
#line 1955 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 1957 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 1959 "stream.c"
{
#line 1961 "stream.c"
  {
#line 1963 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 1966 "stream.c"
    {
#line 1968 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____name_0_0(((MR_String) mercury__stream__wrapper_arg_1), ((MR_String) mercury__stream__wrapper_arg_2));
    }
#line 1971 "stream.c"
    return mercury__stream__succeeded;
#line 1973 "stream.c"
  }
#line 1975 "stream.c"
}

#line 1978 "stream.c"
static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
#line 1981 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 1983 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 1985 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 1987 "stream.c"
{
#line 1989 "stream.c"
  {
#line 1991 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 1994 "stream.c"
    {
#line 1996 "stream.c"
      mercury__stream____Compare____name_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_String) mercury__stream__wrapper_arg_2), ((MR_String) mercury__stream__wrapper_arg_3));
    }
#line 1999 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2001 "stream.c"
  }
#line 2003 "stream.c"
}

#line 2006 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
#line 2009 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2011 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2013 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2015 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2017 "stream.c"
{
#line 2019 "stream.c"
  {
#line 2021 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2024 "stream.c"
    {
#line 2026 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2029 "stream.c"
    return mercury__stream__succeeded;
#line 2031 "stream.c"
  }
#line 2033 "stream.c"
}

#line 2036 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
#line 2039 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2041 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2043 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2045 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2047 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2049 "stream.c"
{
#line 2051 "stream.c"
  {
#line 2053 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2056 "stream.c"
    {
#line 2058 "stream.c"
      mercury__stream____Compare____res_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2061 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2063 "stream.c"
  }
#line 2065 "stream.c"
}

#line 2068 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
#line 2071 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2073 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2075 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2077 "stream.c"
{
#line 2079 "stream.c"
  {
#line 2081 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2084 "stream.c"
    {
#line 2086 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2089 "stream.c"
    return mercury__stream__succeeded;
#line 2091 "stream.c"
  }
#line 2093 "stream.c"
}

#line 2096 "stream.c"
static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
#line 2099 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2101 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2103 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2105 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2107 "stream.c"
{
#line 2109 "stream.c"
  {
#line 2111 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2114 "stream.c"
    {
#line 2116 "stream.c"
      mercury__stream____Compare____res_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2119 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2121 "stream.c"
  }
#line 2123 "stream.c"
}

#line 2126 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
#line 2129 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2131 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2133 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2135 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2137 "stream.c"
{
#line 2139 "stream.c"
  {
#line 2141 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2144 "stream.c"
    {
#line 2146 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2149 "stream.c"
    return mercury__stream__succeeded;
#line 2151 "stream.c"
  }
#line 2153 "stream.c"
}

#line 2156 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
#line 2159 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2161 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2163 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_3,
#line 2165 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4,
#line 2167 "stream.c"
  MR_Box mercury__stream__wrapper_arg_5)
#line 2169 "stream.c"
{
#line 2171 "stream.c"
  {
#line 2173 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2176 "stream.c"
    {
#line 2178 "stream.c"
      mercury__stream____Compare____result_2_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_4), ((MR_Word) mercury__stream__wrapper_arg_5));
    }
#line 2181 "stream.c"
    *mercury__stream__wrapper_arg_3 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2183 "stream.c"
  }
#line 2185 "stream.c"
}

#line 2188 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
#line 2191 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2193 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2195 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2197 "stream.c"
{
#line 2199 "stream.c"
  {
#line 2201 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2204 "stream.c"
    {
#line 2206 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2209 "stream.c"
    return mercury__stream__succeeded;
#line 2211 "stream.c"
  }
#line 2213 "stream.c"
}

#line 2216 "stream.c"
static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
#line 2219 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2221 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_2,
#line 2223 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3,
#line 2225 "stream.c"
  MR_Box mercury__stream__wrapper_arg_4)
#line 2227 "stream.c"
{
#line 2229 "stream.c"
  {
#line 2231 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2234 "stream.c"
    {
#line 2236 "stream.c"
      mercury__stream____Compare____result_1_0(((MR_Word) mercury__stream__wrapper_arg_1), &mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_3), ((MR_Word) mercury__stream__wrapper_arg_4));
    }
#line 2239 "stream.c"
    *mercury__stream__wrapper_arg_2 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2241 "stream.c"
  }
#line 2243 "stream.c"
}

#line 2246 "stream.c"
static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
#line 2249 "stream.c"
  MR_Box mercury__stream__wrapper_arg_1,
#line 2251 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2)
#line 2253 "stream.c"
{
#line 2255 "stream.c"
  {
#line 2257 "stream.c"
    MR_bool mercury__stream__succeeded;

#line 2260 "stream.c"
    {
#line 2262 "stream.c"
      mercury__stream__succeeded = mercury__stream____Unify____whence_0_0(((MR_Word) mercury__stream__wrapper_arg_1), ((MR_Word) mercury__stream__wrapper_arg_2));
    }
#line 2265 "stream.c"
    return mercury__stream__succeeded;
#line 2267 "stream.c"
  }
#line 2269 "stream.c"
}

#line 2272 "stream.c"
static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
#line 2275 "stream.c"
  MR_Box * mercury__stream__wrapper_arg_1,
#line 2277 "stream.c"
  MR_Box mercury__stream__wrapper_arg_2,
#line 2279 "stream.c"
  MR_Box mercury__stream__wrapper_arg_3)
#line 2281 "stream.c"
{
#line 2283 "stream.c"
  {
#line 2285 "stream.c"
    MR_Word mercury__stream__conv0_HeadVar__1_1;

#line 2288 "stream.c"
    {
#line 2290 "stream.c"
      mercury__stream____Compare____whence_0_0(&mercury__stream__conv0_HeadVar__1_1, ((MR_Word) mercury__stream__wrapper_arg_2), ((MR_Word) mercury__stream__wrapper_arg_3));
    }
#line 2293 "stream.c"
    *mercury__stream__wrapper_arg_1 = ((MR_Box) (mercury__stream__conv0_HeadVar__1_1));
#line 2295 "stream.c"
  }
#line 2297 "stream.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__stream__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__stream__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 251 "stream.m"
void MR_CALL 
mercury__stream____Compare____whence_0_0(
#line 251 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 251 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 251 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 251 "stream.m"
{
#line 251 "stream.m"
  {
#line 251 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 251 "stream.m"
    MR_Integer mercury__stream__Cast_HeadVar1_4 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 251 "stream.m"
    MR_Integer mercury__stream__Cast_HeadVar2_5 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 34 "private_builtin.opt"
    mercury__stream__succeeded = (mercury__stream__Cast_HeadVar1_4 < mercury__stream__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__stream__succeeded)
#line 36 "private_builtin.opt"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__stream__succeeded = (mercury__stream__Cast_HeadVar1_4 == mercury__stream__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__stream__succeeded)
#line 41 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
      }
#line 251 "stream.m"
  }
#line 251 "stream.m"
}

#line 251 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0(
#line 251 "stream.m"
  MR_Word mercury__stream__HeadVar__2_1,
#line 251 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 251 "stream.m"
{
#line 2373 "stream.c"
  {
#line 2375 "stream.c"
    MR_bool mercury__stream__succeeded = (mercury__stream__HeadVar__2_1 == mercury__stream__HeadVar__2_2);

#line 2378 "stream.c"
    return mercury__stream__succeeded;
#line 2380 "stream.c"
  }
#line 251 "stream.m"
}

#line 41 "stream.m"
void MR_CALL 
mercury__stream____Compare____result_2_0(
#line 41 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_18,
#line 41 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_19,
#line 41 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 41 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 41 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 41 "stream.m"
{
#line 41 "stream.m"
  {
#line 41 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 41 "stream.m"
    MR_Integer mercury__stream__CastX_16 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 41 "stream.m"
    MR_Integer mercury__stream__CastY_17 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 41 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_16 == mercury__stream__CastY_17);
#line 41 "stream.m"
    if (mercury__stream__succeeded)
#line 2413 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "stream.m"
    else
#line 41 "stream.m"
#line 41 "stream.m"
      switch (MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) {
#line 41 "stream.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "stream.m"
        case (MR_Integer) 0:
#line 41 "stream.m"
#line 41 "stream.m"
          switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 41 "stream.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 41 "stream.m"
            case (MR_Integer) 0:
#line 41 "stream.m"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "stream.m"
              break;
#line 41 "stream.m"
            case (MR_Integer) 1:
#line 2437 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
              break;
#line 41 "stream.m"
            case (MR_Integer) 2:
#line 2443 "stream.c"
              *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
              break;
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
        case (MR_Integer) 1:
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 41 "stream.m"
#line 41 "stream.m"
            switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 41 "stream.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "stream.m"
              case (MR_Integer) 0:
#line 2465 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
                break;
#line 41 "stream.m"
              case (MR_Integer) 1:
#line 41 "stream.m"
                {
#line 41 "stream.m"
                  MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 41 "stream.m"
                  {
#line 41 "stream.m"
                    mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_T_18, mercury__stream__HeadVar__1_1, mercury__stream__V_21_21, mercury__stream__V_5_5);
#line 41 "stream.m"
                    return;
                  }
#line 41 "stream.m"
                }
#line 41 "stream.m"
                break;
#line 41 "stream.m"
              case (MR_Integer) 2:
#line 2489 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "stream.m"
                break;
#line 41 "stream.m"
            }
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
        case (MR_Integer) 2:
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_20_20 = (MR_hl_field(MR_mktag(2), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 41 "stream.m"
#line 41 "stream.m"
            switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 41 "stream.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 41 "stream.m"
              case (MR_Integer) 0:
#line 2513 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
                break;
#line 41 "stream.m"
              case (MR_Integer) 1:
#line 2519 "stream.c"
                *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "stream.m"
                break;
#line 41 "stream.m"
              case (MR_Integer) 2:
#line 41 "stream.m"
                {
#line 41 "stream.m"
                  MR_Box mercury__stream__V_15_15 = (MR_hl_field(MR_mktag(2), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 41 "stream.m"
                  {
#line 41 "stream.m"
                    mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_Error_19, mercury__stream__HeadVar__1_1, mercury__stream__V_20_20, mercury__stream__V_15_15);
#line 41 "stream.m"
                    return;
                  }
#line 41 "stream.m"
                }
#line 41 "stream.m"
                break;
#line 41 "stream.m"
            }
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
      }
#line 41 "stream.m"
  }
#line 41 "stream.m"
}

#line 41 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____result_2_0(
#line 41 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_11,
#line 41 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_12,
#line 41 "stream.m"
  MR_Word mercury__stream__HeadVar__1_1,
#line 41 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 41 "stream.m"
{
#line 41 "stream.m"
  {
#line 41 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 41 "stream.m"
    MR_Integer mercury__stream__CastX_9 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 41 "stream.m"
    MR_Integer mercury__stream__CastY_10 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 41 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_9 == mercury__stream__CastY_10);
#line 41 "stream.m"
    if (mercury__stream__succeeded)
#line 41 "stream.m"
      mercury__stream__succeeded = MR_TRUE;
#line 41 "stream.m"
    else
#line 41 "stream.m"
#line 41 "stream.m"
      switch (MR_tag((MR_Word) mercury__stream__HeadVar__1_1)) {
#line 41 "stream.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 41 "stream.m"
        case (MR_Integer) 0:
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Integer mercury__stream__CastX_5 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 41 "stream.m"
            MR_Integer mercury__stream__CastY_6 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 41 "stream.m"
            mercury__stream__succeeded = (mercury__stream__CastY_6 == mercury__stream__CastX_5);
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
        case (MR_Integer) 1:
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 41 "stream.m"
            MR_Box mercury__stream__V_4_4;

#line 41 "stream.m"
            mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 41 "stream.m"
            if (mercury__stream__succeeded)
#line 41 "stream.m"
              {
#line 41 "stream.m"
                mercury__stream__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 2621 "stream.c"
                {
#line 2623 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_3_3, mercury__stream__V_4_4);
                }
#line 41 "stream.m"
              }
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
        case (MR_Integer) 2:
#line 41 "stream.m"
          {
#line 41 "stream.m"
            MR_Box mercury__stream__V_7_7 = (MR_hl_field(MR_mktag(2), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 41 "stream.m"
            MR_Box mercury__stream__V_8_8;

#line 41 "stream.m"
            mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 41 "stream.m"
            if (mercury__stream__succeeded)
#line 41 "stream.m"
              {
#line 41 "stream.m"
                mercury__stream__V_8_8 = (MR_hl_field(MR_mktag(2), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 2649 "stream.c"
                {
#line 2651 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_12, mercury__stream__V_7_7, mercury__stream__V_8_8);
                }
#line 41 "stream.m"
              }
#line 41 "stream.m"
          }
#line 41 "stream.m"
          break;
#line 41 "stream.m"
      }
#line 41 "stream.m"
    return mercury__stream__succeeded;
#line 41 "stream.m"
  }
#line 41 "stream.m"
}

#line 36 "stream.m"
void MR_CALL 
mercury__stream____Compare____result_1_0(
#line 36 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_12,
#line 36 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 36 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 36 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 36 "stream.m"
{
#line 36 "stream.m"
  {
#line 36 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 36 "stream.m"
    MR_Integer mercury__stream__CastX_10 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 36 "stream.m"
    MR_Integer mercury__stream__CastY_11 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 36 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_10 == mercury__stream__CastY_11);
#line 36 "stream.m"
    if (mercury__stream__succeeded)
#line 2695 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
    else
#line 36 "stream.m"
#line 36 "stream.m"
      switch (MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) {
#line 36 "stream.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
        case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
          switch (MR_unmkbody(mercury__stream__HeadVar__2_2)) {
#line 36 "stream.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
            case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
              switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
                case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
                  switch (MR_unmkbody(mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
                    case (MR_Integer) 0:
#line 36 "stream.m"
                      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
                      break;
#line 36 "stream.m"
                    case (MR_Integer) 1:
#line 36 "stream.m"
                      *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
                      break;
#line 36 "stream.m"
                  }
#line 36 "stream.m"
                  break;
#line 36 "stream.m"
                case (MR_Integer) 1:
#line 2743 "stream.c"
                  *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
                  break;
#line 36 "stream.m"
              }
#line 36 "stream.m"
              break;
#line 36 "stream.m"
            case (MR_Integer) 1:
#line 36 "stream.m"
#line 36 "stream.m"
              switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
                case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
                  switch (MR_unmkbody(mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
                    case (MR_Integer) 0:
#line 36 "stream.m"
                      *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
                      break;
#line 36 "stream.m"
                    case (MR_Integer) 1:
#line 36 "stream.m"
                      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 36 "stream.m"
                      break;
#line 36 "stream.m"
                  }
#line 36 "stream.m"
                  break;
#line 36 "stream.m"
                case (MR_Integer) 1:
#line 2783 "stream.c"
                  *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 36 "stream.m"
                  break;
#line 36 "stream.m"
              }
#line 36 "stream.m"
              break;
#line 36 "stream.m"
          }
#line 36 "stream.m"
          break;
#line 36 "stream.m"
        case (MR_Integer) 1:
#line 36 "stream.m"
          {
#line 36 "stream.m"
            MR_Box mercury__stream__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 36 "stream.m"
#line 36 "stream.m"
            switch (MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
              case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
                switch (MR_unmkbody(mercury__stream__HeadVar__3_3)) {
#line 36 "stream.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
                  case (MR_Integer) 0:
#line 2816 "stream.c"
                    *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
                    break;
#line 36 "stream.m"
                  case (MR_Integer) 1:
#line 2822 "stream.c"
                    *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 36 "stream.m"
                    break;
#line 36 "stream.m"
                }
#line 36 "stream.m"
                break;
#line 36 "stream.m"
              case (MR_Integer) 1:
#line 36 "stream.m"
                {
#line 36 "stream.m"
                  MR_Box mercury__stream__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 36 "stream.m"
                  {
#line 36 "stream.m"
                    mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_Error_12, mercury__stream__HeadVar__1_1, mercury__stream__V_13_13, mercury__stream__V_9_9);
#line 36 "stream.m"
                    return;
                  }
#line 36 "stream.m"
                }
#line 36 "stream.m"
                break;
#line 36 "stream.m"
            }
#line 36 "stream.m"
          }
#line 36 "stream.m"
          break;
#line 36 "stream.m"
      }
#line 36 "stream.m"
  }
#line 36 "stream.m"
}

#line 36 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____result_1_0(
#line 36 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_11,
#line 36 "stream.m"
  MR_Word mercury__stream__HeadVar__1_1,
#line 36 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 36 "stream.m"
{
#line 36 "stream.m"
  {
#line 36 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 36 "stream.m"
    MR_Integer mercury__stream__CastX_9 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 36 "stream.m"
    MR_Integer mercury__stream__CastY_10 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 36 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_9 == mercury__stream__CastY_10);
#line 36 "stream.m"
    if (mercury__stream__succeeded)
#line 36 "stream.m"
      mercury__stream__succeeded = MR_TRUE;
#line 36 "stream.m"
    else
#line 36 "stream.m"
#line 36 "stream.m"
      switch (MR_tag((MR_Word) mercury__stream__HeadVar__1_1)) {
#line 36 "stream.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
        case (MR_Integer) 0:
#line 36 "stream.m"
#line 36 "stream.m"
          switch (MR_unmkbody(mercury__stream__HeadVar__1_1)) {
#line 36 "stream.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 36 "stream.m"
            case (MR_Integer) 0:
#line 36 "stream.m"
              {
#line 36 "stream.m"
                MR_Integer mercury__stream__CastX_3 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 36 "stream.m"
                MR_Integer mercury__stream__CastY_4 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 36 "stream.m"
                mercury__stream__succeeded = (mercury__stream__CastY_4 == mercury__stream__CastX_3);
#line 36 "stream.m"
              }
#line 36 "stream.m"
              break;
#line 36 "stream.m"
            case (MR_Integer) 1:
#line 36 "stream.m"
              {
#line 36 "stream.m"
                MR_Integer mercury__stream__CastX_5 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 36 "stream.m"
                MR_Integer mercury__stream__CastY_6 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 36 "stream.m"
                mercury__stream__succeeded = (mercury__stream__CastY_6 == mercury__stream__CastX_5);
#line 36 "stream.m"
              }
#line 36 "stream.m"
              break;
#line 36 "stream.m"
          }
#line 36 "stream.m"
          break;
#line 36 "stream.m"
        case (MR_Integer) 1:
#line 36 "stream.m"
          {
#line 36 "stream.m"
            MR_Box mercury__stream__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 36 "stream.m"
            MR_Box mercury__stream__V_8_8;

#line 36 "stream.m"
            mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 36 "stream.m"
            if (mercury__stream__succeeded)
#line 36 "stream.m"
              {
#line 36 "stream.m"
                mercury__stream__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 2952 "stream.c"
                {
#line 2954 "stream.c"
                  return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_11, mercury__stream__V_7_7, mercury__stream__V_8_8);
                }
#line 36 "stream.m"
              }
#line 36 "stream.m"
          }
#line 36 "stream.m"
          break;
#line 36 "stream.m"
      }
#line 36 "stream.m"
    return mercury__stream__succeeded;
#line 36 "stream.m"
  }
#line 36 "stream.m"
}

#line 50 "stream.m"
void MR_CALL 
mercury__stream____Compare____res_2_0(
#line 50 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_14,
#line 50 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_15,
#line 50 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 50 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 50 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 50 "stream.m"
{
#line 50 "stream.m"
  {
#line 50 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 50 "stream.m"
    MR_Integer mercury__stream__CastX_12 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 50 "stream.m"
    MR_Integer mercury__stream__CastY_13 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 50 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_12 == mercury__stream__CastY_13);
#line 50 "stream.m"
    if (mercury__stream__succeeded)
#line 3000 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "stream.m"
    else
#line 50 "stream.m"
    if (((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 50 "stream.m"
      {
#line 50 "stream.m"
        MR_Box mercury__stream__V_16_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 50 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 50 "stream.m"
          {
#line 50 "stream.m"
            MR_Box mercury__stream__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 50 "stream.m"
            {
#line 50 "stream.m"
              mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_Error_15, mercury__stream__HeadVar__1_1, mercury__stream__V_16_16, mercury__stream__V_11_11);
#line 50 "stream.m"
              return;
            }
#line 50 "stream.m"
          }
#line 50 "stream.m"
        else
#line 3029 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 50 "stream.m"
      }
#line 50 "stream.m"
    else
#line 50 "stream.m"
      {
#line 50 "stream.m"
        MR_Box mercury__stream__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 50 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3042 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 50 "stream.m"
        else
#line 50 "stream.m"
          {
#line 50 "stream.m"
            MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 50 "stream.m"
            {
#line 50 "stream.m"
              mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_T_14, mercury__stream__HeadVar__1_1, mercury__stream__V_17_17, mercury__stream__V_5_5);
#line 50 "stream.m"
              return;
            }
#line 50 "stream.m"
          }
#line 50 "stream.m"
      }
#line 50 "stream.m"
  }
#line 50 "stream.m"
}

#line 50 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____res_2_0(
#line 50 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_9,
#line 50 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_10,
#line 50 "stream.m"
  MR_Word mercury__stream__HeadVar__1_1,
#line 50 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 50 "stream.m"
{
#line 50 "stream.m"
  {
#line 50 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 50 "stream.m"
    MR_Integer mercury__stream__CastX_7 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 50 "stream.m"
    MR_Integer mercury__stream__CastY_8 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 50 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_7 == mercury__stream__CastY_8);
#line 50 "stream.m"
    if (mercury__stream__succeeded)
#line 50 "stream.m"
      mercury__stream__succeeded = MR_TRUE;
#line 50 "stream.m"
    else
#line 50 "stream.m"
    if (((MR_tag((MR_Word) mercury__stream__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 50 "stream.m"
      {
#line 50 "stream.m"
        MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 50 "stream.m"
        MR_Box mercury__stream__V_6_6;

#line 50 "stream.m"
        mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 50 "stream.m"
        if (mercury__stream__succeeded)
#line 50 "stream.m"
          {
#line 50 "stream.m"
            mercury__stream__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 3114 "stream.c"
            {
#line 3116 "stream.c"
              return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_10, mercury__stream__V_5_5, mercury__stream__V_6_6);
            }
#line 50 "stream.m"
          }
#line 50 "stream.m"
      }
#line 50 "stream.m"
    else
#line 50 "stream.m"
      {
#line 50 "stream.m"
        MR_Box mercury__stream__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 50 "stream.m"
        MR_Box mercury__stream__V_4_4;

#line 50 "stream.m"
        mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 50 "stream.m"
        if (mercury__stream__succeeded)
#line 50 "stream.m"
          {
#line 50 "stream.m"
            mercury__stream__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 3140 "stream.c"
            {
#line 3142 "stream.c"
              return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_9, mercury__stream__V_3_3, mercury__stream__V_4_4);
            }
#line 50 "stream.m"
          }
#line 50 "stream.m"
      }
#line 50 "stream.m"
    return mercury__stream__succeeded;
#line 50 "stream.m"
  }
#line 50 "stream.m"
}

#line 46 "stream.m"
void MR_CALL 
mercury__stream____Compare____res_1_0(
#line 46 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_10,
#line 46 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 46 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 46 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 46 "stream.m"
{
#line 46 "stream.m"
  {
#line 46 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 46 "stream.m"
    MR_Integer mercury__stream__CastX_8 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 46 "stream.m"
    MR_Integer mercury__stream__CastY_9 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 46 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_8 == mercury__stream__CastY_9);
#line 46 "stream.m"
    if (mercury__stream__succeeded)
#line 3182 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "stream.m"
    else
#line 46 "stream.m"
    if ((mercury__stream__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "stream.m"
      if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "stream.m"
        *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "stream.m"
      else
#line 3194 "stream.c"
        *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "stream.m"
    else
#line 46 "stream.m"
      {
#line 46 "stream.m"
        MR_Box mercury__stream__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 46 "stream.m"
        if ((mercury__stream__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3205 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "stream.m"
        else
#line 46 "stream.m"
          {
#line 46 "stream.m"
            MR_Box mercury__stream__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 46 "stream.m"
            {
#line 46 "stream.m"
              mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_Error_10, mercury__stream__HeadVar__1_1, mercury__stream__V_11_11, mercury__stream__V_7_7);
#line 46 "stream.m"
              return;
            }
#line 46 "stream.m"
          }
#line 46 "stream.m"
      }
#line 46 "stream.m"
  }
#line 46 "stream.m"
}

#line 46 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____res_1_0(
#line 46 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_9,
#line 46 "stream.m"
  MR_Word mercury__stream__HeadVar__1_1,
#line 46 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 46 "stream.m"
{
#line 46 "stream.m"
  {
#line 46 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 46 "stream.m"
    MR_Integer mercury__stream__CastX_7 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 46 "stream.m"
    MR_Integer mercury__stream__CastY_8 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 46 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_7 == mercury__stream__CastY_8);
#line 46 "stream.m"
    if (mercury__stream__succeeded)
#line 46 "stream.m"
      mercury__stream__succeeded = MR_TRUE;
#line 46 "stream.m"
    else
#line 46 "stream.m"
    if ((mercury__stream__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "stream.m"
      {
#line 46 "stream.m"
        MR_Integer mercury__stream__CastX_3 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 46 "stream.m"
        MR_Integer mercury__stream__CastY_4 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 46 "stream.m"
        mercury__stream__succeeded = (mercury__stream__CastY_4 == mercury__stream__CastX_3);
#line 46 "stream.m"
      }
#line 46 "stream.m"
    else
#line 46 "stream.m"
      {
#line 46 "stream.m"
        MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 46 "stream.m"
        MR_Box mercury__stream__V_6_6;

#line 46 "stream.m"
        mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 46 "stream.m"
        if (mercury__stream__succeeded)
#line 46 "stream.m"
          {
#line 46 "stream.m"
            mercury__stream__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 3288 "stream.c"
            {
#line 3290 "stream.c"
              return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_9, mercury__stream__V_5_5, mercury__stream__V_6_6);
            }
#line 46 "stream.m"
          }
#line 46 "stream.m"
      }
#line 46 "stream.m"
    return mercury__stream__succeeded;
#line 46 "stream.m"
  }
#line 46 "stream.m"
}

#line 34 "stream.m"
void MR_CALL 
mercury__stream____Compare____name_0_0(
#line 34 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 34 "stream.m"
  MR_String mercury__stream__HeadVar__2_2,
#line 34 "stream.m"
  MR_String mercury__stream__HeadVar__3_3)
#line 34 "stream.m"
{
#line 34 "stream.m"
  {
#line 34 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 34 "stream.m"
    MR_String mercury__stream__Cast_HeadVar1_4 = mercury__stream__HeadVar__2_2;
#line 34 "stream.m"
    MR_String mercury__stream__Cast_HeadVar2_5 = mercury__stream__HeadVar__3_3;
#line 34 "stream.m"
    MR_Integer mercury__stream__V_7_10;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream____Compare____name_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__stream__Cast_HeadVar1_4 ;
	S2 =  mercury__stream__Cast_HeadVar2_5 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3341 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__V_7_10  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
    mercury__stream__succeeded = (mercury__stream__V_7_10 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
    if (mercury__stream__succeeded)
#line 72 "private_builtin.opt"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
    else
#line 78 "private_builtin.opt"
      {
#line 75 "private_builtin.opt"
        mercury__stream__succeeded = (mercury__stream__V_7_10 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
        if (mercury__stream__succeeded)
#line 77 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
      }
#line 34 "stream.m"
  }
#line 34 "stream.m"
}

#line 34 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____name_0_0(
#line 34 "stream.m"
  MR_String mercury__stream__HeadVar__1_1,
#line 34 "stream.m"
  MR_String mercury__stream__HeadVar__2_2)
#line 34 "stream.m"
{
#line 34 "stream.m"
  {
#line 34 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 34 "stream.m"
    MR_String mercury__stream__Cast_HeadVar1_3 = mercury__stream__HeadVar__1_1;
#line 34 "stream.m"
    MR_String mercury__stream__Cast_HeadVar2_4 = mercury__stream__HeadVar__2_2;

#line 34 "stream.m"
    mercury__stream__succeeded = (strcmp(mercury__stream__Cast_HeadVar1_3, mercury__stream__Cast_HeadVar2_4) == 0);
#line 34 "stream.m"
    return mercury__stream__succeeded;
#line 34 "stream.m"
  }
#line 34 "stream.m"
}

#line 57 "stream.m"
void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0(
#line 57 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_19,
#line 57 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_20,
#line 57 "stream.m"
  MR_Word * mercury__stream__HeadVar__1_1,
#line 57 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 57 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3)
#line 57 "stream.m"
{
#line 57 "stream.m"
  {
#line 57 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 57 "stream.m"
    MR_Integer mercury__stream__CastX_17 = (MR_Integer) mercury__stream__HeadVar__2_2;
#line 57 "stream.m"
    MR_Integer mercury__stream__CastY_18 = (MR_Integer) mercury__stream__HeadVar__3_3;

#line 57 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_17 == mercury__stream__CastY_18);
#line 57 "stream.m"
    if (mercury__stream__succeeded)
#line 3430 "stream.c"
      *mercury__stream__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "stream.m"
    else
#line 57 "stream.m"
    if (((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 57 "stream.m"
      {
#line 57 "stream.m"
        MR_Box mercury__stream__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 1));
#line 57 "stream.m"
        MR_Box mercury__stream__V_22_22 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 57 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 57 "stream.m"
          {
#line 57 "stream.m"
            MR_Box mercury__stream__V_14_14 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 0));
#line 57 "stream.m"
            MR_Box mercury__stream__V_15_15 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__3_3, (MR_Integer) 1));
#line 57 "stream.m"
            MR_Word mercury__stream__V_16_16;

#line 57 "stream.m"
            {
#line 57 "stream.m"
              mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_T_19, &mercury__stream__V_16_16, mercury__stream__V_22_22, mercury__stream__V_14_14);
            }
#line 3459 "stream.c"
            mercury__stream__succeeded = (mercury__stream__V_16_16 == (MR_Integer) 0);
#line 57 "stream.m"
            mercury__stream__succeeded = !(mercury__stream__succeeded);
#line 57 "stream.m"
            if (mercury__stream__succeeded)
#line 57 "stream.m"
              *mercury__stream__HeadVar__1_1 = mercury__stream__V_16_16;
#line 57 "stream.m"
            else
#line 57 "stream.m"
              {
#line 57 "stream.m"
                mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_Error_20, mercury__stream__HeadVar__1_1, mercury__stream__V_21_21, mercury__stream__V_15_15);
#line 57 "stream.m"
                return;
              }
#line 57 "stream.m"
          }
#line 57 "stream.m"
        else
#line 3480 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 2;
#line 57 "stream.m"
      }
#line 57 "stream.m"
    else
#line 57 "stream.m"
      {
#line 57 "stream.m"
        MR_Box mercury__stream__V_23_23 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 0));

#line 57 "stream.m"
        if (((MR_tag((MR_Word) mercury__stream__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3493 "stream.c"
          *mercury__stream__HeadVar__1_1 = (MR_Integer) 1;
#line 57 "stream.m"
        else
#line 57 "stream.m"
          {
#line 57 "stream.m"
            MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 0));

#line 57 "stream.m"
            {
#line 57 "stream.m"
              mercury__builtin__compare_3_p_0(mercury__stream__TypeInfo_for_T_19, mercury__stream__HeadVar__1_1, mercury__stream__V_23_23, mercury__stream__V_5_5);
#line 57 "stream.m"
              return;
            }
#line 57 "stream.m"
          }
#line 57 "stream.m"
      }
#line 57 "stream.m"
  }
#line 57 "stream.m"
}

#line 57 "stream.m"
MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0(
#line 57 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_11,
#line 57 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_Error_12,
#line 57 "stream.m"
  MR_Word mercury__stream__HeadVar__1_1,
#line 57 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2)
#line 57 "stream.m"
{
#line 57 "stream.m"
  {
#line 57 "stream.m"
    MR_bool mercury__stream__succeeded;
#line 57 "stream.m"
    MR_Integer mercury__stream__CastX_9 = (MR_Integer) mercury__stream__HeadVar__1_1;
#line 57 "stream.m"
    MR_Integer mercury__stream__CastY_10 = (MR_Integer) mercury__stream__HeadVar__2_2;

#line 57 "stream.m"
    mercury__stream__succeeded = (mercury__stream__CastX_9 == mercury__stream__CastY_10);
#line 57 "stream.m"
    if (mercury__stream__succeeded)
#line 57 "stream.m"
      mercury__stream__succeeded = MR_TRUE;
#line 57 "stream.m"
    else
#line 57 "stream.m"
    if (((MR_tag((MR_Word) mercury__stream__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 57 "stream.m"
      {
#line 57 "stream.m"
        MR_Box mercury__stream__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 57 "stream.m"
        MR_Box mercury__stream__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__1_1, (MR_Integer) 1));
#line 57 "stream.m"
        MR_Box mercury__stream__V_7_7;
#line 57 "stream.m"
        MR_Box mercury__stream__V_8_8;

#line 57 "stream.m"
        mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 57 "stream.m"
        if (mercury__stream__succeeded)
#line 57 "stream.m"
          {
#line 57 "stream.m"
            mercury__stream__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 57 "stream.m"
            mercury__stream__V_8_8 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__2_2, (MR_Integer) 1));
#line 3571 "stream.c"
            {
#line 3573 "stream.c"
              mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_5_5, mercury__stream__V_7_7);
            }
#line 57 "stream.m"
            if (mercury__stream__succeeded)
#line 3578 "stream.c"
              {
#line 3580 "stream.c"
                return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_Error_12, mercury__stream__V_6_6, mercury__stream__V_8_8);
              }
#line 57 "stream.m"
          }
#line 57 "stream.m"
      }
#line 57 "stream.m"
    else
#line 57 "stream.m"
      {
#line 57 "stream.m"
        MR_Box mercury__stream__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__1_1, (MR_Integer) 0));
#line 57 "stream.m"
        MR_Box mercury__stream__V_4_4;

#line 57 "stream.m"
        mercury__stream__succeeded = ((MR_tag((MR_Word) mercury__stream__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 57 "stream.m"
        if (mercury__stream__succeeded)
#line 57 "stream.m"
          {
#line 57 "stream.m"
            mercury__stream__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 0));
#line 3604 "stream.c"
            {
#line 3606 "stream.c"
              return mercury__stream__succeeded = mercury__builtin__unify_2_p_0(mercury__stream__TypeInfo_for_T_11, mercury__stream__V_3_3, mercury__stream__V_4_4);
            }
#line 57 "stream.m"
          }
#line 57 "stream.m"
      }
#line 57 "stream.m"
    return mercury__stream__succeeded;
#line 57 "stream.m"
  }
#line 57 "stream.m"
}

#line 366 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_2(
#line 366 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_27,
#line 366 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_26,
#line 366 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 366 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 366 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3,
#line 366 "stream.m"
  MR_Word mercury__stream__HeadVar__4_4,
#line 366 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_5,
#line 366 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_6)
#line 366 "stream.m"
{
#line 469 "stream.m"
  while (MR_TRUE)
#line 469 "stream.m"
    {
#line 469 "stream.m"
      /* tailcall optimized into a loop */
#line 469 "stream.m"
      {
#line 469 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 469 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 469 "stream.m"
        else
#line 470 "stream.m"
          {
#line 470 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 470 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 470 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 471 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 471 "stream.m"
            {
#line 471 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 474 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 474 "stream.m"
            else
#line 475 "stream.m"
              {
#line 475 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 476 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 476 "stream.m"
                {
#line 476 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 477 "stream.m"
                /* direct tailcall eliminated */
#line 477 "stream.m"
                {
#line 477 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 477 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 477 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 477 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 477 "stream.m"
                }
#line 477 "stream.m"
                continue;
#line 475 "stream.m"
              }
#line 470 "stream.m"
          }
#line 469 "stream.m"
      }
#line 469 "stream.m"
      break;
#line 469 "stream.m"
    }
#line 366 "stream.m"
}

#line 364 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_1(
#line 364 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_27,
#line 364 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_26,
#line 364 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 364 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 364 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3,
#line 364 "stream.m"
  MR_Word mercury__stream__HeadVar__4_4,
#line 364 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_5,
#line 364 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_6)
#line 364 "stream.m"
{
#line 469 "stream.m"
  while (MR_TRUE)
#line 469 "stream.m"
    {
#line 469 "stream.m"
      /* tailcall optimized into a loop */
#line 469 "stream.m"
      {
#line 469 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 469 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 469 "stream.m"
        else
#line 470 "stream.m"
          {
#line 470 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 470 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 470 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 471 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 471 "stream.m"
            {
#line 471 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 474 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 474 "stream.m"
            else
#line 475 "stream.m"
              {
#line 475 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 476 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 476 "stream.m"
                {
#line 476 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 477 "stream.m"
                /* direct tailcall eliminated */
#line 477 "stream.m"
                {
#line 477 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 477 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 477 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 477 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 477 "stream.m"
                }
#line 477 "stream.m"
                continue;
#line 475 "stream.m"
              }
#line 470 "stream.m"
          }
#line 469 "stream.m"
      }
#line 469 "stream.m"
      break;
#line 469 "stream.m"
    }
#line 364 "stream.m"
}

#line 362 "stream.m"
void MR_CALL 
mercury__stream__put_list_6_p_0(
#line 362 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_27,
#line 362 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_26,
#line 362 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 362 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 362 "stream.m"
  MR_Word mercury__stream__HeadVar__3_3,
#line 362 "stream.m"
  MR_Word mercury__stream__HeadVar__4_4,
#line 362 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_5,
#line 362 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_6)
#line 362 "stream.m"
{
#line 469 "stream.m"
  while (MR_TRUE)
#line 469 "stream.m"
    {
#line 469 "stream.m"
      /* tailcall optimized into a loop */
#line 469 "stream.m"
      {
#line 469 "stream.m"
        MR_bool mercury__stream__succeeded;

#line 469 "stream.m"
        if ((mercury__stream__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "stream.m"
          *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_0_5;
#line 469 "stream.m"
        else
#line 470 "stream.m"
          {
#line 470 "stream.m"
            MR_Box mercury__stream__X_16 = (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 0));
#line 470 "stream.m"
            MR_Word mercury__stream__Xs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__HeadVar__4_4, (MR_Integer) 1)));
#line 470 "stream.m"
            MR_Box mercury__stream__STATE_VARIABLE_State_23_23;
#line 471 "stream.m"
            void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__2_2, (MR_Integer) 1)));

#line 471 "stream.m"
            {
#line 471 "stream.m"
              mercury__stream__func_0(((MR_Box) mercury__stream__HeadVar__2_2), mercury__stream__HeadVar__1_1, mercury__stream__X_16, mercury__stream__STATE_VARIABLE_State_0_5, &mercury__stream__STATE_VARIABLE_State_23_23);
            }
#line 474 "stream.m"
            if ((mercury__stream__Xs_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_6 = mercury__stream__STATE_VARIABLE_State_23_23;
#line 474 "stream.m"
            else
#line 475 "stream.m"
              {
#line 475 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_State_24_24;
#line 476 "stream.m"
                void MR_CALL (* mercury__stream__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__HeadVar__3_3, (MR_Integer) 1)));

#line 476 "stream.m"
                {
#line 476 "stream.m"
                  mercury__stream__func_1(((MR_Box) mercury__stream__HeadVar__3_3), mercury__stream__HeadVar__1_1, mercury__stream__STATE_VARIABLE_State_23_23, &mercury__stream__STATE_VARIABLE_State_24_24);
                }
#line 477 "stream.m"
                /* direct tailcall eliminated */
#line 477 "stream.m"
                {
#line 477 "stream.m"
                  MR_Word mercury__stream__HeadVar__4__tmp_copy_4 = mercury__stream__Xs_17;
#line 477 "stream.m"
                  MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5 = mercury__stream__STATE_VARIABLE_State_24_24;

#line 477 "stream.m"
                  mercury__stream__STATE_VARIABLE_State_0_5 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_5;
#line 477 "stream.m"
                  mercury__stream__HeadVar__4_4 = mercury__stream__HeadVar__4__tmp_copy_4;
#line 477 "stream.m"
                }
#line 477 "stream.m"
                continue;
#line 475 "stream.m"
              }
#line 470 "stream.m"
          }
#line 469 "stream.m"
      }
#line 469 "stream.m"
      break;
#line 469 "stream.m"
    }
#line 362 "stream.m"
}

#line 346 "stream.m"
void MR_CALL 
mercury__stream__ignore_whitespace_4_p_0(
#line 346 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_putback_16,
#line 346 "stream.m"
  MR_Box mercury__stream__Stream_5,
#line 346 "stream.m"
  MR_Word * mercury__stream__Result_6,
#line 346 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_State_0_11,
#line 346 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_State_12)
#line 346 "stream.m"
{
#line 449 "stream.m"
  while (MR_TRUE)
#line 449 "stream.m"
    {
#line 449 "stream.m"
      /* tailcall optimized into a loop */
#line 449 "stream.m"
      {
#line 449 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 449 "stream.m"
        MR_Word mercury__stream__TypeClassInfo_for_reader_17;
#line 449 "stream.m"
        MR_Word mercury__stream__CharResult_8;
#line 449 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_State_13_13;
#line 3957 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 3959 "stream.c"
        MR_Box mercury__stream__conv1_CharResult_8;

#line 107 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__stream__ignore_whitespace_4_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  mercury__stream__TypeClassInfo_for_putback_16 ;
	Index =  (MR_Integer) 1 ;
		{
#line 107 "private_builtin.opt"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);

#line 3978 "stream.c"

		;}
#undef MR_PROC_LABEL
	 mercury__stream__TypeClassInfo_for_reader_17  = TypeClassInfo;
#line 107 "private_builtin.opt"
}
#line 3985 "stream.c"
        mercury__stream__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 3987 "stream.c"
        {
#line 3989 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_17), mercury__stream__Stream_5, &mercury__stream__conv1_CharResult_8, mercury__stream__STATE_VARIABLE_State_0_11, &mercury__stream__STATE_VARIABLE_State_13_13);
        }
#line 3992 "stream.c"
        mercury__stream__CharResult_8 = ((MR_Word) mercury__stream__conv1_CharResult_8);
#line 454 "stream.m"
#line 454 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__CharResult_8)) {
#line 454 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 454 "stream.m"
          case (MR_Integer) 0:
#line 455 "stream.m"
            {
#line 456 "stream.m"
              *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 455 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 455 "stream.m"
            }
#line 454 "stream.m"
            break;
#line 454 "stream.m"
          case (MR_Integer) 1:
#line 458 "stream.m"
            {
#line 458 "stream.m"
              MR_Char mercury__stream__Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__stream__CharResult_8, (MR_Integer) 0)));

#line 459 "stream.m"
              {
#line 459 "stream.m"
                mercury__stream__succeeded = mercury__char__is_whitespace_1_p_0(mercury__stream__Char_10);
              }
#line 461 "stream.m"
              if (mercury__stream__succeeded)
#line 460 "stream.m"
                {
#line 460 "stream.m"
                  /* direct tailcall eliminated */
#line 460 "stream.m"
                  {
#line 460 "stream.m"
                    MR_Box mercury__stream__STATE_VARIABLE_State_0__tmp_copy_11 = mercury__stream__STATE_VARIABLE_State_13_13;

#line 460 "stream.m"
                    mercury__stream__STATE_VARIABLE_State_0_11 = mercury__stream__STATE_VARIABLE_State_0__tmp_copy_11;
#line 460 "stream.m"
                  }
#line 460 "stream.m"
                  continue;
#line 460 "stream.m"
                }
#line 461 "stream.m"
              else
#line 462 "stream.m"
                {
#line 4046 "stream.c"
                  void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_16, (MR_Integer) 0)), (MR_Integer) 5)));

#line 4049 "stream.c"
                  {
#line 4051 "stream.c"
                    mercury__stream__func_2(((MR_Box) mercury__stream__TypeClassInfo_for_putback_16), mercury__stream__Stream_5, ((MR_Box) (MR_Word) (mercury__stream__Char_10)), mercury__stream__STATE_VARIABLE_State_13_13, mercury__stream__STATE_VARIABLE_State_12);
                  }
#line 463 "stream.m"
                  *mercury__stream__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "stream.m"
                }
#line 458 "stream.m"
            }
#line 454 "stream.m"
            break;
#line 454 "stream.m"
          case (MR_Integer) 2:
#line 452 "stream.m"
            {
#line 452 "stream.m"
              MR_Box mercury__stream__Error_9 = (MR_hl_field(MR_mktag(2), mercury__stream__CharResult_8, (MR_Integer) 0));

#line 453 "stream.m"
              {
#line 453 "stream.m"
                MR_Word base;
#line 453 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "stream.m"
                *mercury__stream__Result_6 = base;
#line 453 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_9;
#line 453 "stream.m"
              }
#line 452 "stream.m"
              *mercury__stream__STATE_VARIABLE_State_12 = mercury__stream__STATE_VARIABLE_State_13_13;
#line 452 "stream.m"
            }
#line 454 "stream.m"
            break;
#line 454 "stream.m"
        }
#line 449 "stream.m"
      }
#line 449 "stream.m"
      break;
#line 449 "stream.m"
    }
#line 346 "stream.m"
}

#line 335 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_1(
#line 335 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_23,
#line 335 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_22,
#line 335 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 335 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 335 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 335 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 335 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_17,
#line 335 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_18)
#line 335 "stream.m"
{
#line 426 "stream.m"
  while (MR_TRUE)
#line 426 "stream.m"
    {
#line 426 "stream.m"
      /* tailcall optimized into a loop */
#line 426 "stream.m"
      {
#line 426 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 426 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 426 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 4133 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4135 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4138 "stream.c"
        {
#line 4140 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4143 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 439 "stream.m"
#line 439 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_12)) {
#line 439 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 439 "stream.m"
          case (MR_Integer) 0:
#line 440 "stream.m"
            {
#line 441 "stream.m"
              {
#line 441 "stream.m"
                MR_Word base;
#line 441 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "stream.m"
                *mercury__stream__Res_10 = base;
#line 441 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 441 "stream.m"
              }
#line 440 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 440 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
          case (MR_Integer) 1:
#line 429 "stream.m"
            {
#line 429 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 429 "stream.m"
              MR_Word mercury__stream__Continue_14;
#line 429 "stream.m"
              MR_Box mercury__stream__T1_15;
#line 429 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_20_20;
#line 430 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));
#line 430 "stream.m"
              MR_Box mercury__stream__conv3_Continue_14;

#line 430 "stream.m"
              {
#line 430 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, &mercury__stream__conv3_Continue_14, mercury__stream__T0_9, &mercury__stream__T1_15, mercury__stream__STATE_VARIABLE_S_19_19, &mercury__stream__STATE_VARIABLE_S_20_20);
              }
#line 430 "stream.m"
              mercury__stream__Continue_14 = ((MR_Word) mercury__stream__conv3_Continue_14);
#line 434 "stream.m"
#line 434 "stream.m"
              switch (mercury__stream__Continue_14) {
#line 434 "stream.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 434 "stream.m"
                case (MR_Integer) 0:
#line 432 "stream.m"
                  {
#line 433 "stream.m"
                    {
#line 433 "stream.m"
                      MR_Word base;
#line 433 "stream.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 433 "stream.m"
                      *mercury__stream__Res_10 = base;
#line 433 "stream.m"
                      MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T1_15;
#line 433 "stream.m"
                    }
#line 432 "stream.m"
                    *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
                  }
#line 434 "stream.m"
                  break;
#line 434 "stream.m"
                case (MR_Integer) 1:
#line 436 "stream.m"
                  {
#line 436 "stream.m"
                    /* direct tailcall eliminated */
#line 436 "stream.m"
                    {
#line 436 "stream.m"
                      MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_15;
#line 436 "stream.m"
                      MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__stream__STATE_VARIABLE_S_20_20;

#line 436 "stream.m"
                      mercury__stream__STATE_VARIABLE_S_0_17 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17;
#line 436 "stream.m"
                      mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 436 "stream.m"
                    }
#line 436 "stream.m"
                    continue;
#line 436 "stream.m"
                  }
#line 434 "stream.m"
                  break;
#line 434 "stream.m"
              }
#line 429 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
          case (MR_Integer) 2:
#line 443 "stream.m"
            {
#line 443 "stream.m"
              MR_Box mercury__stream__Error_16 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 444 "stream.m"
              {
#line 444 "stream.m"
                MR_Word base;
#line 444 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "stream.m"
                *mercury__stream__Res_10 = base;
#line 444 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 444 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_16;
#line 444 "stream.m"
              }
#line 443 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 443 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
        }
#line 426 "stream.m"
      }
#line 426 "stream.m"
      break;
#line 426 "stream.m"
    }
#line 335 "stream.m"
}

#line 333 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_0(
#line 333 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_23,
#line 333 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_22,
#line 333 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 333 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 333 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 333 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 333 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_17,
#line 333 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_18)
#line 333 "stream.m"
{
#line 426 "stream.m"
  while (MR_TRUE)
#line 426 "stream.m"
    {
#line 426 "stream.m"
      /* tailcall optimized into a loop */
#line 426 "stream.m"
      {
#line 426 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 426 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 426 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 4327 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4329 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4332 "stream.c"
        {
#line 4334 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_22), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_17, &mercury__stream__STATE_VARIABLE_S_19_19);
        }
#line 4337 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 439 "stream.m"
#line 439 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_12)) {
#line 439 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 439 "stream.m"
          case (MR_Integer) 0:
#line 440 "stream.m"
            {
#line 441 "stream.m"
              {
#line 441 "stream.m"
                MR_Word base;
#line 441 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 441 "stream.m"
                *mercury__stream__Res_10 = base;
#line 441 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 441 "stream.m"
              }
#line 440 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 440 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
          case (MR_Integer) 1:
#line 429 "stream.m"
            {
#line 429 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 429 "stream.m"
              MR_Word mercury__stream__Continue_14;
#line 429 "stream.m"
              MR_Box mercury__stream__T1_15;
#line 429 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_20_20;
#line 430 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));
#line 430 "stream.m"
              MR_Box mercury__stream__conv3_Continue_14;

#line 430 "stream.m"
              {
#line 430 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, &mercury__stream__conv3_Continue_14, mercury__stream__T0_9, &mercury__stream__T1_15, mercury__stream__STATE_VARIABLE_S_19_19, &mercury__stream__STATE_VARIABLE_S_20_20);
              }
#line 430 "stream.m"
              mercury__stream__Continue_14 = ((MR_Word) mercury__stream__conv3_Continue_14);
#line 434 "stream.m"
#line 434 "stream.m"
              switch (mercury__stream__Continue_14) {
#line 434 "stream.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 434 "stream.m"
                case (MR_Integer) 0:
#line 432 "stream.m"
                  {
#line 433 "stream.m"
                    {
#line 433 "stream.m"
                      MR_Word base;
#line 433 "stream.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 433 "stream.m"
                      *mercury__stream__Res_10 = base;
#line 433 "stream.m"
                      MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T1_15;
#line 433 "stream.m"
                    }
#line 432 "stream.m"
                    *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_20_20;
#line 432 "stream.m"
                  }
#line 434 "stream.m"
                  break;
#line 434 "stream.m"
                case (MR_Integer) 1:
#line 436 "stream.m"
                  {
#line 436 "stream.m"
                    /* direct tailcall eliminated */
#line 436 "stream.m"
                    {
#line 436 "stream.m"
                      MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_15;
#line 436 "stream.m"
                      MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17 = mercury__stream__STATE_VARIABLE_S_20_20;

#line 436 "stream.m"
                      mercury__stream__STATE_VARIABLE_S_0_17 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_17;
#line 436 "stream.m"
                      mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 436 "stream.m"
                    }
#line 436 "stream.m"
                    continue;
#line 436 "stream.m"
                  }
#line 434 "stream.m"
                  break;
#line 434 "stream.m"
              }
#line 429 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
          case (MR_Integer) 2:
#line 443 "stream.m"
            {
#line 443 "stream.m"
              MR_Box mercury__stream__Error_16 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 444 "stream.m"
              {
#line 444 "stream.m"
                MR_Word base;
#line 444 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "stream.m"
                *mercury__stream__Res_10 = base;
#line 444 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 444 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_16;
#line 444 "stream.m"
              }
#line 443 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_18 = mercury__stream__STATE_VARIABLE_S_19_19;
#line 443 "stream.m"
            }
#line 439 "stream.m"
            break;
#line 439 "stream.m"
        }
#line 426 "stream.m"
      }
#line 426 "stream.m"
      break;
#line 426 "stream.m"
    }
#line 333 "stream.m"
}

#line 321 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_1(
#line 321 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_22,
#line 321 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_21,
#line 321 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 321 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 321 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 321 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 321 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 321 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 321 "stream.m"
{
#line 412 "stream.m"
  while (MR_TRUE)
#line 412 "stream.m"
    {
#line 412 "stream.m"
      /* tailcall optimized into a loop */
#line 412 "stream.m"
      {
#line 412 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 412 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 412 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 4521 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4523 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4526 "stream.c"
        {
#line 4528 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4531 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 418 "stream.m"
#line 418 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_12)) {
#line 418 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 418 "stream.m"
          case (MR_Integer) 0:
#line 419 "stream.m"
            {
#line 420 "stream.m"
              {
#line 420 "stream.m"
                MR_Word base;
#line 420 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 420 "stream.m"
                *mercury__stream__Res_10 = base;
#line 420 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 420 "stream.m"
              }
#line 419 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 419 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
          case (MR_Integer) 1:
#line 415 "stream.m"
            {
#line 415 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 415 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 415 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 416 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 416 "stream.m"
              {
#line 416 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, mercury__stream__T0_9, &mercury__stream__T1_14, mercury__stream__STATE_VARIABLE_S_18_18, &mercury__stream__STATE_VARIABLE_S_19_19);
              }
#line 417 "stream.m"
              /* direct tailcall eliminated */
#line 417 "stream.m"
              {
#line 417 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 417 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_19_19;

#line 417 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 417 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 417 "stream.m"
              }
#line 417 "stream.m"
              continue;
#line 415 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
          case (MR_Integer) 2:
#line 422 "stream.m"
            {
#line 422 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 423 "stream.m"
              {
#line 423 "stream.m"
                MR_Word base;
#line 423 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "stream.m"
                *mercury__stream__Res_10 = base;
#line 423 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 423 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 423 "stream.m"
              }
#line 422 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 422 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
        }
#line 412 "stream.m"
      }
#line 412 "stream.m"
      break;
#line 412 "stream.m"
    }
#line 321 "stream.m"
}

#line 318 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_0(
#line 318 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_22,
#line 318 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_21,
#line 318 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 318 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 318 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 318 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 318 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 318 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 318 "stream.m"
{
#line 412 "stream.m"
  while (MR_TRUE)
#line 412 "stream.m"
    {
#line 412 "stream.m"
      /* tailcall optimized into a loop */
#line 412 "stream.m"
      {
#line 412 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 412 "stream.m"
        MR_Word mercury__stream__Result0_12;
#line 412 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 4672 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4674 "stream.c"
        MR_Box mercury__stream__conv1_Result0_12;

#line 4677 "stream.c"
        {
#line 4679 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_21), mercury__stream__Stream_7, &mercury__stream__conv1_Result0_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 4682 "stream.c"
        mercury__stream__Result0_12 = ((MR_Word) mercury__stream__conv1_Result0_12);
#line 418 "stream.m"
#line 418 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_12)) {
#line 418 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 418 "stream.m"
          case (MR_Integer) 0:
#line 419 "stream.m"
            {
#line 420 "stream.m"
              {
#line 420 "stream.m"
                MR_Word base;
#line 420 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 420 "stream.m"
                *mercury__stream__Res_10 = base;
#line 420 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 420 "stream.m"
              }
#line 419 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 419 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
          case (MR_Integer) 1:
#line 415 "stream.m"
            {
#line 415 "stream.m"
              MR_Box mercury__stream__Result_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_12, (MR_Integer) 0));
#line 415 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 415 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_19_19;
#line 416 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 416 "stream.m"
              {
#line 416 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Result_13, mercury__stream__T0_9, &mercury__stream__T1_14, mercury__stream__STATE_VARIABLE_S_18_18, &mercury__stream__STATE_VARIABLE_S_19_19);
              }
#line 417 "stream.m"
              /* direct tailcall eliminated */
#line 417 "stream.m"
              {
#line 417 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 417 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_19_19;

#line 417 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 417 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 417 "stream.m"
              }
#line 417 "stream.m"
              continue;
#line 415 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
          case (MR_Integer) 2:
#line 422 "stream.m"
            {
#line 422 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_12, (MR_Integer) 0));

#line 423 "stream.m"
              {
#line 423 "stream.m"
                MR_Word base;
#line 423 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "stream.m"
                *mercury__stream__Res_10 = base;
#line 423 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 423 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 423 "stream.m"
              }
#line 422 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 422 "stream.m"
            }
#line 418 "stream.m"
            break;
#line 418 "stream.m"
        }
#line 412 "stream.m"
      }
#line 412 "stream.m"
      break;
#line 412 "stream.m"
    }
#line 318 "stream.m"
}

#line 309 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_1(
#line 309 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_18,
#line 309 "stream.m"
  MR_Box mercury__stream__Stream_6,
#line 309 "stream.m"
  MR_Word mercury__stream__Pred_7,
#line 309 "stream.m"
  MR_Word * mercury__stream__Res_8,
#line 309 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_13,
#line 309 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_14)
#line 309 "stream.m"
{
#line 398 "stream.m"
  while (MR_TRUE)
#line 398 "stream.m"
    {
#line 398 "stream.m"
      /* tailcall optimized into a loop */
#line 398 "stream.m"
      {
#line 398 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 398 "stream.m"
        MR_Word mercury__stream__Result0_10;
#line 398 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_15_15;
#line 4819 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4821 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4824 "stream.c"
        {
#line 4826 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4829 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
#line 404 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_10)) {
#line 404 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 404 "stream.m"
          case (MR_Integer) 0:
#line 405 "stream.m"
            {
#line 406 "stream.m"
              *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 405 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
          case (MR_Integer) 1:
#line 401 "stream.m"
            {
#line 401 "stream.m"
              MR_Box mercury__stream__Result_11 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_10, (MR_Integer) 0));
#line 401 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_16_16;
#line 402 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_7, (MR_Integer) 1)));

#line 402 "stream.m"
              {
#line 402 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_7), mercury__stream__Result_11, mercury__stream__STATE_VARIABLE_S_15_15, &mercury__stream__STATE_VARIABLE_S_16_16);
              }
#line 403 "stream.m"
              /* direct tailcall eliminated */
#line 403 "stream.m"
              {
#line 403 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13 = mercury__stream__STATE_VARIABLE_S_16_16;

#line 403 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_13 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13;
#line 403 "stream.m"
              }
#line 403 "stream.m"
              continue;
#line 401 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
          case (MR_Integer) 2:
#line 408 "stream.m"
            {
#line 408 "stream.m"
              MR_Box mercury__stream__Error_12 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_10, (MR_Integer) 0));

#line 409 "stream.m"
              {
#line 409 "stream.m"
                MR_Word base;
#line 409 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "stream.m"
                *mercury__stream__Res_8 = base;
#line 409 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_12;
#line 409 "stream.m"
              }
#line 408 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 408 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
        }
#line 398 "stream.m"
      }
#line 398 "stream.m"
      break;
#line 398 "stream.m"
    }
#line 309 "stream.m"
}

#line 307 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_0(
#line 307 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_18,
#line 307 "stream.m"
  MR_Box mercury__stream__Stream_6,
#line 307 "stream.m"
  MR_Word mercury__stream__Pred_7,
#line 307 "stream.m"
  MR_Word * mercury__stream__Res_8,
#line 307 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_13,
#line 307 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_14)
#line 307 "stream.m"
{
#line 398 "stream.m"
  while (MR_TRUE)
#line 398 "stream.m"
    {
#line 398 "stream.m"
      /* tailcall optimized into a loop */
#line 398 "stream.m"
      {
#line 398 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 398 "stream.m"
        MR_Word mercury__stream__Result0_10;
#line 398 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_15_15;
#line 4948 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 4950 "stream.c"
        MR_Box mercury__stream__conv1_Result0_10;

#line 4953 "stream.c"
        {
#line 4955 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_18), mercury__stream__Stream_6, &mercury__stream__conv1_Result0_10, mercury__stream__STATE_VARIABLE_S_0_13, &mercury__stream__STATE_VARIABLE_S_15_15);
        }
#line 4958 "stream.c"
        mercury__stream__Result0_10 = ((MR_Word) mercury__stream__conv1_Result0_10);
#line 404 "stream.m"
#line 404 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result0_10)) {
#line 404 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 404 "stream.m"
          case (MR_Integer) 0:
#line 405 "stream.m"
            {
#line 406 "stream.m"
              *mercury__stream__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 405 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
          case (MR_Integer) 1:
#line 401 "stream.m"
            {
#line 401 "stream.m"
              MR_Box mercury__stream__Result_11 = (MR_hl_field(MR_mktag(1), mercury__stream__Result0_10, (MR_Integer) 0));
#line 401 "stream.m"
              MR_Box mercury__stream__STATE_VARIABLE_S_16_16;
#line 402 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_7, (MR_Integer) 1)));

#line 402 "stream.m"
              {
#line 402 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_7), mercury__stream__Result_11, mercury__stream__STATE_VARIABLE_S_15_15, &mercury__stream__STATE_VARIABLE_S_16_16);
              }
#line 403 "stream.m"
              /* direct tailcall eliminated */
#line 403 "stream.m"
              {
#line 403 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13 = mercury__stream__STATE_VARIABLE_S_16_16;

#line 403 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_13 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_13;
#line 403 "stream.m"
              }
#line 403 "stream.m"
              continue;
#line 401 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
          case (MR_Integer) 2:
#line 408 "stream.m"
            {
#line 408 "stream.m"
              MR_Box mercury__stream__Error_12 = (MR_hl_field(MR_mktag(2), mercury__stream__Result0_10, (MR_Integer) 0));

#line 409 "stream.m"
              {
#line 409 "stream.m"
                MR_Word base;
#line 409 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 409 "stream.m"
                *mercury__stream__Res_8 = base;
#line 409 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__Error_12;
#line 409 "stream.m"
              }
#line 408 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_14 = mercury__stream__STATE_VARIABLE_S_15_15;
#line 408 "stream.m"
            }
#line 404 "stream.m"
            break;
#line 404 "stream.m"
        }
#line 398 "stream.m"
      }
#line 398 "stream.m"
      break;
#line 398 "stream.m"
    }
#line 307 "stream.m"
}

#line 298 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_6_p_1(
#line 298 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_21,
#line 298 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_20,
#line 298 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 298 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 298 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 298 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 298 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 298 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 298 "stream.m"
{
#line 384 "stream.m"
  while (MR_TRUE)
#line 384 "stream.m"
    {
#line 384 "stream.m"
      /* tailcall optimized into a loop */
#line 384 "stream.m"
      {
#line 384 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 384 "stream.m"
        MR_Word mercury__stream__Result_12;
#line 384 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 5081 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5083 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5086 "stream.c"
        {
#line 5088 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5091 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 390 "stream.m"
#line 390 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result_12)) {
#line 390 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 390 "stream.m"
          case (MR_Integer) 0:
#line 391 "stream.m"
            {
#line 392 "stream.m"
              {
#line 392 "stream.m"
                MR_Word base;
#line 392 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "stream.m"
                *mercury__stream__Res_10 = base;
#line 392 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 392 "stream.m"
              }
#line 391 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 391 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
          case (MR_Integer) 1:
#line 387 "stream.m"
            {
#line 387 "stream.m"
              MR_Box mercury__stream__Unit_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result_12, (MR_Integer) 0));
#line 387 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 388 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 388 "stream.m"
              {
#line 388 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Unit_13, mercury__stream__T0_9, &mercury__stream__T1_14);
              }
#line 389 "stream.m"
              /* direct tailcall eliminated */
#line 389 "stream.m"
              {
#line 389 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 389 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_18_18;

#line 389 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 389 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 389 "stream.m"
              }
#line 389 "stream.m"
              continue;
#line 387 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
          case (MR_Integer) 2:
#line 394 "stream.m"
            {
#line 394 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result_12, (MR_Integer) 0));

#line 395 "stream.m"
              {
#line 395 "stream.m"
                MR_Word base;
#line 395 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "stream.m"
                *mercury__stream__Res_10 = base;
#line 395 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 395 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 395 "stream.m"
              }
#line 394 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 394 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
        }
#line 384 "stream.m"
      }
#line 384 "stream.m"
      break;
#line 384 "stream.m"
    }
#line 298 "stream.m"
}

#line 296 "stream.m"
void MR_CALL 
mercury__stream__input_stream_fold_6_p_0(
#line 296 "stream.m"
  MR_Word mercury__stream__TypeInfo_for_T_21,
#line 296 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_20,
#line 296 "stream.m"
  MR_Box mercury__stream__Stream_7,
#line 296 "stream.m"
  MR_Word mercury__stream__Pred_8,
#line 296 "stream.m"
  MR_Box mercury__stream__T0_9,
#line 296 "stream.m"
  MR_Word * mercury__stream__Res_10,
#line 296 "stream.m"
  MR_Box mercury__stream__STATE_VARIABLE_S_0_16,
#line 296 "stream.m"
  MR_Box * mercury__stream__STATE_VARIABLE_S_17)
#line 296 "stream.m"
{
#line 384 "stream.m"
  while (MR_TRUE)
#line 384 "stream.m"
    {
#line 384 "stream.m"
      /* tailcall optimized into a loop */
#line 384 "stream.m"
      {
#line 384 "stream.m"
        MR_bool mercury__stream__succeeded;
#line 384 "stream.m"
        MR_Word mercury__stream__Result_12;
#line 384 "stream.m"
        MR_Box mercury__stream__STATE_VARIABLE_S_18_18;
#line 5230 "stream.c"
        void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5232 "stream.c"
        MR_Box mercury__stream__conv1_Result_12;

#line 5235 "stream.c"
        {
#line 5237 "stream.c"
          mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_20), mercury__stream__Stream_7, &mercury__stream__conv1_Result_12, mercury__stream__STATE_VARIABLE_S_0_16, &mercury__stream__STATE_VARIABLE_S_18_18);
        }
#line 5240 "stream.c"
        mercury__stream__Result_12 = ((MR_Word) mercury__stream__conv1_Result_12);
#line 390 "stream.m"
#line 390 "stream.m"
        switch (MR_tag((MR_Word) mercury__stream__Result_12)) {
#line 390 "stream.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 390 "stream.m"
          case (MR_Integer) 0:
#line 391 "stream.m"
            {
#line 392 "stream.m"
              {
#line 392 "stream.m"
                MR_Word base;
#line 392 "stream.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "stream.m"
                *mercury__stream__Res_10 = base;
#line 392 "stream.m"
                MR_hl_field(MR_mktag(0), base, 0) = mercury__stream__T0_9;
#line 392 "stream.m"
              }
#line 391 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 391 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
          case (MR_Integer) 1:
#line 387 "stream.m"
            {
#line 387 "stream.m"
              MR_Box mercury__stream__Unit_13 = (MR_hl_field(MR_mktag(1), mercury__stream__Result_12, (MR_Integer) 0));
#line 387 "stream.m"
              MR_Box mercury__stream__T1_14;
#line 388 "stream.m"
              void MR_CALL (* mercury__stream__func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__stream__Pred_8, (MR_Integer) 1)));

#line 388 "stream.m"
              {
#line 388 "stream.m"
                mercury__stream__func_2(((MR_Box) mercury__stream__Pred_8), mercury__stream__Unit_13, mercury__stream__T0_9, &mercury__stream__T1_14);
              }
#line 389 "stream.m"
              /* direct tailcall eliminated */
#line 389 "stream.m"
              {
#line 389 "stream.m"
                MR_Box mercury__stream__T0__tmp_copy_9 = mercury__stream__T1_14;
#line 389 "stream.m"
                MR_Box mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16 = mercury__stream__STATE_VARIABLE_S_18_18;

#line 389 "stream.m"
                mercury__stream__STATE_VARIABLE_S_0_16 = mercury__stream__STATE_VARIABLE_S_0__tmp_copy_16;
#line 389 "stream.m"
                mercury__stream__T0_9 = mercury__stream__T0__tmp_copy_9;
#line 389 "stream.m"
              }
#line 389 "stream.m"
              continue;
#line 387 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
          case (MR_Integer) 2:
#line 394 "stream.m"
            {
#line 394 "stream.m"
              MR_Box mercury__stream__Error_15 = (MR_hl_field(MR_mktag(2), mercury__stream__Result_12, (MR_Integer) 0));

#line 395 "stream.m"
              {
#line 395 "stream.m"
                MR_Word base;
#line 395 "stream.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "stream.m"
                *mercury__stream__Res_10 = base;
#line 395 "stream.m"
                MR_hl_field(MR_mktag(1), base, 0) = mercury__stream__T0_9;
#line 395 "stream.m"
                MR_hl_field(MR_mktag(1), base, 1) = mercury__stream__Error_15;
#line 395 "stream.m"
              }
#line 394 "stream.m"
              *mercury__stream__STATE_VARIABLE_S_17 = mercury__stream__STATE_VARIABLE_S_18_18;
#line 394 "stream.m"
            }
#line 390 "stream.m"
            break;
#line 390 "stream.m"
        }
#line 384 "stream.m"
      }
#line 384 "stream.m"
      break;
#line 384 "stream.m"
    }
#line 296 "stream.m"
}

#line 282 "stream.m"
void MR_CALL 
mercury__stream__set_line_4_p_0(
#line 282 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_line_oriented_5,
#line 282 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 282 "stream.m"
  MR_Integer mercury__stream__HeadVar__2_2,
#line 282 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 282 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 282 "stream.m"
{
#line 5359 "stream.c"
  {
#line 5361 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5363 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 6)));

#line 5366 "stream.c"
    {
#line 5368 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5370 "stream.c"
      return;
    }
#line 5373 "stream.c"
  }
#line 282 "stream.m"
}

#line 278 "stream.m"
void MR_CALL 
mercury__stream__get_line_4_p_0(
#line 278 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_line_oriented_5,
#line 278 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 278 "stream.m"
  MR_Integer * mercury__stream__HeadVar__2_2,
#line 278 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 278 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 278 "stream.m"
{
#line 5393 "stream.c"
  {
#line 5395 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5397 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5399 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5402 "stream.c"
    {
#line 5404 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_line_oriented_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5407 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Integer) mercury__stream__conv1_HeadVar__2_2);
#line 5409 "stream.c"
  }
#line 278 "stream.m"
}

#line 262 "stream.m"
void MR_CALL 
mercury__stream__seek_5_p_0(
#line 262 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_seekable_6,
#line 262 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 262 "stream.m"
  MR_Word mercury__stream__HeadVar__2_2,
#line 262 "stream.m"
  MR_Integer mercury__stream__HeadVar__3_3,
#line 262 "stream.m"
  MR_Box mercury__stream__HeadVar__4_4,
#line 262 "stream.m"
  MR_Box * mercury__stream__HeadVar__5_5)
#line 262 "stream.m"
{
#line 5431 "stream.c"
  {
#line 5433 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5435 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_seekable_6, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5438 "stream.c"
    {
#line 5440 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_seekable_6), mercury__stream__HeadVar__1_1, ((MR_Box) (mercury__stream__HeadVar__2_2)), ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5);
#line 5442 "stream.c"
      return;
    }
#line 5445 "stream.c"
  }
#line 262 "stream.m"
}

#line 232 "stream.m"
void MR_CALL 
mercury__stream__unget_4_p_0(
#line 232 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_putback_5,
#line 232 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 232 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 232 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 232 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 232 "stream.m"
{
#line 5465 "stream.c"
  {
#line 5467 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5469 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_putback_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5472 "stream.c"
    {
#line 5474 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_putback_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5476 "stream.c"
      return;
    }
#line 5479 "stream.c"
  }
#line 232 "stream.m"
}

#line 201 "stream.m"
void MR_CALL 
mercury__stream__put_4_p_0(
#line 201 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_writer_5,
#line 201 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 201 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 201 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 201 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 201 "stream.m"
{
#line 5499 "stream.c"
  {
#line 5501 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5503 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_writer_5, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5506 "stream.c"
    {
#line 5508 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_writer_5), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
#line 5510 "stream.c"
      return;
    }
#line 5513 "stream.c"
  }
#line 201 "stream.m"
}

#line 187 "stream.m"
void MR_CALL 
mercury__stream__flush_3_p_0(
#line 187 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_output_4,
#line 187 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 187 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 187 "stream.m"
  MR_Box * mercury__stream__HeadVar__3_3)
#line 187 "stream.m"
{
#line 5531 "stream.c"
  {
#line 5533 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5535 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5)));

#line 5538 "stream.c"
    {
#line 5540 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_output_4), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, mercury__stream__HeadVar__3_3);
#line 5542 "stream.c"
      return;
    }
#line 5545 "stream.c"
  }
#line 187 "stream.m"
}

#line 160 "stream.m"
void MR_CALL 
mercury__stream__bulk_get_9_p_0(
#line 160 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_bulk_reader_10,
#line 160 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 160 "stream.m"
  MR_Box mercury__stream__HeadVar__2_2,
#line 160 "stream.m"
  MR_Integer mercury__stream__HeadVar__3_3,
#line 160 "stream.m"
  MR_Box mercury__stream__HeadVar__4_4,
#line 160 "stream.m"
  MR_Box * mercury__stream__HeadVar__5_5,
#line 160 "stream.m"
  MR_Integer * mercury__stream__HeadVar__6_6,
#line 160 "stream.m"
  MR_Word * mercury__stream__HeadVar__7_7,
#line 160 "stream.m"
  MR_Box mercury__stream__HeadVar__8_8,
#line 160 "stream.m"
  MR_Box * mercury__stream__HeadVar__9_9)
#line 160 "stream.m"
{
#line 5575 "stream.c"
  {
#line 5577 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5579 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_bulk_reader_10, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5581 "stream.c"
    MR_Box mercury__stream__conv2_HeadVar__6_6;
#line 5583 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__7_7;

#line 5586 "stream.c"
    {
#line 5588 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_bulk_reader_10), mercury__stream__HeadVar__1_1, mercury__stream__HeadVar__2_2, ((MR_Box) (mercury__stream__HeadVar__3_3)), mercury__stream__HeadVar__4_4, mercury__stream__HeadVar__5_5, &mercury__stream__conv2_HeadVar__6_6, &mercury__stream__conv1_HeadVar__7_7, mercury__stream__HeadVar__8_8, mercury__stream__HeadVar__9_9);
    }
#line 5591 "stream.c"
    *mercury__stream__HeadVar__6_6 = ((MR_Integer) mercury__stream__conv2_HeadVar__6_6);
#line 5593 "stream.c"
    *mercury__stream__HeadVar__7_7 = ((MR_Word) mercury__stream__conv1_HeadVar__7_7);
#line 5595 "stream.c"
  }
#line 160 "stream.m"
}

#line 121 "stream.m"
void MR_CALL 
mercury__stream__get_4_p_0(
#line 121 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_reader_5,
#line 121 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 121 "stream.m"
  MR_Word * mercury__stream__HeadVar__2_2,
#line 121 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 121 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 121 "stream.m"
{
#line 5615 "stream.c"
  {
#line 5617 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5619 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_reader_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5621 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5624 "stream.c"
    {
#line 5626 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_reader_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5629 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_Word) mercury__stream__conv1_HeadVar__2_2);
#line 5631 "stream.c"
  }
#line 121 "stream.m"
}

#line 89 "stream.m"
void MR_CALL 
mercury__stream__name_4_p_0(
#line 89 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_stream_5,
#line 89 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1,
#line 89 "stream.m"
  MR_String * mercury__stream__HeadVar__2_2,
#line 89 "stream.m"
  MR_Box mercury__stream__HeadVar__3_3,
#line 89 "stream.m"
  MR_Box * mercury__stream__HeadVar__4_4)
#line 89 "stream.m"
{
#line 5651 "stream.c"
  {
#line 5653 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5655 "stream.c"
    void MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_stream_5, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5657 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5660 "stream.c"
    {
#line 5662 "stream.c"
      mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_stream_5), mercury__stream__HeadVar__1_1, &mercury__stream__conv1_HeadVar__2_2, mercury__stream__HeadVar__3_3, mercury__stream__HeadVar__4_4);
    }
#line 5665 "stream.c"
    *mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5667 "stream.c"
  }
#line 89 "stream.m"
}

#line 72 "stream.m"
MR_String MR_CALL 
mercury__stream__error_message_1_f_0(
#line 72 "stream.m"
  MR_Word mercury__stream__TypeClassInfo_for_error_3,
#line 72 "stream.m"
  MR_Box mercury__stream__HeadVar__1_1)
#line 72 "stream.m"
{
#line 5681 "stream.c"
  {
#line 5683 "stream.c"
    MR_bool mercury__stream__succeeded;
#line 5685 "stream.c"
    MR_String mercury__stream__HeadVar__2_2;
#line 5687 "stream.c"
    MR_Box MR_CALL (* mercury__stream__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__stream__TypeClassInfo_for_error_3, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5689 "stream.c"
    MR_Box mercury__stream__conv1_HeadVar__2_2;

#line 5692 "stream.c"
    {
#line 5694 "stream.c"
      mercury__stream__conv1_HeadVar__2_2 = mercury__stream__func_0(((MR_Box) mercury__stream__TypeClassInfo_for_error_3), mercury__stream__HeadVar__1_1);
    }
#line 5697 "stream.c"
    mercury__stream__HeadVar__2_2 = ((MR_String) mercury__stream__conv1_HeadVar__2_2);
#line 5699 "stream.c"
    return mercury__stream__HeadVar__2_2;
#line 5701 "stream.c"
  }
#line 72 "stream.m"
}

void mercury__stream__init(void)
{
}

void mercury__stream__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_maybe_partial_res_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_name_0);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_res_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_res_1);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_result_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_result_1);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_whence_0);
}

void mercury__stream__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module stream. */
